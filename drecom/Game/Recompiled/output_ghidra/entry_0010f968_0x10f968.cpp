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

// Function: entry_0010f968
// Address: 0x10f968 - 0x10f974
void entry_0010f968_0x10f968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f968_0x10f968");
#endif

    switch (ctx->pc) {
        case 0x10f970u: goto label_10f970;
        default: break;
    }

    ctx->pc = 0x10f968u;

    // 0x10f968: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F968u;
    SET_GPR_U32(ctx, 31, 0x10F970u);
    ctx->pc = 0x10F96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F968u;
    // 0x10f96c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F970u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F970u) { return; }
    ctx->pc = 0x10F970u;
label_10f970:
    // 0x10f970: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10f970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10f974u;
}
