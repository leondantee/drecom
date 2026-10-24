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

// Function: entry_00101510
// Address: 0x101510 - 0x101524
void entry_00101510_0x101510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101510_0x101510");
#endif

    switch (ctx->pc) {
        case 0x10151cu: goto label_10151c;
        default: break;
    }

    ctx->pc = 0x101510u;

    // 0x101510: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x101510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x101514: 0xc046760  jal         func_119D80
    ctx->pc = 0x101514u;
    SET_GPR_U32(ctx, 31, 0x10151Cu);
    ctx->pc = 0x101518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101514u;
    // 0x101518: 0x2484c330  addiu       $a0, $a0, -0x3CD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10151Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10151Cu) { return; }
    ctx->pc = 0x10151Cu;
label_10151c:
    // 0x10151c: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x10151Cu;
    {
        const bool branch_taken_0x10151c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10151Cu;
        // 0x101520: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10151c) {
            ctx->pc = 0x1017CCu;
            return;
        }
    }
    ctx->pc = 0x101524u;
}
