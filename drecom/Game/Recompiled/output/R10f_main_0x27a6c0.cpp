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

// Function: R10f_main
// Address: 0x27a6c0 - 0x27ab00
void R10f_main_0x27a6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10f_main_0x27a6c0");
#endif

    switch (ctx->pc) {
        case 0x27a73cu: goto label_27a73c;
        case 0x27a890u: goto label_27a890;
        case 0x27aa4cu: goto label_27aa4c;
        case 0x27aa58u: goto label_27aa58;
        default: break;
    }

    ctx->pc = 0x27a6c0u;

    // 0x27a6c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27a6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27a6c4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x27a6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x27a6c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27a6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27a6cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27a6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27a6d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27a6d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a6d8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x27a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x27a6dc: 0x24701ac0  addiu       $s0, $v1, 0x1AC0
    ctx->pc = 0x27a6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 6848));
    // 0x27a6e0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x27a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x621AC8u));
    // 0x27a6e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a6e8: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x27A6E8u;
    {
        const bool branch_taken_0x27a6e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27a6e8) {
            ctx->pc = 0x27A73Cu;
            goto label_27a73c;
        }
    }
    ctx->pc = 0x27A6F0u;
    // 0x27a6f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27a6f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x27a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27a6f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27a6fc: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x27a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x27a700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a704: 0x8c531390  lw          $s3, 0x1390($v0)
    ctx->pc = 0x27a704u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x27a708: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x27a708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x27a70c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x27a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x27a710: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x27a710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x27a714: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27a714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27a718: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x27a718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x27a71c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x27a71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x27a720: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x27a720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x27a724: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x27a724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x27a728: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x27a728u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x27a72c: 0xc60d0018  lwc1        $f13, 0x18($s0)
    ctx->pc = 0x27a72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27a730: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x27a730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x27a734: 0xc075fbc  jal         func_1D7EF0
    ctx->pc = 0x27A734u;
    SET_GPR_U32(ctx, 31, 0x27A73Cu);
    ctx->pc = 0x1D7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7EF0u, 0x27A734u, 0x27A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A73Cu;
