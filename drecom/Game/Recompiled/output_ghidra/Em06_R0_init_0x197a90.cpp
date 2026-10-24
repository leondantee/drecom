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

// Function: Em06_R0_init
// Address: 0x197a90 - 0x197e54
void Em06_R0_init_0x197a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R0_init_0x197a90");
#endif

    switch (ctx->pc) {
        case 0x197ae8u: goto label_197ae8;
        case 0x197cb4u: goto label_197cb4;
        case 0x197d00u: goto label_197d00;
        case 0x197d28u: goto label_197d28;
        case 0x197d50u: goto label_197d50;
        case 0x197d78u: goto label_197d78;
        case 0x197da0u: goto label_197da0;
        case 0x197dc8u: goto label_197dc8;
        case 0x197df0u: goto label_197df0;
        case 0x197e18u: goto label_197e18;
        default: break;
    }

    ctx->pc = 0x197a90u;

    // 0x197a90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x197a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x197a94: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x197a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x197a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197aa0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x197aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x197aa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197aa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197aac: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x197aacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x197ab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197ab4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x197ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x197ab8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197abc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x197abcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x197ac0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197ac4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x197ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x197ac8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197acc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x197accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x197ad0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197ad4: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x197ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x197ad8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x197ad8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x197adc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x197adcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197ae0: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x197AE0u;
    SET_GPR_U32(ctx, 31, 0x197AE8u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x197AE0u, 0x197AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AE8u;
label_197ae8:
    // 0x197ae8: 0x3c024422  lui         $v0, 0x4422
    ctx->pc = 0x197ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17442 << 16));
    // 0x197aec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x197aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x197af0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197af4: 0x0  nop
    ctx->pc = 0x197af4u;
    // NOP
    // 0x197af8: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x197af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x197afc: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x197afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x197b00: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x197b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x197b04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197b08: 0x0  nop
    ctx->pc = 0x197b08u;
    // NOP
    // 0x197b0c: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x197b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x197b10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197b14: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x197b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x197b18: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x197b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x197b1c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x197b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x197b20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197b24: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x197b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x197b28: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x197b28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x197b2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x197b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x197b30: 0x8c230068  lw          $v1, 0x68($at)
    ctx->pc = 0x197b30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0068u));
    // 0x197b34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x197b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197b38: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x197B38u;
    {
        const bool branch_taken_0x197b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x197b38) {
            ctx->pc = 0x197B54u;
            goto label_197b54;
        }
    }
    ctx->pc = 0x197B40u;
    // 0x197b40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x197b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x197b44: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x197b44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x197b48: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x197b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x197b4c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x197B4Cu;
    {
        const bool branch_taken_0x197b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x197b4c) {
            ctx->pc = 0x197B7Cu;
            goto label_197b7c;
        }
    }
    ctx->pc = 0x197B54u;
label_197b54:
    // 0x197b54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x197b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x197b58: 0x8c230068  lw          $v1, 0x68($at)
    ctx->pc = 0x197b58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0068u));
    // 0x197b5c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x197b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x197b60: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x197B60u;
    {
        const bool branch_taken_0x197b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x197b60) {
            ctx->pc = 0x197BA8u;
            goto label_197ba8;
        }
    }
    ctx->pc = 0x197B68u;
    // 0x197b68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x197b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x197b6c: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x197b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x197b70: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x197b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x197b74: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x197B74u;
    {
        const bool branch_taken_0x197b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x197b74) {
            ctx->pc = 0x197BA8u;
            goto label_197ba8;
        }
    }
    ctx->pc = 0x197B7Cu;
label_197b7c:
    // 0x197b7c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x197b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x197b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197b84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197b88: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x197b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x197b8c: 0x3c0244da  lui         $v0, 0x44DA
    ctx->pc = 0x197b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17626 << 16));
    // 0x197b90: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x197b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x197b94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197b98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197b9c: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x197b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x197ba0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x197BA0u;
    {
        const bool branch_taken_0x197ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ba0) {
            ctx->pc = 0x197BD0u;
            goto label_197bd0;
        }
    }
    ctx->pc = 0x197BA8u;
label_197ba8:
    // 0x197ba8: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x197ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x197bac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x197bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x197bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197bb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197bb8: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x197bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x197bbc: 0x3c0244da  lui         $v0, 0x44DA
    ctx->pc = 0x197bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17626 << 16));
    // 0x197bc0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x197bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x197bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197bc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197bcc: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x197bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
