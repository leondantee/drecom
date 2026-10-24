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

// Function: entry_0019f724
// Address: 0x19f724 - 0x19f730
void entry_0019f724_0x19f724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f724_0x19f724");
#endif

    ctx->pc = 0x19f724u;

    // 0x19f724: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x19f724u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19f728: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19F728u;
    {
        const bool branch_taken_0x19f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f728) {
            ctx->pc = 0x19F760u;
            return;
        }
    }
    ctx->pc = 0x19F730u;
}
