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

// Function: entry_001cbbe4
// Address: 0x1cbbe4 - 0x1cbc18
void entry_001cbbe4_0x1cbbe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbbe4_0x1cbbe4");
#endif

    switch (ctx->pc) {
        case 0x1cbbf0u: goto label_1cbbf0;
        default: break;
    }

    ctx->pc = 0x1cbbe4u;

    // 0x1cbbe4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cbbe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cbbe8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CBBE8u;
    SET_GPR_U32(ctx, 31, 0x1CBBF0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CBBE8u, 0x1CBBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBF0u;
label_1cbbf0:
    // 0x1cbbf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbbf4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1cbbf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1cbbf8: 0x106002c6  beqz        $v1, . + 4 + (0x2C6 << 2)
    ctx->pc = 0x1CBBF8u;
    {
        const bool branch_taken_0x1cbbf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbf8) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CBC00u;
    // 0x1cbc00: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbc04: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1cbc04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1cbc08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cbc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cbc0c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1cbc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cbc10: 0x100002c0  b           . + 4 + (0x2C0 << 2)
    ctx->pc = 0x1CBC10u;
    {
        const bool branch_taken_0x1cbc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbc10) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CBC18u;
}
