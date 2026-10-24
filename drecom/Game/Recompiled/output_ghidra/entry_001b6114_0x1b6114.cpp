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

// Function: entry_001b6114
// Address: 0x1b6114 - 0x1b613c
void entry_001b6114_0x1b6114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6114_0x1b6114");
#endif

    ctx->pc = 0x1b6114u;

    // 0x1b6114: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1b6114u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6118: 0x90e809e7  lbu         $t0, 0x9E7($a3)
    ctx->pc = 0x1b6118u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2535)));
    // 0x1b611c: 0x110002f0  beqz        $t0, . + 4 + (0x2F0 << 2)
    ctx->pc = 0x1B611Cu;
    {
        const bool branch_taken_0x1b611c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b611c) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6124u;
    // 0x1b6124: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6128: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b6128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b612c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b612cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b6130: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b6130u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b6134: 0x100002ea  b           . + 4 + (0x2EA << 2)
    ctx->pc = 0x1B6134u;
    {
        const bool branch_taken_0x1b6134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6134) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B613Cu;
}
