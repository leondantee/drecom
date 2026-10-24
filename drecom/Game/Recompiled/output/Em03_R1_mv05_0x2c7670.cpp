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

// Function: Em03_R1_mv05
// Address: 0x2c7670 - 0x2c7bb4
void Em03_R1_mv05_0x2c7670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_mv05_0x2c7670");
#endif

    switch (ctx->pc) {
        case 0x2c76f8u: goto label_2c76f8;
        case 0x2c7700u: goto label_2c7700;
        case 0x2c77b8u: goto label_2c77b8;
        case 0x2c77e0u: goto label_2c77e0;
        case 0x2c77f8u: goto label_2c77f8;
        case 0x2c7820u: goto label_2c7820;
        case 0x2c7878u: goto label_2c7878;
        case 0x2c7894u: goto label_2c7894;
        case 0x2c78a8u: goto label_2c78a8;
        case 0x2c7914u: goto label_2c7914;
        case 0x2c7920u: goto label_2c7920;
        case 0x2c797cu: goto label_2c797c;
        case 0x2c7988u: goto label_2c7988;
        case 0x2c79b4u: goto label_2c79b4;
        case 0x2c79d0u: goto label_2c79d0;
        case 0x2c79e8u: goto label_2c79e8;
        case 0x2c79f4u: goto label_2c79f4;
        case 0x2c7a04u: goto label_2c7a04;
        case 0x2c7a10u: goto label_2c7a10;
        case 0x2c7b10u: goto label_2c7b10;
        case 0x2c7b5cu: goto label_2c7b5c;
        default: break;
    }

    ctx->pc = 0x2c7670u;

    // 0x2c7670: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c7670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c7674: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2c7674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2c7678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c767c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2c767cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2c7680: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7684: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x2c7684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2c7688: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2c7688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2c768c: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x2c768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x2c7690: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2c7690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c7694: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2c7694u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x398120u));
    // 0x2c7698: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x2c7698u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x398130u));
    // 0x2c769c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2c769cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2c76a0: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x2c76a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x2c76a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c76a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c76a8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2c76a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c76ac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2c76acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c76b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c76b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c76b4: 0x108300b4  beq         $a0, $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x2C76B4u;
    {
        const bool branch_taken_0x2c76b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c76b4) {
            ctx->pc = 0x2C7988u;
            goto label_2c7988;
        }
    }
    ctx->pc = 0x2C76BCu;
    // 0x2c76bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C76BCu;
    {
        const bool branch_taken_0x2c76bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c76bc) {
            ctx->pc = 0x2C76CCu;
            goto label_2c76cc;
        }
    }
    ctx->pc = 0x2C76C4u;
    // 0x2c76c4: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x2C76C4u;
    {
        const bool branch_taken_0x2c76c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c76c4) {
            ctx->pc = 0x2C7BA0u;
            goto label_2c7ba0;
        }
    }
    ctx->pc = 0x2C76CCu;
label_2c76cc:
    // 0x2c76cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c76d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c76d4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c76d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c76d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c76dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c76dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c76e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c76e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c76e4: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2c76e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2c76e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c76e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c76ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c76ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c76f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C76F0u;
    SET_GPR_U32(ctx, 31, 0x2C76F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C76F0u, 0x2C76F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C76F8u;
label_2c76f8:
    // 0x2c76f8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C76F8u;
    SET_GPR_U32(ctx, 31, 0x2C7700u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C76F8u, 0x2C7700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7700u;
label_2c7700:
    // 0x2c7700: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c7700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c7704: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2c7704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c7708: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2c7708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2c770c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c770cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c7710: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c7710u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c7714: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7718: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c7718u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c771c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c771cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7720: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7724: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7728: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c7728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c772c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2c772cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2c7730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7734: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7738: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c773c: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c773cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c7740: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7744: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c7744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7748: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c7748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c774c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c7750: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c7750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7754: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c7754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c7758: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c775c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7760: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7764: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2c7764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2c7768: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c776c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c776cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7770: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7774: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c7774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2c7778: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c777c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7780: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c7780u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c7784: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c7784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c7788: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c7788u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2c778c: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2c778cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c7790: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C7790u;
    {
        const bool branch_taken_0x2c7790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7790) {
            ctx->pc = 0x2C77C0u;
            goto label_2c77c0;
        }
    }
    ctx->pc = 0x2C7798u;
    // 0x2c7798: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c779c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c779cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c77a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c77a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c77a4: 0x24061e0a  addiu       $a2, $zero, 0x1E0A
    ctx->pc = 0x2c77a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7690));
    // 0x2c77a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c77a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c77ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c77acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c77b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C77B0u;
    SET_GPR_U32(ctx, 31, 0x2C77B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C77B0u, 0x2C77B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C77B8u;
label_2c77b8:
    // 0x2c77b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C77B8u;
    {
        const bool branch_taken_0x2c77b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c77b8) {
            ctx->pc = 0x2C77E0u;
            goto label_2c77e0;
        }
    }
    ctx->pc = 0x2C77C0u;