label_197bd0:
    // 0x197bd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197bd4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x197bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x197bd8: 0x24500c60  addiu       $s0, $v0, 0xC60
    ctx->pc = 0x197bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3168));
    // 0x197bdc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x197bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x197be0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197be4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x197be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x197be8: 0x24500d80  addiu       $s0, $v0, 0xD80
    ctx->pc = 0x197be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3456));
    // 0x197bec: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x197becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x197bf0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197bf4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x197bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x197bf8: 0x24500e10  addiu       $s0, $v0, 0xE10
    ctx->pc = 0x197bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3600));
    // 0x197bfc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x197bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x197c00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197c04: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x197c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x197c08: 0x24500cf0  addiu       $s0, $v0, 0xCF0
    ctx->pc = 0x197c08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x197c0c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x197c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x197c10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197c14: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x197c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x197c18: 0x24500ea0  addiu       $s0, $v0, 0xEA0
    ctx->pc = 0x197c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3744));
    // 0x197c1c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x197c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x197c20: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x197c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x197c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197c28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197c2c: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x197c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x197c30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197c34: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x197c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x197c38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197c3c: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x197c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x197c40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x197c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197c44: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x197c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x197c48: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x197c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x197c4c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x197c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x197c50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x197c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197c54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x197c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x197c58: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x197c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x197c5c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x197c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x197c60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197c64: 0xac401330  sw          $zero, 0x1330($v0)
    ctx->pc = 0x197c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4912), GPR_U32(ctx, 0));
    // 0x197c68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197c6c: 0xac401338  sw          $zero, 0x1338($v0)
    ctx->pc = 0x197c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4920), GPR_U32(ctx, 0));
    // 0x197c70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197c74: 0xac40133c  sw          $zero, 0x133C($v0)
    ctx->pc = 0x197c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4924), GPR_U32(ctx, 0));
    // 0x197c78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197c7c: 0xac401334  sw          $zero, 0x1334($v0)
    ctx->pc = 0x197c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4916), GPR_U32(ctx, 0));
    // 0x197c80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197c84: 0xac401340  sw          $zero, 0x1340($v0)
    ctx->pc = 0x197c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4928), GPR_U32(ctx, 0));
    // 0x197c88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197c8c: 0xac401344  sw          $zero, 0x1344($v0)
    ctx->pc = 0x197c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 0));
    // 0x197c90: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x197c94: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x197c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x197c98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197c9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x197c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197ca0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x197ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197ca4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x197ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x197ca8: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x197ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x197cac: 0xc05d190  jal         func_174640
    ctx->pc = 0x197CACu;
    SET_GPR_U32(ctx, 31, 0x197CB4u);
    ctx->pc = 0x174640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174640u, 0x197CACu, 0x197CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197CB4u;
label_197cb4:
    // 0x197cb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x197cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x197cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197cbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197cc0: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x197cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x197cc4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x197cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x197cc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x197cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x197ccc: 0xa420d340  sh          $zero, -0x2CC0($at)
    ctx->pc = 0x197cccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD340u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD340u, _value); } while (0);
    // 0x197cd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197cd4: 0xa4400094  sh          $zero, 0x94($v0)
    ctx->pc = 0x197cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x197cd8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x197cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x197cdc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x197cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x197ce0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197ce4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x197ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197ce8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x197ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x197cec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x197cecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197cf0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x197cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197cf4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x197cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197cf8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197CF8u;
    SET_GPR_U32(ctx, 31, 0x197D00u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197CF8u, 0x197D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D00u;
label_197d00:
    // 0x197d00: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x197d04: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x197d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x197d08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197d0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x197d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197d10: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x197d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x197d14: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x197d14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197d18: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x197d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197d1c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x197d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197d20: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197D20u;
    SET_GPR_U32(ctx, 31, 0x197D28u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197D20u, 0x197D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D28u;
label_197d28:
    // 0x197d28: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x197d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x197d2c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x197d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x197d30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197d34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x197d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197d38: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x197d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x197d3c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x197d3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197d40: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x197d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197d44: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x197d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197d48: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197D48u;
    SET_GPR_U32(ctx, 31, 0x197D50u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197D48u, 0x197D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D50u;
label_197d50:
    // 0x197d50: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x197d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x197d54: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x197d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x197d58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197d5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x197d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197d60: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x197d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x197d64: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x197d64u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197d68: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x197d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197d6c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x197d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197d70: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197D70u;
    SET_GPR_U32(ctx, 31, 0x197D78u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197D70u, 0x197D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D78u;
label_197d78:
    // 0x197d78: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x197d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x197d7c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x197d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x197d80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197d84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x197d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197d88: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x197d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x197d8c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x197d8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197d90: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x197d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197d94: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x197d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197d98: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197D98u;
    SET_GPR_U32(ctx, 31, 0x197DA0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197D98u, 0x197DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197DA0u;
label_197da0:
    // 0x197da0: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x197da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x197da4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x197da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x197da8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197dac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x197dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197db0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x197db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x197db4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x197db4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197db8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x197db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197dbc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x197dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197dc0: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197DC0u;
    SET_GPR_U32(ctx, 31, 0x197DC8u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197DC0u, 0x197DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197DC8u;
label_197dc8:
    // 0x197dc8: 0x3c023d8f  lui         $v0, 0x3D8F
    ctx->pc = 0x197dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15759 << 16));
    // 0x197dcc: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x197dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x197dd0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197dd4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x197dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197dd8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x197dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x197ddc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x197ddcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197de0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x197de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197de4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x197de4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197de8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197DE8u;
    SET_GPR_U32(ctx, 31, 0x197DF0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197DE8u, 0x197DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197DF0u;
label_197df0:
    // 0x197df0: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x197df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x197df4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x197df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x197df8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x197df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197dfc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x197dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197e00: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x197e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x197e04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x197e04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197e08: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x197e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197e0c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x197e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197e10: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197E10u;
    SET_GPR_U32(ctx, 31, 0x197E18u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197E10u, 0x197E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E18u;
label_197e18:
    // 0x197e18: 0x3c0346bb  lui         $v1, 0x46BB
    ctx->pc = 0x197e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18107 << 16));
    // 0x197e1c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x197e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x197e20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x197e20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197e24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x197e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197e28: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x197e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x197e2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x197e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x197e30: 0x84247330  lh          $a0, 0x7330($at)
    ctx->pc = 0x197e30u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x387330u));
    // 0x197e34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x197e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197e38: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x197e38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x197e3c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x197e3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197e40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197e44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197e48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x197e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x197e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x197E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197E54u;
}
