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

// Function: _ratio
// Address: 0x119c10 - 0x119cd0
void _ratio_0x119c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ratio_0x119c10");
#endif

    switch (ctx->pc) {
        case 0x119c34u: goto label_119c34;
        case 0x119c44u: goto label_119c44;
        case 0x119cb8u: goto label_119cb8;
        default: break;
    }

    ctx->pc = 0x119c10u;

    // 0x119c10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x119c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x119c14: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x119c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x119c18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x119c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x119c1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x119c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x119c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c24: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x119c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x119c28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x119c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x119c2c: 0xc046644  jal         func_119910
    ctx->pc = 0x119C2Cu;
    SET_GPR_U32(ctx, 31, 0x119C34u);
    ctx->pc = 0x119C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119C2Cu;
    // 0x119c30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119910u, 0x119C2Cu, 0x119C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C34u;
label_119c34:
    // 0x119c34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x119c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c3c: 0xc046644  jal         func_119910
    ctx->pc = 0x119C3Cu;
    SET_GPR_U32(ctx, 31, 0x119C44u);
    ctx->pc = 0x119C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119C3Cu;
    // 0x119c40: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x119910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119910u, 0x119C3Cu, 0x119C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C44u;
label_119c44:
    // 0x119c44: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x119c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x119c48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x119c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c4c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x119c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x119c50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x119c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119c54: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x119c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x119c58: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x119c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x119c5c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x119c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x119c60: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x119c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x119c64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119c68: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x119C68u;
    {
        const bool branch_taken_0x119c68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x119C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C68u;
        // 0x119c6c: 0x21500  sll         $v0, $v0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c68) {
            ctx->pc = 0x119C90u;
            goto label_119c90;
        }
    }
    ctx->pc = 0x119C70u;
    // 0x119c70: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x119c70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x119c74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119c78: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x119c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x119c7c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x119c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x119c80: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x119c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x119c84: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x119c84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x119c88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x119C88u;
    {
        const bool branch_taken_0x119c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C88u;
        // 0x119c8c: 0x2439025  or          $s2, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c88) {
            ctx->pc = 0x119CACu;
            goto label_119cac;
        }
    }
    ctx->pc = 0x119C90u;
label_119c90:
    // 0x119c90: 0x6183f  dsra32      $v1, $a2, 0
    ctx->pc = 0x119c90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x119c94: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x119c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119c98: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x119c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x119c9c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x119c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x119ca0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x119ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x119ca4: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x119ca4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x119ca8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x119ca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_119cac:
    // 0x119cac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119cb0: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x119CB0u;
    SET_GPR_U32(ctx, 31, 0x119CB8u);
    ctx->pc = 0x119CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119CB0u;
    // 0x119cb4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x119CB0u, 0x119CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119CB8u;
label_119cb8:
    // 0x119cb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x119cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119cbc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x119cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119cc0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x119cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119cc4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x119cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x119CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CC8u;
        // 0x119ccc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119CD0u;
}
