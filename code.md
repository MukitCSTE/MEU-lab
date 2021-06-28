f1 = 1;
N = 800; % Number of Samples
Fs = 50; % Sampling Frequency in Hz
alpha = 0.05;
t = ((-N/2):(N/2)-1)/Fs;
y = 1*sin(2*pi*f1*t); % sine wave
noise = alpha.*(randn(size(y)));
y = y + noise;
rectWindow = rectwin(length(t))'; % Rectangular Window
hammingWindow = hamming(length(t))'; % Hamming Window
% Rectangular Window ACF & PSD
figure('Name','Rectangular Window ACF & PSD');
plot(t,y),title('Sine Wave'),ylim([-1.5 1.5]), xlabel('Time
(in sec)'), ylabel('Amplitude')
figure;
plot(t,rectWindow),title('Rectangular Window'),ylim([-1.5
1.5]), xlabel('Time (in sec)'), ylabel('Amplitude')
figure;
rectangularSignalWithNoise = y.*rectWindow;
plot(t,rectangularSignalWithNoise),title('Windowed
Signal'),ylim([-1.5 1.5]), xlabel('Time (in sec)'),
ylabel('Amplitude')
figure;
[correlationSignal1, rectShifted] =
xcorr(rectangularSignalWithNoise, 'biased');
timeDifferenceofR = rectShifted*1/Fs;
plot(timeDifferenceofR,correlationSignal1),title('ACF using
Rectangular Window'), xlabel('Time difference \tau (in
sec)'), ylabel('Amplitude')
figure;
% Power Spectral Density using Wiener Khintchine Theorem
with Rectangular window
Rxxdft1 = abs(fftshift(fft(correlationSignal1)))/N;
freq1 = -Fs/2:Fs/length(correlationSignal1):Fs/2-
(Fs/length(correlationSignal1));
plot(freq1,Rxxdft1),title({'Power Spectral Density using
Wiener Khintchine Theorem ', 'with Rectangular window'}),
xlabel('Frequency f (in Hz)'),ylabel('Spectral Power')
figure;
% Power Spectral Density using ftsquared with Rectangular
window
ftsquareMethod =
abs(fftshift(fft(rectangularSignalWithNoise)))/N;
ftsquareMethod = (ftsquareMethod.*ftsquareMethod);
freq2 = -Fs/2:Fs/length(sig1):Fs/2-
(Fs/length(rectangularSignalWithNoise));
plot(freq2, ftsquareMethod)
title('fourier sqaure method'), title({'Power Spectral
Density using FTS squared theorem ', 'with Rectangular
window'}), xlabel('Frequency f (in Hz)'),ylabel('Spectral
Power')
figure;
% Hamming Window ACF & PSD
plot(t,y),title('Signal with Noise'),ylim([-1.5 1.5]),
xlabel('Time (in sec)'), ylabel('Amplitude')
figure;
plot(t,hammingWindow),title('Hamming Window'),ylim([-1.5
1.5]), xlabel('Time (in sec)'), ylabel('Amplitude')
figure;
hammingSignalWithNoise = y.*hammingWindow;
plot(t,hammingSignalWithNoise),title('Windowed
Signal'),ylim([-1.5 1.5]), xlabel('Time (in sec)'),
ylabel('Amplitude')
figure;
[correlationSignal2, hamShifted] =
xcorr(hammingSignalWithNoise, 'biased');
timeDifferenceofH = hamShifted*1/Fs;
plot(hamShifted,correlationSignal2),title('ACF using
Hamming Window'), xlabel('Time difference \tau (in sec)'),
ylabel('Amplitude')
figure;
Rxxdft2 = abs(fftshift(fft(correlationSignal2)))/N;
freq2 = -Fs/2:Fs/length(r2):Fs/2-
(Fs/length(correlationSignal2));
plot(freq2,Rxxdft2),title({'Power Spectral Density using
Wiener Khintchine Theorem ', 'with Hamming
window'}),xlim([-50 50]), xlabel('Frequency f (in
Hz)'),ylabel('Spectral Power')
figure;
% Power Spectral Density using ftsquared with Hamming
window
ftsquareMethod =
abs(fftshift(fft(hammingSignalWithNoise)))/N;
ftsquareMethod = (ftsquareMethod.*ftsquareMethod);
freq2 = -Fs/2:Fs/length(sig2):Fs/2-
(Fs/length(hammingSignalWithNoise));
plot(freq2, ftsquareMethod)
title('fourier sqaure method'), title({'Power Spectral
Density using FTS squared theorem ', 'with Hamming
window'}), xlabel('Frequency f (in Hz)'),ylabel('Spectral
Power')
figure;
