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

// Function: entry_002135ac
// Address: 0x2135ac - 0x2135c8
void entry_002135ac_0x2135ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002135ac_0x2135ac");
#endif

    switch (ctx->pc) {
        case 0x2135b4u: goto label_2135b4;
        default: break;
    }

    ctx->pc = 0x2135acu;

    // 0x2135ac: 0xc0849e4  jal         func_212790
    ctx->pc = 0x2135ACu;
    SET_GPR_U32(ctx, 31, 0x2135B4u);
    ctx->pc = 0x212790u;
    {
        ctx->pc = 0x2135B4u;
        ps2_syscalls::DisableDmac(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2135B4u) { return; }
    ctx->pc = 0x2135B4u;
label_2135b4:
    // 0x2135b4: 0xf  sync
    ctx->pc = 0x2135b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2135b8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2135B8u;
    {
        const bool branch_taken_0x2135b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2135BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135B8u;
        // 0x2135bc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135b8) {
            ctx->pc = 0x2135C8u;
            return;
        }
    }
    ctx->pc = 0x2135C0u;
    // 0x2135c0: 0x42000038  ei
    ctx->pc = 0x2135c0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2135c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2135c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x2135c8u;
}
