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

// Function: entry_0024ec20
// Address: 0x24ec20 - 0x24ede0
void entry_0024ec20_0x24ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024ec20_0x24ec20");
#endif

    switch (ctx->pc) {
        case 0x24ec28u: goto label_24ec28;
        case 0x24ec44u: goto label_24ec44;
        case 0x24edc0u: goto label_24edc0;
        case 0x24edccu: goto label_24edcc;
        default: break;
    }

    ctx->pc = 0x24ec20u;

    // 0x24ec20: 0xc067654  jal         func_19D950
    ctx->pc = 0x24EC20u;
    SET_GPR_U32(ctx, 31, 0x24EC28u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x24EC20u, 0x24EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC28u;
label_24ec28:
    // 0x24ec28: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x24ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x24ec2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24ec2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ec30: 0x0  nop
    ctx->pc = 0x24ec30u;
    // NOP
    // 0x24ec34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24ec34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24ec38: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24ec38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24ec3c: 0xc067654  jal         func_19D950
    ctx->pc = 0x24EC3Cu;
    SET_GPR_U32(ctx, 31, 0x24EC44u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x24EC3Cu, 0x24EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC44u;
label_24ec44:
    // 0x24ec44: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x24ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x24ec48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24ec48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ec4c: 0x0  nop
    ctx->pc = 0x24ec4cu;
    // NOP
    // 0x24ec50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24ec50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24ec54: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x24ec54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x24ec58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x24ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ec5c: 0x246200a0  addiu       $v0, $v1, 0xA0
    ctx->pc = 0x24ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24ec60: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x24ec60u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ec64: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ec68: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x24ec68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x24ec6c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24ec6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ec70: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24ec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ec74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24ec74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ec78: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x24ec78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24ec7c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24ec7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ec80: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x24ec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ec84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24ec84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ec88: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24ec88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24ec8c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x24ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x24ec90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ec90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ec94: 0x0  nop
    ctx->pc = 0x24ec94u;
    // NOP
    // 0x24ec98: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24ec98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24ec9c: 0x3c03c316  lui         $v1, 0xC316
    ctx->pc = 0x24ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49942 << 16));
    // 0x24eca0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24eca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24eca4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x24eca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24eca8: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x24eca8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ecac: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x24ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x24ecb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24ecb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ecb4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x24ecb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ecb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24ecb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24ecbc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x24ecbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x24ecc0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24ecc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24ecc4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x24ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x24ecc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24ecc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24eccc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x24ecccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ecd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24ecd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ecd4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x24ecd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24ecd8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ecdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24ecdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ece0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x24ece0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x24ece4: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x24ece4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ece8: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x24ece8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x24ecec: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x24ececu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x24ecf0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x24ecf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x24ecf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24ecf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ecf8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x24ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24ecfc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x24ecfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24ed00: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24ed00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x24ed04: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x24ed04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ed08: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x24ed08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x24ed0c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x24ed0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24ed10: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x24ed10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x24ed14: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x24ed14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24ed18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ed1c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24ed20: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x24ed20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ed24: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x24ed24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x24ed28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ed28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ed2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ed30: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x24ed30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ed34: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x24ed34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x24ed38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ed38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ed3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ed40: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24ed44: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24ed44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ed48: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x24ed48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x24ed4c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24ed4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ed50: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x24ed50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x24ed54: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x24ed54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x24ed58: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x24ed58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x24ed5c: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x24ed5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24ed60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ed64: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x24ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24ed68: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x24ed68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24ed6c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ed6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ed70: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ed70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ed74: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ed74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ed78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ed78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ed7c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24ed7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ed80: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x24ed80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x24ed84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24ed88: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x24ed88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24ed8c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x24ed8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x24ed90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ed90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ed94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ed94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ed98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ed9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ed9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24eda0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24eda0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24eda4: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x24eda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x24eda8: 0x24060600  addiu       $a2, $zero, 0x600
    ctx->pc = 0x24eda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x24edac: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x24edacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x24edb0: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x24edb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x24edb4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x24edb4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24edb8: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24EDB8u;
    SET_GPR_U32(ctx, 31, 0x24EDC0u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24EDB8u, 0x24EDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDC0u;
label_24edc0:
    // 0x24edc0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24edc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24edc4: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24EDC4u;
    SET_GPR_U32(ctx, 31, 0x24EDCCu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24EDC4u, 0x24EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDCCu;
label_24edcc:
    // 0x24edcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24edccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24edd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24edd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24edd4: 0x0  nop
    ctx->pc = 0x24edd4u;
    // NOP
    // 0x24edd8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24edd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24eddc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24eddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x24ede0u;
}
