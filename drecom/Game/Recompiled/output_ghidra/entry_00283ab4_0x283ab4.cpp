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

// Function: entry_00283ab4
// Address: 0x283ab4 - 0x283c78
void entry_00283ab4_0x283ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283ab4_0x283ab4");
#endif

    switch (ctx->pc) {
        case 0x283b20u: goto label_283b20;
        case 0x283b68u: goto label_283b68;
        case 0x283ba0u: goto label_283ba0;
        case 0x283c38u: goto label_283c38;
        case 0x283c44u: goto label_283c44;
        default: break;
    }

    ctx->pc = 0x283ab4u;

    // 0x283ab4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x283ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x283ab8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x283ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x283abc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x283abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x283ac0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x283ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x283ac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283ac8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x283ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283acc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x283accu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x283ad0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x283ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x283ad4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x283ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x283ad8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x283ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x283adc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x283adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x283ae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283ae4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x283ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x283ae8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x283ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x283aec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x283aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x283af0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x283af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x283af4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x283af4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x283af8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x283af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283afc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x283afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x283b00: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x283b00u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x283b04: 0x0  nop
    ctx->pc = 0x283b04u;
    // NOP
    // 0x283b08: 0x0  nop
    ctx->pc = 0x283b08u;
    // NOP
    // 0x283b0c: 0x1010  mfhi        $v0
    ctx->pc = 0x283b0cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x283b10: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x283B10u;
    {
        const bool branch_taken_0x283b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283b10) {
            ctx->pc = 0x283C9Cu;
            return;
        }
    }
    ctx->pc = 0x283B18u;
    // 0x283b18: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283B18u;
    SET_GPR_U32(ctx, 31, 0x283B20u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283B18u, 0x283B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B20u;
label_283b20:
    // 0x283b20: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x283b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x283b24: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x283b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x283b28: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x283b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x283b2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x283b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x283b30: 0x3c02c66a  lui         $v0, 0xC66A
    ctx->pc = 0x283b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50794 << 16));
    // 0x283b34: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x283b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x283b38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283b3c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x283b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283b40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283b44: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x283b44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x283b48: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x283b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x283b4c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x283b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x283b50: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x283b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x283b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283b58: 0x0  nop
    ctx->pc = 0x283b58u;
    // NOP
    // 0x283b5c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x283b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x283b60: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283B60u;
    SET_GPR_U32(ctx, 31, 0x283B68u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283B60u, 0x283B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B68u;
label_283b68:
    // 0x283b68: 0x3c024694  lui         $v0, 0x4694
    ctx->pc = 0x283b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18068 << 16));
    // 0x283b6c: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x283b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x283b70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283b74: 0x0  nop
    ctx->pc = 0x283b74u;
    // NOP
    // 0x283b78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283b7c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x283b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x283b80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x283b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x283b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283b88: 0x0  nop
    ctx->pc = 0x283b88u;
    // NOP
    // 0x283b8c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x283b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x283b90: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x283b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283b94: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x283b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x283b98: 0xc06765c  jal         func_19D970
    ctx->pc = 0x283B98u;
    SET_GPR_U32(ctx, 31, 0x283BA0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x283B98u, 0x283BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283BA0u;
label_283ba0:
    // 0x283ba0: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x283ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x283ba4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x283ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x283ba8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283bac: 0x0  nop
    ctx->pc = 0x283bacu;
    // NOP
    // 0x283bb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x283bb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283bb4: 0x3c02c59c  lui         $v0, 0xC59C
    ctx->pc = 0x283bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50588 << 16));
    // 0x283bb8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x283bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x283bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283bc0: 0x0  nop
    ctx->pc = 0x283bc0u;
    // NOP
    // 0x283bc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x283bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x283bc8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x283bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x283bcc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x283bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283bd0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x283bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x283bd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x283bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x283bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283bdc: 0x0  nop
    ctx->pc = 0x283bdcu;
    // NOP
    // 0x283be0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x283be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x283be4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x283be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x283be8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x283be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x283bec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x283becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x283bf0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x283bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x283bf4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x283bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x283bf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x283bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x283bfc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x283bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x283c00: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x283c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x283c04: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x283c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x283c08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x283c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x283c0c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x283c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x283c10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x283c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x283c14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x283c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x283c18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x283c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x283c1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x283c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x283c20: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x283c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x283c24: 0x24043301  addiu       $a0, $zero, 0x3301
    ctx->pc = 0x283c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13057));
    // 0x283c28: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x283c28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283c2c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x283c2cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283c30: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x283C30u;
    SET_GPR_U32(ctx, 31, 0x283C38u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x283C30u, 0x283C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283C38u;
label_283c38:
    // 0x283c38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x283c38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x283c3c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x283C3Cu;
    SET_GPR_U32(ctx, 31, 0x283C44u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x283C3Cu, 0x283C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283C44u;
label_283c44:
    // 0x283c44: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x283c44u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x283c48: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x283c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x283c4c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x283c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x283c50: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x283C50u;
    {
        const bool branch_taken_0x283c50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x283c50) {
            ctx->pc = 0x283C78u;
            return;
        }
    }
    ctx->pc = 0x283C58u;
    // 0x283c58: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x283c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x283c5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x283c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x283c60: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x283c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x283c64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x283c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283c68: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x283c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283c6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x283c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x283c70: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x283c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x283c74: 0xe64002dc  swc1        $f0, 0x2DC($s2)
    ctx->pc = 0x283c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 732), bits); }
    ctx->pc = 0x283c78u;
}
