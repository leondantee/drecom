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

// Function: entry_00333bd4
// Address: 0x333bd4 - 0x333be0
void entry_00333bd4_0x333bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333bd4_0x333bd4");
#endif

    ctx->pc = 0x333bd4u;

    // 0x333bd4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x333bd4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333bd8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x333BD8u;
    {
        const bool branch_taken_0x333bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333bd8) {
            ctx->pc = 0x333C30u;
            return;
        }
    }
    ctx->pc = 0x333BE0u;
}
