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

// Function: entry_002136ec
// Address: 0x2136ec - 0x213708
void entry_002136ec_0x2136ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002136ec_0x2136ec");
#endif

    switch (ctx->pc) {
        case 0x2136f4u: goto label_2136f4;
        default: break;
    }

    ctx->pc = 0x2136ecu;

    // 0x2136ec: 0xc0849ec  jal         func_2127B0
    ctx->pc = 0x2136ECu;
    SET_GPR_U32(ctx, 31, 0x2136F4u);
    ctx->pc = 0x2127B0u;
    {
        ctx->pc = 0x2136F4u;
        ps2_syscalls::ReleaseAlarm(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2136F4u) { return; }
    ctx->pc = 0x2136F4u;
label_2136f4:
    // 0x2136f4: 0xf  sync
    ctx->pc = 0x2136f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2136f8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2136F8u;
    {
        const bool branch_taken_0x2136f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2136FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136F8u;
        // 0x2136fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136f8) {
            ctx->pc = 0x213708u;
            return;
        }
    }
    ctx->pc = 0x213700u;
    // 0x213700: 0x42000038  ei
    ctx->pc = 0x213700u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x213704: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x213704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x213708u;
}