label_27a73c:
    // 0x27a73c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a740: 0x8c231ae4  lw          $v1, 0x1AE4($at)
    ctx->pc = 0x27a740u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AE4u));
    // 0x27a744: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x27a744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x27a748: 0x146000e5  bnez        $v1, . + 4 + (0xE5 << 2)
    ctx->pc = 0x27A748u;
    {
        const bool branch_taken_0x27a748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a748) {
            ctx->pc = 0x27AAE0u;
            goto label_27aae0;
        }
    }
    ctx->pc = 0x27A750u;
    // 0x27a750: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a754: 0x8c241b04  lw          $a0, 0x1B04($at)
    ctx->pc = 0x27a754u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1B04u));
    // 0x27a758: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27a758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x27a75c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27a75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27a760: 0x106000df  beqz        $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x27A760u;
    {
        const bool branch_taken_0x27a760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a760) {
            ctx->pc = 0x27AAE0u;
            goto label_27aae0;
        }
    }
    ctx->pc = 0x27A768u;
    // 0x27a768: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27a768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27a76c: 0x8c31f9f8  lw          $s1, -0x608($at)
    ctx->pc = 0x27a76cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x61F9F8u));
    // 0x27a770: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x27a770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27a774: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x27a774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x27a778: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x27a778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x27a77c: 0x3c033fb4  lui         $v1, 0x3FB4
    ctx->pc = 0x27a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16308 << 16));
    // 0x27a780: 0x3463fdf4  ori         $v1, $v1, 0xFDF4
    ctx->pc = 0x27a780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65012);
    // 0x27a784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a788: 0x0  nop
    ctx->pc = 0x27a788u;
    // NOP
    // 0x27a78c: 0xe62001a0  swc1        $f0, 0x1A0($s1)
    ctx->pc = 0x27a78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
    // 0x27a790: 0x3c033fb4  lui         $v1, 0x3FB4
    ctx->pc = 0x27a790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16308 << 16));
    // 0x27a794: 0x3463fdf4  ori         $v1, $v1, 0xFDF4
    ctx->pc = 0x27a794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65012);
    // 0x27a798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a79c: 0x0  nop
    ctx->pc = 0x27a79cu;
    // NOP
    // 0x27a7a0: 0xe62001a4  swc1        $f0, 0x1A4($s1)
    ctx->pc = 0x27a7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 420), bits); }
    // 0x27a7a4: 0x3c033fb4  lui         $v1, 0x3FB4
    ctx->pc = 0x27a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16308 << 16));
    // 0x27a7a8: 0x3463fdf4  ori         $v1, $v1, 0xFDF4
    ctx->pc = 0x27a7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65012);
    // 0x27a7ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a7acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a7b0: 0x0  nop
    ctx->pc = 0x27a7b0u;
    // NOP
    // 0x27a7b4: 0xe62001a8  swc1        $f0, 0x1A8($s1)
    ctx->pc = 0x27a7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 424), bits); }
    // 0x27a7b8: 0xc6210124  lwc1        $f1, 0x124($s1)
    ctx->pc = 0x27a7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a7bc: 0x3c0344fc  lui         $v1, 0x44FC
    ctx->pc = 0x27a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17660 << 16));
    // 0x27a7c0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x27a7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x27a7c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a7c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a7c8: 0x0  nop
    ctx->pc = 0x27a7c8u;
    // NOP
    // 0x27a7cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27a7ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a7d0: 0x0  nop
    ctx->pc = 0x27a7d0u;
    // NOP
    // 0x27a7d4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x27A7D4u;
    {
        const bool branch_taken_0x27a7d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a7d4) {
            ctx->pc = 0x27A850u;
            goto label_27a850;
        }
    }
    ctx->pc = 0x27A7DCu;
    // 0x27a7dc: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x27a7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a7e0: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x27a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x27a7e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a7e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a7e8: 0x0  nop
    ctx->pc = 0x27a7e8u;
    // NOP
    // 0x27a7ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27a7ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27a7f0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x27a7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x27a7f4: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x27a7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a7f8: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x27a7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a7fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27a7fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27a800: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x27a800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x27a804: 0xc6210124  lwc1        $f1, 0x124($s1)
    ctx->pc = 0x27a804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a808: 0x3c0344fc  lui         $v1, 0x44FC
    ctx->pc = 0x27a808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17660 << 16));
    // 0x27a80c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x27a80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x27a810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a814: 0x0  nop
    ctx->pc = 0x27a814u;
    // NOP
    // 0x27a818: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27a818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a81c: 0x0  nop
    ctx->pc = 0x27a81cu;
    // NOP
    // 0x27a820: 0x450000af  bc1f        . + 4 + (0xAF << 2)
    ctx->pc = 0x27A820u;
    {
        const bool branch_taken_0x27a820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a820) {
            ctx->pc = 0x27AAE0u;
            goto label_27aae0;
        }
    }
    ctx->pc = 0x27A828u;
    // 0x27a828: 0x3c0344fc  lui         $v1, 0x44FC
    ctx->pc = 0x27a828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17660 << 16));
    // 0x27a82c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x27a82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x27a830: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a830u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a834: 0x0  nop
    ctx->pc = 0x27a834u;
    // NOP
    // 0x27a838: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x27a838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x27a83c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27a840: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a844: 0xa023d731  sb          $v1, -0x28CF($at)
    ctx->pc = 0x27a844u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD731u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD731u, _value); } while (0);
    // 0x27a848: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x27A848u;
    {
        const bool branch_taken_0x27a848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a848) {
            ctx->pc = 0x27AAE0u;
            goto label_27aae0;
        }
    }
    ctx->pc = 0x27A850u;
