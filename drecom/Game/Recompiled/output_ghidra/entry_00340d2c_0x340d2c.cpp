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

// Function: entry_00340d2c
// Address: 0x340d2c - 0x340d44
void entry_00340d2c_0x340d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340d2c_0x340d2c");
#endif

    ctx->pc = 0x340d2cu;

    // 0x340d2c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x340D2Cu;
    {
        const bool branch_taken_0x340d2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x340d2c) {
            ctx->pc = 0x340D44u;
            return;
        }
    }
    ctx->pc = 0x340D34u;
    // 0x340d34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x340d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x340d38: 0x12020002  beq         $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x340D38u;
    {
        const bool branch_taken_0x340d38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x340d38) {
            ctx->pc = 0x340D44u;
            return;
        }
    }
    ctx->pc = 0x340D40u;
    // 0x340d40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x340d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x340d44u;
}
