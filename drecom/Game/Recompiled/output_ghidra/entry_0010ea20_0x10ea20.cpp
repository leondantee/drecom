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

// Function: entry_0010ea20
// Address: 0x10ea20 - 0x10ea40
void entry_0010ea20_0x10ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea20_0x10ea20");
#endif

    switch (ctx->pc) {
        case 0x10ea28u: goto label_10ea28;
        default: break;
    }

    ctx->pc = 0x10ea20u;

    // 0x10ea20: 0xc0854d2  jal         func_215348
    ctx->pc = 0x10EA20u;
    SET_GPR_U32(ctx, 31, 0x10EA28u);
    ctx->pc = 0x10EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA20u;
    // 0x10ea24: 0x3c120038  lui         $s2, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215348u;
    {
        ctx->pc = 0x10EA28u;
        ps2_stubs::sceSifInitRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EA28u) { return; }
    ctx->pc = 0x10EA28u;
label_10ea28:
    // 0x10ea28: 0x8e4245dc  lw          $v0, 0x45DC($s2)
    ctx->pc = 0x10ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17884)));
    // 0x10ea2c: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x10EA2Cu;
    {
        const bool branch_taken_0x10ea2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA2Cu;
        // 0x10ea30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea2c) {
            ctx->pc = 0x10EAD8u;
            return;
        }
    }
    ctx->pc = 0x10EA34u;
    // 0x10ea34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10EA34u;
    {
        const bool branch_taken_0x10ea34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA34u;
        // 0x10ea38: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea34) {
            ctx->pc = 0x10EA64u;
            return;
        }
    }
    ctx->pc = 0x10EA3Cu;
    // 0x10ea3c: 0x0  nop
    ctx->pc = 0x10ea3cu;
    // NOP
    ctx->pc = 0x10ea40u;
}