label_27a850:
    // 0x27a850: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x27a850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a854: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x27a854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x27a858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a85c: 0x0  nop
    ctx->pc = 0x27a85cu;
    // NOP
    // 0x27a860: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27a860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27a864: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x27a864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x27a868: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x27a868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a86c: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x27a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x27a870: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a874: 0x0  nop
    ctx->pc = 0x27a874u;
    // NOP
    // 0x27a878: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27a878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a87c: 0x0  nop
    ctx->pc = 0x27a87cu;
    // NOP
    // 0x27a880: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x27A880u;
    {
        const bool branch_taken_0x27a880 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a880) {
            ctx->pc = 0x27A8BCu;
            goto label_27a8bc;
        }
    }
    ctx->pc = 0x27A888u;
    // 0x27a888: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x27A888u;
    SET_GPR_U32(ctx, 31, 0x27A890u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x27A888u, 0x27A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A890u;
label_27a890:
    // 0x27a890: 0x3c03440a  lui         $v1, 0x440A
    ctx->pc = 0x27a890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17418 << 16));
    // 0x27a894: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x27a894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x27a898: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x27a898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a89c: 0x0  nop
    ctx->pc = 0x27a89cu;
    // NOP
    // 0x27a8a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27a8a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27a8a4: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x27a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x27a8a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a8a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a8ac: 0x0  nop
    ctx->pc = 0x27a8acu;
    // NOP
    // 0x27a8b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27a8b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27a8b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x27a8b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x27a8b8: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x27a8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
label_27a8bc:
    // 0x27a8bc: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x27a8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a8c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27a8c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a8c4: 0x0  nop
    ctx->pc = 0x27a8c4u;
    // NOP
    // 0x27a8c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27a8c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27a8cc: 0x0  nop
    ctx->pc = 0x27a8ccu;
    // NOP
    // 0x27a8d0: 0x45010083  bc1t        . + 4 + (0x83 << 2)
    ctx->pc = 0x27A8D0u;
    {
        const bool branch_taken_0x27a8d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a8d0) {
            ctx->pc = 0x27AAE0u;
            goto label_27aae0;
        }
    }
    ctx->pc = 0x27A8D8u;
    // 0x27a8d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a8dc: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x27a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x27a8e0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x27a8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x27a8e4: 0x1460007e  bnez        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x27A8E4u;
    {
        const bool branch_taken_0x27a8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a8e4) {
            ctx->pc = 0x27AAE0u;
            goto label_27aae0;
        }
    }
    ctx->pc = 0x27A8ECu;
    // 0x27a8ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a8f0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x27a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x27a8f4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x27a8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x27a8f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27a8fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a900: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x27a900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27a904: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x27a904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x27a908: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a90c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x27a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x27a910: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x27a910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x27a914: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27a914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27a918: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a91c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x27a91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x27a920: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x27a920u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x27a924: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x27a924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27a928: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a92c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x27a92cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27a930: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x27a930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27a934: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27a934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27a938: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x27a938u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x27a93c: 0x0  nop
    ctx->pc = 0x27a93cu;
    // NOP
    // 0x27a940: 0x0  nop
    ctx->pc = 0x27a940u;
    // NOP
    // 0x27a944: 0x1810  mfhi        $v1
    ctx->pc = 0x27a944u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x27a948: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x27A948u;
    {
        const bool branch_taken_0x27a948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a948) {
            ctx->pc = 0x27A9B4u;
            goto label_27a9b4;
        }
    }
    ctx->pc = 0x27A950u;
    // 0x27a950: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a954: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x27a954u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x27a958: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x27a958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x27a95c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27a960: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a964: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x27a964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27a968: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x27a968u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x27a96c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a970: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x27a970u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x27a974: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x27a974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x27a978: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27a978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27a97c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a980: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x27a980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x27a984: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x27a984u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x27a988: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x27a988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x27a98c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a990: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x27a990u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27a994: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x27a994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27a998: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27a998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27a99c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x27a99cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x27a9a0: 0x0  nop
    ctx->pc = 0x27a9a0u;
    // NOP
    // 0x27a9a4: 0x0  nop
    ctx->pc = 0x27a9a4u;
    // NOP
    // 0x27a9a8: 0x1810  mfhi        $v1
    ctx->pc = 0x27a9a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x27a9ac: 0x1460004c  bnez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x27A9ACu;
    {
        const bool branch_taken_0x27a9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a9ac) {
            ctx->pc = 0x27AAE0u;
            goto label_27aae0;
        }
    }
    ctx->pc = 0x27A9B4u;
