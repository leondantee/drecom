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

// Function: entry_001884d4
// Address: 0x1884d4 - 0x1884e4
void entry_001884d4_0x1884d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001884d4_0x1884d4");
#endif

    ctx->pc = 0x1884d4u;

    // 0x1884d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1884d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1884d8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1884d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1884dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1884DCu;
    {
        const bool branch_taken_0x1884dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1884dc) {
            ctx->pc = 0x1884ECu;
            return;
        }
    }
    ctx->pc = 0x1884E4u;
}
