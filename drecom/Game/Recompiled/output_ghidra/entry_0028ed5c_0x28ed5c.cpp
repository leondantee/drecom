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

// Function: entry_0028ed5c
// Address: 0x28ed5c - 0x28ed68
void entry_0028ed5c_0x28ed5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ed5c_0x28ed5c");
#endif

    ctx->pc = 0x28ed5cu;

    // 0x28ed5c: 0x2411009c  addiu       $s1, $zero, 0x9C
    ctx->pc = 0x28ed5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x28ed60: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x28ED60u;
    {
        const bool branch_taken_0x28ed60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed60) {
            ctx->pc = 0x28EDDCu;
            return;
        }
    }
    ctx->pc = 0x28ED68u;
}
