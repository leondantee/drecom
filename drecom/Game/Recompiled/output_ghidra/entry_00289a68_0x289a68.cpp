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

// Function: entry_00289a68
// Address: 0x289a68 - 0x289a88
void entry_00289a68_0x289a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289a68_0x289a68");
#endif

    ctx->pc = 0x289a68u;

    // 0x289a68: 0x8e485dc8  lw          $t0, 0x5DC8($s2)
    ctx->pc = 0x289a68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24008)));
    // 0x289a6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x289a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x289a70: 0x15030005  bne         $t0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x289A70u;
    {
        const bool branch_taken_0x289a70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x289a70) {
            ctx->pc = 0x289A88u;
            return;
        }
    }
    ctx->pc = 0x289A78u;
    // 0x289a78: 0x8e485dcc  lw          $t0, 0x5DCC($s2)
    ctx->pc = 0x289a78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24012)));
    // 0x289a7c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x289a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289a80: 0x11070007  beq         $t0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x289A80u;
    {
        const bool branch_taken_0x289a80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x289a80) {
            ctx->pc = 0x289AA0u;
            return;
        }
    }
    ctx->pc = 0x289A88u;
}
