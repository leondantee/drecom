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

// Function: entry_0010ee1c
// Address: 0x10ee1c - 0x10ee70
void entry_0010ee1c_0x10ee1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ee1c_0x10ee1c");
#endif

    switch (ctx->pc) {
        case 0x10ee24u: goto label_10ee24;
        case 0x10ee30u: goto label_10ee30;
        case 0x10ee44u: goto label_10ee44;
        case 0x10ee54u: goto label_10ee54;
        default: break;
    }

    ctx->pc = 0x10ee1cu;

    // 0x10ee1c: 0xc043506  jal         func_10D418
    ctx->pc = 0x10EE1Cu;
    SET_GPR_U32(ctx, 31, 0x10EE24u);
    ctx->pc = 0x10EE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE1Cu;
    // 0x10ee20: 0x3c130038  lui         $s3, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D418u, 0x10EE1Cu, 0x10EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE24u;
label_10ee24:
    // 0x10ee24: 0x8e6445bc  lw          $a0, 0x45BC($s3)
    ctx->pc = 0x10ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17852)));
    // 0x10ee28: 0xc084a9c  jal         func_212A70
    ctx->pc = 0x10EE28u;
    SET_GPR_U32(ctx, 31, 0x10EE30u);
    ctx->pc = 0x212A70u;
    {
        ctx->pc = 0x10EE30u;
        ps2_syscalls::PollSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EE30u) { return; }
    ctx->pc = 0x10EE30u;
label_10ee30:
    // 0x10ee30: 0x8e6345bc  lw          $v1, 0x45BC($s3)
    ctx->pc = 0x10ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17852)));
    // 0x10ee34: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x10EE34u;
    {
        const bool branch_taken_0x10ee34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE34u;
        // 0x10ee38: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee34) {
            ctx->pc = 0x10EFA4u;
            return;
        }
    }
    ctx->pc = 0x10EE3Cu;
    // 0x10ee3c: 0xc043a46  jal         func_10E918
    ctx->pc = 0x10EE3Cu;
    SET_GPR_U32(ctx, 31, 0x10EE44u);
    ctx->pc = 0x10EE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE3Cu;
    // 0x10ee40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E918u, 0x10EE3Cu, 0x10EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE44u;
label_10ee44:
    // 0x10ee44: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x10EE44u;
    {
        const bool branch_taken_0x10ee44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE44u;
        // 0x10ee48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee44) {
            ctx->pc = 0x10EF5Cu;
            return;
        }
    }
    ctx->pc = 0x10EE4Cu;
    // 0x10ee4c: 0xc0854d2  jal         func_215348
    ctx->pc = 0x10EE4Cu;
    SET_GPR_U32(ctx, 31, 0x10EE54u);
    ctx->pc = 0x10EE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EE4Cu;
    // 0x10ee50: 0x3c110038  lui         $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215348u;
    {
        ctx->pc = 0x10EE54u;
        ps2_stubs::sceSifInitRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EE54u) { return; }
    ctx->pc = 0x10EE54u;
label_10ee54:
    // 0x10ee54: 0x8e2245e0  lw          $v0, 0x45E0($s1)
    ctx->pc = 0x10ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17888)));
    // 0x10ee58: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x10EE58u;
    {
        const bool branch_taken_0x10ee58 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE58u;
        // 0x10ee5c: 0x3c15003b  lui         $s5, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee58) {
            ctx->pc = 0x10EF0Cu;
            return;
        }
    }
    ctx->pc = 0x10EE60u;
    // 0x10ee60: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x10ee60u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x10ee64: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10EE64u;
    {
        const bool branch_taken_0x10ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE64u;
        // 0x10ee68: 0x3c17003b  lui         $s7, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee64) {
            ctx->pc = 0x10EE94u;
            return;
        }
    }
    ctx->pc = 0x10EE6Cu;
    // 0x10ee6c: 0x0  nop
    ctx->pc = 0x10ee6cu;
    // NOP
    ctx->pc = 0x10ee70u;
}