label_2c77c0:
    // 0x2c77c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c77c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c77c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c77c8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c77c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c77cc: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2c77ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2c77d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c77d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c77d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c77d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c77d8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C77D8u;
    SET_GPR_U32(ctx, 31, 0x2C77E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C77D8u, 0x2C77E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C77E0u;
label_2c77e0:
    // 0x2c77e0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2c77e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2c77e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c77e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c77e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c77ec: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2c77ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2c77f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C77F0u;
    SET_GPR_U32(ctx, 31, 0x2C77F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C77F0u, 0x2C77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C77F8u;
label_2c77f8:
    // 0x2c77f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c77f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c77fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c77fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c7800: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7800u;
    {
        const bool branch_taken_0x2c7800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7800) {
            ctx->pc = 0x2C7818u;
            goto label_2c7818;
        }
    }
    ctx->pc = 0x2C7808u;
    // 0x2c7808: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x2c7808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x2c780c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c780cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7810: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7814: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2c7814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_2c7818:
    // 0x2c7818: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C7818u;
    SET_GPR_U32(ctx, 31, 0x2C7820u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C7818u, 0x2C7820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7820u;
label_2c7820:
    // 0x2c7820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c7820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c7824: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c7824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c7828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c7828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c782c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2c782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2c7830: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c7830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7834: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7838: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2c7838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2c783c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2c783cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2c7840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7844: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7848: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2c7848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2c784c: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2c784cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2c7850: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c7850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c7854: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c7854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c7858: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c785c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7860: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2c7860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2c7864: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2c7864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7868: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c7868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c786c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c786cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c7870: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C7870u;
    SET_GPR_U32(ctx, 31, 0x2C7878u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C7870u, 0x2C7878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7878u;
label_2c7878:
    // 0x2c7878: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c7878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c787c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c787cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7880: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c7880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7884: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c7884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7888: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c7888u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c788c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C788Cu;
    SET_GPR_U32(ctx, 31, 0x2C7894u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C788Cu, 0x2C7894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7894u;
label_2c7894:
    // 0x2c7894: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7898: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c7898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c789c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c789cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c78a0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2C78A0u;
    SET_GPR_U32(ctx, 31, 0x2C78A8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2C78A0u, 0x2C78A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C78A8u;
label_2c78a8:
    // 0x2c78a8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2c78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2c78ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c78acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c78b0: 0x0  nop
    ctx->pc = 0x2c78b0u;
    // NOP
    // 0x2c78b4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c78b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c78b8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2c78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2c78bc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2c78bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2c78c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c78c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c78c4: 0x0  nop
    ctx->pc = 0x2c78c4u;
    // NOP
    // 0x2c78c8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c78c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c78cc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2c78d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c78d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c78d4: 0x0  nop
    ctx->pc = 0x2c78d4u;
    // NOP
    // 0x2c78d8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c78d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c78dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c78dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c78e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c78e4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2c78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c78e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c78e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c78ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c78ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c78f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c78f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c78f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c78f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c78f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c78f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c78fc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2c78fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7900: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c7900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c7904: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c7904u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c7908: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2c7908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c790c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C790Cu;
    SET_GPR_U32(ctx, 31, 0x2C7914u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C790Cu, 0x2C7914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7914u;
label_2c7914:
    // 0x2c7914: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c7914u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c7918: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C7918u;
    SET_GPR_U32(ctx, 31, 0x2C7920u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C7918u, 0x2C7920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7920u;
label_2c7920:
    // 0x2c7920: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x2c7920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x2c7924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7928: 0x0  nop
    ctx->pc = 0x2c7928u;
    // NOP
    // 0x2c792c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c792cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c7930: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2c7930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2c7934: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2c7934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2c7938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c793c: 0x0  nop
    ctx->pc = 0x2c793cu;
    // NOP
    // 0x2c7940: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c7940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c7944: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7948: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c7948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c794c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2c794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c7950: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c7950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c7954: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c7954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c7958: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c7958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c795c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c795cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c7960: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c7960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c7964: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2c7964u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7968: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c7968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c796c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c796cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c7970: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2c7970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c7974: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C7974u;
    SET_GPR_U32(ctx, 31, 0x2C797Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C7974u, 0x2C797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C797Cu;
label_2c797c:
    // 0x2c797c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c797cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c7980: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C7980u;
    SET_GPR_U32(ctx, 31, 0x2C7988u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C7980u, 0x2C7988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7988u;
label_2c7988:
    // 0x2c7988: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c7988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c798c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7990: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x2c7990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x2c7994: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x2c7994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x2c7998: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c7998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c799c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c799cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c79a0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c79a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c79a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c79a8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c79a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c79ac: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C79ACu;
    SET_GPR_U32(ctx, 31, 0x2C79B4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C79ACu, 0x2C79B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C79B4u;
label_2c79b4:
    // 0x2c79b4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c79b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c79b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c79b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c79bc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c79bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c79c0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c79c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c79c4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c79c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c79c8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C79C8u;
    SET_GPR_U32(ctx, 31, 0x2C79D0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C79C8u, 0x2C79D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C79D0u;
label_2c79d0:
    // 0x2c79d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c79d4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c79d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c79d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c79d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c79dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2c79dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c79e0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C79E0u;
    SET_GPR_U32(ctx, 31, 0x2C79E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C79E0u, 0x2C79E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C79E8u;
label_2c79e8:
    // 0x2c79e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c79ec: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2C79ECu;
    SET_GPR_U32(ctx, 31, 0x2C79F4u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2C79ECu, 0x2C79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C79F4u;
label_2c79f4:
    // 0x2c79f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c79f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c79f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c79f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c79fc: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C79FCu;
    SET_GPR_U32(ctx, 31, 0x2C7A04u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C79FCu, 0x2C7A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A04u;
label_2c7a04:
    // 0x2c7a04: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c7a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a08: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2C7A08u;
    SET_GPR_U32(ctx, 31, 0x2C7A10u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2C7A08u, 0x2C7A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A10u;
label_2c7a10:
    // 0x2c7a10: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c7a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a14: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x2c7a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x2c7a18: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2c7a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2c7a1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c7a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c7a20: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2c7a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7a24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c7a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c7a28: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2c7a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2c7a2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7a34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c7a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c7a38: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C7A38u;
    {
        const bool branch_taken_0x2c7a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7a38) {
            ctx->pc = 0x2C7A8Cu;
            goto label_2c7a8c;
        }
    }
    ctx->pc = 0x2C7A40u;
    // 0x2c7a40: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2c7a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2c7a44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c7a44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7a48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a4c: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2c7a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2c7a50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c7a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7a54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a58: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c7a58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c7a5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a60: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2c7a60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7a64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a68: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c7a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7a6c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a70: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c7a70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7a74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a78: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c7a7c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2c7a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c7a80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a84: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7a88: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x2c7a88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_2c7a8c:
    // 0x2c7a8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a90: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2c7a90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c7a94: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7A94u;
    {
        const bool branch_taken_0x2c7a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7a94) {
            ctx->pc = 0x2C7AACu;
            goto label_2c7aac;
        }
    }
    ctx->pc = 0x2C7A9Cu;
    // 0x2c7a9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c7a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7aa0: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2c7aa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2c7aa4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c7aa8: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2c7aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2c7aac:
    // 0x2c7aac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7ab0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2c7ab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c7ab4: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2C7AB4u;
    {
        const bool branch_taken_0x2c7ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ab4) {
            ctx->pc = 0x2C7BA0u;
            goto label_2c7ba0;
        }
    }
    ctx->pc = 0x2C7ABCu;
    // 0x2c7abc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2c7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2c7ac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7ac4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7ac8: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2c7ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2c7acc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7ad0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7ad4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c7ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c7ad8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7adc: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c7adcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7ae0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7ae4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c7ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7ae8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7aec: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c7aecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7af0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7af4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c7af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c7af8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2c7af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c7afc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b00: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7b04: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x2c7b04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c7b08: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C7B08u;
    SET_GPR_U32(ctx, 31, 0x2C7B10u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C7B08u, 0x2C7B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B10u;
label_2c7b10:
    // 0x2c7b10: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c7b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c7b14: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x2c7b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2c7b18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7b1c: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C7B1Cu;
    {
        const bool branch_taken_0x2c7b1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c7b1c) {
            ctx->pc = 0x2C7BA0u;
            goto label_2c7ba0;
        }
    }
    ctx->pc = 0x2C7B24u;
    // 0x2c7b24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7b28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b2c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c7b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c7b30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c7b34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b38: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c7b38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c7b3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b40: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c7b40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7b44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b48: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c7b48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7b4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b50: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c7b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c7b54: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C7B54u;
    SET_GPR_U32(ctx, 31, 0x2C7B5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C7B54u, 0x2C7B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7B5Cu;
label_2c7b5c:
    // 0x2c7b5c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c7b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c7b60: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x2c7b60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2c7b64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c7b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c7b68: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C7B68u;
    {
        const bool branch_taken_0x2c7b68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c7b68) {
            ctx->pc = 0x2C7BA0u;
            goto label_2c7ba0;
        }
    }
    ctx->pc = 0x2C7B70u;
    // 0x2c7b70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c7b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7b74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c7b78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c7b7c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c7b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c7b80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b84: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c7b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c7b88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c7b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7b90: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c7b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7b98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7b9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c7b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c7ba0:
    // 0x2c7ba0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2c7ba0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7ba8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2c7ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c7bac: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7BB4u;
}
