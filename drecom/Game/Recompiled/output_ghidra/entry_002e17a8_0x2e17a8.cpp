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

// Function: entry_002e17a8
// Address: 0x2e17a8 - 0x2e17b4
void entry_002e17a8_0x2e17a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e17a8_0x2e17a8");
#endif

    ctx->pc = 0x2e17a8u;

    // 0x2e17a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2e17a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e17ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E17ACu;
    {
        const bool branch_taken_0x2e17ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e17ac) {
            ctx->pc = 0x2E17E8u;
            return;
        }
    }
    ctx->pc = 0x2E17B4u;
}
