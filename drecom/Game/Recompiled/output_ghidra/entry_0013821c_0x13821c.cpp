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

// Function: entry_0013821c
// Address: 0x13821c - 0x13822c
void entry_0013821c_0x13821c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013821c_0x13821c");
#endif

    ctx->pc = 0x13821cu;

    // 0x13821c: 0xa260009c  sb          $zero, 0x9C($s3)
    ctx->pc = 0x13821cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x138220: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138220u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138224: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x138224u;
    {
        const bool branch_taken_0x138224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138224) {
            ctx->pc = 0x138278u;
            return;
        }
    }
    ctx->pc = 0x13822Cu;
}
