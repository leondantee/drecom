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

// Function: entry_0031e254
// Address: 0x31e254 - 0x31e260
void entry_0031e254_0x31e254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e254_0x31e254");
#endif

    ctx->pc = 0x31e254u;

    // 0x31e254: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x31e254u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e258: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x31E258u;
    {
        const bool branch_taken_0x31e258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e258) {
            ctx->pc = 0x31E2BCu;
            return;
        }
    }
    ctx->pc = 0x31E260u;
}
