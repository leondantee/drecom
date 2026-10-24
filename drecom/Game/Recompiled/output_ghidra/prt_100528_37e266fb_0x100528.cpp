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

// Function: prt_100528_37e266fb
// Address: 0x100528 - 0x100530
void prt_100528_37e266fb_0x100528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("prt_100528_37e266fb_0x100528");
#endif

    ctx->pc = 0x100528u;

    // 0x100528: 0xc046760  jal         func_119D80
    ctx->pc = 0x100528u;
    SET_GPR_U32(ctx, 31, 0x100530u);
    ctx->pc = 0x10052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100528u;
    // 0x10052c: 0x2484c000  addiu       $a0, $a0, -0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x100530u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x100530u) { return; }
    ctx->pc = 0x100530u;
}
