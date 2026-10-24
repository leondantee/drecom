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

// Function: set_eff_em18_flash
// Address: 0x3247b0 - 0x324ba8
void set_eff_em18_flash_0x3247b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_em18_flash_0x3247b0");
#endif

    switch (ctx->pc) {
        case 0x3247f8u: goto label_3247f8;
        case 0x324838u: goto label_324838;
        case 0x324858u: goto label_324858;
        case 0x324898u: goto label_324898;
        case 0x324964u: goto label_324964;
        case 0x324a1cu: goto label_324a1c;
        case 0x324ad4u: goto label_324ad4;
        case 0x324b8cu: goto label_324b8c;
        default: break;
    }

    ctx->pc = 0x3247b0u;

    // 0x3247b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3247b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3247b4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x3247b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x3247b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3247b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3247bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3247bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3247c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3247c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3247c4: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x3247c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x3247c8: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x3247c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3247cc: 0xe7ad0078  swc1        $f13, 0x78($sp)
    ctx->pc = 0x3247ccu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3247d0: 0xe7ae0080  swc1        $f14, 0x80($sp)
    ctx->pc = 0x3247d0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3247d4: 0xe7af0088  swc1        $f15, 0x88($sp)
    ctx->pc = 0x3247d4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3247d8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3247d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3247dc: 0x2442a130  addiu       $v0, $v0, -0x5ED0
    ctx->pc = 0x3247dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943024));
    // 0x3247e0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3247e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3247e4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3247e4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x39A130u));
    // 0x3247e8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3247e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3247ec: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3247ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3247f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3247F0u;
    {
        const bool branch_taken_0x3247f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3247f0) {
            ctx->pc = 0x324840u;
            goto label_324840;
        }
    }
    ctx->pc = 0x3247F8u;
label_3247f8:
    // 0x3247f8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3247f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3247fc: 0x2442a140  addiu       $v0, $v0, -0x5EC0
    ctx->pc = 0x3247fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943040));
    // 0x324800: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x324800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x324804: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x324804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x324808: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x324808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32480c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x32480cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324810: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x324810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324814: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x324814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324818: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x324818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32481c: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x32481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x324820: 0xc7ae0080  lwc1        $f14, 0x80($sp)
    ctx->pc = 0x324820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x324824: 0xc7af0088  lwc1        $f15, 0x88($sp)
    ctx->pc = 0x324824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x324828: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x324828u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32482c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x32482cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x324830: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x324830u;
    SET_GPR_U32(ctx, 31, 0x324838u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x324830u, 0x324838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324838u;
label_324838:
    // 0x324838: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x324838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32483c: 0x0  nop
    ctx->pc = 0x32483cu;
    // NOP
label_324840:
    // 0x324840: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x324840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x324844: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x324844u;
    {
        const bool branch_taken_0x324844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324844) {
            ctx->pc = 0x3247F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3247f8;
        }
    }
    ctx->pc = 0x32484Cu;
    // 0x32484c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x32484cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x324850: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x324850u;
    {
        const bool branch_taken_0x324850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324850) {
            ctx->pc = 0x3248A0u;
            goto label_3248a0;
        }
    }
    ctx->pc = 0x324858u;
