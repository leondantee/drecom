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

// Function: entry_001c4578
// Address: 0x1c4578 - 0x1c4584
void entry_001c4578_0x1c4578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4578_0x1c4578");
#endif

    ctx->pc = 0x1c4578u;

    // 0x1c4578: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1c4578u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c457c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C457Cu;
    {
        const bool branch_taken_0x1c457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c457c) {
            ctx->pc = 0x1C4588u;
            return;
        }
    }
    ctx->pc = 0x1C4584u;
}
