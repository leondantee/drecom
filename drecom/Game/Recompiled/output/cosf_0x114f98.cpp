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

// Function: cosf
// Address: 0x114f98 - 0x115080
void cosf_0x114f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cosf_0x114f98");
#endif

    switch (ctx->pc) {
        case 0x114fd0u: goto label_114fd0;
        case 0x114ffcu: goto label_114ffc;
        case 0x11503cu: goto label_11503c;
        case 0x115054u: goto label_115054;
        case 0x115064u: goto label_115064;
        case 0x115074u: goto label_115074;
        default: break;
    }

    ctx->pc = 0x114f98u;

    // 0x114f98: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x114f98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x114f9c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114f9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x114fa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114fa4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x114fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x114fa8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x114fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x114fac: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x114facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x114fb0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x114fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x114fb4: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x114fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x114fb8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x114fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x114fbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x114FBCu;
    {
        const bool branch_taken_0x114fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FBCu;
        // 0x114fc0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fbc) {
            ctx->pc = 0x114FD8u;
            goto label_114fd8;
        }
    }
    ctx->pc = 0x114FC4u;
    // 0x114fc4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x114fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x114fc8: 0xc044df0  jal         func_1137C0
    ctx->pc = 0x114FC8u;
    SET_GPR_U32(ctx, 31, 0x114FD0u);
    ctx->pc = 0x1137C0u;
    {
        ctx->pc = 0x114FD0u;
        ps2_stubs::__kernel_cosf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x114FD0u) { return; }
    ctx->pc = 0x114FD0u;
label_114fd0:
    // 0x114fd0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x114FD0u;
    {
        const bool branch_taken_0x114fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FD0u;
        // 0x114fd4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fd0) {
            ctx->pc = 0x115078u;
            goto label_115078;
        }
    }
    ctx->pc = 0x114FD8u;
label_114fd8:
    // 0x114fd8: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x114fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x114fdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114fe0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x114fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x114fe4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114FE4u;
    {
        const bool branch_taken_0x114fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114fe4) {
            ctx->pc = 0x114FF4u;
            goto label_114ff4;
        }
    }
    ctx->pc = 0x114FECu;
    // 0x114fec: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x114FECu;
    {
        const bool branch_taken_0x114fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FECu;
        // 0x114ff0: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fec) {
            ctx->pc = 0x115074u;
            goto label_115074;
        }
    }
    ctx->pc = 0x114FF4u;
label_114ff4:
    // 0x114ff4: 0xc0448c6  jal         func_112318
    ctx->pc = 0x114FF4u;
    SET_GPR_U32(ctx, 31, 0x114FFCu);
    ctx->pc = 0x114FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114FF4u;
    // 0x114ff8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112318u;
    {
        ctx->pc = 0x114FFCu;
        ps2_stubs::__ieee754_rem_pio2f(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x114FFCu) { return; }
    ctx->pc = 0x114FFCu;
label_114ffc:
    // 0x114ffc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x114ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x115000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115004: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x115004u;
    {
        const bool branch_taken_0x115004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x115008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115004u;
        // 0x115008: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115004) {
            ctx->pc = 0x115044u;
            goto label_115044;
        }
    }
    ctx->pc = 0x11500Cu;
    // 0x11500c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11500Cu;
    {
        const bool branch_taken_0x11500c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11500Cu;
        // 0x115010: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11500c) {
            ctx->pc = 0x115024u;
            goto label_115024;
        }
    }
    ctx->pc = 0x115014u;
    // 0x115014: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x115014u;
    {
        const bool branch_taken_0x115014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115014u;
        // 0x115018: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115014) {
            ctx->pc = 0x115034u;
            goto label_115034;
        }
    }
    ctx->pc = 0x11501Cu;
    // 0x11501c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11501Cu;
    {
        const bool branch_taken_0x11501c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11501Cu;
        // 0x115020: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11501c) {
            ctx->pc = 0x11506Cu;
            goto label_11506c;
        }
    }
    ctx->pc = 0x115024u;
label_115024:
    // 0x115024: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x115024u;
    {
        const bool branch_taken_0x115024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x115028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115024u;
        // 0x115028: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x115024) {
            ctx->pc = 0x11505Cu;
            goto label_11505c;
        }
    }
    ctx->pc = 0x11502Cu;
    // 0x11502c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11502Cu;
    {
        const bool branch_taken_0x11502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11502Cu;
        // 0x115030: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11502c) {
            ctx->pc = 0x11506Cu;
            goto label_11506c;
        }
    }
    ctx->pc = 0x115034u;
label_115034:
    // 0x115034: 0xc044df0  jal         func_1137C0
    ctx->pc = 0x115034u;
    SET_GPR_U32(ctx, 31, 0x11503Cu);
    ctx->pc = 0x115038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115034u;
    // 0x115038: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1137C0u;
    {
        ctx->pc = 0x11503Cu;
        ps2_stubs::__kernel_cosf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11503Cu) { return; }
    ctx->pc = 0x11503Cu;
label_11503c:
    // 0x11503c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11503Cu;
    {
        const bool branch_taken_0x11503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11503Cu;
        // 0x115040: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11503c) {
            ctx->pc = 0x115078u;
            goto label_115078;
        }
    }
    ctx->pc = 0x115044u;
label_115044:
    // 0x115044: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x115044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x115048: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x115048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11504c: 0xc04509a  jal         func_114268
    ctx->pc = 0x11504Cu;
    SET_GPR_U32(ctx, 31, 0x115054u);
    ctx->pc = 0x115050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11504Cu;
    // 0x115050: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x114268u;
    {
        ctx->pc = 0x115054u;
        ps2_stubs::__kernel_sinf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x115054u) { return; }
    ctx->pc = 0x115054u;
label_115054:
    // 0x115054: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x115054u;
    {
        const bool branch_taken_0x115054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115054u;
        // 0x115058: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115054) {
            ctx->pc = 0x115074u;
            goto label_115074;
        }
    }
    ctx->pc = 0x11505Cu;
label_11505c:
    // 0x11505c: 0xc044df0  jal         func_1137C0
    ctx->pc = 0x11505Cu;
    SET_GPR_U32(ctx, 31, 0x115064u);
    ctx->pc = 0x115060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11505Cu;
    // 0x115060: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1137C0u;
    {
        ctx->pc = 0x115064u;
        ps2_stubs::__kernel_cosf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x115064u) { return; }
    ctx->pc = 0x115064u;
label_115064:
    // 0x115064: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115064u;
    {
        const bool branch_taken_0x115064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115064u;
        // 0x115068: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115064) {
            ctx->pc = 0x115074u;
            goto label_115074;
        }
    }
    ctx->pc = 0x11506Cu;
label_11506c:
    // 0x11506c: 0xc04509a  jal         func_114268
    ctx->pc = 0x11506Cu;
    SET_GPR_U32(ctx, 31, 0x115074u);
    ctx->pc = 0x115070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11506Cu;
    // 0x115070: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x114268u;
    {
        ctx->pc = 0x115074u;
        ps2_stubs::__kernel_sinf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x115074u) { return; }
    ctx->pc = 0x115074u;
label_115074:
    // 0x115074: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_115078:
    // 0x115078: 0x3e00008  jr          $ra
    ctx->pc = 0x115078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115078u;
        // 0x11507c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115080u;
}
