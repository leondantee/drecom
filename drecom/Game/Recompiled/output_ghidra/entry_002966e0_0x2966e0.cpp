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

// Function: entry_002966e0
// Address: 0x2966e0 - 0x2966ec
void entry_002966e0_0x2966e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002966e0_0x2966e0");
#endif

    ctx->pc = 0x2966e0u;

    // 0x2966e0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2966e0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2966e4: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x2966E4u;
    {
        const bool branch_taken_0x2966e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2966e4) {
            ctx->pc = 0x296A38u;
            return;
        }
    }
    ctx->pc = 0x2966ECu;
}
