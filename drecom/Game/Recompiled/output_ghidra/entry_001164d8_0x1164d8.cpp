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

// Function: entry_001164d8
// Address: 0x1164d8 - 0x116508
void entry_001164d8_0x1164d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001164d8_0x1164d8");
#endif

    switch (ctx->pc) {
        case 0x1164fcu: goto label_1164fc;
        default: break;
    }

    ctx->pc = 0x1164d8u;

    // 0x1164d8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1164d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1164dc: 0x2463da08  addiu       $v1, $v1, -0x25F8
    ctx->pc = 0x1164dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957576));
    // 0x1164e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1164e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1164e4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1164e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1164e8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1164e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1164ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1164ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1164f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1164f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1164f4: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1164F4u;
    SET_GPR_U32(ctx, 31, 0x1164FCu);
    ctx->pc = 0x1164F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1164F4u;
    // 0x1164f8: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1164F4u, 0x1164FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1164FCu;
label_1164fc:
    // 0x1164fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1164FCu;
    {
        const bool branch_taken_0x1164fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164FCu;
        // 0x116500: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1164fc) {
            ctx->pc = 0x116520u;
            return;
        }
    }
    ctx->pc = 0x116504u;
    // 0x116504: 0x0  nop
    ctx->pc = 0x116504u;
    // NOP
    ctx->pc = 0x116508u;
}
