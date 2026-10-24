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

// Function: entry_0019fbc8
// Address: 0x19fbc8 - 0x19fbdc
void entry_0019fbc8_0x19fbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fbc8_0x19fbc8");
#endif

    ctx->pc = 0x19fbc8u;

    // 0x19fbc8: 0x1e000004  bgtz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FBC8u;
    {
        const bool branch_taken_0x19fbc8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x19fbc8) {
            ctx->pc = 0x19FBDCu;
            return;
        }
    }
    ctx->pc = 0x19FBD0u;
    // 0x19fbd0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x19fbd0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19fbd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19FBD4u;
    {
        const bool branch_taken_0x19fbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fbd4) {
            ctx->pc = 0x19FBE0u;
            return;
        }
    }
    ctx->pc = 0x19FBDCu;
}
