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

// Function: entry_0020fe58
// Address: 0x20fe58 - 0x210028
void entry_0020fe58_0x20fe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fe58_0x20fe58");
#endif

    switch (ctx->pc) {
        case 0x20fed4u: goto label_20fed4;
        case 0x20ff18u: goto label_20ff18;
        case 0x20ff88u: goto label_20ff88;
        case 0x20ffd4u: goto label_20ffd4;
        case 0x210024u: goto label_210024;
        default: break;
    }

    ctx->pc = 0x20fe58u;

    // 0x20fe58: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x20fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x20fe5c: 0x2486a450  addiu       $a2, $a0, -0x5BB0
    ctx->pc = 0x20fe5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943824));
    // 0x20fe60: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x20fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x20fe64: 0x78d30000  lq          $s3, 0x0($a2)
    ctx->pc = 0x20fe64u;
    SET_GPR_VEC(ctx, 19, FAST_READ128(0x38A450u));
    // 0x20fe68: 0x7c730000  sq          $s3, 0x0($v1)
    ctx->pc = 0x20fe68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 19));
    // 0x20fe6c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20fe70: 0x2464a460  addiu       $a0, $v1, -0x5BA0
    ctx->pc = 0x20fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943840));
    // 0x20fe74: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x20fe74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x20fe78: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x20fe78u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A460u));
    // 0x20fe7c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x20fe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x20fe80: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20fe84: 0x2464a470  addiu       $a0, $v1, -0x5B90
    ctx->pc = 0x20fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943856));
    // 0x20fe88: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x20fe88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x20fe8c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x20fe8cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A470u));
    // 0x20fe90: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x20fe90u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x20fe94: 0x3c03c5c8  lui         $v1, 0xC5C8
    ctx->pc = 0x20fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50632 << 16));
    // 0x20fe98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20fe98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fe9c: 0x0  nop
    ctx->pc = 0x20fe9cu;
    // NOP
    // 0x20fea0: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x20fea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x20fea4: 0x3c0646c1  lui         $a2, 0x46C1
    ctx->pc = 0x20fea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18113 << 16));
    // 0x20fea8: 0x34c55c00  ori         $a1, $a2, 0x5C00
    ctx->pc = 0x20fea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)23552);
    // 0x20feac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20feacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20feb0: 0x0  nop
    ctx->pc = 0x20feb0u;
    // NOP
    // 0x20feb4: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x20feb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x20feb8: 0x3c04c615  lui         $a0, 0xC615
    ctx->pc = 0x20feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50709 << 16));
    // 0x20febc: 0x34833800  ori         $v1, $a0, 0x3800
    ctx->pc = 0x20febcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14336);
    // 0x20fec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20fec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fec4: 0x0  nop
    ctx->pc = 0x20fec4u;
    // NOP
    // 0x20fec8: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x20fec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x20fecc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20FECCu;
    SET_GPR_U32(ctx, 31, 0x20FED4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20FECCu, 0x20FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FED4u;
label_20fed4:
    // 0x20fed4: 0x3c0644bb  lui         $a2, 0x44BB
    ctx->pc = 0x20fed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17595 << 16));
    // 0x20fed8: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x20fed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x20fedc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x20fedcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20fee0: 0x0  nop
    ctx->pc = 0x20fee0u;
    // NOP
    // 0x20fee4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20fee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20fee8: 0x3c04c59c  lui         $a0, 0xC59C
    ctx->pc = 0x20fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50588 << 16));
    // 0x20feec: 0x34864000  ori         $a2, $a0, 0x4000
    ctx->pc = 0x20feecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x20fef0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20fef0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fef4: 0x0  nop
    ctx->pc = 0x20fef4u;
    // NOP
    // 0x20fef8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20fef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20fefc: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x20fefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x20ff00: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x20ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x20ff04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20ff04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ff08: 0x0  nop
    ctx->pc = 0x20ff08u;
    // NOP
    // 0x20ff0c: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x20ff0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x20ff10: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20FF10u;
    SET_GPR_U32(ctx, 31, 0x20FF18u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20FF10u, 0x20FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF18u;
label_20ff18:
    // 0x20ff18: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x20ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
    // 0x20ff1c: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x20ff1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x20ff20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20ff20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20ff24: 0x0  nop
    ctx->pc = 0x20ff24u;
    // NOP
    // 0x20ff28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20ff28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20ff2c: 0x3c0445bb  lui         $a0, 0x45BB
    ctx->pc = 0x20ff2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17851 << 16));
    // 0x20ff30: 0x34858000  ori         $a1, $a0, 0x8000
    ctx->pc = 0x20ff30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x20ff34: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20ff34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ff38: 0x0  nop
    ctx->pc = 0x20ff38u;
    // NOP
    // 0x20ff3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20ff3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20ff40: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x20ff40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x20ff44: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20ff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x20ff48: 0x3c05442f  lui         $a1, 0x442F
    ctx->pc = 0x20ff48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17455 << 16));
    // 0x20ff4c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x20ff4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20ff50: 0x3c034470  lui         $v1, 0x4470
    ctx->pc = 0x20ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17520 << 16));
    // 0x20ff54: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x20ff54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20ff58: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x20ff58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
    // 0x20ff5c: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x20ff5cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20ff60: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20ff60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ff64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20ff64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ff68: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x20ff68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x20ff6c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20ff6cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ff70: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20ff70u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ff74: 0x27a901b0  addiu       $t1, $sp, 0x1B0
    ctx->pc = 0x20ff74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x20ff78: 0x27aa01c0  addiu       $t2, $sp, 0x1C0
    ctx->pc = 0x20ff78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x20ff7c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20ff7cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ff80: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x20FF80u;
    SET_GPR_U32(ctx, 31, 0x20FF88u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20FF80u, 0x20FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FF88u;
label_20ff88:
    // 0x20ff88: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20ff88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20ff8c: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x20ff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
    // 0x20ff90: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x20ff90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20ff94: 0x3c064453  lui         $a2, 0x4453
    ctx->pc = 0x20ff94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17491 << 16));
    // 0x20ff98: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x20ff98u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20ff9c: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x20ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x20ffa0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x20ffa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20ffa4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20ffa8: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x20ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x20ffac: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20ffacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ffb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20ffb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ffb4: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x20ffb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x20ffb8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20ffb8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ffbc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20ffbcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ffc0: 0x27a901b0  addiu       $t1, $sp, 0x1B0
    ctx->pc = 0x20ffc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x20ffc4: 0x27aa01c0  addiu       $t2, $sp, 0x1C0
    ctx->pc = 0x20ffc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x20ffc8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20ffc8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ffcc: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x20FFCCu;
    SET_GPR_U32(ctx, 31, 0x20FFD4u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20FFCCu, 0x20FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFD4u;
label_20ffd4:
    // 0x20ffd4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x20ffd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20ffd8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x20ffd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20ffdc: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x20ffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x20ffe0: 0x3c054411  lui         $a1, 0x4411
    ctx->pc = 0x20ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17425 << 16));
    // 0x20ffe4: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x20ffe4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20ffe8: 0x3c0343d2  lui         $v1, 0x43D2
    ctx->pc = 0x20ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17362 << 16));
    // 0x20ffec: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x20ffecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20fff0: 0x3c06435c  lui         $a2, 0x435C
    ctx->pc = 0x20fff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17244 << 16));
    // 0x20fff4: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x20fff4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20fff8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20fff8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fffc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20fffcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210000: 0x27a701a0  addiu       $a3, $sp, 0x1A0
    ctx->pc = 0x210000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x210004: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x210004u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x210008: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x210008u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21000c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x21000cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210010: 0x27a901b0  addiu       $t1, $sp, 0x1B0
    ctx->pc = 0x210010u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x210014: 0x27aa01c0  addiu       $t2, $sp, 0x1C0
    ctx->pc = 0x210014u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x210018: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x210018u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21001c: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x21001Cu;
    SET_GPR_U32(ctx, 31, 0x210024u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x21001Cu, 0x210024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210024u;
label_210024:
    // 0x210024: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x210024u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x210028u;
}
