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

// Function: entry_00158100
// Address: 0x158100 - 0x15810c
void entry_00158100_0x158100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158100_0x158100");
#endif

    ctx->pc = 0x158100u;

    // 0x158100: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x158100u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x158104: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x158104u;
    {
        const bool branch_taken_0x158104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158104) {
            ctx->pc = 0x1583C8u;
            return;
        }
    }
    ctx->pc = 0x15810Cu;
}
