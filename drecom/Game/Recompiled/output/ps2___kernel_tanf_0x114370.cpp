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

// Function: __kernel_tanf
// Address: 0x114370 - 0x114604
void ps2___kernel_tanf_0x114370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_tanf_0x114370");
#endif

    switch (ctx->pc) {
        case 0x1143c8u: goto label_1143c8;
        default: break;
    }

    ctx->pc = 0x114370u;

    // 0x114370: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x114370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x114374: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114378: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x114378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11437c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11437cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x114380: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x114380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x114384: 0x3c02317f  lui         $v0, 0x317F
    ctx->pc = 0x114384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
    // 0x114388: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x114388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x11438c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11438cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114390: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x114390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x114394: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x114394u;
    {
        const bool branch_taken_0x114394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114394u;
        // 0x114398: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114394) {
            ctx->pc = 0x114414u;
            goto label_114414;
        }
    }
    ctx->pc = 0x11439Cu;
    // 0x11439c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11439cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1143a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1143a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1143a4: 0x0  nop
    ctx->pc = 0x1143a4u;
    // NOP
    // 0x1143a8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1143A8u;
    {
        const bool branch_taken_0x1143a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1143ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143A8u;
        // 0x1143ac: 0x3c023f2c  lui         $v0, 0x3F2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143a8) {
            ctx->pc = 0x114418u;
            goto label_114418;
        }
    }
    ctx->pc = 0x1143B0u;
    // 0x1143b0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1143b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1143b4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1143b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1143b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1143B8u;
    {
        const bool branch_taken_0x1143b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1143BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143B8u;
        // 0x1143bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143b8) {
            ctx->pc = 0x1143E8u;
            goto label_1143e8;
        }
    }
    ctx->pc = 0x1143C0u;
    // 0x1143c0: 0xc045420  jal         func_115080
    ctx->pc = 0x1143C0u;
    SET_GPR_U32(ctx, 31, 0x1143C8u);
    ctx->pc = 0x115080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115080u, 0x1143C0u, 0x1143C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143C8u;
label_1143c8:
    // 0x1143c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1143c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1143cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1143ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1143d0: 0x0  nop
    ctx->pc = 0x1143d0u;
    // NOP
    // 0x1143d4: 0x0  nop
    ctx->pc = 0x1143d4u;
    // NOP
    // 0x1143d8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1143d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1143dc: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1143DCu;
    {
        const bool branch_taken_0x1143dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1143E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143DCu;
        // 0x1143e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143dc) {
            ctx->pc = 0x1145FCu;
            goto label_1145fc;
        }
    }
    ctx->pc = 0x1143E4u;
    // 0x1143e4: 0x0  nop
    ctx->pc = 0x1143e4u;
    // NOP
label_1143e8:
    // 0x1143e8: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1143E8u;
    {
        const bool branch_taken_0x1143e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1143ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143E8u;
        // 0x1143ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143e8) {
            ctx->pc = 0x11440Cu;
            goto label_11440c;
        }
    }
    ctx->pc = 0x1143F0u;
    // 0x1143f0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1143f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1143f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1143f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1143f8: 0x0  nop
    ctx->pc = 0x1143f8u;
    // NOP
    // 0x1143fc: 0x0  nop
    ctx->pc = 0x1143fcu;
    // NOP
    // 0x114400: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x114400u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x114404: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x114404u;
    {
        const bool branch_taken_0x114404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114404) {
            ctx->pc = 0x1145FCu;
            goto label_1145fc;
        }
    }
    ctx->pc = 0x11440Cu;
label_11440c:
    // 0x11440c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x11440Cu;
    {
        const bool branch_taken_0x11440c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11440Cu;
        // 0x114410: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11440c) {
            ctx->pc = 0x1145F8u;
            goto label_1145f8;
        }
    }
    ctx->pc = 0x114414u;
label_114414:
    // 0x114414: 0x3c023f2c  lui         $v0, 0x3F2C
    ctx->pc = 0x114414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
