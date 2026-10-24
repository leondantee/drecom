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

// Function: entry_0010d0c4
// Address: 0x10d0c4 - 0x10d0cc
void entry_0010d0c4_0x10d0c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d0c4_0x10d0c4");
#endif

    ctx->pc = 0x10d0c4u;

    // 0x10d0c4: 0xc084a98  jal         func_212A60
    ctx->pc = 0x10D0C4u;
    SET_GPR_U32(ctx, 31, 0x10D0CCu);
    ctx->pc = 0x10D0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D0C4u;
    // 0x10d0c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x10D0CCu;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D0CCu) { return; }
    ctx->pc = 0x10D0CCu;
}
