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

// Function: Set_effect_ctr08_taieki
// Address: 0x2f5a70 - 0x2f5f44
void Set_effect_ctr08_taieki_0x2f5a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_ctr08_taieki_0x2f5a70");
#endif

    switch (ctx->pc) {
        case 0x2f5aecu: goto label_2f5aec;
        case 0x2f5b14u: goto label_2f5b14;
        case 0x2f5c14u: goto label_2f5c14;
        case 0x2f5c38u: goto label_2f5c38;
        case 0x2f5cf8u: goto label_2f5cf8;
        case 0x2f5d1cu: goto label_2f5d1c;
        case 0x2f5d88u: goto label_2f5d88;
        case 0x2f5dacu: goto label_2f5dac;
        case 0x2f5dd0u: goto label_2f5dd0;
        case 0x2f5dfcu: goto label_2f5dfc;
        case 0x2f5e20u: goto label_2f5e20;
        case 0x2f5e54u: goto label_2f5e54;
        case 0x2f5ef8u: goto label_2f5ef8;
        default: break;
    }

    ctx->pc = 0x2f5a70u;

    // 0x2f5a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f5a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f5a74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2f5a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2f5a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f5a7c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2f5a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2f5a80: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2f5a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2f5a84: 0xe7ac0038  swc1        $f12, 0x38($sp)
    ctx->pc = 0x2f5a84u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2f5a88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f5a8c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f5a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f5a90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f5a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f5a94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f5a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f5a98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f5a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f5a9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f5a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f5aa0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f5aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f5aa4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2f5aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f5aa8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f5aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f5aac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f5aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f5ab0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f5ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f5ab4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f5ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f5ab8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f5ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f5abc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f5abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f5ac0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2f5ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f5ac4: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x2f5ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2f5ac8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f5ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f5acc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f5accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f5ad0: 0x3c022031  lui         $v0, 0x2031
    ctx->pc = 0x2f5ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8241 << 16));
    // 0x2f5ad4: 0x34420112  ori         $v0, $v0, 0x112
    ctx->pc = 0x2f5ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)274);
    // 0x2f5ad8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x2f5ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f5adc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f5adcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f5ae0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2f5ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f5ae4: 0xc06352c  jal         func_18D4B0
    ctx->pc = 0x2F5AE4u;
    SET_GPR_U32(ctx, 31, 0x2F5AECu);
    ctx->pc = 0x18D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D4B0u, 0x2F5AE4u, 0x2F5AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5AECu;
