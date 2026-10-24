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

// Function: fptosi
// Address: 0x11fdf8 - 0x11fe84
void fptosi_0x11fdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptosi_0x11fdf8");
#endif

    switch (ctx->pc) {
        case 0x11fe10u: goto label_11fe10;
        case 0x11fe28u: goto label_11fe28;
        default: break;
    }

    ctx->pc = 0x11fdf8u;

    // 0x11fdf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11fdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11fdfc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11fdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11fe00: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11fe04: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x11fe04u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11fe08: 0xc047d3e  jal         func_11F4F8
    ctx->pc = 0x11FE08u;
    SET_GPR_U32(ctx, 31, 0x11FE10u);
    ctx->pc = 0x11FE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FE08u;
    // 0x11fe0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F4F8u, 0x11FE08u, 0x11FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FE10u;
label_11fe10:
    // 0x11fe10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fe14: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x11fe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x11fe18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FE18u;
    {
        const bool branch_taken_0x11fe18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE18u;
        // 0x11fe1c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe18) {
            ctx->pc = 0x11FE28u;
            goto label_11fe28;
        }
    }
    ctx->pc = 0x11FE20u;
    // 0x11fe20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FE20u;
    {
        const bool branch_taken_0x11fe20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE20u;
        // 0x11fe24: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe20) {
            ctx->pc = 0x11FE30u;
            goto label_11fe30;
        }
    }
    ctx->pc = 0x11FE28u;
label_11fe28:
    // 0x11fe28: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11FE28u;
    {
        const bool branch_taken_0x11fe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE28u;
        // 0x11fe2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe28) {
            ctx->pc = 0x11FE78u;
            goto label_11fe78;
        }
    }
    ctx->pc = 0x11FE30u;
label_11fe30:
    // 0x11fe30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FE30u;
    {
        const bool branch_taken_0x11fe30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE30u;
        // 0x11fe34: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe30) {
            ctx->pc = 0x11FE48u;
            goto label_11fe48;
        }
    }
    ctx->pc = 0x11FE38u;
    // 0x11fe38: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11FE38u;
    {
        const bool branch_taken_0x11fe38 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE38u;
        // 0x11fe3c: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe38) {
            ctx->pc = 0x11FE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fe28;
        }
    }
    ctx->pc = 0x11FE40u;
    // 0x11fe40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11FE40u;
    {
        const bool branch_taken_0x11fe40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE40u;
        // 0x11fe44: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe40) {
            ctx->pc = 0x11FE60u;
            goto label_11fe60;
        }
    }
    ctx->pc = 0x11FE48u;
label_11fe48:
    // 0x11fe48: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11fe4c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11fe50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11fe50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11fe54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11fe54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11fe58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11FE58u;
    {
        const bool branch_taken_0x11fe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE58u;
        // 0x11fe5c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fe58) {
            ctx->pc = 0x11FE78u;
            goto label_11fe78;
        }
    }
    ctx->pc = 0x11FE60u;
label_11fe60:
    // 0x11fe60: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x11fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11fe64: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x11fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11fe68: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x11fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11fe6c: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x11fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x11fe70: 0x22023  negu        $a0, $v0
    ctx->pc = 0x11fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11fe74: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x11fe74u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_11fe78:
    // 0x11fe78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11fe78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11fe7c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FE7Cu;
        // 0x11fe80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FE84u;
}
