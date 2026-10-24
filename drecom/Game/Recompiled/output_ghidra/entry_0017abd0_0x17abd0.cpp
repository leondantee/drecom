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

// Function: entry_0017abd0
// Address: 0x17abd0 - 0x17abdc
void entry_0017abd0_0x17abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017abd0_0x17abd0");
#endif

    ctx->pc = 0x17abd0u;

    // 0x17abd0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x17abd0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17abd4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x17ABD4u;
    {
        const bool branch_taken_0x17abd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17abd4) {
            ctx->pc = 0x17ACB0u;
            return;
        }
    }
    ctx->pc = 0x17ABDCu;
}