label_2f5aec:
    // 0x2f5aec: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2f5aecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f5af0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2f5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2f5af4: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2f5af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x2f5af8: 0x1202010c  beq         $s0, $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x2F5AF8u;
    {
        const bool branch_taken_0x2f5af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5af8) {
            ctx->pc = 0x2F5F2Cu;
            goto label_2f5f2c;
        }
    }
    ctx->pc = 0x2F5B00u;
    // 0x2f5b00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5b00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5b04: 0x0  nop
    ctx->pc = 0x2f5b04u;
    // NOP
    // 0x2f5b08: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2f5b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x2f5b0c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5B0Cu;
    SET_GPR_U32(ctx, 31, 0x2F5B14u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5B0Cu, 0x2F5B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5B14u;
label_2f5b14:
    // 0x2f5b14: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2f5b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2f5b18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5b1c: 0x0  nop
    ctx->pc = 0x2f5b1cu;
    // NOP
    // 0x2f5b20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5b24: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2f5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2f5b28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5b2c: 0x0  nop
    ctx->pc = 0x2f5b2cu;
    // NOP
    // 0x2f5b30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5b30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5b34: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2f5b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x2f5b38: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2f5b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2f5b3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f5b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f5b40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5b44: 0xc6000338  lwc1        $f0, 0x338($s0)
    ctx->pc = 0x2f5b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5b48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f5b48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5b4c: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x2f5b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x2f5b50: 0xc6010338  lwc1        $f1, 0x338($s0)
    ctx->pc = 0x2f5b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5b54: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2f5b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5b58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f5b58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5b5c: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2f5b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x2f5b60: 0xc601033c  lwc1        $f1, 0x33C($s0)
    ctx->pc = 0x2f5b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5b64: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2f5b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5b68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f5b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5b6c: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x2f5b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x2f5b70: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2f5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2f5b74: 0xfe020aa8  sd          $v0, 0xAA8($s0)
    ctx->pc = 0x2f5b74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2728), GPR_U64(ctx, 2));
    // 0x2f5b78: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5b7c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f5b80: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f5b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f5b84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5b88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5b8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5b90: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f5b90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f5b94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5b98: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f5b98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f5b9c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f5b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f5ba0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5ba8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f5ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f5bac: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f5bb0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f5bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f5bb4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5bb8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f5bb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f5bbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5bc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f5bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f5bc4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F5BC4u;
    {
        const bool branch_taken_0x2f5bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5bc4) {
            ctx->pc = 0x2F5C5Cu;
            goto label_2f5c5c;
        }
    }
    ctx->pc = 0x2F5BCCu;
    // 0x2f5bcc: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2f5bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2f5bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5bd4: 0x0  nop
    ctx->pc = 0x2f5bd4u;
    // NOP
    // 0x2f5bd8: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2f5bdc: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2f5bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2f5be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5be4: 0x0  nop
    ctx->pc = 0x2f5be4u;
    // NOP
    // 0x2f5be8: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f5bec: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x2f5becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x2f5bf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5bf4: 0x0  nop
    ctx->pc = 0x2f5bf4u;
    // NOP
    // 0x2f5bf8: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f5bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2f5bfc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f5c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5c04: 0x0  nop
    ctx->pc = 0x2f5c04u;
    // NOP
    // 0x2f5c08: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2f5c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x2f5c0c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5C0Cu;
    SET_GPR_U32(ctx, 31, 0x2F5C14u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5C0Cu, 0x2F5C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5C14u;
label_2f5c14:
    // 0x2f5c14: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f5c18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5c1c: 0x0  nop
    ctx->pc = 0x2f5c1cu;
    // NOP
    // 0x2f5c20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5c20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5c24: 0xc60002d0  lwc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5c28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5c2c: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2f5c30: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5C30u;
    SET_GPR_U32(ctx, 31, 0x2F5C38u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5C30u, 0x2F5C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5C38u;
label_2f5c38:
    // 0x2f5c38: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f5c3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5c40: 0x0  nop
    ctx->pc = 0x2f5c40u;
    // NOP
    // 0x2f5c44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5c44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5c48: 0xc60002d4  lwc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5c4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5c50: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f5c54: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2F5C54u;
    {
        const bool branch_taken_0x2f5c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5c54) {
            ctx->pc = 0x2F5DECu;
            goto label_2f5dec;
        }
    }
    ctx->pc = 0x2F5C5Cu;
label_2f5c5c:
    // 0x2f5c5c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5c60: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f5c64: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f5c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f5c68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5c70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5c74: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f5c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f5c78: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5c7c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f5c80: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f5c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f5c84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5c88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5c8c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f5c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f5c90: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f5c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f5c94: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f5c98: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5c9c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f5c9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f5ca0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5ca4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f5ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f5ca8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F5CA8u;
    {
        const bool branch_taken_0x2f5ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5ca8) {
            ctx->pc = 0x2F5D40u;
            goto label_2f5d40;
        }
    }
    ctx->pc = 0x2F5CB0u;
    // 0x2f5cb0: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2f5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x2f5cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5cb8: 0x0  nop
    ctx->pc = 0x2f5cb8u;
    // NOP
    // 0x2f5cbc: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2f5cc0: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2f5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2f5cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5cc8: 0x0  nop
    ctx->pc = 0x2f5cc8u;
    // NOP
    // 0x2f5ccc: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f5cd0: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x2f5cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x2f5cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5cd8: 0x0  nop
    ctx->pc = 0x2f5cd8u;
    // NOP
    // 0x2f5cdc: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f5cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2f5ce0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f5ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5ce8: 0x0  nop
    ctx->pc = 0x2f5ce8u;
    // NOP
    // 0x2f5cec: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2f5cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x2f5cf0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5CF0u;
    SET_GPR_U32(ctx, 31, 0x2F5CF8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5CF0u, 0x2F5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5CF8u;
label_2f5cf8:
    // 0x2f5cf8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f5cfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5d00: 0x0  nop
    ctx->pc = 0x2f5d00u;
    // NOP
    // 0x2f5d04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5d04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5d08: 0xc60002d0  lwc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5d0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5d10: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2f5d14: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5D14u;
    SET_GPR_U32(ctx, 31, 0x2F5D1Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5D14u, 0x2F5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D1Cu;
label_2f5d1c:
    // 0x2f5d1c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f5d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f5d20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5d24: 0x0  nop
    ctx->pc = 0x2f5d24u;
    // NOP
    // 0x2f5d28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5d28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5d2c: 0xc60002d4  lwc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5d30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5d34: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f5d38: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2F5D38u;
    {
        const bool branch_taken_0x2f5d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5d38) {
            ctx->pc = 0x2F5DECu;
            goto label_2f5dec;
        }
    }
    ctx->pc = 0x2F5D40u;
label_2f5d40:
    // 0x2f5d40: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2f5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2f5d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5d48: 0x0  nop
    ctx->pc = 0x2f5d48u;
    // NOP
    // 0x2f5d4c: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2f5d50: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2f5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2f5d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5d58: 0x0  nop
    ctx->pc = 0x2f5d58u;
    // NOP
    // 0x2f5d5c: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f5d60: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2f5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2f5d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5d68: 0x0  nop
    ctx->pc = 0x2f5d68u;
    // NOP
    // 0x2f5d6c: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f5d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2f5d70: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f5d74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5d78: 0x0  nop
    ctx->pc = 0x2f5d78u;
    // NOP
    // 0x2f5d7c: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2f5d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x2f5d80: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5D80u;
    SET_GPR_U32(ctx, 31, 0x2F5D88u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5D80u, 0x2F5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D88u;
label_2f5d88:
    // 0x2f5d88: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2f5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2f5d8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5d90: 0x0  nop
    ctx->pc = 0x2f5d90u;
    // NOP
    // 0x2f5d94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5d94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5d98: 0xc60002d0  lwc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5d9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5da0: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2f5da4: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5DA4u;
    SET_GPR_U32(ctx, 31, 0x2F5DACu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5DA4u, 0x2F5DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DACu;
label_2f5dac:
    // 0x2f5dac: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2f5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2f5db0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5db4: 0x0  nop
    ctx->pc = 0x2f5db4u;
    // NOP
    // 0x2f5db8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5db8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5dbc: 0xc60002d4  lwc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5dc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5dc4: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f5dc8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5DC8u;
    SET_GPR_U32(ctx, 31, 0x2F5DD0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5DC8u, 0x2F5DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DD0u;
label_2f5dd0:
    // 0x2f5dd0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2f5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2f5dd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5dd8: 0x0  nop
    ctx->pc = 0x2f5dd8u;
    // NOP
    // 0x2f5ddc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5ddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5de0: 0xc60002d8  lwc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f5de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5de4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5de8: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f5de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_2f5dec:
    // 0x2f5dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f5decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5df0: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2f5df0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f5df4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F5DF4u;
    SET_GPR_U32(ctx, 31, 0x2F5DFCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F5DF4u, 0x2F5DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DFCu;
label_2f5dfc:
    // 0x2f5dfc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f5e00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5e04: 0x0  nop
    ctx->pc = 0x2f5e04u;
    // NOP
    // 0x2f5e08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5e08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5e0c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2f5e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5e10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f5e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f5e14: 0xe60002f0  swc1        $f0, 0x2F0($s0)
    ctx->pc = 0x2f5e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 752), bits); }
    // 0x2f5e18: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5E18u;
    SET_GPR_U32(ctx, 31, 0x2F5E20u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5E18u, 0x2F5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E20u;
label_2f5e20:
    // 0x2f5e20: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f5e24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5e28: 0x0  nop
    ctx->pc = 0x2f5e28u;
    // NOP
    // 0x2f5e2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5e2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5e30: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f5e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5e38: 0x0  nop
    ctx->pc = 0x2f5e38u;
    // NOP
    // 0x2f5e3c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2f5e3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5e40: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2f5e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5e44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f5e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f5e48: 0xe60002f4  swc1        $f0, 0x2F4($s0)
    ctx->pc = 0x2f5e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 756), bits); }
    // 0x2f5e4c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5E4Cu;
    SET_GPR_U32(ctx, 31, 0x2F5E54u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5E4Cu, 0x2F5E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E54u;
label_2f5e54:
    // 0x2f5e54: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2f5e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2f5e58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5e5c: 0x0  nop
    ctx->pc = 0x2f5e5cu;
    // NOP
    // 0x2f5e60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5e60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5e64: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2f5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2f5e68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5e6c: 0x0  nop
    ctx->pc = 0x2f5e6cu;
    // NOP
    // 0x2f5e70: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2f5e70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5e74: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2f5e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5e78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f5e78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f5e7c: 0xe60002f8  swc1        $f0, 0x2F8($s0)
    ctx->pc = 0x2f5e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 760), bits); }
    // 0x2f5e80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5e84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5e88: 0x0  nop
    ctx->pc = 0x2f5e88u;
    // NOP
    // 0x2f5e8c: 0xe60002fc  swc1        $f0, 0x2FC($s0)
    ctx->pc = 0x2f5e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 764), bits); }
    // 0x2f5e90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5e90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5e94: 0x0  nop
    ctx->pc = 0x2f5e94u;
    // NOP
    // 0x2f5e98: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x2f5e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    // 0x2f5e9c: 0x3c02bfa6  lui         $v0, 0xBFA6
    ctx->pc = 0x2f5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49062 << 16));
    // 0x2f5ea0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2f5ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2f5ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5ea8: 0x0  nop
    ctx->pc = 0x2f5ea8u;
    // NOP
    // 0x2f5eac: 0xe6000304  swc1        $f0, 0x304($s0)
    ctx->pc = 0x2f5eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
    // 0x2f5eb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5eb4: 0x0  nop
    ctx->pc = 0x2f5eb4u;
    // NOP
    // 0x2f5eb8: 0xe6000308  swc1        $f0, 0x308($s0)
    ctx->pc = 0x2f5eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 776), bits); }
    // 0x2f5ebc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5ec4: 0x0  nop
    ctx->pc = 0x2f5ec4u;
    // NOP
    // 0x2f5ec8: 0xe600030c  swc1        $f0, 0x30C($s0)
    ctx->pc = 0x2f5ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 780), bits); }
    // 0x2f5ecc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2f5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2f5ed0: 0xa202034f  sb          $v0, 0x34F($s0)
    ctx->pc = 0x2f5ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f5ed4: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x2f5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2f5ed8: 0xae020364  sw          $v0, 0x364($s0)
    ctx->pc = 0x2f5ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
    // 0x2f5edc: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x2f5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2f5ee0: 0xae020334  sw          $v0, 0x334($s0)
    ctx->pc = 0x2f5ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
    // 0x2f5ee4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2f5ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5ee8: 0x260502f0  addiu       $a1, $s0, 0x2F0
    ctx->pc = 0x2f5ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x2f5eec: 0x260602f0  addiu       $a2, $s0, 0x2F0
    ctx->pc = 0x2f5eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x2f5ef0: 0xc0c9694  jal         func_325A50
    ctx->pc = 0x2F5EF0u;
    SET_GPR_U32(ctx, 31, 0x2F5EF8u);
    ctx->pc = 0x325A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A50u, 0x2F5EF0u, 0x2F5EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5EF8u;
