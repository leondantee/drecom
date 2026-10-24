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

// Function: entry_0037c06c
// Address: 0x37c06c - 0x37c08c
void entry_0037c06c_0x37c06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037c06c_0x37c06c");
#endif

    ctx->pc = 0x37c06cu;

    // 0x37c06c: 0x8e245dcc  lw          $a0, 0x5DCC($s1)
    ctx->pc = 0x37c06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24012)));
    // 0x37c070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37c070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c074: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x37C074u;
    {
        const bool branch_taken_0x37c074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37c074) {
            ctx->pc = 0x37C08Cu;
            return;
        }
    }
    ctx->pc = 0x37C07Cu;
    // 0x37c07c: 0x8e245dcc  lw          $a0, 0x5DCC($s1)
    ctx->pc = 0x37c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24012)));
    // 0x37c080: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37c080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c084: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x37C084u;
    {
        const bool branch_taken_0x37c084 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x37c084) {
            ctx->pc = 0x37C090u;
            return;
        }
    }
    ctx->pc = 0x37C08Cu;
}
