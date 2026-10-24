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

// Function: entry_003603c0
// Address: 0x3603c0 - 0x360470
void entry_003603c0_0x3603c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003603c0_0x3603c0");
#endif

    switch (ctx->pc) {
        case 0x3603e4u: goto label_3603e4;
        case 0x3603fcu: goto label_3603fc;
        case 0x360410u: goto label_360410;
        case 0x360420u: goto label_360420;
        case 0x36042cu: goto label_36042c;
        default: break;
    }

    ctx->pc = 0x3603c0u;

    // 0x3603c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3603c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3603c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3603c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3603c8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x3603c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x3603cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3603ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3603d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3603d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3603d4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x3603d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3603d8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x3603d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3603dc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3603DCu;
    SET_GPR_U32(ctx, 31, 0x3603E4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3603DCu, 0x3603E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3603E4u;
label_3603e4:
    // 0x3603e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3603e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3603e8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3603e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3603ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3603ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3603f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3603f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3603f4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3603F4u;
    SET_GPR_U32(ctx, 31, 0x3603FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3603F4u, 0x3603FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3603FCu;
label_3603fc:
    // 0x3603fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3603fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360400: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x360400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360404: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x360404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x360408: 0xc05cd58  jal         func_173560
    ctx->pc = 0x360408u;
    SET_GPR_U32(ctx, 31, 0x360410u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x360408u, 0x360410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360410u;
label_360410:
    // 0x360410: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x360410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360414: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x360414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x360418: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x360418u;
    SET_GPR_U32(ctx, 31, 0x360420u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x360418u, 0x360420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360420u;
label_360420:
    // 0x360420: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x360420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360424: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x360424u;
    SET_GPR_U32(ctx, 31, 0x36042Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x360424u, 0x36042Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36042Cu;
label_36042c:
    // 0x36042c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36042cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360430: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x360430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x360434: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x360434u;
    {
        const bool branch_taken_0x360434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x360434) {
            ctx->pc = 0x360470u;
            return;
        }
    }
    ctx->pc = 0x36043Cu;
    // 0x36043c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360440: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x360440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360444: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x360444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x360448: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x360448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36044c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36044cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x360450: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x360450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360454: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x360454u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x360458: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x360458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36045c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36045cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x360460: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x360460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360464: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x360464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x360468: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x360468u;
    {
        const bool branch_taken_0x360468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360468) {
            ctx->pc = 0x360470u;
            return;
        }
    }
    ctx->pc = 0x360470u;
}
