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

// Function: entry_0016f160
// Address: 0x16f160 - 0x16f16c
void entry_0016f160_0x16f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f160_0x16f160");
#endif

    ctx->pc = 0x16f160u;

    // 0x16f160: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x16f160u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16f164: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16F164u;
    {
        const bool branch_taken_0x16f164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f164) {
            ctx->pc = 0x16F1A0u;
            return;
        }
    }
    ctx->pc = 0x16F16Cu;
}
