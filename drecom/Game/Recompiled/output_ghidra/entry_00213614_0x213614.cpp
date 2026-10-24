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

// Function: entry_00213614
// Address: 0x213614 - 0x213630
void entry_00213614_0x213614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213614_0x213614");
#endif

    switch (ctx->pc) {
        case 0x21361cu: goto label_21361c;
        default: break;
    }

    ctx->pc = 0x213614u;

    // 0x213614: 0xc0849e0  jal         func_212780
    ctx->pc = 0x213614u;
    SET_GPR_U32(ctx, 31, 0x21361Cu);
    ctx->pc = 0x212780u;
    {
        ctx->pc = 0x21361Cu;
        ps2_syscalls::EnableDmac(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21361Cu) { return; }
    ctx->pc = 0x21361Cu;
label_21361c:
    // 0x21361c: 0xf  sync
    ctx->pc = 0x21361cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x213620: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213620u;
    {
        const bool branch_taken_0x213620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x213624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213620u;
        // 0x213624: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213620) {
            ctx->pc = 0x213630u;
            return;
        }
    }
    ctx->pc = 0x213628u;
    // 0x213628: 0x42000038  ei
    ctx->pc = 0x213628u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x21362c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21362cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x213630u;
}
