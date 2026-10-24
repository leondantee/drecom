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

// Function: entry_00289b24
// Address: 0x289b24 - 0x289b30
void entry_00289b24_0x289b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289b24_0x289b24");
#endif

    ctx->pc = 0x289b24u;

    // 0x289b24: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x289b24u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x289b28: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x289B28u;
    {
        const bool branch_taken_0x289b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289b28) {
            ctx->pc = 0x289B90u;
            return;
        }
    }
    ctx->pc = 0x289B30u;
}
