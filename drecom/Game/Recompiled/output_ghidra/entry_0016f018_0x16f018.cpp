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

// Function: entry_0016f018
// Address: 0x16f018 - 0x16f024
void entry_0016f018_0x16f018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f018_0x16f018");
#endif

    ctx->pc = 0x16f018u;

    // 0x16f018: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x16f018u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16f01c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16F01Cu;
    {
        const bool branch_taken_0x16f01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f01c) {
            ctx->pc = 0x16F040u;
            return;
        }
    }
    ctx->pc = 0x16F024u;
}
