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

// Function: entry_0032a118
// Address: 0x32a118 - 0x32a128
void entry_0032a118_0x32a118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a118_0x32a118");
#endif

    ctx->pc = 0x32a118u;

    // 0x32a118: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x32a118u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32a11c: 0x1480ff3a  bnez        $a0, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x32A11Cu;
    {
        const bool branch_taken_0x32a11c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a11c) {
            ctx->pc = 0x329E08u;
            return;
        }
    }
    ctx->pc = 0x32A124u;
    // 0x32a124: 0x0  nop
    ctx->pc = 0x32a124u;
    // NOP
    ctx->pc = 0x32a128u;
}
