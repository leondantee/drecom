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

// Function: Em03_pos_hosei
// Address: 0x2c4250 - 0x2c4400
void Em03_pos_hosei_0x2c4250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_pos_hosei_0x2c4250");
#endif

    switch (ctx->pc) {
        case 0x2c4288u: goto label_2c4288;
        case 0x2c42a0u: goto label_2c42a0;
        case 0x2c42c4u: goto label_2c42c4;
        case 0x2c42fcu: goto label_2c42fc;
        case 0x2c4314u: goto label_2c4314;
        case 0x2c4344u: goto label_2c4344;
        default: break;
    }

    ctx->pc = 0x2c4250u;

    // 0x2c4250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c4250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c4254: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2c4254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2c4258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c425c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2c425cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2c4260: 0xa3a50068  sb          $a1, 0x68($sp)
    ctx->pc = 0x2c4260u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c4264: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x2c4264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c4268: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c4268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c426c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c426cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c4270: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4270u;
    {
        const bool branch_taken_0x2c4270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4270) {
            ctx->pc = 0x2C4290u;
            goto label_2c4290;
        }
    }
    ctx->pc = 0x2C4278u;
    // 0x2c4278: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2c4278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c427c: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x2c427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2c4280: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x2C4280u;
    SET_GPR_U32(ctx, 31, 0x2C4288u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x2C4280u, 0x2C4288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4288u;
label_2c4288:
    // 0x2c4288: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4288u;
    {
        const bool branch_taken_0x2c4288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4288) {
            ctx->pc = 0x2C42A0u;
            goto label_2c42a0;
        }
    }
    ctx->pc = 0x2C4290u;
label_2c4290:
    // 0x2c4290: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2c4290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4294: 0x244410b0  addiu       $a0, $v0, 0x10B0
    ctx->pc = 0x2c4294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2c4298: 0xc0624f8  jal         func_1893E0
    ctx->pc = 0x2C4298u;
    SET_GPR_U32(ctx, 31, 0x2C42A0u);
    ctx->pc = 0x1893E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893E0u, 0x2C4298u, 0x2C42A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42A0u;
label_2c42a0:
    // 0x2c42a0: 0x93a30068  lbu         $v1, 0x68($sp)
    ctx->pc = 0x2c42a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c42a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c42a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c42a8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2c42a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2c42ac: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C42ACu;
    {
        const bool branch_taken_0x2c42ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c42ac) {
            ctx->pc = 0x2C42D0u;
            goto label_2c42d0;
        }
    }
    ctx->pc = 0x2C42B4u;
    // 0x2c42b4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2c42b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c42b8: 0x240501c7  addiu       $a1, $zero, 0x1C7
    ctx->pc = 0x2c42b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
    // 0x2c42bc: 0xc05a5a4  jal         func_169690
    ctx->pc = 0x2C42BCu;
    SET_GPR_U32(ctx, 31, 0x2C42C4u);
    ctx->pc = 0x169690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169690u, 0x2C42BCu, 0x2C42C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42C4u;
label_2c42c4:
    // 0x2c42c4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2c42c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c42c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c42c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c42cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c42ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2c42d0:
    // 0x2c42d0: 0x93a30068  lbu         $v1, 0x68($sp)
    ctx->pc = 0x2c42d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c42d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c42d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c42d8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2c42d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2c42dc: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C42DCu;
    {
        const bool branch_taken_0x2c42dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c42dc) {
            ctx->pc = 0x2C43ECu;
            goto label_2c43ec;
        }
    }
    ctx->pc = 0x2C42E4u;
    // 0x2c42e4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2c42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c42e8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c42ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c42ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c42f0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2c42f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2c42f4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2C42F4u;
    SET_GPR_U32(ctx, 31, 0x2C42FCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2C42FCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C42FCu) { return; }
    ctx->pc = 0x2C42FCu;
label_2c42fc:
    // 0x2c42fc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2c42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4300: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c4300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c4304: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c4304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c4308: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2c4308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2c430c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2C430Cu;
    SET_GPR_U32(ctx, 31, 0x2C4314u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2C4314u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C4314u) { return; }
    ctx->pc = 0x2C4314u;
label_2c4314:
    // 0x2c4314: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2c4314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4318: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2c4318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2c431c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c431cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4320: 0x0  nop
    ctx->pc = 0x2c4320u;
    // NOP
    // 0x2c4324: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c4324u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c4328: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2c4328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c432c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c4330: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c4330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c4334: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c4334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c4338: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2c4338u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c433c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x2C433Cu;
    SET_GPR_U32(ctx, 31, 0x2C4344u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x2C433Cu, 0x2C4344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4344u;
label_2c4344:
    // 0x2c4344: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2c4344u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c4348: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2c4348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c434c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c434cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4350: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2c4350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2c4354: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x2c4354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x2c4358: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x2c4358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x2c435c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c435cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4360: 0x0  nop
    ctx->pc = 0x2c4360u;
    // NOP
    // 0x2c4364: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c4364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c4368: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4368u;
    {
        const bool branch_taken_0x2c4368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4368) {
            ctx->pc = 0x2C4390u;
            goto label_2c4390;
        }
    }
    ctx->pc = 0x2C4370u;
    // 0x2c4370: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2c4370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4374: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c4374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c4378: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2c4378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c437c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2c437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4380: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c4380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c4384: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2c4384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2c4388: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4388u;
    {
        const bool branch_taken_0x2c4388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4388) {
            ctx->pc = 0x2C43A4u;
            goto label_2c43a4;
        }
    }
    ctx->pc = 0x2C4390u;
label_2c4390:
    // 0x2c4390: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c4390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c4394: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2c4394u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4398: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2c4398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c439c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c439cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c43a0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2c43a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_2c43a4:
    // 0x2c43a4: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x2c43a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x2c43a8: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x2c43a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x2c43ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c43acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c43b0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c43b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c43b4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c43b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c43b8: 0x0  nop
    ctx->pc = 0x2c43b8u;
    // NOP
    // 0x2c43bc: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2C43BCu;
    {
        const bool branch_taken_0x2c43bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c43bc) {
            ctx->pc = 0x2C43ECu;
            goto label_2c43ec;
        }
    }
    ctx->pc = 0x2C43C4u;
    // 0x2c43c4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2c43c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c43c8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2c43c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c43cc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c43ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c43d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c43d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c43d4: 0x0  nop
    ctx->pc = 0x2c43d4u;
    // NOP
    // 0x2c43d8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C43D8u;
    {
        const bool branch_taken_0x2c43d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c43d8) {
            ctx->pc = 0x2C43ECu;
            goto label_2c43ec;
        }
    }
    ctx->pc = 0x2C43E0u;
    // 0x2c43e0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c43e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c43e4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2c43e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c43e8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2c43e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_2c43ec:
    // 0x2c43ec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2c43ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c43f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c43f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c43f4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2c43f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c43f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C43F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C43F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4400u;
}
