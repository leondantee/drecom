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

// Function: entry_0011715c
// Address: 0x11715c - 0x117168
void entry_0011715c_0x11715c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011715c_0x11715c");
#endif

    switch (ctx->pc) {
        case 0x117164u: goto label_117164;
        default: break;
    }

    ctx->pc = 0x11715cu;

    // 0x11715c: 0xc046314  jal         func_118C50
    ctx->pc = 0x11715Cu;
    SET_GPR_U32(ctx, 31, 0x117164u);
    ctx->pc = 0x117160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11715Cu;
    // 0x117160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x117164u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117164u) { return; }
    ctx->pc = 0x117164u;
label_117164:
    // 0x117164: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x117164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117168u;
}
