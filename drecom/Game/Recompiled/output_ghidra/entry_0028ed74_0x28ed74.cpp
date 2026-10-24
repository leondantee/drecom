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

// Function: entry_0028ed74
// Address: 0x28ed74 - 0x28ed80
void entry_0028ed74_0x28ed74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ed74_0x28ed74");
#endif

    ctx->pc = 0x28ed74u;

    // 0x28ed74: 0x2411009b  addiu       $s1, $zero, 0x9B
    ctx->pc = 0x28ed74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x28ed78: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x28ED78u;
    {
        const bool branch_taken_0x28ed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed78) {
            ctx->pc = 0x28EDDCu;
            return;
        }
    }
    ctx->pc = 0x28ED80u;
}