label_27a9b4:
    // 0x27a9b4: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x27a9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a9b8: 0x3c024352  lui         $v0, 0x4352
    ctx->pc = 0x27a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17234 << 16));
    // 0x27a9bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a9c0: 0x0  nop
    ctx->pc = 0x27a9c0u;
    // NOP
    // 0x27a9c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27a9c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27a9c8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x27a9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27a9cc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x27a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x27a9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a9d4: 0x0  nop
    ctx->pc = 0x27a9d4u;
    // NOP
    // 0x27a9d8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x27a9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x27a9dc: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x27a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x27a9e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a9e4: 0x0  nop
    ctx->pc = 0x27a9e4u;
    // NOP
    // 0x27a9e8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x27a9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27a9ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27a9f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a9f4: 0x0  nop
    ctx->pc = 0x27a9f4u;
    // NOP
    // 0x27a9f8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x27a9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x27a9fc: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x27a9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x27aa00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x27aa00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x27aa04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x27aa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27aa08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x27aa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x27aa0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27aa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27aa10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27aa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27aa14: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x27aa14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27aa18: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x27aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x27aa1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x27aa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27aa20: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x27aa20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x27aa24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x27aa24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27aa28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x27aa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x27aa2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27aa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27aa30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27aa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27aa34: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x27aa34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x27aa38: 0x24042f04  addiu       $a0, $zero, 0x2F04
    ctx->pc = 0x27aa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12036));
    // 0x27aa3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27aa3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27aa40: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x27aa40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27aa44: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27AA44u;
    SET_GPR_U32(ctx, 31, 0x27AA4Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27AA44u, 0x27AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA4Cu;
label_27aa4c:
    // 0x27aa4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27aa4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27aa50: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27AA50u;
    SET_GPR_U32(ctx, 31, 0x27AA58u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27AA50u, 0x27AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA58u;
label_27aa58:
    // 0x27aa58: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x27aa58u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27aa5c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x27aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x27aa60: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x27aa60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x27aa64: 0x1243001e  beq         $s2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x27AA64u;
    {
        const bool branch_taken_0x27aa64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x27aa64) {
            ctx->pc = 0x27AAE0u;
            goto label_27aae0;
        }
    }
    ctx->pc = 0x27AA6Cu;
    // 0x27aa6c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x27aa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x27aa70: 0xa243011c  sb          $v1, 0x11C($s2)
    ctx->pc = 0x27aa70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x27aa74: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x27aa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27aa78: 0x3c03432a  lui         $v1, 0x432A
    ctx->pc = 0x27aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17194 << 16));
    // 0x27aa7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27aa7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aa80: 0x0  nop
    ctx->pc = 0x27aa80u;
    // NOP
    // 0x27aa84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27aa84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27aa88: 0x0  nop
    ctx->pc = 0x27aa88u;
    // NOP
    // 0x27aa8c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x27AA8Cu;
    {
        const bool branch_taken_0x27aa8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27aa8c) {
            ctx->pc = 0x27AAE0u;
            goto label_27aae0;
        }
    }
    ctx->pc = 0x27AA94u;
    // 0x27aa94: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x27aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x27aa98: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x27aa98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x27aa9c: 0x12430010  beq         $s2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x27AA9Cu;
    {
        const bool branch_taken_0x27aa9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x27aa9c) {
            ctx->pc = 0x27AAE0u;
            goto label_27aae0;
        }
    }
    ctx->pc = 0x27AAA4u;
    // 0x27aaa4: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x27aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27aaa8: 0x3c034387  lui         $v1, 0x4387
    ctx->pc = 0x27aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17287 << 16));
    // 0x27aaac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27aaacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aab0: 0x0  nop
    ctx->pc = 0x27aab0u;
    // NOP
    // 0x27aab4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x27aab4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27aab8: 0x3c03bd23  lui         $v1, 0xBD23
    ctx->pc = 0x27aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48419 << 16));
    // 0x27aabc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x27aabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x27aac0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27aac0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aac4: 0x0  nop
    ctx->pc = 0x27aac4u;
    // NOP
    // 0x27aac8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x27aac8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27aacc: 0x3c034387  lui         $v1, 0x4387
    ctx->pc = 0x27aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17287 << 16));
    // 0x27aad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27aad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27aad4: 0x0  nop
    ctx->pc = 0x27aad4u;
    // NOP
    // 0x27aad8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x27aad8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x27aadc: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x27aadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
label_27aae0:
    // 0x27aae0: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x27aae0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27aae4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27aae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27aae8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27aae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27aaec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27aaecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27aaf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27aaf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27aaf4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x27aaf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27aaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x27AAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AB00u;
}