label_324858:
    // 0x324858: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x324858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32485c: 0x2442a150  addiu       $v0, $v0, -0x5EB0
    ctx->pc = 0x32485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943056));
    // 0x324860: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x324860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x324864: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x324864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x324868: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x324868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32486c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x32486cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324870: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x324870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324874: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x324874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324878: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x324878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32487c: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x32487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x324880: 0xc7ae0080  lwc1        $f14, 0x80($sp)
    ctx->pc = 0x324880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x324884: 0xc7af0088  lwc1        $f15, 0x88($sp)
    ctx->pc = 0x324884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x324888: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x324888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32488c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x32488cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x324890: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x324890u;
    SET_GPR_U32(ctx, 31, 0x324898u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x324890u, 0x324898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324898u;
label_324898:
    // 0x324898: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x324898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32489c: 0x0  nop
    ctx->pc = 0x32489cu;
    // NOP
label_3248a0:
    // 0x3248a0: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x3248a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3248a4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3248A4u;
    {
        const bool branch_taken_0x3248a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3248a4) {
            ctx->pc = 0x324858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324858;
        }
    }
    ctx->pc = 0x3248ACu;
    // 0x3248ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3248acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3248b0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3248b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3248b4: 0x24510500  addiu       $s1, $v0, 0x500
    ctx->pc = 0x3248b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1280));
    // 0x3248b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3248b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3248bc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3248bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3248c0: 0x24520540  addiu       $s2, $v0, 0x540
    ctx->pc = 0x3248c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x3248c4: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x3248c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3248c8: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x3248c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3248cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3248ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3248d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3248d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3248d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3248d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3248d8: 0x0  nop
    ctx->pc = 0x3248d8u;
    // NOP
    // 0x3248dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3248dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3248e0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3248e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3248e4: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x3248e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3248e8: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x3248e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3248ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3248ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3248f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3248f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3248f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3248f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3248f8: 0x0  nop
    ctx->pc = 0x3248f8u;
    // NOP
    // 0x3248fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3248fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324900: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x324900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x324904: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x324904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324908: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x324908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32490c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x32490cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x324910: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x324910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x324914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324918: 0x0  nop
    ctx->pc = 0x324918u;
    // NOP
    // 0x32491c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32491cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324920: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x324920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x324924: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x324924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x324928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32492c: 0x0  nop
    ctx->pc = 0x32492cu;
    // NOP
    // 0x324930: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x324930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x324934: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x324934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x324938: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x324938u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32493c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x32493cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x324940: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x324940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324944: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x324944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x324948: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x324948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x32494c: 0xc7ae0080  lwc1        $f14, 0x80($sp)
    ctx->pc = 0x32494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x324950: 0xc7af0088  lwc1        $f15, 0x88($sp)
    ctx->pc = 0x324950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x324954: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x324954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324958: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x324958u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32495c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x32495Cu;
    SET_GPR_U32(ctx, 31, 0x324964u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x32495Cu, 0x324964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324964u;
label_324964:
    // 0x324964: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x324964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324968: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x324968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x32496c: 0x24510540  addiu       $s1, $v0, 0x540
    ctx->pc = 0x32496cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x324970: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x324970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324974: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x324974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x324978: 0x24520580  addiu       $s2, $v0, 0x580
    ctx->pc = 0x324978u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x32497c: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x32497cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324980: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x324980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324984: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x324984u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x324988: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x324988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x32498c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32498cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324990: 0x0  nop
    ctx->pc = 0x324990u;
    // NOP
    // 0x324994: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324998: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x324998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x32499c: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x32499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3249a0: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x3249a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3249a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3249a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3249a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3249a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3249ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3249acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3249b0: 0x0  nop
    ctx->pc = 0x3249b0u;
    // NOP
    // 0x3249b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3249b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3249b8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3249b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3249bc: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x3249bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3249c0: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x3249c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3249c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3249c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3249c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3249c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3249cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3249ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3249d0: 0x0  nop
    ctx->pc = 0x3249d0u;
    // NOP
    // 0x3249d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3249d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3249d8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3249d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3249dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3249dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3249e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3249e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3249e4: 0x0  nop
    ctx->pc = 0x3249e4u;
    // NOP
    // 0x3249e8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3249e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3249ec: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x3249ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3249f0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3249f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3249f4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3249f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3249f8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3249f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3249fc: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x3249fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x324a00: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x324a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x324a04: 0xc7ae0080  lwc1        $f14, 0x80($sp)
    ctx->pc = 0x324a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x324a08: 0xc7af0088  lwc1        $f15, 0x88($sp)
    ctx->pc = 0x324a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x324a0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x324a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324a10: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x324a10u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x324a14: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x324A14u;
    SET_GPR_U32(ctx, 31, 0x324A1Cu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x324A14u, 0x324A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324A1Cu;
label_324a1c:
    // 0x324a1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x324a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324a20: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x324a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x324a24: 0x24510600  addiu       $s1, $v0, 0x600
    ctx->pc = 0x324a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x324a28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x324a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324a2c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x324a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x324a30: 0x24520640  addiu       $s2, $v0, 0x640
    ctx->pc = 0x324a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x324a34: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x324a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324a38: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x324a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324a3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x324a3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x324a40: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x324a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x324a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324a48: 0x0  nop
    ctx->pc = 0x324a48u;
    // NOP
    // 0x324a4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324a50: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x324a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x324a54: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x324a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324a58: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x324a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324a5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x324a5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x324a60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x324a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x324a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324a68: 0x0  nop
    ctx->pc = 0x324a68u;
    // NOP
    // 0x324a6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324a70: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x324a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x324a74: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x324a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324a78: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x324a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324a7c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x324a7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x324a80: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x324a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x324a84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324a88: 0x0  nop
    ctx->pc = 0x324a88u;
    // NOP
    // 0x324a8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324a90: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x324a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x324a94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x324a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x324a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324a9c: 0x0  nop
    ctx->pc = 0x324a9cu;
    // NOP
    // 0x324aa0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x324aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x324aa4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x324aa4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x324aa8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x324aa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x324aac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x324aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x324ab0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x324ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324ab4: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x324ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x324ab8: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x324ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x324abc: 0xc7ae0080  lwc1        $f14, 0x80($sp)
    ctx->pc = 0x324abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x324ac0: 0xc7af0088  lwc1        $f15, 0x88($sp)
    ctx->pc = 0x324ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x324ac4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x324ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324ac8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x324ac8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x324acc: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x324ACCu;
    SET_GPR_U32(ctx, 31, 0x324AD4u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x324ACCu, 0x324AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324AD4u;
label_324ad4:
    // 0x324ad4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x324ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324ad8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x324ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x324adc: 0x24510640  addiu       $s1, $v0, 0x640
    ctx->pc = 0x324adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x324ae0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x324ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324ae4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x324ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x324ae8: 0x24520680  addiu       $s2, $v0, 0x680
    ctx->pc = 0x324ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x324aec: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x324aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324af0: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x324af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324af4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x324af4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x324af8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x324af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x324afc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324b00: 0x0  nop
    ctx->pc = 0x324b00u;
    // NOP
    // 0x324b04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324b08: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x324b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x324b0c: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x324b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324b10: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x324b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324b14: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x324b14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x324b18: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x324b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x324b1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324b20: 0x0  nop
    ctx->pc = 0x324b20u;
    // NOP
    // 0x324b24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324b28: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x324b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x324b2c: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x324b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324b30: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x324b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324b34: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x324b34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x324b38: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x324b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x324b3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324b40: 0x0  nop
    ctx->pc = 0x324b40u;
    // NOP
    // 0x324b44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324b44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324b48: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x324b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x324b4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x324b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x324b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324b54: 0x0  nop
    ctx->pc = 0x324b54u;
    // NOP
    // 0x324b58: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x324b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x324b5c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x324b5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x324b60: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x324b60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x324b64: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x324b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x324b68: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x324b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324b6c: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x324b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x324b70: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x324b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x324b74: 0xc7ae0080  lwc1        $f14, 0x80($sp)
    ctx->pc = 0x324b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x324b78: 0xc7af0088  lwc1        $f15, 0x88($sp)
    ctx->pc = 0x324b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x324b7c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x324b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324b80: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x324b80u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x324b84: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x324B84u;
    SET_GPR_U32(ctx, 31, 0x324B8Cu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x324B84u, 0x324B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324B8Cu;
label_324b8c:
    // 0x324b8c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x324b8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324b90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x324b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324b94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x324b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x324b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324b9c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x324b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x324ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x324BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324BA8u;
}
