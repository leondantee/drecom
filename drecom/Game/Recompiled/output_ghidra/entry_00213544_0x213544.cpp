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

// Function: entry_00213544
// Address: 0x213544 - 0x213560
void entry_00213544_0x213544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213544_0x213544");
#endif

    switch (ctx->pc) {
        case 0x21354cu: goto label_21354c;
        default: break;
    }

    ctx->pc = 0x213544u;

    // 0x213544: 0xc0849d8  jal         func_212760
    ctx->pc = 0x213544u;
    SET_GPR_U32(ctx, 31, 0x21354Cu);
    ctx->pc = 0x212760u;
    {
        ctx->pc = 0x21354Cu;
        ps2_syscalls::EnableIntc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21354Cu) { return; }
    ctx->pc = 0x21354Cu;
label_21354c:
    // 0x21354c: 0xf  sync
    ctx->pc = 0x21354cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x213550: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213550u;
    {
        const bool branch_taken_0x213550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x213554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213550u;
        // 0x213554: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213550) {
            ctx->pc = 0x213560u;
            return;
        }
    }
    ctx->pc = 0x213558u;
    // 0x213558: 0x42000038  ei
    ctx->pc = 0x213558u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x21355c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21355cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x213560u;
}
