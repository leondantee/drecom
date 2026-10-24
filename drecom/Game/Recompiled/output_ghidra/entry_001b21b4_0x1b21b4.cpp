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

// Function: entry_001b21b4
// Address: 0x1b21b4 - 0x1b21c4
void entry_001b21b4_0x1b21b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b21b4_0x1b21b4");
#endif

    ctx->pc = 0x1b21b4u;

    // 0x1b21b4: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x1b21b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1b21b8: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x1b21b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b21bc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1B21BCu;
    {
        const bool branch_taken_0x1b21bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b21bc) {
            ctx->pc = 0x1B2258u;
            return;
        }
    }
    ctx->pc = 0x1B21C4u;
}
