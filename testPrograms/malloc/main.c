/* Copyright 2013 David Axmark

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <ma.h>
#include <maheap.h>
#include <conprint.h>

int MAMain() {
	malloc(100);
	malloc(20);
	malloc(4);
	malloc(36);
	malloc(36);
	malloc(36);
	malloc(36);
	malloc(1152);
	malloc(148);
	malloc(36);
	printf("Success!\n");
	maExit(0);
}
