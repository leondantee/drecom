#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MovieBufferInit
// Address: 0x35c3d0 - 0x35c60c
void MovieBufferInit_0x35c3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MovieBufferInit_0x35c3d0");
#endif

    switch (ctx->pc) {
        case 0x35c40cu: goto label_35c40c;
        case 0x35c434u: goto label_35c434;
        case 0x35c440u: goto label_35c440;
        case 0x35c470u: goto label_35c470;
        case 0x35c4a0u: goto label_35c4a0;
        case 0x35c4d0u: goto label_35c4d0;
        case 0x35c4f8u: goto label_35c4f8;
        case 0x35c518u: goto label_35c518;
        case 0x35c538u: goto label_35c538;
        case 0x35c558u: goto label_35c558;
        case 0x35c578u: goto label_35c578;
        case 0x35c59cu: goto label_35c59c;
        case 0x35c5c0u: goto label_35c5c0;
        case 0x35c5e4u: goto label_35c5e4;
        default: break;
    }

    ctx->pc = 0x35c3d0u;

    // 0x35c3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35c3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35c3d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x35c3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x35c3d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x35c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35c3dc: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x35c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x35c3e0: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x35c3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
    // 0x35c3e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c3e8: 0xac43027c  sw          $v1, 0x27C($v0)
    ctx->pc = 0x35c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 636), GPR_U32(ctx, 3));
    // 0x35c3ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c3f0: 0x8c42027c  lw          $v0, 0x27C($v0)
    ctx->pc = 0x35c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
    // 0x35c3f4: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x35c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x35c3f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x35c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35c3fc: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x35c3fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x35c400: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x35c400u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35c404: 0xc059408  jal         func_165020
    ctx->pc = 0x35C404u;
    SET_GPR_U32(ctx, 31, 0x35C40Cu);
    ctx->pc = 0x165020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165020u, 0x35C404u, 0x35C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C40Cu;
label_35c40c:
    // 0x35c40c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c410: 0xac620278  sw          $v0, 0x278($v1)
    ctx->pc = 0x35c410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 632), GPR_U32(ctx, 2));
    // 0x35c414: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35c414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c418: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c41c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c420: 0x24840230  addiu       $a0, $a0, 0x230
    ctx->pc = 0x35c420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 560));
    // 0x35c424: 0x8c650278  lw          $a1, 0x278($v1)
    ctx->pc = 0x35c424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x35c428: 0x8c46027c  lw          $a2, 0x27C($v0)
    ctx->pc = 0x35c428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 636)));
    // 0x35c42c: 0xc0427f2  jal         func_109FC8
    ctx->pc = 0x35C42Cu;
    SET_GPR_U32(ctx, 31, 0x35C434u);
    ctx->pc = 0x109FC8u;
    {
        ctx->pc = 0x35C434u;
        ps2_stubs::sceMpegCreate(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35C434u) { return; }
    ctx->pc = 0x35C434u;
label_35c434:
    // 0x35c434: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x35c434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x35c438: 0xc059408  jal         func_165020
    ctx->pc = 0x35C438u;
    SET_GPR_U32(ctx, 31, 0x35C440u);
    ctx->pc = 0x165020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165020u, 0x35C438u, 0x35C440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C440u;
label_35c440:
    // 0x35c440: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c444: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35c444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35c448: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x35c448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x35c44c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c450: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x35c450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x35c454: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c458: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x35c458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x35c45c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c460: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x35c460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x35c464: 0x3c04000c  lui         $a0, 0xC
    ctx->pc = 0x35c464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12 << 16));
    // 0x35c468: 0xc059408  jal         func_165020
    ctx->pc = 0x35C468u;
    SET_GPR_U32(ctx, 31, 0x35C470u);
    ctx->pc = 0x165020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165020u, 0x35C468u, 0x35C470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C470u;
