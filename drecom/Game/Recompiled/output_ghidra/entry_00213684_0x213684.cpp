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

// Function: entry_00213684
// Address: 0x213684 - 0x2136a0
void entry_00213684_0x213684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213684_0x213684");
#endif

    switch (ctx->pc) {
        case 0x21368cu: goto label_21368c;
        default: break;
    }

    ctx->pc = 0x213684u;

    // 0x213684: 0xc0849e8  jal         func_2127A0
    ctx->pc = 0x213684u;
    SET_GPR_U32(ctx, 31, 0x21368Cu);
    ctx->pc = 0x2127A0u;
    {
        ctx->pc = 0x21368Cu;
        ps2_syscalls::SetAlarm(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21368Cu) { return; }
    ctx->pc = 0x21368Cu;
label_21368c:
    // 0x21368c: 0xf  sync
    ctx->pc = 0x21368cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x213690: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213690u;
    {
        const bool branch_taken_0x213690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x213694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213690u;
        // 0x213694: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213690) {
            ctx->pc = 0x2136A0u;
            return;
        }
    }
    ctx->pc = 0x213698u;
    // 0x213698: 0x42000038  ei
    ctx->pc = 0x213698u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x21369c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21369cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x2136a0u;
}
