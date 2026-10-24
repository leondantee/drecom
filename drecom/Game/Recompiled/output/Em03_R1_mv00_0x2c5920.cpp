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

// Function: Em03_R1_mv00
// Address: 0x2c5920 - 0x2c5f3c
void Em03_R1_mv00_0x2c5920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_mv00_0x2c5920");
#endif

    switch (ctx->pc) {
        case 0x2c59a8u: goto label_2c59a8;
        case 0x2c59b0u: goto label_2c59b0;
        case 0x2c59d4u: goto label_2c59d4;
        case 0x2c5a64u: goto label_2c5a64;
        case 0x2c5ab0u: goto label_2c5ab0;
        case 0x2c5ad8u: goto label_2c5ad8;
        case 0x2c5b1cu: goto label_2c5b1c;
        case 0x2c5b40u: goto label_2c5b40;
        case 0x2c5b80u: goto label_2c5b80;
        case 0x2c5ba4u: goto label_2c5ba4;
        case 0x2c5be4u: goto label_2c5be4;
        case 0x2c5c00u: goto label_2c5c00;
        case 0x2c5c3cu: goto label_2c5c3c;
        case 0x2c5c58u: goto label_2c5c58;
        case 0x2c5d1cu: goto label_2c5d1c;
        case 0x2c5d50u: goto label_2c5d50;
        case 0x2c5d60u: goto label_2c5d60;
        case 0x2c5d6cu: goto label_2c5d6c;
        case 0x2c5e10u: goto label_2c5e10;
        case 0x2c5e24u: goto label_2c5e24;
        case 0x2c5e6cu: goto label_2c5e6c;
        case 0x2c5e7cu: goto label_2c5e7c;
        case 0x2c5eacu: goto label_2c5eac;
        case 0x2c5ec4u: goto label_2c5ec4;
        default: break;
    }

    ctx->pc = 0x2c5920u;

    // 0x2c5920: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c5920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c5924: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2c5924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2c5928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c592c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2c592cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2c5930: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5934: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x2c5934u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2c5938: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2c5938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2c593c: 0x246380f0  addiu       $v1, $v1, -0x7F10
    ctx->pc = 0x2c593cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934768));
    // 0x2c5940: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c5940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c5944: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2c5944u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3980F0u));
    // 0x2c5948: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x2c5948u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x398100u));
    // 0x2c594c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2c594cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2c5950: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x2c5950u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x2c5954: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5958: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2c5958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c595c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2c595cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c5960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5964: 0x1083008d  beq         $a0, $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x2C5964u;
    {
        const bool branch_taken_0x2c5964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c5964) {
            ctx->pc = 0x2C5B9Cu;
            goto label_2c5b9c;
        }
    }
    ctx->pc = 0x2C596Cu;
    // 0x2c596c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C596Cu;
    {
        const bool branch_taken_0x2c596c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c596c) {
            ctx->pc = 0x2C597Cu;
            goto label_2c597c;
        }
    }
    ctx->pc = 0x2C5974u;
    // 0x2c5974: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x2C5974u;
    {
        const bool branch_taken_0x2c5974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5974) {
            ctx->pc = 0x2C5F28u;
            goto label_2c5f28;
        }
    }
    ctx->pc = 0x2C597Cu;
