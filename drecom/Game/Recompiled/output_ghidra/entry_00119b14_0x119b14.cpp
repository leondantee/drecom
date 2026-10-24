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

// Function: entry_00119b14
// Address: 0x119b14 - 0x119b5c
void entry_00119b14_0x119b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119b14_0x119b14");
#endif

    switch (ctx->pc) {
        case 0x119b2cu: goto label_119b2c;
        default: break;
    }

    ctx->pc = 0x119b14u;

    // 0x119b14: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x119b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x119b18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x119b18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x119b1c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x119B1Cu;
    {
        const bool branch_taken_0x119b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B1Cu;
        // 0x119b20: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b1c) {
            ctx->pc = 0x119B84u;
            return;
        }
    }
    ctx->pc = 0x119B24u;
    // 0x119b24: 0xc046438  jal         func_1190E0
    ctx->pc = 0x119B24u;
    SET_GPR_U32(ctx, 31, 0x119B2Cu);
    ctx->pc = 0x119B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B24u;
    // 0x119b28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1190E0u, 0x119B24u, 0x119B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B2Cu;
label_119b2c:
    // 0x119b2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x119b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b30: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x119B30u;
    {
        const bool branch_taken_0x119b30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B30u;
        // 0x119b34: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b30) {
            ctx->pc = 0x119B5Cu;
            return;
        }
    }
    ctx->pc = 0x119B38u;
    // 0x119b38: 0x52023  negu        $a0, $a1
    ctx->pc = 0x119b38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x119b3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x119b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119b40: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x119b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x119b44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x119b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x119b48: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x119b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x119b4c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x119b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x119b50: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x119b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x119b54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x119B54u;
    {
        const bool branch_taken_0x119b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B54u;
        // 0x119b58: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b54) {
            ctx->pc = 0x119B64u;
            return;
        }
    }
    ctx->pc = 0x119B5Cu;
}
