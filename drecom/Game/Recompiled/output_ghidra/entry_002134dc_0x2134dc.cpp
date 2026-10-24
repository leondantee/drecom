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

// Function: entry_002134dc
// Address: 0x2134dc - 0x2134f8
void entry_002134dc_0x2134dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002134dc_0x2134dc");
#endif

    switch (ctx->pc) {
        case 0x2134e4u: goto label_2134e4;
        default: break;
    }

    ctx->pc = 0x2134dcu;

    // 0x2134dc: 0xc0849dc  jal         func_212770
    ctx->pc = 0x2134DCu;
    SET_GPR_U32(ctx, 31, 0x2134E4u);
    ctx->pc = 0x212770u;
    {
        ctx->pc = 0x2134E4u;
        ps2_syscalls::DisableIntc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2134E4u) { return; }
    ctx->pc = 0x2134E4u;
label_2134e4:
    // 0x2134e4: 0xf  sync
    ctx->pc = 0x2134e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2134e8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2134E8u;
    {
        const bool branch_taken_0x2134e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2134ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134E8u;
        // 0x2134ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134e8) {
            ctx->pc = 0x2134F8u;
            return;
        }
    }
    ctx->pc = 0x2134F0u;
    // 0x2134f0: 0x42000038  ei
    ctx->pc = 0x2134f0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2134f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2134f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x2134f8u;
}