label_2f5ef8:
    // 0x2f5ef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5efc: 0x0  nop
    ctx->pc = 0x2f5efcu;
    // NOP
    // 0x2f5f00: 0xe6000310  swc1        $f0, 0x310($s0)
    ctx->pc = 0x2f5f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 784), bits); }
    // 0x2f5f04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5f08: 0x0  nop
    ctx->pc = 0x2f5f08u;
    // NOP
    // 0x2f5f0c: 0xe6000314  swc1        $f0, 0x314($s0)
    ctx->pc = 0x2f5f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 788), bits); }
    // 0x2f5f10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5f10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5f14: 0x0  nop
    ctx->pc = 0x2f5f14u;
    // NOP
    // 0x2f5f18: 0xe6000318  swc1        $f0, 0x318($s0)
    ctx->pc = 0x2f5f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 792), bits); }
    // 0x2f5f1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5f24: 0x0  nop
    ctx->pc = 0x2f5f24u;
    // NOP
    // 0x2f5f28: 0xe600031c  swc1        $f0, 0x31C($s0)
    ctx->pc = 0x2f5f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 796), bits); }
label_2f5f2c:
    // 0x2f5f2c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x2f5f2cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2f5f30: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2f5f30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5f34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5f38: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2f5f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f5f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5F44u;
}
