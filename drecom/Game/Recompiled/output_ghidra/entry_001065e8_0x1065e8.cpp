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

// Function: entry_001065e8
// Address: 0x1065e8 - 0x10662c
void entry_001065e8_0x1065e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001065e8_0x1065e8");
#endif

    switch (ctx->pc) {
        case 0x106624u: goto label_106624;
        default: break;
    }

    ctx->pc = 0x1065e8u;

    // 0x1065e8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1065e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1065ec: 0x8c433dac  lw          $v1, 0x3DAC($v0)
    ctx->pc = 0x1065ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DACu));
    // 0x1065f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1065f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1065f4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1065F4u;
    {
        const bool branch_taken_0x1065f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1065F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065F4u;
        // 0x1065f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065f4) {
            ctx->pc = 0x10662Cu;
            return;
        }
    }
    ctx->pc = 0x1065FCu;
    // 0x1065fc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1065fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x106600: 0x8c433db4  lw          $v1, 0x3DB4($v0)
    ctx->pc = 0x106600u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DB4u));
    // 0x106604: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x106604u;
    {
        const bool branch_taken_0x106604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106604u;
        // 0x106608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106604) {
            ctx->pc = 0x10662Cu;
            return;
        }
    }
    ctx->pc = 0x10660Cu;
    // 0x10660c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x10660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106610: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x106610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x106614: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106614u;
    {
        const bool branch_taken_0x106614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106614u;
        // 0x106618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106614) {
            ctx->pc = 0x10662Cu;
            return;
        }
    }
    ctx->pc = 0x10661Cu;
    // 0x10661c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10661Cu;
    SET_GPR_U32(ctx, 31, 0x106624u);
    ctx->pc = 0x106620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10661Cu;
    // 0x106620: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10661Cu, 0x106624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106624u;
label_106624:
    // 0x106624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106624u;
    {
        const bool branch_taken_0x106624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106624u;
        // 0x106628: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106624) {
            ctx->pc = 0x106630u;
            return;
        }
    }
    ctx->pc = 0x10662Cu;
}
