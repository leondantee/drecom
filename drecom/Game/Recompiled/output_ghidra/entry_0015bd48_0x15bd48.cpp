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

// Function: entry_0015bd48
// Address: 0x15bd48 - 0x15bd54
void entry_0015bd48_0x15bd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bd48_0x15bd48");
#endif

    ctx->pc = 0x15bd48u;

    // 0x15bd48: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x15bd48u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15bd4c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x15BD4Cu;
    {
        const bool branch_taken_0x15bd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd4c) {
            ctx->pc = 0x15BF08u;
            return;
        }
    }
    ctx->pc = 0x15BD54u;
}
