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

// Function: entry_002963f8
// Address: 0x2963f8 - 0x296408
void entry_002963f8_0x2963f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002963f8_0x2963f8");
#endif

    ctx->pc = 0x2963f8u;

    // 0x2963f8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2963f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2963fc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2963fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296400: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x296400u;
    {
        const bool branch_taken_0x296400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296400) {
            ctx->pc = 0x296578u;
            return;
        }
    }
    ctx->pc = 0x296408u;
}
