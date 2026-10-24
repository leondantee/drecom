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

// Function: entry_0028ed80
// Address: 0x28ed80 - 0x28ed8c
void entry_0028ed80_0x28ed80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ed80_0x28ed80");
#endif

    ctx->pc = 0x28ed80u;

    // 0x28ed80: 0x2411009b  addiu       $s1, $zero, 0x9B
    ctx->pc = 0x28ed80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x28ed84: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28ED84u;
    {
        const bool branch_taken_0x28ed84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed84) {
            ctx->pc = 0x28EDDCu;
            return;
        }
    }
    ctx->pc = 0x28ED8Cu;
}
