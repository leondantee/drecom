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

// Function: MainGsSwapDBuffDc
// Address: 0x166300 - 0x1666b0
void MainGsSwapDBuffDc_0x166300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MainGsSwapDBuffDc_0x166300");
#endif

    switch (ctx->pc) {
        case 0x166374u: goto label_166374;
        case 0x16639cu: goto label_16639c;
        case 0x1663ccu: goto label_1663cc;
        case 0x1663f4u: goto label_1663f4;
        case 0x16641cu: goto label_16641c;
        case 0x166444u: goto label_166444;
        case 0x16645cu: goto label_16645c;
        case 0x16663cu: goto label_16663c;
        default: break;
    }

    ctx->pc = 0x166300u;

    // 0x166300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x166300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x166304: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x166304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x166308: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16630c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16630cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166310: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166314: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x166314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x166318: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x166318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x16631c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16631cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x166320: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x166320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x166324: 0x3c123000  lui         $s2, 0x3000
    ctx->pc = 0x166324u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)12288 << 16));
    // 0x166328: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16632c: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x16632cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x166330: 0x217bc  dsll32      $v0, $v0, 30
    ctx->pc = 0x166330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 30));
    // 0x166334: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x166334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x166338: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x166338u;
    {
        const bool branch_taken_0x166338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166338) {
            ctx->pc = 0x166444u;
            goto label_166444;
        }
    }
    ctx->pc = 0x166340u;
    // 0x166340: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x166340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x166344: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x166344u;
    {
        const bool branch_taken_0x166344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166344) {
            ctx->pc = 0x1663A4u;
            goto label_1663a4;
        }
    }
    ctx->pc = 0x16634Cu;
    // 0x16634c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16634cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166350: 0x244201f0  addiu       $v0, $v0, 0x1F0
    ctx->pc = 0x166350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x166354: 0x2422025  or          $a0, $s2, $v0
    ctx->pc = 0x166354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x166358: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x166358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x16635c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x16635cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x166360: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x166360u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x166364: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x166364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x166368: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x166368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x16636c: 0xc040616  jal         func_101858
    ctx->pc = 0x16636Cu;
    SET_GPR_U32(ctx, 31, 0x166374u);
    ctx->pc = 0x101858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101858u, 0x16636Cu, 0x166374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166374u;
label_166374:
    // 0x166374: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166378: 0x24420270  addiu       $v0, $v0, 0x270
    ctx->pc = 0x166378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x16637c: 0x2422025  or          $a0, $s2, $v0
    ctx->pc = 0x16637cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x166380: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x166380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x166384: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x166384u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x166388: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x166388u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x16638c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x16638cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x166390: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x166390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x166394: 0xc0406b0  jal         func_101AC0
    ctx->pc = 0x166394u;
    SET_GPR_U32(ctx, 31, 0x16639Cu);
    ctx->pc = 0x101AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101AC0u, 0x166394u, 0x16639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16639Cu;
label_16639c:
    // 0x16639c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16639Cu;
    {
        const bool branch_taken_0x16639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16639c) {
            ctx->pc = 0x1663F4u;
            goto label_1663f4;
        }
    }
    ctx->pc = 0x1663A4u;
label_1663a4:
    // 0x1663a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1663a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1663a8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1663a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1663ac: 0x2422025  or          $a0, $s2, $v0
    ctx->pc = 0x1663acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1663b0: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1663b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1663b4: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x1663b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1663b8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1663b8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1663bc: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1663bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1663c0: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x1663c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1663c4: 0xc040616  jal         func_101858
    ctx->pc = 0x1663C4u;
    SET_GPR_U32(ctx, 31, 0x1663CCu);
    ctx->pc = 0x101858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101858u, 0x1663C4u, 0x1663CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663CCu;
label_1663cc:
    // 0x1663cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1663ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1663d0: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1663d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1663d4: 0x2422025  or          $a0, $s2, $v0
    ctx->pc = 0x1663d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1663d8: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1663d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1663dc: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x1663dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1663e0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1663e0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1663e4: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1663e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1663e8: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x1663e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1663ec: 0xc0406b0  jal         func_101AC0
    ctx->pc = 0x1663ECu;
    SET_GPR_U32(ctx, 31, 0x1663F4u);
    ctx->pc = 0x101AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101AC0u, 0x1663ECu, 0x1663F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663F4u;
label_1663f4:
    // 0x1663f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1663f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1663f8: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x1663f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x1663fc: 0x2422025  or          $a0, $s2, $v0
    ctx->pc = 0x1663fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x166400: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x166400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x166404: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x166404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x166408: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x166408u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x16640c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x16640cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x166410: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x166410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x166414: 0xc040616  jal         func_101858
    ctx->pc = 0x166414u;
    SET_GPR_U32(ctx, 31, 0x16641Cu);
    ctx->pc = 0x101858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101858u, 0x166414u, 0x16641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16641Cu;
