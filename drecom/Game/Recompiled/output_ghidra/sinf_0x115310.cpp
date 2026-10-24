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

// Function: sinf
// Address: 0x115310 - 0x115400
void sinf_0x115310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sinf_0x115310");
#endif

    switch (ctx->pc) {
        case 0x115348u: goto label_115348;
        case 0x115374u: goto label_115374;
        case 0x1153b8u: goto label_1153b8;
        case 0x1153ccu: goto label_1153cc;
        case 0x1153e0u: goto label_1153e0;
        case 0x1153f0u: goto label_1153f0;
        default: break;
    }

    ctx->pc = 0x115310u;

    // 0x115310: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x115310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x115314: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x115318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11531c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11531cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x115320: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x115320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x115324: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x115324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x115328: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x115328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x11532c: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x11532cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x115330: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x115330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x115334: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115334u;
    {
        const bool branch_taken_0x115334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115334u;
        // 0x115338: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115334) {
            ctx->pc = 0x115350u;
            goto label_115350;
        }
    }
    ctx->pc = 0x11533Cu;
    // 0x11533c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11533cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x115340: 0xc04509a  jal         func_114268
    ctx->pc = 0x115340u;
    SET_GPR_U32(ctx, 31, 0x115348u);
    ctx->pc = 0x115344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115340u;
    // 0x115344: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114268u;
    {
        ctx->pc = 0x115348u;
        ps2_stubs::__kernel_sinf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x115348u) { return; }
    ctx->pc = 0x115348u;
label_115348:
    // 0x115348: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x115348u;
    {
        const bool branch_taken_0x115348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115348u;
        // 0x11534c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115348) {
            ctx->pc = 0x1153F8u;
            goto label_1153f8;
        }
    }
    ctx->pc = 0x115350u;
label_115350:
    // 0x115350: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x115350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x115354: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x115354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x115358: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x115358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11535c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11535Cu;
    {
        const bool branch_taken_0x11535c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11535c) {
            ctx->pc = 0x11536Cu;
            goto label_11536c;
        }
    }
    ctx->pc = 0x115364u;
    // 0x115364: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x115364u;
    {
        const bool branch_taken_0x115364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115364u;
        // 0x115368: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115364) {
            ctx->pc = 0x1153F4u;
            goto label_1153f4;
        }
    }
    ctx->pc = 0x11536Cu;
label_11536c:
    // 0x11536c: 0xc0448c6  jal         func_112318
    ctx->pc = 0x11536Cu;
    SET_GPR_U32(ctx, 31, 0x115374u);
    ctx->pc = 0x115370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11536Cu;
    // 0x115370: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112318u;
    {
        ctx->pc = 0x115374u;
        ps2_stubs::__ieee754_rem_pio2f(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x115374u) { return; }
    ctx->pc = 0x115374u;
label_115374:
    // 0x115374: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x115374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x115378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11537c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11537Cu;
    {
        const bool branch_taken_0x11537c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x115380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11537Cu;
        // 0x115380: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11537c) {
            ctx->pc = 0x1153C0u;
            goto label_1153c0;
        }
    }
    ctx->pc = 0x115384u;
    // 0x115384: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115384u;
    {
        const bool branch_taken_0x115384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115384u;
        // 0x115388: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115384) {
            ctx->pc = 0x11539Cu;
            goto label_11539c;
        }
    }
    ctx->pc = 0x11538Cu;
    // 0x11538c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11538Cu;
    {
        const bool branch_taken_0x11538c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11538Cu;
        // 0x115390: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11538c) {
            ctx->pc = 0x1153ACu;
            goto label_1153ac;
        }
    }
    ctx->pc = 0x115394u;
    // 0x115394: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115394u;
    {
        const bool branch_taken_0x115394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115394) {
            ctx->pc = 0x1153E8u;
            goto label_1153e8;
        }
    }
    ctx->pc = 0x11539Cu;
label_11539c:
    // 0x11539c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11539Cu;
    {
        const bool branch_taken_0x11539c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1153A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11539Cu;
        // 0x1153a0: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11539c) {
            ctx->pc = 0x1153D4u;
            goto label_1153d4;
        }
    }
    ctx->pc = 0x1153A4u;
    // 0x1153a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1153A4u;
    {
        const bool branch_taken_0x1153a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1153a4) {
            ctx->pc = 0x1153E8u;
            goto label_1153e8;
        }
    }
    ctx->pc = 0x1153ACu;
label_1153ac:
    // 0x1153ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1153acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1153b0: 0xc04509a  jal         func_114268
    ctx->pc = 0x1153B0u;
    SET_GPR_U32(ctx, 31, 0x1153B8u);
    ctx->pc = 0x1153B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1153B0u;
    // 0x1153b4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x114268u;
    {
        ctx->pc = 0x1153B8u;
        ps2_stubs::__kernel_sinf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1153B8u) { return; }
    ctx->pc = 0x1153B8u;
label_1153b8:
    // 0x1153b8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1153B8u;
    {
        const bool branch_taken_0x1153b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153B8u;
        // 0x1153bc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153b8) {
            ctx->pc = 0x1153F8u;
            goto label_1153f8;
        }
    }
    ctx->pc = 0x1153C0u;
label_1153c0:
    // 0x1153c0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1153c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1153c4: 0xc044df0  jal         func_1137C0
    ctx->pc = 0x1153C4u;
    SET_GPR_U32(ctx, 31, 0x1153CCu);
    ctx->pc = 0x1153C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1153C4u;
    // 0x1153c8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1137C0u;
    {
        ctx->pc = 0x1153CCu;
        ps2_stubs::__kernel_cosf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1153CCu) { return; }
    ctx->pc = 0x1153CCu;
label_1153cc:
    // 0x1153cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1153CCu;
    {
        const bool branch_taken_0x1153cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153CCu;
        // 0x1153d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153cc) {
            ctx->pc = 0x1153F8u;
            goto label_1153f8;
        }
    }
    ctx->pc = 0x1153D4u;
label_1153d4:
    // 0x1153d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1153d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1153d8: 0xc04509a  jal         func_114268
    ctx->pc = 0x1153D8u;
    SET_GPR_U32(ctx, 31, 0x1153E0u);
    ctx->pc = 0x1153DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1153D8u;
    // 0x1153dc: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x114268u;
    {
        ctx->pc = 0x1153E0u;
        ps2_stubs::__kernel_sinf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1153E0u) { return; }
    ctx->pc = 0x1153E0u;
label_1153e0:
    // 0x1153e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1153E0u;
    {
        const bool branch_taken_0x1153e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153E0u;
        // 0x1153e4: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153e0) {
            ctx->pc = 0x1153F4u;
            goto label_1153f4;
        }
    }
    ctx->pc = 0x1153E8u;
label_1153e8:
    // 0x1153e8: 0xc044df0  jal         func_1137C0
    ctx->pc = 0x1153E8u;
    SET_GPR_U32(ctx, 31, 0x1153F0u);
    ctx->pc = 0x1153ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1153E8u;
    // 0x1153ec: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1137C0u;
    {
        ctx->pc = 0x1153F0u;
        ps2_stubs::__kernel_cosf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1153F0u) { return; }
    ctx->pc = 0x1153F0u;
label_1153f0:
    // 0x1153f0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1153f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1153f4:
    // 0x1153f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1153f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1153f8:
    // 0x1153f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1153F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1153FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153F8u;
        // 0x1153fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1153F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115400u;
}
