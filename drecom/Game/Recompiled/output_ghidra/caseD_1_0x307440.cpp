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

// Function: caseD_1
// Address: 0x307440 - 0x3074b0
void caseD_1_0x307440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x307440");
#endif

    switch (ctx->pc) {
        case 0x307460u: goto label_307460;
        case 0x30746cu: goto label_30746c;
        case 0x30747cu: goto label_30747c;
        case 0x307488u: goto label_307488;
        default: break;
    }

    ctx->pc = 0x307440u;

    // 0x307440: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307444: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x307444u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x307448: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x307448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30744c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30744cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x307450: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307454: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x307454u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307458: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x307458u;
    SET_GPR_U32(ctx, 31, 0x307460u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x307458u, 0x307460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307460u;
label_307460:
    // 0x307460: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307464: 0xc05cd10  jal         func_173440
    ctx->pc = 0x307464u;
    SET_GPR_U32(ctx, 31, 0x30746Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x307464u, 0x30746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30746Cu;
label_30746c:
    // 0x30746c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30746cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307470: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x307470u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x307474: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x307474u;
    SET_GPR_U32(ctx, 31, 0x30747Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x307474u, 0x30747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30747Cu;
label_30747c:
    // 0x30747c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30747cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307480: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x307480u;
    SET_GPR_U32(ctx, 31, 0x307488u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x307480u, 0x307488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307488u;
label_307488:
    // 0x307488: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x307488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30748c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30748cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x307490: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x307490u;
    {
        const bool branch_taken_0x307490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307490) {
            ctx->pc = 0x307600u;
            return;
        }
    }
    ctx->pc = 0x307498u;
    // 0x307498: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x307498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30749c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x30749cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3074a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3074a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3074a4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3074a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3074a8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x3074A8u;
    {
        const bool branch_taken_0x3074a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3074a8) {
            ctx->pc = 0x307600u;
            return;
        }
    }
    ctx->pc = 0x3074B0u;
}