label_114418:
    // 0x114418: 0x3442a13f  ori         $v0, $v0, 0xA13F
    ctx->pc = 0x114418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41279);
    // 0x11441c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x11441cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x114420: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x114420u;
    {
        const bool branch_taken_0x114420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114420) {
            ctx->pc = 0x114424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114420u;
            // 0x114424: 0x460c6382  mul.s       $f14, $f12, $f12 (Delay Slot)
            ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x114464u;
            goto label_114464;
        }
    }
    ctx->pc = 0x114428u;
    // 0x114428: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x114428u;
    {
        const bool branch_taken_0x114428 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x114428) {
            ctx->pc = 0x114438u;
            goto label_114438;
        }
    }
    ctx->pc = 0x114430u;
    // 0x114430: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x114430u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x114434: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x114434u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_114438:
    // 0x114438: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x114438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x11443c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11443cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x114440: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114444: 0x3c013322  lui         $at, 0x3322
    ctx->pc = 0x114444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13090 << 16));
    // 0x114448: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x114448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x11444c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11444cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114450: 0x460c0381  sub.s       $f14, $f0, $f12
    ctx->pc = 0x114450u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x114454: 0x460d0ac1  sub.s       $f11, $f1, $f13
    ctx->pc = 0x114454u;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x114458: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x114458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11445c: 0x460b7300  add.s       $f12, $f14, $f11
    ctx->pc = 0x11445cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[14], ctx->f[11]);
    // 0x114460: 0x460c6382  mul.s       $f14, $f12, $f12
    ctx->pc = 0x114460u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_114464:
    // 0x114464: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x114464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x114468: 0x2462d840  addiu       $v0, $v1, -0x27C0
    ctx->pc = 0x114468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957120));
    // 0x11446c: 0xc469d840  lwc1        $f9, -0x27C0($v1)
    ctx->pc = 0x11446cu;
    { uint32_t bits = FAST_READ32(0x3AD840u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x114470: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x114470u;
    { uint32_t bits = FAST_READ32(0x3AD870u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x114474: 0x3c033f2c  lui         $v1, 0x3F2C
    ctx->pc = 0x114474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16172 << 16));
    // 0x114478: 0x460e72c2  mul.s       $f11, $f14, $f14
    ctx->pc = 0x114478u;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x11447c: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x11447cu;
    { uint32_t bits = FAST_READ32(0x3AD86Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x114480: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x114480u;
    { uint32_t bits = FAST_READ32(0x3AD868u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x114484: 0x460c73c2  mul.s       $f15, $f14, $f12
    ctx->pc = 0x114484u;
    ctx->f[15] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x114488: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x114488u;
    { uint32_t bits = FAST_READ32(0x3AD864u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11448c: 0x3463a13f  ori         $v1, $v1, 0xA13F
    ctx->pc = 0x11448cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41279);
    // 0x114490: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x114490u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x114494: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x114494u;
    { uint32_t bits = FAST_READ32(0x3AD860u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x114498: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x114498u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x11449c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x11449cu;
    { uint32_t bits = FAST_READ32(0x3AD85Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1144a0: 0xc4470018  lwc1        $f7, 0x18($v0)
    ctx->pc = 0x1144a0u;
    { uint32_t bits = FAST_READ32(0x3AD858u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1144a4: 0x460f4a42  mul.s       $f9, $f9, $f15
    ctx->pc = 0x1144a4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[15]);
    // 0x1144a8: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x1144a8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x1144ac: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1144acu;
    { uint32_t bits = FAST_READ32(0x3AD854u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1144b0: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1144b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1144b4: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x1144b4u;
    { uint32_t bits = FAST_READ32(0x3AD850u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1144b8: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x1144b8u;
    { uint32_t bits = FAST_READ32(0x3AD84Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1144bc: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1144bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1144c0: 0x46065982  mul.s       $f6, $f11, $f6
    ctx->pc = 0x1144c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x1144c4: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x1144c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1144c8: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x1144c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x1144cc: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x1144ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1144d0: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x1144d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x1144d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1144d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1144d8: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x1144d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x1144dc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x1144dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x1144e0: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x1144e0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x1144e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1144e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1144e8: 0x460759c2  mul.s       $f7, $f11, $f7
    ctx->pc = 0x1144e8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x1144ec: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x1144ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x1144f0: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x1144f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x1144f4: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x1144f4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x1144f8: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x1144f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x1144fc: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x1144fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x114500: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x114500u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x114504: 0x460550c0  add.s       $f3, $f10, $f5
    ctx->pc = 0x114504u;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[5]);
    // 0x114508: 0x46087102  mul.s       $f4, $f14, $f8
    ctx->pc = 0x114508u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x11450c: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x11450cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x114510: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x114510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x114514: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x114514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x114518: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x114518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x11451c: 0x460068c0  add.s       $f3, $f13, $f0
    ctx->pc = 0x11451cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x114520: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x114520u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x114524: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x114524u;
    {
        const bool branch_taken_0x114524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114524u;
        // 0x114528: 0x460362c0  add.s       $f11, $f12, $f3 (Delay Slot)
        ctx->f[11] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114524) {
            ctx->pc = 0x114578u;
            goto label_114578;
        }
    }
    ctx->pc = 0x11452Cu;
    // 0x11452c: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x11452cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x114530: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x114530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x114534: 0x61f83  sra         $v1, $a2, 30
    ctx->pc = 0x114534u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 30));
    // 0x114538: 0x460b5802  mul.s       $f0, $f11, $f11
    ctx->pc = 0x114538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x11453c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x11453cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x114540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114544: 0x46045840  add.s       $f1, $f11, $f4
    ctx->pc = 0x114544u;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x114548: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x114548u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11454c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x11454cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x114550: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x114550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x114554: 0x0  nop
    ctx->pc = 0x114554u;
    // NOP
    // 0x114558: 0x0  nop
    ctx->pc = 0x114558u;
    // NOP
    // 0x11455c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x11455cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x114560: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x114560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x114564: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x114564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x114568: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x114568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11456c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x11456cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x114570: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x114570u;
    {
        const bool branch_taken_0x114570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114570u;
        // 0x114574: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114570) {
            ctx->pc = 0x1145F8u;
            goto label_1145f8;
        }
    }
    ctx->pc = 0x114578u;
label_114578:
    // 0x114578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11457c: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11457Cu;
    {
        const bool branch_taken_0x11457c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x114580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11457Cu;
        // 0x114580: 0x46005806  mov.s       $f0, $f11 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11457c) {
            ctx->pc = 0x1145F8u;
            goto label_1145f8;
        }
    }
    ctx->pc = 0x114584u;
    // 0x114584: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x114584u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x114588: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x114588u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11458c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11458cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x114590: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x114590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x114594: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x114594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x114598: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x114598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x11459c: 0x460c7041  sub.s       $f1, $f14, $f12
    ctx->pc = 0x11459cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x1145a0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1145a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1145a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1145a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1145a8: 0x0  nop
    ctx->pc = 0x1145a8u;
    // NOP
    // 0x1145ac: 0x0  nop
    ctx->pc = 0x1145acu;
    // NOP
    // 0x1145b0: 0x460b0003  div.s       $f0, $f0, $f11
    ctx->pc = 0x1145b0u;
    { if (ctx->f[11] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[11]); }
    // 0x1145b4: 0x46011901  sub.s       $f4, $f3, $f1
    ctx->pc = 0x1145b4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1145b8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1145b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1145bc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1145bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1145c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1145c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1145c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1145c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1145c8: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x1145c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x1145cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1145ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1145d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1145d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1145d4: 0x46000bc0  add.s       $f15, $f1, $f0
    ctx->pc = 0x1145d4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1145d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1145d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1145dc: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x1145dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1145e0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1145e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1145e4: 0x46007800  add.s       $f0, $f15, $f0
    ctx->pc = 0x1145e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x1145e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1145e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1145ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1145ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1145f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1145f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1145f4: 0x0  nop
    ctx->pc = 0x1145f4u;
    // NOP
label_1145f8:
    // 0x1145f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1145f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1145fc:
    // 0x1145fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1145FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145FCu;
        // 0x114600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1145FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114604u;
}
