
## Important Dates

### Registration deadline at the HIS system
3 May 2021 **EXTENSION IMPOSSIBLE!**

If you have any questions, please contact Prof. Dr. Pech.
If you're from the new batch you need to pass Software Engineering or to qualify before you can register for Cloud Computing. 

### Official project start 
No later than 20.07.2020.

### Project duration
30.Sept.2021. **EXTENSION IMPOSSIBLE!**

We work in sprints of two weeks. That means you must contribute to the project in every sprint. Not contributing to ALL sprints will cause you to fail.

### INTERNAL Submission deadline for SE qualified students
This is for students only, that conditionally passed the SE exam.
Project end date: 20.07.2021 

We work in sprints of two weeks. Your project contribution starts at 03.Mai. Not contributing to ALL sprints will cause you to fail.


## My Cloud Computing Project

You all will use the same cloud storage account:

DefaultEndpointsProtocol=https;AccountName=unicloud;AccountKey=nmQwJuzxD3dE9olaNNEWLI0QLL9dCT/SYiCfnn8vlzOQE/aB+P3xa0aw6XK9jxqKWgL8k6NDOPIuYFPuPJcfdQ==;EndpointSuffix=core.windows.net

Create your container, queue and table:

![storage organization](https://user-images.githubusercontent.com/1756871/87311747-f0a19200-c51f-11ea-805a-0a53dc646b82.png)

DO NOT DELETE ANY OTHER ENTITY!!!!
All your files used for testing must be commited in the folder 'SampleFiles'. See below. We will take them from that folder and move to the container/queue.

Tasks:

1. Practice ALL Exercises
2. Implement your cloud project
3. Write documentation

Deliverables:

Create all artefacts related to this project on this location as shown at the picture:

![Organization of your files](https://user-images.githubusercontent.com/1756871/87309588-1a0cee80-c51d-11ea-9406-2d42ec7614e9.png)

Your cloud solution MUST LOOK like:

![your cloud solution](https://user-images.githubusercontent.com/1756871/87311995-4aa25780-c520-11ea-893e-99a65dad0e36.png)

Here is the example: https://github.com/UniversityOfAppliedSciencesFrankfurt/se-cloud-2019-2020/tree/master/Source/MyCloudProjectSample

All documentation consists of two MARKDOWN files

![documentation](https://user-images.githubusercontent.com/1756871/87309918-85ef5700-c51d-11ea-8d4a-5f2446ebb55e.png)

## Exercises

1. Practice all exercises
2. Document all exercises

#### Deliverables:

*Exercises - Firstname Lastname.md*

See the content of the file to be sure what to deliver for every exercise. All results of your exercises MUST be in this document.

## Cloud project
1. Specify the experiment to be used
2. Implement the experiment in project MyExperiment
3. Implement IStorageProvider

Your work is focused on the project *MyExperiment*. Do not do any changes in *MyCloudProject* && *MyCloudProject.Common*.

### (1) Specify your experiment
The experiment is a code from your existing SE project. For example, this can be some UnitTest, which executes the full training. The code must demonstrate receiving of the message from the storage queue, downloading of training file(s), execution of the training code, uploading of result files to the blob storage, and updating of the table storage with results.
Put the specification description into the file: *Experiment Specification.md*. Note, all groups share the same specification.

### (2) Implement the experiment
To implement your experiment you will have to use the project [template](https://github.com/UniversityOfAppliedSciencesFrankfurt/se-cloud-2019-2020/blob/master/Source/MyCloudProjectSample/MyCloudProject.sln).

Your experiment must implement the interface:
~~~csharp
IExperiment
~~~ 

### (3) Implement IStorageProvider

#### DownloadInputFile
It downloads all files required to for the training in your experiment.

#### UploadResultFile
Uploads a number of resulting files of your experiment. These can be images or some output files.

#### UploadExperimentResult
The experiment result is a record created for every executed experiment. It is defined by the class ExperimentResult.

#### Deliverables:

*Experiment Specification - Fiestname Lastname.md*
See the content of the file for more information about how to document the experiment.

