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

// Function: entry_0018f598
// Address: 0x18f598 - 0x18f5a4
void entry_0018f598_0x18f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f598_0x18f598");
#endif

    ctx->pc = 0x18f598u;

    // 0x18f598: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18f598u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18f59c: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x18F59Cu;
    {
        const bool branch_taken_0x18f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f59c) {
            ctx->pc = 0x18FA60u;
            return;
        }
    }
    ctx->pc = 0x18F5A4u;
}
