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

// Function: entry_0012eac4
// Address: 0x12eac4 - 0x12ead0
void entry_0012eac4_0x12eac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eac4_0x12eac4");
#endif

    ctx->pc = 0x12eac4u;

    // 0x12eac4: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x12eac4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12eac8: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x12EAC8u;
    {
        const bool branch_taken_0x12eac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eac8) {
            ctx->pc = 0x12EE48u;
            return;
        }
    }
    ctx->pc = 0x12EAD0u;
}
