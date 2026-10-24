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

// Function: entry_00115a90
// Address: 0x115a90 - 0x115a98
void entry_00115a90_0x115a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115a90_0x115a90");
#endif

    ctx->pc = 0x115a90u;

    // 0x115a90: 0xc046314  jal         func_118C50
    ctx->pc = 0x115A90u;
    SET_GPR_U32(ctx, 31, 0x115A98u);
    ctx->pc = 0x115A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115A90u;
    // 0x115a94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x115A98u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x115A98u) { return; }
    ctx->pc = 0x115A98u;
}
