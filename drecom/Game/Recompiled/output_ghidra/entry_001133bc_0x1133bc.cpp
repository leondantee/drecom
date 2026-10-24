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

// Function: entry_001133bc
// Address: 0x1133bc - 0x1133e0
void entry_001133bc_0x1133bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001133bc_0x1133bc");
#endif

    switch (ctx->pc) {
        case 0x1133c8u: goto label_1133c8;
        default: break;
    }

    ctx->pc = 0x1133bcu;

    // 0x1133bc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1133bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1133c0: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1133C0u;
    SET_GPR_U32(ctx, 31, 0x1133C8u);
    ctx->pc = 0x1133C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133C0u;
    // 0x1133c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1133C0u, 0x1133C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133C8u;
label_1133c8:
    // 0x1133c8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1133c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1133cc: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1133CCu;
    {
        const bool branch_taken_0x1133cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1133D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133CCu;
        // 0x1133d0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133cc) {
            ctx->pc = 0x113404u;
            return;
        }
    }
    ctx->pc = 0x1133D4u;
    // 0x1133d4: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x1133d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1133d8: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x1133d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1133dc: 0x0  nop
    ctx->pc = 0x1133dcu;
    // NOP
    ctx->pc = 0x1133e0u;
}
