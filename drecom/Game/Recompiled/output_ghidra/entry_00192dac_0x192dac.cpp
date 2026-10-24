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

// Function: entry_00192dac
// Address: 0x192dac - 0x192dc0
void entry_00192dac_0x192dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192dac_0x192dac");
#endif

    ctx->pc = 0x192dacu;

    // 0x192dac: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x192dacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x192db0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x192db0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x192db4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x192db4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x192db8: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x192DB8u;
    {
        const bool branch_taken_0x192db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192db8) {
            ctx->pc = 0x193038u;
            return;
        }
    }
    ctx->pc = 0x192DC0u;
}