label_35c470:
    // 0x35c470: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c474: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x35c474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x35c478: 0x3c03000c  lui         $v1, 0xC
    ctx->pc = 0x35c478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12 << 16));
    // 0x35c47c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c480: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x35c480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x35c484: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c488: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x35c488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x35c48c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c490: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x35c490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x35c494: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x35c494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x35c498: 0xc059408  jal         func_165020
    ctx->pc = 0x35C498u;
    SET_GPR_U32(ctx, 31, 0x35C4A0u);
    ctx->pc = 0x165020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165020u, 0x35C498u, 0x35C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C4A0u;
label_35c4a0:
    // 0x35c4a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c4a4: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x35c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x35c4a8: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x35c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x35c4ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c4b0: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x35c4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x35c4b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c4b8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x35c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x35c4bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c4c0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x35c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x35c4c4: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x35c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x35c4c8: 0xc059408  jal         func_165020
    ctx->pc = 0x35C4C8u;
    SET_GPR_U32(ctx, 31, 0x35C4D0u);
    ctx->pc = 0x165020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165020u, 0x35C4C8u, 0x35C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C4D0u;
label_35c4d0:
    // 0x35c4d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c4d4: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x35c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x35c4d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c4dc: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x35c4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c4e0: 0x24440230  addiu       $a0, $v0, 0x230
    ctx->pc = 0x35c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x35c4e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c4e8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x35c4ec: 0x2446cd00  addiu       $a2, $v0, -0x3300
    ctx->pc = 0x35c4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954240));
    // 0x35c4f0: 0xc04290a  jal         func_10A428
    ctx->pc = 0x35C4F0u;
    SET_GPR_U32(ctx, 31, 0x35C4F8u);
    ctx->pc = 0x10A428u;
    {
        ctx->pc = 0x35C4F8u;
        ps2_stubs::sceMpegAddCallback(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35C4F8u) { return; }
    ctx->pc = 0x35C4F8u;
label_35c4f8:
    // 0x35c4f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c4fc: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x35c4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c500: 0x24440230  addiu       $a0, $v0, 0x230
    ctx->pc = 0x35c500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x35c504: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35c504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c508: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35c508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x35c50c: 0x2446cdb0  addiu       $a2, $v0, -0x3250
    ctx->pc = 0x35c50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954416));
    // 0x35c510: 0xc04290a  jal         func_10A428
    ctx->pc = 0x35C510u;
    SET_GPR_U32(ctx, 31, 0x35C518u);
    ctx->pc = 0x10A428u;
    {
        ctx->pc = 0x35C518u;
        ps2_stubs::sceMpegAddCallback(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35C518u) { return; }
    ctx->pc = 0x35C518u;
label_35c518:
    // 0x35c518: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c51c: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x35c51cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c520: 0x24440230  addiu       $a0, $v0, 0x230
    ctx->pc = 0x35c520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x35c524: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35c524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c528: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35c528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x35c52c: 0x2446cec0  addiu       $a2, $v0, -0x3140
    ctx->pc = 0x35c52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954688));
    // 0x35c530: 0xc04290a  jal         func_10A428
    ctx->pc = 0x35C530u;
    SET_GPR_U32(ctx, 31, 0x35C538u);
    ctx->pc = 0x10A428u;
    {
        ctx->pc = 0x35C538u;
        ps2_stubs::sceMpegAddCallback(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35C538u) { return; }
    ctx->pc = 0x35C538u;
label_35c538:
    // 0x35c538: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c53c: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x35c53cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c540: 0x24440230  addiu       $a0, $v0, 0x230
    ctx->pc = 0x35c540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x35c544: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35c544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35c548: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35c548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x35c54c: 0x2446d040  addiu       $a2, $v0, -0x2FC0
    ctx->pc = 0x35c54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955072));
    // 0x35c550: 0xc04290a  jal         func_10A428
    ctx->pc = 0x35C550u;
    SET_GPR_U32(ctx, 31, 0x35C558u);
    ctx->pc = 0x10A428u;
    {
        ctx->pc = 0x35C558u;
        ps2_stubs::sceMpegAddCallback(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35C558u) { return; }
    ctx->pc = 0x35C558u;
label_35c558:
    // 0x35c558: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c55c: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x35c55cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c560: 0x24440230  addiu       $a0, $v0, 0x230
    ctx->pc = 0x35c560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x35c564: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35c564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35c568: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35c568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x35c56c: 0x2446d090  addiu       $a2, $v0, -0x2F70
    ctx->pc = 0x35c56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955152));
    // 0x35c570: 0xc04290a  jal         func_10A428
    ctx->pc = 0x35C570u;
    SET_GPR_U32(ctx, 31, 0x35C578u);
    ctx->pc = 0x10A428u;
    {
        ctx->pc = 0x35C578u;
        ps2_stubs::sceMpegAddCallback(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35C578u) { return; }
    ctx->pc = 0x35C578u;
label_35c578:
    // 0x35c578: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c57c: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x35c57cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c580: 0x24440230  addiu       $a0, $v0, 0x230
    ctx->pc = 0x35c580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x35c584: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35c584u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35c588: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35c588u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35c58c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x35c590: 0x2447c8a0  addiu       $a3, $v0, -0x3760
    ctx->pc = 0x35c590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953120));
    // 0x35c594: 0xc0425b8  jal         func_1096E0
    ctx->pc = 0x35C594u;
    SET_GPR_U32(ctx, 31, 0x35C59Cu);
    ctx->pc = 0x1096E0u;
    {
        ctx->pc = 0x35C59Cu;
        ps2_stubs::sceMpegAddStrCallback(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35C59Cu) { return; }
    ctx->pc = 0x35C59Cu;
label_35c59c:
    // 0x35c59c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c5a0: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x35c5a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c5a4: 0x24440230  addiu       $a0, $v0, 0x230
    ctx->pc = 0x35c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x35c5a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c5ac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35c5acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35c5b0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x35c5b4: 0x2447ca00  addiu       $a3, $v0, -0x3600
    ctx->pc = 0x35c5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953472));
    // 0x35c5b8: 0xc0425b8  jal         func_1096E0
    ctx->pc = 0x35C5B8u;
    SET_GPR_U32(ctx, 31, 0x35C5C0u);
    ctx->pc = 0x1096E0u;
    {
        ctx->pc = 0x35C5C0u;
        ps2_stubs::sceMpegAddStrCallback(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35C5C0u) { return; }
    ctx->pc = 0x35C5C0u;
label_35c5c0:
    // 0x35c5c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c5c4: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x35c5c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c5c8: 0x24440230  addiu       $a0, $v0, 0x230
    ctx->pc = 0x35c5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x35c5cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35c5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c5d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35c5d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35c5d4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x35c5d8: 0x2447cb60  addiu       $a3, $v0, -0x34A0
    ctx->pc = 0x35c5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953824));
    // 0x35c5dc: 0xc0425b8  jal         func_1096E0
    ctx->pc = 0x35C5DCu;
    SET_GPR_U32(ctx, 31, 0x35C5E4u);
    ctx->pc = 0x1096E0u;
    {
        ctx->pc = 0x35C5E4u;
        ps2_stubs::sceMpegAddStrCallback(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35C5E4u) { return; }
    ctx->pc = 0x35C5E4u;
label_35c5e4:
    // 0x35c5e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c5e8: 0xa46002b0  sh          $zero, 0x2B0($v1)
    ctx->pc = 0x35c5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 688), (uint16_t)GPR_U32(ctx, 0));
    // 0x35c5ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c5f0: 0xa46002b2  sh          $zero, 0x2B2($v1)
    ctx->pc = 0x35c5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 690), (uint16_t)GPR_U32(ctx, 0));
    // 0x35c5f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c5f8: 0xac6002a8  sw          $zero, 0x2A8($v1)
    ctx->pc = 0x35c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 680), GPR_U32(ctx, 0));
    // 0x35c5fc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x35c5fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c600: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35c604: 0x3e00008  jr          $ra
    ctx->pc = 0x35C604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C60Cu;
}