label_16641c:
    // 0x16641c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166420: 0x244203e0  addiu       $v0, $v0, 0x3E0
    ctx->pc = 0x166420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
    // 0x166424: 0x2422025  or          $a0, $s2, $v0
    ctx->pc = 0x166424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x166428: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x166428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x16642c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x16642cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x166430: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x166430u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x166434: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x166434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x166438: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x166438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x16643c: 0xc0406b0  jal         func_101AC0
    ctx->pc = 0x16643Cu;
    SET_GPR_U32(ctx, 31, 0x166444u);
    ctx->pc = 0x101AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101AC0u, 0x16643Cu, 0x166444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166444u;
label_166444:
    // 0x166444: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x166444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x166448: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x166448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x16644c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x16644cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x166450: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x166450u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x166454: 0xc0409c6  jal         func_102718
    ctx->pc = 0x166454u;
    SET_GPR_U32(ctx, 31, 0x16645Cu);
    ctx->pc = 0x102718u;
    {
        ctx->pc = 0x16645Cu;
        ps2_stubs::sceDmaSync(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16645Cu) { return; }
    ctx->pc = 0x16645Cu;
label_16645c:
    // 0x16645c: 0x3c117000  lui         $s1, 0x7000
    ctx->pc = 0x16645cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28672 << 16));
    // 0x166460: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x166460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x166464: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x166464u;
    {
        const bool branch_taken_0x166464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166464) {
            ctx->pc = 0x16654Cu;
            goto label_16654c;
        }
    }
    ctx->pc = 0x16646Cu;
    // 0x16646c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166470: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x166470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x166474: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x166474u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166478: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x166478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x16647c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x16647cu;
    runtime->Store64(rdram, ctx, 0x12000000u, GPR_U64(ctx, 3));
    // 0x166480: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166484: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x166484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x166488: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x166488u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16648c: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x16648cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x166490: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x166490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x166494: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166494u;
    runtime->Store64(rdram, ctx, 0x12000020u, GPR_U64(ctx, 3));
    // 0x166498: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16649c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x16649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x1664a0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1664a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1664a4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1664a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1664a8: 0x34420090  ori         $v0, $v0, 0x90
    ctx->pc = 0x1664a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    // 0x1664ac: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1664acu;
    runtime->Store64(rdram, ctx, 0x12000090u, GPR_U64(ctx, 3));
    // 0x1664b0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1664b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1664b4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1664b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1664b8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1664b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1664bc: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1664bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1664c0: 0x344200a0  ori         $v0, $v0, 0xA0
    ctx->pc = 0x1664c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x1664c4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1664c4u;
    runtime->Store64(rdram, ctx, 0x120000A0u, GPR_U64(ctx, 3));
    // 0x1664c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1664c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1664cc: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x1664ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1664d0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1664d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1664d4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1664d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1664d8: 0x344200e0  ori         $v0, $v0, 0xE0
    ctx->pc = 0x1664d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)224);
    // 0x1664dc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1664dcu;
    runtime->Store64(rdram, ctx, 0x120000E0u, GPR_U64(ctx, 3));
    // 0x1664e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1664e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1664e4: 0x90420038  lbu         $v0, 0x38($v0)
    ctx->pc = 0x1664e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1664e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1664e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1664ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1664ECu;
    {
        const bool branch_taken_0x1664ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1664ec) {
            ctx->pc = 0x166524u;
            goto label_166524;
        }
    }
    ctx->pc = 0x1664F4u;
    // 0x1664f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1664f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1664f8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1664f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1664fc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1664fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166500: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x166500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x166504: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x166504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x166508: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166508u;
    runtime->Store64(rdram, ctx, 0x12000070u, GPR_U64(ctx, 3));
    // 0x16650c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16650cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166510: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x166510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x166514: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x166514u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166518: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x166518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x16651c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x16651cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x166520: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166520u;
    runtime->Store64(rdram, ctx, 0x12000080u, GPR_U64(ctx, 3));
label_166524:
    // 0x166524: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166528: 0x944201e0  lhu         $v0, 0x1E0($v0)
    ctx->pc = 0x166528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x16652c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x16652cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x166530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x166534: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x166534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x166538: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16653c: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x16653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x166540: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x166540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x166544: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x166544u;
    {
        const bool branch_taken_0x166544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166544) {
            ctx->pc = 0x166620u;
            goto label_166620;
        }
    }
    ctx->pc = 0x16654Cu;
