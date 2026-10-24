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

// Function: caseD_5
// Address: 0x133324 - 0x133368
void caseD_5_0x133324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x133324");
#endif

    switch (ctx->pc) {
        case 0x133334u: goto label_133334;
        case 0x133340u: goto label_133340;
        default: break;
    }

    ctx->pc = 0x133324u;

    // 0x133324: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133328: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x133328u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13332c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x13332Cu;
    SET_GPR_U32(ctx, 31, 0x133334u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13332Cu, 0x133334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133334u;
label_133334:
    // 0x133334: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x133334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133338: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x133338u;
    SET_GPR_U32(ctx, 31, 0x133340u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x133338u, 0x133340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133340u;
label_133340:
    // 0x133340: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x133340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133344: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x133344u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x133348: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x133348u;
    {
        const bool branch_taken_0x133348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133348) {
            ctx->pc = 0x133368u;
            return;
        }
    }
    ctx->pc = 0x133350u;
    // 0x133350: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x133350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x133354: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x133354u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x133358: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x133358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13335c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x13335cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x133360: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x133360u;
    {
        const bool branch_taken_0x133360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133360) {
            ctx->pc = 0x133440u;
            return;
        }
    }
    ctx->pc = 0x133368u;
}
