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

// Function: entry_00330370
// Address: 0x330370 - 0x33037c
void entry_00330370_0x330370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00330370_0x330370");
#endif

    ctx->pc = 0x330370u;

    // 0x330370: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x330370u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x330374: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x330374u;
    {
        const bool branch_taken_0x330374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330374) {
            ctx->pc = 0x3303B0u;
            return;
        }
    }
    ctx->pc = 0x33037Cu;
}
