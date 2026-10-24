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

// Function: entry_00377258
// Address: 0x377258 - 0x377264
void entry_00377258_0x377258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377258_0x377258");
#endif

    ctx->pc = 0x377258u;

    // 0x377258: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x377258u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37725c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x37725Cu;
    {
        const bool branch_taken_0x37725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37725c) {
            ctx->pc = 0x3772F0u;
            return;
        }
    }
    ctx->pc = 0x377264u;
}
