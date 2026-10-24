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

// Function: entry_00179e10
// Address: 0x179e10 - 0x179e2c
void entry_00179e10_0x179e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179e10_0x179e10");
#endif

    ctx->pc = 0x179e10u;

    // 0x179e10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x179e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179e14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179e18: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x179e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x179e1c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x179e1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x179e20: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x179E20u;
    {
        const bool branch_taken_0x179e20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x179e20) {
            ctx->pc = 0x179E2Cu;
            return;
        }
    }
    ctx->pc = 0x179E28u;
    // 0x179e28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x179e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x179e2cu;
}