label_2c597c:
    // 0x2c597c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c597cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5980: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5984: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c5984u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5988: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c598c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c598cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5990: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c5990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c5994: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2c5994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2c5998: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c5998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c599c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c599cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c59a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C59A0u;
    SET_GPR_U32(ctx, 31, 0x2C59A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C59A0u, 0x2C59A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C59A8u;
label_2c59a8:
    // 0x2c59a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C59A8u;
    SET_GPR_U32(ctx, 31, 0x2C59B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C59A8u, 0x2C59B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C59B0u;
label_2c59b0:
    // 0x2c59b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c59b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c59b4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2c59b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2c59b8: 0x24420168  addiu       $v0, $v0, 0x168
    ctx->pc = 0x2c59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x2c59bc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c59bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c59c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c59c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c59c4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c59c8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c59c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c59cc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C59CCu;
    SET_GPR_U32(ctx, 31, 0x2C59D4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C59CCu, 0x2C59D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C59D4u;
label_2c59d4:
    // 0x2c59d4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2c59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2c59d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c59d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c59dc: 0x0  nop
    ctx->pc = 0x2c59dcu;
    // NOP
    // 0x2c59e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c59e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c59e4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2c59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2c59e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c59e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c59ec: 0x0  nop
    ctx->pc = 0x2c59ecu;
    // NOP
    // 0x2c59f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c59f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c59f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c59f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c59fc: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c59fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c5a00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5a04: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5a08: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2c5a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2c5a0c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2c5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2c5a10: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2c5a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2c5a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5a18: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5a1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5a20: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c5a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c5a24: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5a28: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c5a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5a2c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c5a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c5a30: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c5a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c5a34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c5a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c5a38: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c5a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c5a3c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5a40: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5a44: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c5a44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c5a48: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c5a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c5a4c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c5a4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2c5a50: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2c5a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c5a54: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C5A54u;
    {
        const bool branch_taken_0x2c5a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5a54) {
            ctx->pc = 0x2C5AB8u;
            goto label_2c5ab8;
        }
    }
    ctx->pc = 0x2C5A5Cu;
    // 0x2c5a5c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C5A5Cu;
    SET_GPR_U32(ctx, 31, 0x2C5A64u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C5A5Cu, 0x2C5A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5A64u;
label_2c5a64:
    // 0x2c5a64: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2c5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2c5a68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c5a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5a6c: 0x0  nop
    ctx->pc = 0x2c5a6cu;
    // NOP
    // 0x2c5a70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c5a70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c5a74: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2c5a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2c5a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5a7c: 0x0  nop
    ctx->pc = 0x2c5a7cu;
    // NOP
    // 0x2c5a80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c5a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c5a84: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5a88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5a8c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c5a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c5a90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5a94: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5a98: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c5a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c5a9c: 0x24061e0a  addiu       $a2, $zero, 0x1E0A
    ctx->pc = 0x2c5a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7690));
    // 0x2c5aa0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c5aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5aa4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c5aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c5aa8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C5AA8u;
    SET_GPR_U32(ctx, 31, 0x2C5AB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C5AA8u, 0x2C5AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5AB0u;
label_2c5ab0:
    // 0x2c5ab0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5AB0u;
    {
        const bool branch_taken_0x2c5ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ab0) {
            ctx->pc = 0x2C5AD8u;
            goto label_2c5ad8;
        }
    }
    ctx->pc = 0x2C5AB8u;
label_2c5ab8:
    // 0x2c5ab8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5abc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5ac0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c5ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c5ac4: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2c5ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2c5ac8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c5ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5acc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c5accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c5ad0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C5AD0u;
    SET_GPR_U32(ctx, 31, 0x2C5AD8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C5AD0u, 0x2C5AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5AD8u;
label_2c5ad8:
    // 0x2c5ad8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5adc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5ae0: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2c5ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5ae4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c5ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c5ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5aec: 0x0  nop
    ctx->pc = 0x2c5aecu;
    // NOP
    // 0x2c5af0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c5af0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5af4: 0x0  nop
    ctx->pc = 0x2c5af4u;
    // NOP
    // 0x2c5af8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5AF8u;
    {
        const bool branch_taken_0x2c5af8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5af8) {
            ctx->pc = 0x2C5B14u;
            goto label_2c5b14;
        }
    }
    ctx->pc = 0x2C5B00u;
    // 0x2c5b00: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c5b04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5b08: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5b0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5b10: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c5b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_2c5b14:
    // 0x2c5b14: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C5B14u;
    SET_GPR_U32(ctx, 31, 0x2C5B1Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C5B14u, 0x2C5B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5B1Cu;
label_2c5b1c:
    // 0x2c5b1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c5b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5b20: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2c5b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2c5b24: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x2c5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x2c5b28: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c5b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5b2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c5b2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c5b30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5b34: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2c5b34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c5b38: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C5B38u;
    SET_GPR_U32(ctx, 31, 0x2C5B40u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C5B38u, 0x2C5B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5B40u;
label_2c5b40:
    // 0x2c5b40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c5b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5b44: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c5b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c5b48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c5b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c5b4c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c5b50: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c5b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5b54: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5b58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5b5c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2c5b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2c5b60: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2c5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2c5b64: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2c5b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2c5b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5b6c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5b70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5b74: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c5b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2c5b78: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C5B78u;
    SET_GPR_U32(ctx, 31, 0x2C5B80u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C5B78u, 0x2C5B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5B80u;
label_2c5b80:
    // 0x2c5b80: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2c5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2c5b84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c5b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5b88: 0x0  nop
    ctx->pc = 0x2c5b88u;
    // NOP
    // 0x2c5b8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c5b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c5b90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5b94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5b98: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2c5b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_2c5b9c:
    // 0x2c5b9c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C5B9Cu;
    SET_GPR_U32(ctx, 31, 0x2C5BA4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C5B9Cu, 0x2C5BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5BA4u;
label_2c5ba4:
    // 0x2c5ba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c5ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5ba8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2c5ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c5bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5bb0: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C5BB0u;
    {
        const bool branch_taken_0x2c5bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5bb0) {
            ctx->pc = 0x2C5C10u;
            goto label_2c5c10;
        }
    }
    ctx->pc = 0x2C5BB8u;
    // 0x2c5bb8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5bbc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5bc0: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x2c5bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x2c5bc4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2c5bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2c5bc8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c5bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c5bcc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c5bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c5bd0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c5bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c5bd4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c5bd8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c5bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c5bdc: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C5BDCu;
    SET_GPR_U32(ctx, 31, 0x2C5BE4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C5BDCu, 0x2C5BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5BE4u;
label_2c5be4:
    // 0x2c5be4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2c5be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2c5be8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5bec: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c5becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5bf0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2c5bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5bf4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c5bf4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c5bf8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C5BF8u;
    SET_GPR_U32(ctx, 31, 0x2C5C00u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C5BF8u, 0x2C5C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C00u;
label_2c5c00:
    // 0x2c5c00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c04: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c5c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c5c08: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C5C08u;
    {
        const bool branch_taken_0x2c5c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5c08) {
            ctx->pc = 0x2C5C60u;
            goto label_2c5c60;
        }
    }
    ctx->pc = 0x2C5C10u;
label_2c5c10:
    // 0x2c5c10: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c14: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c18: 0x3c023cd6  lui         $v0, 0x3CD6
    ctx->pc = 0x2c5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15574 << 16));
    // 0x2c5c1c: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2c5c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2c5c20: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c5c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c5c24: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c5c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c5c28: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c5c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c5c2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c5c30: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c5c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c5c34: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C5C34u;
    SET_GPR_U32(ctx, 31, 0x2C5C3Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C5C34u, 0x2C5C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C3Cu;
label_2c5c3c:
    // 0x2c5c3c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2c5c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2c5c40: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c44: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c5c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5c48: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2c5c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5c4c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c5c4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c5c50: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C5C50u;
    SET_GPR_U32(ctx, 31, 0x2C5C58u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C5C50u, 0x2C5C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C58u;
label_2c5c58:
    // 0x2c5c58: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c5c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c5c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2c5c60:
    // 0x2c5c60: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c64: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5c68: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2c5c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5c6c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2c5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2c5c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5c74: 0x0  nop
    ctx->pc = 0x2c5c74u;
    // NOP
    // 0x2c5c78: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c5c78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c5c7c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c80: 0xc440128c  lwc1        $f0, 0x128C($v0)
    ctx->pc = 0x2c5c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5c84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c5c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5c88: 0x0  nop
    ctx->pc = 0x2c5c88u;
    // NOP
    // 0x2c5c8c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2C5C8Cu;
    {
        const bool branch_taken_0x2c5c8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5c8c) {
            ctx->pc = 0x2C5CC4u;
            goto label_2c5cc4;
        }
    }
    ctx->pc = 0x2C5C94u;
    // 0x2c5c94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5c98: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c9c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c5c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5ca0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c5ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c5ca4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5ca8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c5ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5cac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5cb0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c5cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5cb4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5cb8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c5cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5cbc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5cc0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c5cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2c5cc4:
    // 0x2c5cc4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5cc8: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x2c5cc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x2c5ccc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2c5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c5cd0: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x2c5cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c5cd4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C5CD4u;
    {
        const bool branch_taken_0x2c5cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5cd4) {
            ctx->pc = 0x2C5D0Cu;
            goto label_2c5d0c;
        }
    }
    ctx->pc = 0x2C5CDCu;
    // 0x2c5cdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5ce0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5ce4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c5ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5ce8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c5ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c5cec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5cf0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c5cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5cf4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5cf8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c5cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5cfc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d00: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c5d00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5d04: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d08: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c5d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2c5d0c:
    // 0x2c5d0c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c5d10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c5d14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C5D14u;
    SET_GPR_U32(ctx, 31, 0x2C5D1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C5D14u, 0x2C5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D1Cu;
label_2c5d1c:
    // 0x2c5d1c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d20: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5d24: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c5d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5d28: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d2c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c5d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c5d30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5d38: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c5d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5d3c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d40: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2c5d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2c5d44: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d48: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2C5D48u;
    SET_GPR_U32(ctx, 31, 0x2C5D50u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2C5D48u, 0x2C5D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D50u;
label_2c5d50:
    // 0x2c5d50: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c5d54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c5d58: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C5D58u;
    SET_GPR_U32(ctx, 31, 0x2C5D60u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C5D58u, 0x2C5D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D60u;
label_2c5d60:
    // 0x2c5d60: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d64: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2C5D64u;
    SET_GPR_U32(ctx, 31, 0x2C5D6Cu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2C5D64u, 0x2C5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D6Cu;
label_2c5d6c:
    // 0x2c5d6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5d74: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c5d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c5d78: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x2C5D78u;
    {
        const bool branch_taken_0x2c5d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5d78) {
            ctx->pc = 0x2C5F28u;
            goto label_2c5f28;
        }
    }
    ctx->pc = 0x2C5D80u;
    // 0x2c5d80: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5d88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5d8c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2c5d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5d90: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c5d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c5d94: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5d98: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5d9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5da0: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2c5da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5da4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2c5da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c5da8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5dac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5db0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5db4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2c5db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5db8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c5db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c5dbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c5dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5dc4: 0x0  nop
    ctx->pc = 0x2c5dc4u;
    // NOP
    // 0x2c5dc8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c5dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c5dcc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5dd0: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2c5dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5dd4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2c5dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c5dd8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5ddc: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2c5ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5de0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2c5de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c5de4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5de8: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2c5de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5dec: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2c5decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c5df0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5df4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5df8: 0x0  nop
    ctx->pc = 0x2c5df8u;
    // NOP
    // 0x2c5dfc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2c5dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c5e00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c5e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c5e04: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2c5e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c5e08: 0xc040c24  jal         func_103090
    ctx->pc = 0x2C5E08u;
    SET_GPR_U32(ctx, 31, 0x2C5E10u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2C5E10u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C5E10u) { return; }
    ctx->pc = 0x2C5E10u;
label_2c5e10:
    // 0x2c5e10: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c5e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c5e14: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c5e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c5e18: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c5e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c5e1c: 0xc040c86  jal         func_103218
    ctx->pc = 0x2C5E1Cu;
    SET_GPR_U32(ctx, 31, 0x2C5E24u);
    ctx->pc = 0x103218u;
    {
        ctx->pc = 0x2C5E24u;
        ps2_stubs::sceVu0MulVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C5E24u) { return; }
    ctx->pc = 0x2C5E24u;
label_2c5e24:
    // 0x2c5e24: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2c5e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5e28: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2c5e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5e2c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2c5e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5e30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c5e30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c5e34: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2c5e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c5e38: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2c5e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2c5e3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5e40: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5e44: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x2c5e44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c5e48: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2C5E48u;
    {
        const bool branch_taken_0x2c5e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5e48) {
            ctx->pc = 0x2C5F28u;
            goto label_2c5f28;
        }
    }
    ctx->pc = 0x2C5E50u;
    // 0x2c5e50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c5e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5e58: 0x0  nop
    ctx->pc = 0x2c5e58u;
    // NOP
    // 0x2c5e5c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2c5e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2c5e60: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c5e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c5e64: 0xc067588  jal         func_19D620
    ctx->pc = 0x2C5E64u;
    SET_GPR_U32(ctx, 31, 0x2C5E6Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x2C5E64u, 0x2C5E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5E6Cu;
label_2c5e6c:
    // 0x2c5e6c: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2c5e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c5e70: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x2c5e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c5e74: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2C5E74u;
    SET_GPR_U32(ctx, 31, 0x2C5E7Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2C5E74u, 0x2C5E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5E7Cu;
label_2c5e7c:
    // 0x2c5e7c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5e80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5e84: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2c5e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2c5e88: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2c5e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5e8c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2c5e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5e90: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2c5e90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c5e94: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2c5e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5e98: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c5e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5e9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c5e9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c5ea0: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2c5ea0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c5ea4: 0xc045630  jal         func_1158C0
    ctx->pc = 0x2C5EA4u;
    SET_GPR_U32(ctx, 31, 0x2C5EACu);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x2C5EA4u, 0x2C5EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5EACu;
label_2c5eac:
    // 0x2c5eac: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2c5eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2c5eb0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c5eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5eb4: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2c5eb4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2c5eb8: 0xc7ad006c  lwc1        $f13, 0x6C($sp)
    ctx->pc = 0x2c5eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c5ebc: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2C5EBCu;
    SET_GPR_U32(ctx, 31, 0x2C5EC4u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2C5EBCu, 0x2C5EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5EC4u;
label_2c5ec4:
    // 0x2c5ec4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5ec8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5ecc: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2c5eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2c5ed0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c5ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5ed4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5ed8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c5ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c5edc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c5edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5ee0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5ee4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c5ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c5ee8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5eec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c5eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5ef0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5ef4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c5ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5ef8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5efc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c5efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c5f00: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c5f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c5f04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5f08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5f0c: 0xa0640038  sb          $a0, 0x38($v1)
    ctx->pc = 0x2c5f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c5f10: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5f14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5f18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c5f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c5f1c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c5f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5f20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5f24: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2c5f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_2c5f28:
    // 0x2c5f28: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2c5f28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5f30: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2c5f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c5f34: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5F3Cu;
}
