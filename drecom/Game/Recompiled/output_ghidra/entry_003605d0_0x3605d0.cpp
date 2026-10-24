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

// Function: entry_003605d0
// Address: 0x3605d0 - 0x360680
void entry_003605d0_0x3605d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003605d0_0x3605d0");
#endif

    switch (ctx->pc) {
        case 0x3605f4u: goto label_3605f4;
        case 0x36060cu: goto label_36060c;
        case 0x360620u: goto label_360620;
        case 0x360630u: goto label_360630;
        case 0x36063cu: goto label_36063c;
        default: break;
    }

    ctx->pc = 0x3605d0u;

    // 0x3605d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3605d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3605d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3605d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3605d8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x3605d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x3605dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3605dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3605e0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3605e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3605e4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x3605e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3605e8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x3605e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3605ec: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3605ECu;
    SET_GPR_U32(ctx, 31, 0x3605F4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3605ECu, 0x3605F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3605F4u;
label_3605f4:
    // 0x3605f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3605f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3605f8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3605f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3605fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3605fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360600: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x360600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360604: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x360604u;
    SET_GPR_U32(ctx, 31, 0x36060Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x360604u, 0x36060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36060Cu;
label_36060c:
    // 0x36060c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360610: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x360610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360614: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x360614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x360618: 0xc05cd58  jal         func_173560
    ctx->pc = 0x360618u;
    SET_GPR_U32(ctx, 31, 0x360620u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x360618u, 0x360620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360620u;
label_360620:
    // 0x360620: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x360620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360624: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x360624u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360628: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x360628u;
    SET_GPR_U32(ctx, 31, 0x360630u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x360628u, 0x360630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360630u;
label_360630:
    // 0x360630: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x360630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360634: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x360634u;
    SET_GPR_U32(ctx, 31, 0x36063Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x360634u, 0x36063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36063Cu;
label_36063c:
    // 0x36063c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360640: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x360640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x360644: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x360644u;
    {
        const bool branch_taken_0x360644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x360644) {
            ctx->pc = 0x360680u;
            return;
        }
    }
    ctx->pc = 0x36064Cu;
    // 0x36064c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36064cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360650: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x360650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360654: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x360654u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x360658: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x360658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36065c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36065cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x360660: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x360660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360664: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x360664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x360668: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x360668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36066c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36066cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x360670: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x360670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360674: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x360674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x360678: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x360678u;
    {
        const bool branch_taken_0x360678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360678) {
            ctx->pc = 0x360680u;
            return;
        }
    }
    ctx->pc = 0x360680u;
}