label_16654c:
    // 0x16654c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166550: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x166550u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166554: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x166554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x166558: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166558u;
    runtime->Store64(rdram, ctx, 0x12000000u, GPR_U64(ctx, 3));
    // 0x16655c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166560: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x166560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x166564: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x166564u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166568: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x166568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x16656c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16656cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x166570: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166570u;
    runtime->Store64(rdram, ctx, 0x12000020u, GPR_U64(ctx, 3));
    // 0x166574: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166578: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x166578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16657c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x16657cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166580: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x166580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x166584: 0x34420090  ori         $v0, $v0, 0x90
    ctx->pc = 0x166584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    // 0x166588: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166588u;
    runtime->Store64(rdram, ctx, 0x12000090u, GPR_U64(ctx, 3));
    // 0x16658c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166590: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x166590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x166594: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x166594u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166598: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x166598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x16659c: 0x344200a0  ori         $v0, $v0, 0xA0
    ctx->pc = 0x16659cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x1665a0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1665a0u;
    runtime->Store64(rdram, ctx, 0x120000A0u, GPR_U64(ctx, 3));
    // 0x1665a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1665a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1665a8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1665a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1665ac: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1665acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1665b0: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1665b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1665b4: 0x344200e0  ori         $v0, $v0, 0xE0
    ctx->pc = 0x1665b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)224);
    // 0x1665b8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1665b8u;
    runtime->Store64(rdram, ctx, 0x120000E0u, GPR_U64(ctx, 3));
    // 0x1665bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1665bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1665c0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1665c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1665c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1665c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1665c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1665C8u;
    {
        const bool branch_taken_0x1665c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1665c8) {
            ctx->pc = 0x166600u;
            goto label_166600;
        }
    }
    ctx->pc = 0x1665D0u;
    // 0x1665d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1665d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1665d4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1665d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1665d8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1665d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1665dc: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1665dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1665e0: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x1665e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x1665e4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1665e4u;
    runtime->Store64(rdram, ctx, 0x12000070u, GPR_U64(ctx, 3));
    // 0x1665e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1665e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1665ec: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1665ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1665f0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1665f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1665f4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1665f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1665f8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1665f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1665fc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1665fcu;
    runtime->Store64(rdram, ctx, 0x12000080u, GPR_U64(ctx, 3));
label_166600:
    // 0x166600: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166604: 0x94420070  lhu         $v0, 0x70($v0)
    ctx->pc = 0x166604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x166608: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x166608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x16660c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16660cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x166610: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x166610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x166614: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166618: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x166618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x16661c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x16661cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_166620:
    // 0x166620: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x166620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x166624: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x166624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x166628: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x166628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x16662c: 0x3444a000  ori         $a0, $v0, 0xA000
    ctx->pc = 0x16662cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x166630: 0x3c05f000  lui         $a1, 0xF000
    ctx->pc = 0x166630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61440 << 16));
    // 0x166634: 0xc04086e  jal         func_1021B8
    ctx->pc = 0x166634u;
    SET_GPR_U32(ctx, 31, 0x16663Cu);
    ctx->pc = 0x1021B8u;
    {
        ctx->pc = 0x16663Cu;
        ps2_stubs::sceDmaSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16663Cu) { return; }
    ctx->pc = 0x16663Cu;
label_16663c:
    // 0x16663c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x16663cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x166640: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x166640u;
    {
        const bool branch_taken_0x166640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166640) {
            ctx->pc = 0x166674u;
            goto label_166674;
        }
    }
    ctx->pc = 0x166648u;
    // 0x166648: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x166648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16664c: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x16664cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x166650: 0xae030a50  sw          $v1, 0xA50($s0)
    ctx->pc = 0x166650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2640), GPR_U32(ctx, 3));
    // 0x166654: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x166654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166658: 0x246301f0  addiu       $v1, $v1, 0x1F0
    ctx->pc = 0x166658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 496));
    // 0x16665c: 0xae030a54  sw          $v1, 0xA54($s0)
    ctx->pc = 0x16665cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2644), GPR_U32(ctx, 3));
    // 0x166660: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x166660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166664: 0x24630270  addiu       $v1, $v1, 0x270
    ctx->pc = 0x166664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 624));
    // 0x166668: 0xae030a58  sw          $v1, 0xA58($s0)
    ctx->pc = 0x166668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2648), GPR_U32(ctx, 3));
    // 0x16666c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16666Cu;
    {
        const bool branch_taken_0x16666c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16666c) {
            ctx->pc = 0x166694u;
            goto label_166694;
        }
    }
    ctx->pc = 0x166674u;
label_166674:
    // 0x166674: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x166674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166678: 0xae030a50  sw          $v1, 0xA50($s0)
    ctx->pc = 0x166678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2640), GPR_U32(ctx, 3));
    // 0x16667c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x16667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166680: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x166680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x166684: 0xae030a54  sw          $v1, 0xA54($s0)
    ctx->pc = 0x166684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2644), GPR_U32(ctx, 3));
    // 0x166688: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x166688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16668c: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x16668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x166690: 0xae030a58  sw          $v1, 0xA58($s0)
    ctx->pc = 0x166690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2648), GPR_U32(ctx, 3));
label_166694:
    // 0x166694: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x166694u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166698: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x166698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16669c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16669cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1666a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1666a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1666a4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1666a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1666a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1666A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1666A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1666B0u;
}
