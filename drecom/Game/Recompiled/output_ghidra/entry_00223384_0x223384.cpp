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

// Function: entry_00223384
// Address: 0x223384 - 0x223468
void entry_00223384_0x223384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223384_0x223384");
#endif

    switch (ctx->pc) {
        case 0x223390u: goto label_223390;
        case 0x2233a0u: goto label_2233a0;
        case 0x2233b0u: goto label_2233b0;
        case 0x223410u: goto label_223410;
        case 0x223420u: goto label_223420;
        default: break;
    }

    ctx->pc = 0x223384u;

    // 0x223384: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x223384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223388: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x223388u;
    SET_GPR_U32(ctx, 31, 0x223390u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x223388u, 0x223390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223390u;
label_223390:
    // 0x223390: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x223390u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223394: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x223394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223398: 0xc08c464  jal         func_231190
    ctx->pc = 0x223398u;
    SET_GPR_U32(ctx, 31, 0x2233A0u);
    ctx->pc = 0x231190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231190u, 0x223398u, 0x2233A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2233A0u;
label_2233a0:
    // 0x2233a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2233a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2233a4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2233a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2233a8: 0xc08ce68  jal         func_2339A0
    ctx->pc = 0x2233A8u;
    SET_GPR_U32(ctx, 31, 0x2233B0u);
    ctx->pc = 0x2339A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2339A0u, 0x2233A8u, 0x2233B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2233B0u;
label_2233b0:
    // 0x2233b0: 0x8fbe0128  lw          $fp, 0x128($sp)
    ctx->pc = 0x2233b0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2233b4: 0x97c3000e  lhu         $v1, 0xE($fp)
    ctx->pc = 0x2233b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 14)));
    // 0x2233b8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2233b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2233bc: 0x30450700  andi        $a1, $v0, 0x700
    ctx->pc = 0x2233bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
    // 0x2233c0: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x2233c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2233c4: 0xa7a7011e  sh          $a3, 0x11E($sp)
    ctx->pc = 0x2233c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 286), (uint16_t)GPR_U32(ctx, 7));
    // 0x2233c8: 0x97a2011e  lhu         $v0, 0x11E($sp)
    ctx->pc = 0x2233c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 286)));
    // 0x2233cc: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2233ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2233d0: 0x24170500  addiu       $s7, $zero, 0x500
    ctx->pc = 0x2233d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2233d4: 0x15170024  bne         $t0, $s7, . + 4 + (0x24 << 2)
    ctx->pc = 0x2233D4u;
    {
        const bool branch_taken_0x2233d4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 23));
        if (branch_taken_0x2233d4) {
            ctx->pc = 0x223468u;
            return;
        }
    }
    ctx->pc = 0x2233DCu;
    // 0x2233dc: 0x8fa90128  lw          $t1, 0x128($sp)
    ctx->pc = 0x2233dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2233e0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2233e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2233e4: 0x844a127e  lh          $t2, 0x127E($v0)
    ctx->pc = 0x2233e4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x2233e8: 0xab43c  dsll32      $s6, $t2, 16
    ctx->pc = 0x2233e8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 10) << (32 + 16));
    // 0x2233ec: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x2233ecu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x2233f0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2233f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2233f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2233f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2233f8: 0x8d250368  lw          $a1, 0x368($t1)
    ctx->pc = 0x2233f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 872)));
    // 0x2233fc: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x2233fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x223400: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x223400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223404: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x223404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x223408: 0xc0965d0  jal         func_259740
    ctx->pc = 0x223408u;
    SET_GPR_U32(ctx, 31, 0x223410u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x223408u, 0x223410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223410u;
label_223410:
    // 0x223410: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x223410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223414: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x223414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x223418: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x223418u;
    SET_GPR_U32(ctx, 31, 0x223420u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x223418u, 0x223420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223420u;
label_223420:
    // 0x223420: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x223420u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223428: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x223428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x22342c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x22342cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x223430: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x223430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x223434: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223438: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x223438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x22343c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x22343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223440: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x223440u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x223444: 0x8fb70128  lw          $s7, 0x128($sp)
    ctx->pc = 0x223444u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223448: 0xa2e00003  sb          $zero, 0x3($s7)
    ctx->pc = 0x223448u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22344c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x22344cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223450: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x223450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x223454: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x223454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223458: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x223458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22345c: 0x8e160030  lw          $s6, 0x30($s0)
    ctx->pc = 0x22345cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x223460: 0x36c22038  ori         $v0, $s6, 0x2038
    ctx->pc = 0x223460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)8248);
    // 0x223464: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x223464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x223468u;
}
