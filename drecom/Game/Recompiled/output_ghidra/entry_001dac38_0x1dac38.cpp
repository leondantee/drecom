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

// Function: entry_001dac38
// Address: 0x1dac38 - 0x1dac44
void entry_001dac38_0x1dac38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dac38_0x1dac38");
#endif

    ctx->pc = 0x1dac38u;

    // 0x1dac38: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1dac38u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dac3c: 0x1000027a  b           . + 4 + (0x27A << 2)
    ctx->pc = 0x1DAC3Cu;
    {
        const bool branch_taken_0x1dac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dac3c) {
            ctx->pc = 0x1DB628u;
            return;
        }
    }
    ctx->pc = 0x1DAC44u;
}
