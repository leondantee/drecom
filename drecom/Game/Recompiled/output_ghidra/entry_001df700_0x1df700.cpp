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

// Function: entry_001df700
// Address: 0x1df700 - 0x1df70c
void entry_001df700_0x1df700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df700_0x1df700");
#endif

    ctx->pc = 0x1df700u;

    // 0x1df700: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1df700u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1df704: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1DF704u;
    {
        const bool branch_taken_0x1df704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df704) {
            ctx->pc = 0x1DF7E8u;
            return;
        }
    }
    ctx->pc = 0x1DF70Cu;
}
