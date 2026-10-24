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

// Function: entry_002755d0
// Address: 0x2755d0 - 0x2755e0
void entry_002755d0_0x2755d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002755d0_0x2755d0");
#endif

    ctx->pc = 0x2755d0u;

    // 0x2755d0: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x2755d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x2755d4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2755d4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2755d8: 0x100001b5  b           . + 4 + (0x1B5 << 2)
    ctx->pc = 0x2755D8u;
    {
        const bool branch_taken_0x2755d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2755d8) {
            ctx->pc = 0x275CB0u;
            return;
        }
    }
    ctx->pc = 0x2755E0u;
}
