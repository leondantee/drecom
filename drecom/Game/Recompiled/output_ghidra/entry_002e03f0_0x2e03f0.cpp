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

// Function: entry_002e03f0
// Address: 0x2e03f0 - 0x2e04a4
void entry_002e03f0_0x2e03f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e03f0_0x2e03f0");
#endif

    switch (ctx->pc) {
        case 0x2e0414u: goto label_2e0414;
        case 0x2e042cu: goto label_2e042c;
        case 0x2e0440u: goto label_2e0440;
        case 0x2e0450u: goto label_2e0450;
        case 0x2e045cu: goto label_2e045c;
        default: break;
    }

    ctx->pc = 0x2e03f0u;

    // 0x2e03f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e03f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e03f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e03f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e03f8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2e03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2e03fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e03fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e0400: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e0400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e0404: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x2e0404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e0408: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x2e0408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e040c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2E040Cu;
    SET_GPR_U32(ctx, 31, 0x2E0414u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2E040Cu, 0x2E0414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0414u;
label_2e0414:
    // 0x2e0414: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e0414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0418: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e0418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e041c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e041cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0420: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e0420u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0424: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E0424u;
    SET_GPR_U32(ctx, 31, 0x2E042Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E0424u, 0x2E042Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E042Cu;
label_2e042c:
    // 0x2e042c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0430: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e0430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0434: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x2e0434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e0438: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2E0438u;
    SET_GPR_U32(ctx, 31, 0x2E0440u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2E0438u, 0x2E0440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0440u;
label_2e0440:
    // 0x2e0440: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e0440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0444: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e0444u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0448: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E0448u;
    SET_GPR_U32(ctx, 31, 0x2E0450u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E0448u, 0x2E0450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0450u;
label_2e0450:
    // 0x2e0450: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e0450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0454: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E0454u;
    SET_GPR_U32(ctx, 31, 0x2E045Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E0454u, 0x2E045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E045Cu;
label_2e045c:
    // 0x2e045c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e045cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0460: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e0460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e0464: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E0464u;
    {
        const bool branch_taken_0x2e0464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0464) {
            ctx->pc = 0x2E04A4u;
            return;
        }
    }
    ctx->pc = 0x2E046Cu;
    // 0x2e046c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0470: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0474: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e0474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0478: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e0478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e047c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0480: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e0480u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0484: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0488: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e0488u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e048c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e048cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0490: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e0490u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0494: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e0494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0498: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e0498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e049c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E049Cu;
    {
        const bool branch_taken_0x2e049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e049c) {
            ctx->pc = 0x2E04A4u;
            return;
        }
    }
    ctx->pc = 0x2E04A4u;
}
