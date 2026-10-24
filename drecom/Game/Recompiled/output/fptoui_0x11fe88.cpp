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

// Function: fptoui
// Address: 0x11fe88 - 0x11ff20
void fptoui_0x11fe88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptoui_0x11fe88");
#endif

    switch (ctx->pc) {
        case 0x11fea0u: goto label_11fea0;
        case 0x11feb8u: goto label_11feb8;
        default: break;
    }

    ctx->pc = 0x11fe88u;

    // 0x11fe88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11fe88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11fe8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11fe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11fe90: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11fe94: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x11fe94u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11fe98: 0xc047d3e  jal         func_11F4F8
    ctx->pc = 0x11FE98u;
    SET_GPR_U32(ctx, 31, 0x11FEA0u);
    ctx->pc = 0x11FE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FE98u;
    // 0x11fe9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F4F8u, 0x11FE98u, 0x11FEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FEA0u;
label_11fea0:
    // 0x11fea0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fea4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x11fea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x11fea8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FEA8u;
    {
        const bool branch_taken_0x11fea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEA8u;
        // 0x11feac: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fea8) {
            ctx->pc = 0x11FEB8u;
            goto label_11feb8;
        }
    }
    ctx->pc = 0x11FEB0u;
    // 0x11feb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FEB0u;
    {
        const bool branch_taken_0x11feb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEB0u;
        // 0x11feb4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11feb0) {
            ctx->pc = 0x11FEC0u;
            goto label_11fec0;
        }
    }
    ctx->pc = 0x11FEB8u;
label_11feb8:
    // 0x11feb8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11FEB8u;
    {
        const bool branch_taken_0x11feb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEB8u;
        // 0x11febc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11feb8) {
            ctx->pc = 0x11FF14u;
            goto label_11ff14;
        }
    }
    ctx->pc = 0x11FEC0u;
label_11fec0:
    // 0x11fec0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11FEC0u;
    {
        const bool branch_taken_0x11fec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEC0u;
        // 0x11fec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fec0) {
            ctx->pc = 0x11FF14u;
            goto label_11ff14;
        }
    }
    ctx->pc = 0x11FEC8u;
    // 0x11fec8: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x11fec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x11fecc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FECCu;
    {
        const bool branch_taken_0x11fecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FECCu;
        // 0x11fed0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fecc) {
            ctx->pc = 0x11FEE4u;
            goto label_11fee4;
        }
    }
    ctx->pc = 0x11FED4u;
    // 0x11fed4: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11FED4u;
    {
        const bool branch_taken_0x11fed4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FED4u;
        // 0x11fed8: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fed4) {
            ctx->pc = 0x11FEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11feb8;
        }
    }
    ctx->pc = 0x11FEDCu;
    // 0x11fedc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FEDCu;
    {
        const bool branch_taken_0x11fedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fedc) {
            ctx->pc = 0x11FEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FEDCu;
            // 0x11fee0: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FEF0u;
            goto label_11fef0;
        }
    }
    ctx->pc = 0x11FEE4u;
label_11fee4:
    // 0x11fee4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11fee8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11FEE8u;
    {
        const bool branch_taken_0x11fee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEE8u;
        // 0x11feec: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fee8) {
            ctx->pc = 0x11FF14u;
            goto label_11ff14;
        }
    }
    ctx->pc = 0x11FEF0u;
label_11fef0:
    // 0x11fef0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FEF0u;
    {
        const bool branch_taken_0x11fef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fef0) {
            ctx->pc = 0x11FEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FEF0u;
            // 0x11fef4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FF08u;
            goto label_11ff08;
        }
    }
    ctx->pc = 0x11FEF8u;
    // 0x11fef8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x11fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11fefc: 0x2482ffe2  addiu       $v0, $a0, -0x1E
    ctx->pc = 0x11fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x11ff00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11FF00u;
    {
        const bool branch_taken_0x11ff00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF00u;
        // 0x11ff04: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff00) {
            ctx->pc = 0x11FF14u;
            goto label_11ff14;
        }
    }
    ctx->pc = 0x11FF08u;
label_11ff08:
    // 0x11ff08: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x11ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11ff0c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x11ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11ff10: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x11ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_11ff14:
    // 0x11ff14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11ff14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ff18: 0x3e00008  jr          $ra
    ctx->pc = 0x11FF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF18u;
        // 0x11ff1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FF20u;
}
