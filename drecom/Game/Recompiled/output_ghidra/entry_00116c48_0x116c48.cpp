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

// Function: entry_00116c48
// Address: 0x116c48 - 0x116c8c
void entry_00116c48_0x116c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116c48_0x116c48");
#endif

    switch (ctx->pc) {
        case 0x116c54u: goto label_116c54;
        default: break;
    }

    ctx->pc = 0x116c48u;

    // 0x116c48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x116c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c4c: 0xc046372  jal         func_118DC8
    ctx->pc = 0x116C4Cu;
    SET_GPR_U32(ctx, 31, 0x116C54u);
    ctx->pc = 0x116C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C4Cu;
    // 0x116c50: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x116C4Cu, 0x116C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C54u;
label_116c54:
    // 0x116c54: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x116C54u;
    {
        const bool branch_taken_0x116c54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x116C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C54u;
        // 0x116c58: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c54) {
            ctx->pc = 0x116C8Cu;
            return;
        }
    }
    ctx->pc = 0x116C5Cu;
    // 0x116c5c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x116C5Cu;
    {
        const bool branch_taken_0x116c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116c5c) {
            ctx->pc = 0x116C8Cu;
            return;
        }
    }
    ctx->pc = 0x116C64u;
    // 0x116c64: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x116c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x116c68: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x116c68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x116c6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x116c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x116c70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116C70u;
    {
        const bool branch_taken_0x116c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C70u;
        // 0x116c74: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c70) {
            ctx->pc = 0x116C8Cu;
            return;
        }
    }
    ctx->pc = 0x116C78u;
    // 0x116c78: 0x1262002a  beq         $s3, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x116C78u;
    {
        const bool branch_taken_0x116c78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x116C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C78u;
        // 0x116c7c: 0x10102a  slt         $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c78) {
            ctx->pc = 0x116D24u;
            return;
        }
    }
    ctx->pc = 0x116C80u;
    // 0x116c80: 0x539821  addu        $s3, $v0, $s3
    ctx->pc = 0x116c80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x116c84: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x116C84u;
    {
        const bool branch_taken_0x116c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C84u;
        // 0x116c88: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c84) {
            ctx->pc = 0x116E4Cu;
            return;
        }
    }
    ctx->pc = 0x116C8Cu;
}
