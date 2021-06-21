## Microsoft Certified: Azure Solutions Architect Expert
We will learn in this course by using the official MS Azure certification content.

![logo](https://user-images.githubusercontent.com/1756871/80301968-8f331800-87a7-11ea-9d47-8bff50d0ff0f.png)

https://docs.microsoft.com/en-us/learn/certifications/azure-solutions-architect (2020 - retired!)

https://docs.microsoft.com/en-us/learn/certifications/exams/az-303 (2021)

This course is aligned to the official Certification Path to become the Azure Solution Architect on the expert level. You will in the end NOT achieve the architect level in this course but you will learn many interesting topics included in the exam AZ 303 and Azure Fundamentals. However, we will first start with the Cloud Computing fundamentals: https://docs.microsoft.com/en-us/learn/paths/az-900-describe-cloud-concepts/

### IMPORTANT DATES
Registration deadline at the HIS system: 3 May 2021 EXTENSION IMPOSSIBLE!

Issue date: 4 May 2021

Submission deadline: 30 September 2021


### MS Teams Conference
The course is streamed by MS Teams.

Every Monday: 14:15 - 17:30

Exercises with Patrick every Fr.: 08:15-09.45h
 
You can join the session by using this [Url](https://teams.microsoft.com/l/meetup-join/19%3ameeting_NDU4ZDhlMTYtNWM4NC00YWNjLWE5NzUtNzNkNzg1MDZiYjZl%40thread.v2/0?context=%7b%22Tid%22%3a%22b1f2074d-dc55-43dc-be8e-9311da2845b5%22%2c%22Oid%22%3a%224cbab5a5-4e6e-42a3-9fbe-d7142af265b5%22%7d):

### Exercises
The following document describes the deliverables of your [exercises](https://github.com/UniversityOfAppliedSciencesFrankfurt/se-cloud-2020-2021/blob/master/Source/MyCloudProjectSample/Documentation/Exercises%20-%20Firstname%20Lastname.md).

### Cloud Project
The goal of your project is to run your Software Engineering project in Microsoft Azure Cloud. You will make a simple console application, which will contain a code of some of your UnitTests. That code will represent some ML experiment in the context of your project. To run the project in the cloud you will first have to package the code in the **docker container**. 
Next, you will upload this code to **Azure Container Registry**. The code will start when you upload the training files to the Azure Blob Storage. Your code in the container will download the file from storage and start the experiment (training and prediction). The result will be written back to the *table storage*.

The following picture illustrates approx. the architecture of the solution and technologies you will learn:

![image](https://user-images.githubusercontent.com/1756871/83964141-ec43e280-a8aa-11ea-8ba9-49a0ddc1d05b.png)

Yellow boxes describe your development work.

# Cloud computing fundamentals
To learn about cloud computing, we will use documentation related to Cloud Computing with Microsoft Azure. The fundamentals that you learn here can easily be adapted for use in any other cloud.

#### What is cloud computing?
https://docs.microsoft.com/en-us/learn/modules/intro-to-azure-fundamentals/what-is-cloud-computing

#### How does the Azure Cloud work, Azure Portal and Marketplace
https://docs.microsoft.com/en-us/learn/modules/intro-to-azure-fundamentals/what-is-microsoft-azure

#### Services in Azure
https://docs.microsoft.com/en-us/learn/modules/intro-to-azure-fundamentals/tour-of-azure-services

#### Azure Accounts
https://docs.microsoft.com/en-us/learn/modules/intro-to-azure-fundamentals/get-started-with-azure-accounts

###### Create an Account
https://docs.microsoft.com/en-us/learn/modules/create-an-azure-account/

###### Account Subscription for students
To start working with the cloud You will need a subscription. There is a free offering, which can be enrolled as _Azure for Students_: https://azure.microsoft.com/en-us/free/students/

200$ free and then 1 year long:
https://visualstudio.microsoft.com/de/vs/benefits/#azure?cat=visual-studio-enterprise-subscription-with-github-enterprise

#### Managing Azure Resouces

Azure resources can be managed in various ways. Most engineers use [Azure Portal](https://azure.microsoft.com/en-us/features/azure-portal/).
But, also a very popular way to manage Azure with the command line is tool '[az](https://docs.microsoft.com/en-us/cli/azure/reference-index?view=azure-cli-latest)' command-line interface (az cli).

##### Azure Portal
Logon: https://portal.azure.com

How to manage resources: https://docs.microsoft.com/en-us/azure/azure-resource-manager/management/manage-resource-groups-portal

##### Azure Command-Line Interface 'az'.
https://docs.microsoft.com/en-us/learn/modules/control-azure-services-with-cli/

##### Example:
https://docs.microsoft.com/en-us/cli/azure/account/lock?view=azure-cli-latest#az_account_lock_show

To start with **az** cli?
Open the command prompt. Linux/Windows/MacOS

`az login`

As next, execute the following command 

`az account show`

You might get something like this:

~~~
 {
    "cloudName": "AzureCloud",
    "homeTenantId": "1a**d",
    "id": "e8**828",
    "isDefault": false,
    "managedByTenants": [],
    "name": "Azure für Bildungseinrichtungen: Starter",
    "state": "Enabled",
    "tenantId": "1**d",
    "user": {
      "name": "**",
      "type": "user"
    }
  }
~~~

If this is not the subscription, which you want to use, then execute the following:

`az account list`

This will list all subscriptions under your account. To select the right one, use the following command:

`az account set -s <ENTER HERE SUBSCRIPTION ID or SUBSCRIPTION NAME>`

#####
Exercise I (Due Date: 3th May): 
- Unlock Azure Subscription
- [Install CLI](https://docs.microsoft.com/en-us/learn/modules/control-azure-services-with-cli/3-exercise-install-and-run-the-azure-cli?pivots=windows)
- [Create an Azure Website with CLI](https://docs.microsoft.com/en-us/learn/modules/control-azure-services-with-cli/5-exercise-create-website-using-the-cli)
- [Create Resource Group in Azure Portal](https://docs.microsoft.com/en-us/azure/azure-resource-manager/management/manage-resource-groups-portal)

# Application virtualization with Docker Containers
In this lesson, you will learn about containers. You will learn how to put the .NET Core application to the docker container and how to deploy it to Azure. 
### Presentation 
The presentation related to this topic is [here](https://github.com/UniversityOfAppliedSciencesFrankfurt/se-cloud-2020-2021/blob/master/Lessons/CloudComputing/Docker%20.NET%20Core%20and%20Azure.pptx).

### Practicing
To practice the Docker, please follow the exercises in this section. Before you start with exercises in this section, be sure that you have practised exercises contained in the presentation.

#### Deploy existing image and run it locally
https://docs.microsoft.com/en-us/learn/modules/intro-to-containers/2-deploy-docker-image-locally

#### Customize a Docker image to run your own web app
https://docs.microsoft.com/en-us/learn/modules/intro-to-containers/4-create-custom-docker-image

#### Build containerized web application to run in cloud
In this practice, you will package a web app so that it can be deployed as a Docker image and run from an Azure Container Instance.
[Start here](https://docs.microsoft.com/en-us/learn/paths/architect-modern-apps)

### Useful information
Please build your images first locally. Then You should push them to the [DockerHub](https://hub.docker.com/) and Azure Registry. Before you do that, You will have to create your free account for GitHub. Azure Registry is compatible with the DockerHub registry. For more information about how to use the Azure registry, please see the presentation above.

To push the image to the docker hub use the following command:
`docker push YOURDOCKERUSERNAME/aspnetsample:v1`

Organize your folder as follow. Do not change the folder structure!

```
MyWork
MyWork/Cloud Exercise - 01/az.scripts.bat`
MyWork/Cloud Exercise - 02/docker.scripts.bat`
MyWork/Cloud Exercise - 02/readme.md
```
Provide URL to the public registry that contains your image. We will pull it from there to test it.

Docker tutorial: https://docs.microsoft.com/en-us/visualstudio/docker/tutorials/docker-tutorial

### Exercise II (Due Date: 10th May):
- [Create the GitHub account](https://docs.docker.com/docker-id/)
- [Install Docker Desktop](https://docs.docker.com/docker-for-windows/install/)
- [Deploy existing image and run it locally](https://docs.microsoft.com/en-us/learn/modules/intro-to-containers/3-exercise-deploy-docker-image-locally)
- [Customize a Docker image to run your own web app](https://docs.microsoft.com/en-us/learn/modules/intro-to-containers/5-exercise-create-custom-docker-image)

# Host a web application with Azure 
In this lesson, we learn about hosting web applications in Azure. The PaaS Azure Service called *App Service* is a powerful service (container) that can be used to host different kinds of web applications. This is the [PPTX](https://github.com/UniversityOfAppliedSciencesFrankfurt/se-cloud-2020-2021/blob/master/Lessons/CloudComputing/App%20Service.pptx) presentation related to this lesson.

To learn about AppService you should use the official learning path tutorial, which describes how to create a web application and how to deploy it to Azure AppService. You can execute this tutorial as described under this URL by using a learning sandbox. However, you already own an Azure Subscription. In that case, you can execute all scripts in his tutorial from any command-line prompt (bash), even on your local machine.
https://docs.microsoft.com/en-us/learn/modules/host-a-web-app-with-azure-app-service/

If you use Windows and don't like scripting, you can deploy the test web application by uploading the ZIP file, which contains the application.Note, the ZIP is created as described in previous [practice](https://docs.microsoft.com/en-us/learn/modules/host-a-web-app-with-azure-app-service/).
Deploy the ZIP with UI:
In the browser, navigate to https://<app_name>.scm.azurewebsites.net/ZipDeployUI.

More about WebApp deployment: https://docs.microsoft.com/en-us/azure/app-service/deploy-zip

To understand how files are organized in the *AppService* take a look at this article: https://github.com/projectkudu/kudu/wiki/Understanding-the-Azure-App-Service-file-system.

%HOME% is persisted and replicated across instances.
%APPDATA%/ is locked at the box.

### Exercise III (Due Date: 17th May):
Create the  WebApp in Portal
![create app](https://user-images.githubusercontent.com/1756871/82140851-179a5b00-9832-11ea-8816-46c32e13d258.png)

### Create the Demo application
We have created the App Service for our web application. The AppService is the place where to upload the application. Now, we have to create the application. There are many ways to do that. For example, using Visual Studio. In this demo, we will create a demo web application based on MVC technology by using *dotnet* cli:

`dotnet new mvc --name BestBikeApp`

Run the demo application:

`dotnet run`

Then open the browser and navigate to the locally running application: http://localhost:5000

Publish the application binaries:

### Publish the application to Azure App service with AZ CLI

We first published the application locally as we have learned in Software Engineering:

`dotnet publish -o pub`

Go to the folder and create the ZIP file 'site.zip' with the content of the folder. 

Deploy the application:

`az webapp deployment source config-zip --src site.zip --resource-group RG-BIKE --name bikeapp`

Open the browser and navigate to the application running in the cloud: https://bikeapp.azurewebsites.net/
![Your App running in Azure ](https://user-images.githubusercontent.com/1756871/82141297-1b7bac80-9835-11ea-80b6-a1375932ac7b.png)

### Publish the application to Azure App Service with ZIP upload
You can also deploy the application by using the following url: 

`https://argsand.scm.azurewebsites.net/ZipDeployUI`

## Deploy and run the containerized app in AppService

### Exercise IV (Due Date: 17th May):

Create a Docker image and store it in a repository in Azure Container Registry. Use Azure App Service to deploy a web application based on the Docker image. Following URL shows how to complete this exercise:
https://docs.microsoft.com/en-us/learn/modules/deploy-run-container-app-service/

You are done when you reach "Exercise - Create and deploy a web app from a Docker image". There are a few more topics in this exercise, which you don't have to do.

# Azure Storage

To learn about cloud storage for your applications in Azure please follow:

Storage fundamentals:
https://docs.microsoft.com/en-us/learn/modules/azure-storage-fundamentals/

Official documentation: 
https://docs.microsoft.com/en-us/azure/storage/blobs/storage-blobs-introduction

(ADVANCED) Architect solutions with Azure Storage:
https://docs.microsoft.com/en-us/learn/paths/architect-storage-infrastructure

Azure Storage presentation:
[PPTX](https://github.com/UniversityOfAppliedSciencesFrankfurt/se-cloud-2019-2020/blob/master/Lessons/CloudComputing/Azure%20Storage%20Overview.pptx).

![Storage Account](https://user-images.githubusercontent.com/1756871/82807314-cddfef00-9e87-11ea-8457-c0343853824a.png)

### Create the Storage Account

Using Portal:
https://docs.microsoft.com/en-us/azure/storage/common/storage-account-create?tabs=azure-portal
![Create Storage Account](https://user-images.githubusercontent.com/1756871/82747492-9266f700-9d99-11ea-8407-947a87bcfee3.png)

Using az cli:
https://docs.microsoft.com/en-us/azure/storage/common/storage-account-create?tabs=azure-cli

Example:

`az storage account create -n myaccountname -g RG-MYRGNAME-l westus --sku Standard_LRS`
All azure storage CLI commands:
https://docs.microsoft.com/en-us/cli/azure/storage/account?view=azure-cli-latest


## Blob Storage
![Blob Concept](https://user-images.githubusercontent.com/1756871/82807863-eac8f200-9e88-11ea-991d-e25a9702d1d0.png)


**Step by step tutorial**
https://docs.microsoft.com/en-us/azure/storage/blobs/storage-quickstart-blobs-dotnet

**Overview of all storage samples**

A great overview of all Azure Storage samples 
https://docs.microsoft.com/en-us/azure/storage/common/storage-samples-dotnet?toc=/azure/storage/blobs/toc.json#blob-samples

Azure Blob storage samples:
https://github.com/Azure/azure-sdk-for-net/tree/master/sdk/storage/Azure.Storage.Blobs

**Repository with storage SDK and samples**
Use this repository to clone all SDK including all samples that are publicly available.

https://github.com/Azure/azure-sdk-for-net

### Exercise V (Due Date: 24th May):
https://docs.microsoft.com/en-us/azure/storage/blobs/storage-quickstart-blobs-dotnet

## Azure Table Storage

### Azure Table Storage Documentation
https://docs.microsoft.com/en-us/azure/storage/tables/

### Tutorial
Build .NET Console application that demonstrates how to work with Azure Table Storage service
https://docs.microsoft.com/en-us/azure/cosmos-db/tutorial-develop-table-dotnet

### Learning Module
This module contains more content than needed for our lesson. The beginning of the module is recommended to read to be able to understand the table storage.
https://docs.microsoft.com/en-us/learn/modules/store-access-data-cosmos-table-api/

![Table Concept](https://user-images.githubusercontent.com/1756871/82807915-0cc27480-9e89-11ea-8852-a440ccbf5e82.png)

The following URL contains the official table storage samples. Step through BasicSamples before doing exercises. This URL contains also some advanced samples that might be useful in your project.

https://github.com/Azure-Samples/azure-cosmos-table-dotnet-core-getting-started.git

### Exercise VI (Due Date: 31th May):

Use this example to learn how to work with azure storage tables. Note, create first the storage account as we learned in the previous topic. This is important because this sample shows how to create the storage inside of the CosmosDB. We do not cover this topic in our course, but you can also do it that way if you like. Everything else in this example is 100% compatible with the classic storage accounts.

https://docs.microsoft.com/en-us/azure/cosmos-db/tutorial-develop-table-dotnet

## Queue Storage

### What is Azure Queue Storage? 
Please take first a look at the presentation [PPTX](https://github.com/UniversityOfAppliedSciencesFrankfurt/se-cloud-2019-2020/blob/master/Lessons/CloudComputing/Azure%20Storage%20Overview.pptx).
This is the official documentation: https://docs.microsoft.com/en-us/azure/storage/queues/storage-queues-introduction

### .NET Queue Storage Samples
https://docs.microsoft.com/en-us/azure/storage/queues/storage-dotnet-how-to-use-queues?tabs=dotnet

![Queue Storage Architecture](https://user-images.githubusercontent.com/1756871/120099620-cdce9b00-c13c-11eb-8455-d40d5690ee3b.png)
### Exercise VII (Due Date: 07th June):

Step by step tutorial: 
https://docs.microsoft.com/en-us/azure/storage/queues/storage-dotnet-how-to-use-queues?tabs=dotnet

Clone this repo and step through samples:
https://github.com/daenetCorporation/storage-queue-dotnet-getting-started

