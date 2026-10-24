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

// Function: entry_002ffc48
// Address: 0x2ffc48 - 0x30009c
void entry_002ffc48_0x2ffc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ffc48_0x2ffc48");
#endif

    switch (ctx->pc) {
        case 0x2ffc5cu: goto label_2ffc5c;
        case 0x2ffc78u: goto label_2ffc78;
        case 0x2ffcacu: goto label_2ffcac;
        case 0x2ffcd8u: goto label_2ffcd8;
        case 0x2ffcf4u: goto label_2ffcf4;
        case 0x2ffd24u: goto label_2ffd24;
        case 0x2ffe1cu: goto label_2ffe1c;
        case 0x2ffe28u: goto label_2ffe28;
        case 0x2ffe60u: goto label_2ffe60;
        case 0x2ffe70u: goto label_2ffe70;
        case 0x2ffe7cu: goto label_2ffe7c;
        case 0x2ffe98u: goto label_2ffe98;
        case 0x2ffeccu: goto label_2ffecc;
        case 0x2ffef8u: goto label_2ffef8;
        case 0x2fff14u: goto label_2fff14;
        case 0x2fff44u: goto label_2fff44;
        case 0x30004cu: goto label_30004c;
        case 0x300058u: goto label_300058;
        case 0x30008cu: goto label_30008c;
        case 0x300098u: goto label_300098;
        default: break;
    }

    ctx->pc = 0x2ffc48u;

    // 0x2ffc48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ffc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ffc4c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ffc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffc50: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2ffc50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x2ffc54: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFC54u;
    SET_GPR_U32(ctx, 31, 0x2FFC5Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFC54u, 0x2FFC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC5Cu;
label_2ffc5c:
    // 0x2ffc5c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2ffc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2ffc60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ffc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffc64: 0x0  nop
    ctx->pc = 0x2ffc64u;
    // NOP
    // 0x2ffc68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffc68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffc6c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ffc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ffc70: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FFC70u;
    SET_GPR_U32(ctx, 31, 0x2FFC78u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FFC70u, 0x2FFC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC78u;
label_2ffc78:
    // 0x2ffc78: 0x3c024509  lui         $v0, 0x4509
    ctx->pc = 0x2ffc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17673 << 16));
    // 0x2ffc7c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2ffc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2ffc80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ffc80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffc84: 0x0  nop
    ctx->pc = 0x2ffc84u;
    // NOP
    // 0x2ffc88: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ffc88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffc8c: 0x3c04459c  lui         $a0, 0x459C
    ctx->pc = 0x2ffc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17820 << 16));
    // 0x2ffc90: 0x34874000  ori         $a3, $a0, 0x4000
    ctx->pc = 0x2ffc90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2ffc94: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2ffc94u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffc98: 0x0  nop
    ctx->pc = 0x2ffc98u;
    // NOP
    // 0x2ffc9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ffc9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ffca0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2ffca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ffca4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFCA4u;
    SET_GPR_U32(ctx, 31, 0x2FFCACu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFCA4u, 0x2FFCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCACu;
label_2ffcac:
    // 0x2ffcac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2ffcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2ffcb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ffcb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffcb4: 0x0  nop
    ctx->pc = 0x2ffcb4u;
    // NOP
    // 0x2ffcb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffcb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffcbc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2ffcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ffcc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ffcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ffcc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ffcc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffcc8: 0x0  nop
    ctx->pc = 0x2ffcc8u;
    // NOP
    // 0x2ffccc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2ffcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2ffcd0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFCD0u;
    SET_GPR_U32(ctx, 31, 0x2FFCD8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFCD0u, 0x2FFCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCD8u;
label_2ffcd8:
    // 0x2ffcd8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2ffcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2ffcdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ffcdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffce0: 0x0  nop
    ctx->pc = 0x2ffce0u;
    // NOP
    // 0x2ffce4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffce8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2ffce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ffcec: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FFCECu;
    SET_GPR_U32(ctx, 31, 0x2FFCF4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FFCECu, 0x2FFCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCF4u;
label_2ffcf4:
    // 0x2ffcf4: 0x3c0245ab  lui         $v0, 0x45AB
    ctx->pc = 0x2ffcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17835 << 16));
    // 0x2ffcf8: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x2ffcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x2ffcfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ffcfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffd00: 0x0  nop
    ctx->pc = 0x2ffd00u;
    // NOP
    // 0x2ffd04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ffd04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffd08: 0x3c02c5fa  lui         $v0, 0xC5FA
    ctx->pc = 0x2ffd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50682 << 16));
    // 0x2ffd0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ffd0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffd10: 0x0  nop
    ctx->pc = 0x2ffd10u;
    // NOP
    // 0x2ffd14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ffd14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ffd18: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2ffd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ffd1c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFD1Cu;
    SET_GPR_U32(ctx, 31, 0x2FFD24u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFD1Cu, 0x2FFD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD24u;
label_2ffd24:
    // 0x2ffd24: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2ffd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2ffd28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ffd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffd2c: 0x0  nop
    ctx->pc = 0x2ffd2cu;
    // NOP
    // 0x2ffd30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffd30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffd34: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2ffd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ffd38: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2ffd38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2ffd3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ffd3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffd40: 0x0  nop
    ctx->pc = 0x2ffd40u;
    // NOP
    // 0x2ffd44: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2ffd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2ffd48: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2ffd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ffd4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ffd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ffd50: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ffd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ffd54: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ffd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffd58: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x2ffd58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x2ffd5c: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x2ffd5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2ffd60: 0x643024  and         $a2, $v1, $a0
    ctx->pc = 0x2ffd60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ffd64: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2ffd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2ffd68: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2ffd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ffd6c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2ffd6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffd70: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2ffd70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2ffd74: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ffd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffd78: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ffd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ffd7c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x2ffd7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ffd80: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x2ffd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2ffd84: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x2ffd84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ffd88: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ffd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffd8c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2ffd8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffd90: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2ffd90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2ffd94: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2ffd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffd98: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2ffd98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x2ffd9c: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x2ffd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ffda0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2ffda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2ffda4: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2ffda4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffda8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ffda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffdac: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2ffdacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffdb0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2ffdb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2ffdb4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2ffdb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffdb8: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2ffdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x2ffdbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ffdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ffdc0: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x2ffdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2ffdc4: 0xe23025  or          $a2, $a3, $v0
    ctx->pc = 0x2ffdc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2ffdc8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ffdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffdcc: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2ffdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ffdd0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ffdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ffdd4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ffdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ffdd8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ffdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffddc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ffddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ffde0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ffde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ffde4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ffde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ffde8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2ffde8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ffdec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2ffdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffdf0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2ffdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2ffdf4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ffdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ffdf8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ffdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ffdfc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ffdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffe00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ffe00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ffe04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ffe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ffe08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ffe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ffe0c: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x2ffe0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2ffe10: 0x24043200  addiu       $a0, $zero, 0x3200
    ctx->pc = 0x2ffe10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12800));
    // 0x2ffe14: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2FFE14u;
    SET_GPR_U32(ctx, 31, 0x2FFE1Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2FFE14u, 0x2FFE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE1Cu;
label_2ffe1c:
    // 0x2ffe1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2ffe1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffe20: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2FFE20u;
    SET_GPR_U32(ctx, 31, 0x2FFE28u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2FFE20u, 0x2FFE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE28u;
label_2ffe28:
    // 0x2ffe28: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2ffe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ffe2c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x2ffe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2ffe30: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2ffe30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ffe34: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ffe34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ffe38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ffe38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffe3c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ffe3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ffe40: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x2ffe40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ffe44: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x2ffe44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ffe48: 0x34049301  ori         $a0, $zero, 0x9301
    ctx->pc = 0x2ffe48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    // 0x2ffe4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ffe4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ffe50: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ffe50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ffe54: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2ffe54u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffe58: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FFE58u;
    SET_GPR_U32(ctx, 31, 0x2FFE60u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FFE58u, 0x2FFE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE60u;
label_2ffe60:
    // 0x2ffe60: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2ffe60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffe64: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2ffe64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2ffe68: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FFE68u;
    SET_GPR_U32(ctx, 31, 0x2FFE70u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FFE68u, 0x2FFE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE70u;
label_2ffe70:
    // 0x2ffe70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ffe70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ffe74: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFE74u;
    SET_GPR_U32(ctx, 31, 0x2FFE7Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFE74u, 0x2FFE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE7Cu;
label_2ffe7c:
    // 0x2ffe7c: 0x3c0743fa  lui         $a3, 0x43FA
    ctx->pc = 0x2ffe7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17402 << 16));
    // 0x2ffe80: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2ffe80u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffe84: 0x0  nop
    ctx->pc = 0x2ffe84u;
    // NOP
    // 0x2ffe88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffe88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffe8c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ffe8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ffe90: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FFE90u;
    SET_GPR_U32(ctx, 31, 0x2FFE98u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FFE90u, 0x2FFE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE98u;
label_2ffe98:
    // 0x2ffe98: 0x3c034509  lui         $v1, 0x4509
    ctx->pc = 0x2ffe98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17673 << 16));
    // 0x2ffe9c: 0x34688000  ori         $t0, $v1, 0x8000
    ctx->pc = 0x2ffe9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2ffea0: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2ffea0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffea4: 0x0  nop
    ctx->pc = 0x2ffea4u;
    // NOP
    // 0x2ffea8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ffea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffeac: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x2ffeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x2ffeb0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2ffeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2ffeb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ffeb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffeb8: 0x0  nop
    ctx->pc = 0x2ffeb8u;
    // NOP
    // 0x2ffebc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ffebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ffec0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2ffec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ffec4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFEC4u;
    SET_GPR_U32(ctx, 31, 0x2FFECCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFEC4u, 0x2FFECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFECCu;
label_2ffecc:
    // 0x2ffecc: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x2ffeccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x2ffed0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ffed0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffed4: 0x0  nop
    ctx->pc = 0x2ffed4u;
    // NOP
    // 0x2ffed8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ffed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ffedc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2ffedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ffee0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ffee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ffee4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ffee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffee8: 0x0  nop
    ctx->pc = 0x2ffee8u;
    // NOP
    // 0x2ffeec: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2ffeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2ffef0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFEF0u;
    SET_GPR_U32(ctx, 31, 0x2FFEF8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFEF0u, 0x2FFEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFEF8u;
label_2ffef8:
    // 0x2ffef8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2ffef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2ffefc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ffefcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fff00: 0x0  nop
    ctx->pc = 0x2fff00u;
    // NOP
    // 0x2fff04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fff04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fff08: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2fff08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fff0c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2FFF0Cu;
    SET_GPR_U32(ctx, 31, 0x2FFF14u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2FFF0Cu, 0x2FFF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF14u;
label_2fff14:
    // 0x2fff14: 0x3c07455a  lui         $a3, 0x455A
    ctx->pc = 0x2fff14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17754 << 16));
    // 0x2fff18: 0x34e3c000  ori         $v1, $a3, 0xC000
    ctx->pc = 0x2fff18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)49152);
    // 0x2fff1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fff1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fff20: 0x0  nop
    ctx->pc = 0x2fff20u;
    // NOP
    // 0x2fff24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fff24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fff28: 0x3c03c5fa  lui         $v1, 0xC5FA
    ctx->pc = 0x2fff28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50682 << 16));
    // 0x2fff2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fff2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fff30: 0x0  nop
    ctx->pc = 0x2fff30u;
    // NOP
    // 0x2fff34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fff34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fff38: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2fff38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fff3c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2FFF3Cu;
    SET_GPR_U32(ctx, 31, 0x2FFF44u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2FFF3Cu, 0x2FFF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF44u;
label_2fff44:
    // 0x2fff44: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x2fff44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x2fff48: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2fff48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fff4c: 0x0  nop
    ctx->pc = 0x2fff4cu;
    // NOP
    // 0x2fff50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fff50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fff54: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2fff54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2fff58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fff58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fff5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fff5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fff60: 0x0  nop
    ctx->pc = 0x2fff60u;
    // NOP
    // 0x2fff64: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2fff64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2fff68: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2fff68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fff6c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2fff6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fff70: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2fff70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2fff74: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2fff74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fff78: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x2fff78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x2fff7c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x2fff7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fff80: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x2fff80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2fff84: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x2fff84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2fff88: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2fff88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fff8c: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x2fff8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fff90: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fff90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fff94: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fff94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fff98: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2fff98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2fff9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fffa0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2fffa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2fffa4: 0xc24025  or          $t0, $a2, $v0
    ctx->pc = 0x2fffa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2fffa8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2fffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2fffac: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x2fffacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fffb0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fffb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fffb4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fffb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fffb8: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2fffb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2fffbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fffbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fffc0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2fffc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2fffc4: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2fffc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fffc8: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x2fffc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2fffcc: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x2fffccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2fffd0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2fffd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2fffd4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2fffd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fffd8: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2fffd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2fffdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fffdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fffe0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2fffe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2fffe4: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x2fffe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2fffe8: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x2fffe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2fffec: 0x24c30060  addiu       $v1, $a2, 0x60
    ctx->pc = 0x2fffecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x2ffff0: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x2ffff0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ffff4: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2ffff4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2ffff8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2ffff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ffffc: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x2ffffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x300000: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x300000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x300004: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x300004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x300008: 0x3503c  dsll32      $t2, $v1, 0
    ctx->pc = 0x300008u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30000c: 0x8fa90078  lw          $t1, 0x78($sp)
    ctx->pc = 0x30000cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300010: 0x25230060  addiu       $v1, $t1, 0x60
    ctx->pc = 0x300010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x300014: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x300014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x300018: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x300018u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x30001c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x30001cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x300020: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x300020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x300024: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x300024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x300028: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x300028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x30002c: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x30002cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x300030: 0x24073201  addiu       $a3, $zero, 0x3201
    ctx->pc = 0x300030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12801));
    // 0x300034: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x300034u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x300038: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x300038u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x30003c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x30003cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300040: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x300040u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x300044: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x300044u;
    SET_GPR_U32(ctx, 31, 0x30004Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x300044u, 0x30004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30004Cu;
label_30004c:
    // 0x30004c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30004cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300050: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x300050u;
    SET_GPR_U32(ctx, 31, 0x300058u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x300050u, 0x300058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300058u;
label_300058:
    // 0x300058: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x300058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30005c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x30005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x300060: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x300060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x300064: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x300064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x300068: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x300068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30006c: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x30006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x300070: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x300070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x300074: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x300074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x300078: 0x34049301  ori         $a0, $zero, 0x9301
    ctx->pc = 0x300078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37633);
    // 0x30007c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30007cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x300080: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x300080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x300084: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x300084u;
    SET_GPR_U32(ctx, 31, 0x30008Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x300084u, 0x30008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30008Cu;
label_30008c:
    // 0x30008c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30008cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x300090: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x300090u;
    SET_GPR_U32(ctx, 31, 0x300098u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x300090u, 0x300098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300098u;
label_300098:
    // 0x300098: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x300098u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x30009cu;
}
