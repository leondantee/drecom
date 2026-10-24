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

// Function: Em03_R1_mv04
// Address: 0x2c6e60 - 0x2c7628
void Em03_R1_mv04_0x2c6e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_mv04_0x2c6e60");
#endif

    switch (ctx->pc) {
        case 0x2c6ed8u: goto label_2c6ed8;
        case 0x2c6f60u: goto label_2c6f60;
        case 0x2c6fc8u: goto label_2c6fc8;
        case 0x2c7034u: goto label_2c7034;
        case 0x2c7040u: goto label_2c7040;
        case 0x2c709cu: goto label_2c709c;
        case 0x2c70a8u: goto label_2c70a8;
        case 0x2c712cu: goto label_2c712c;
        case 0x2c7230u: goto label_2c7230;
        case 0x2c7250u: goto label_2c7250;
        case 0x2c7268u: goto label_2c7268;
        case 0x2c7288u: goto label_2c7288;
        case 0x2c7298u: goto label_2c7298;
        case 0x2c72a4u: goto label_2c72a4;
        case 0x2c72bcu: goto label_2c72bc;
        case 0x2c72dcu: goto label_2c72dc;
        case 0x2c72ecu: goto label_2c72ec;
        case 0x2c72f8u: goto label_2c72f8;
        case 0x2c738cu: goto label_2c738c;
        case 0x2c73a4u: goto label_2c73a4;
        case 0x2c73b4u: goto label_2c73b4;
        case 0x2c73ecu: goto label_2c73ec;
        case 0x2c74a0u: goto label_2c74a0;
        case 0x2c75a8u: goto label_2c75a8;
        case 0x2c75f4u: goto label_2c75f4;
        default: break;
    }

    ctx->pc = 0x2c6e60u;

    // 0x2c6e60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c6e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c6e64: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2c6e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2c6e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c6e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c6e6c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2c6e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2c6e70: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c6e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6e74: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x2c6e74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2c6e78: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6e7c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2c6e7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c6e80: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2c6e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c6e84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c6e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6e88: 0x10a30108  beq         $a1, $v1, . + 4 + (0x108 << 2)
    ctx->pc = 0x2C6E88u;
    {
        const bool branch_taken_0x2c6e88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c6e88) {
            ctx->pc = 0x2C72ACu;
            goto label_2c72ac;
        }
    }
    ctx->pc = 0x2C6E90u;
    // 0x2c6e90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6e94: 0x10a40084  beq         $a1, $a0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2C6E94u;
    {
        const bool branch_taken_0x2c6e94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c6e94) {
            ctx->pc = 0x2C70A8u;
            goto label_2c70a8;
        }
    }
    ctx->pc = 0x2C6E9Cu;
    // 0x2c6e9c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6E9Cu;
    {
        const bool branch_taken_0x2c6e9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6e9c) {
            ctx->pc = 0x2C6EACu;
            goto label_2c6eac;
        }
    }
    ctx->pc = 0x2C6EA4u;
    // 0x2c6ea4: 0x100001db  b           . + 4 + (0x1DB << 2)
    ctx->pc = 0x2C6EA4u;
    {
        const bool branch_taken_0x2c6ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ea4) {
            ctx->pc = 0x2C7614u;
            goto label_2c7614;
        }
    }
    ctx->pc = 0x2C6EACu;
label_2c6eac:
    // 0x2c6eac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6eb0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6eb4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c6eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6eb8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6ebc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c6ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6ec0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c6ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c6ec4: 0x24063c06  addiu       $a2, $zero, 0x3C06
    ctx->pc = 0x2c6ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15366));
    // 0x2c6ec8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c6ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6ecc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c6eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c6ed0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C6ED0u;
    SET_GPR_U32(ctx, 31, 0x2C6ED8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C6ED0u, 0x2C6ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6ED8u;
label_2c6ed8:
    // 0x2c6ed8: 0x3c03c1f0  lui         $v1, 0xC1F0
    ctx->pc = 0x2c6ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49648 << 16));
    // 0x2c6edc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6ee0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c6ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6ee4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6ee8: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x2c6ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x2c6eec: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2c6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2c6ef0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2c6ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2c6ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6ef8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6efc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6f00: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c6f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c6f04: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6f08: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c6f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6f0c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c6f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c6f10: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c6f14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c6f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c6f18: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x2c6f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x2c6f1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c6f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6f20: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6f24: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6f28: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2c6f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2c6f2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c6f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6f30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6f34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6f38: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c6f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2c6f3c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2c6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c6f40: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c6f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6f44: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2c6f44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c6f48: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2c6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2c6f4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6f4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6f50: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6f54: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2c6f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2c6f58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C6F58u;
    SET_GPR_U32(ctx, 31, 0x2C6F60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C6F58u, 0x2C6F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F60u;
label_2c6f60:
    // 0x2c6f60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c6f60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c6f64: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2c6f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2c6f68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c6f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c6f6c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C6F6Cu;
    {
        const bool branch_taken_0x2c6f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6f6c) {
            ctx->pc = 0x2C6FBCu;
            goto label_2c6fbc;
        }
    }
    ctx->pc = 0x2C6F74u;
    // 0x2c6f74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c6f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c6f78: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x2c6f78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2c6f7c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2c6f80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c6f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c6f84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C6F84u;
    {
        const bool branch_taken_0x2c6f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6f84) {
            ctx->pc = 0x2C6FBCu;
            goto label_2c6fbc;
        }
    }
    ctx->pc = 0x2C6F8Cu;
    // 0x2c6f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6f90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6f94: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c6f94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6f98: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2c6f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c6f9c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6fa0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c6fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6fa4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6fa8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c6fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6fac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6fb0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c6fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6fb4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6fb8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c6fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2c6fbc:
    // 0x2c6fbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c6fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6fc0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2C6FC0u;
    SET_GPR_U32(ctx, 31, 0x2C6FC8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2C6FC0u, 0x2C6FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6FC8u;
label_2c6fc8:
    // 0x2c6fc8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2c6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2c6fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6fd0: 0x0  nop
    ctx->pc = 0x2c6fd0u;
    // NOP
    // 0x2c6fd4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c6fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c6fd8: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2c6fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2c6fdc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2c6fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2c6fe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6fe4: 0x0  nop
    ctx->pc = 0x2c6fe4u;
    // NOP
    // 0x2c6fe8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c6fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c6fec: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c6fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2c6ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6ff4: 0x0  nop
    ctx->pc = 0x2c6ff4u;
    // NOP
    // 0x2c6ff8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c6ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c6ffc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c6ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7000: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c7000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c7004: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2c7004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c7008: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c7008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c700c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c700cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c7010: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c7010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c7014: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c7014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c7018: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c7018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c701c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2c701cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7020: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c7020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c7024: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c7024u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c7028: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2c7028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c702c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C702Cu;
    SET_GPR_U32(ctx, 31, 0x2C7034u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C702Cu, 0x2C7034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7034u;
label_2c7034:
    // 0x2c7034: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c7034u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c7038: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C7038u;
    SET_GPR_U32(ctx, 31, 0x2C7040u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C7038u, 0x2C7040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7040u;
label_2c7040:
    // 0x2c7040: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x2c7040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x2c7044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7048: 0x0  nop
    ctx->pc = 0x2c7048u;
    // NOP
    // 0x2c704c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c704cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c7050: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2c7050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2c7054: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2c7054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2c7058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c705c: 0x0  nop
    ctx->pc = 0x2c705cu;
    // NOP
    // 0x2c7060: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c7060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c7064: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7068: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c7068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c706c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2c706cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c7070: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c7070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c7074: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c7074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c7078: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c7078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c707c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c707cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c7080: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c7080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c7084: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2c7084u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7088: 0x2404170d  addiu       $a0, $zero, 0x170D
    ctx->pc = 0x2c7088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5901));
    // 0x2c708c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c708cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c7090: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2c7090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c7094: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2C7094u;
    SET_GPR_U32(ctx, 31, 0x2C709Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2C7094u, 0x2C709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C709Cu;
label_2c709c:
    // 0x2c709c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2c709cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c70a0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2C70A0u;
    SET_GPR_U32(ctx, 31, 0x2C70A8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2C70A0u, 0x2C70A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C70A8u;
label_2c70a8:
    // 0x2c70a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c70a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c70ac: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c70acu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c70b0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c70b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c70b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c70b8: 0x0  nop
    ctx->pc = 0x2c70b8u;
    // NOP
    // 0x2c70bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c70bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c70c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c70c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c70c4: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c70c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c70c8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c70c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c70cc: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x2c70ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c70d0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2c70d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2c70d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c70d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c70d8: 0x0  nop
    ctx->pc = 0x2c70d8u;
    // NOP
    // 0x2c70dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c70dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c70e0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2c70e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x2c70e4: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x2c70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x2c70e8: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2c70e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2c70ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2c70ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2c70f0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c70f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c70f4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2c70f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c70f8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c70fc: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x2c70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x2c7100: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2c7100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2c7104: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2c7104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2c7108: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c7108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c710c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2c710cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c7110: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x2c7110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c7114: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c7114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c7118: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c7118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c711c: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x2c711cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2c7120: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x2c7120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2c7124: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x2C7124u;
    SET_GPR_U32(ctx, 31, 0x2C712Cu);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x2C7124u, 0x2C712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C712Cu;
label_2c712c:
    // 0x2c712c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c712cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c7130: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2c7130u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7134: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c7134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c7138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c713c: 0x0  nop
    ctx->pc = 0x2c713cu;
    // NOP
    // 0x2c7140: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c7140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c7144: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c7144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c7148: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x2c7148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x2c714c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c714cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7150: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2c7150u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2c7154: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2c7154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c7158: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x2c7158u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c715c: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C715Cu;
    {
        const bool branch_taken_0x2c715c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c715c) {
            ctx->pc = 0x2C7218u;
            goto label_2c7218;
        }
    }
    ctx->pc = 0x2C7164u;
    // 0x2c7164: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c7164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c7168: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c716c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c716cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c7170: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2c7170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2c7174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7178: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c717c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7180: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c7180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c7184: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c7184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c7188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c718c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7190: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7194: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c7194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c7198: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c719c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c719cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c71a0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c71a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c71a4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c71a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c71a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c71ac: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c71acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c71b0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c71b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c71b4: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x2c71b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c71b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c71bc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c71bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c71c0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c71c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c71c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2c71c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c71c8: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c71c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2c71cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c71d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c71d4: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x2c71d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c71d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c71dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c71dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c71e0: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c71e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c71e4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c71e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c71e8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c71e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2c71ec: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2c71ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c71f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C71F0u;
    {
        const bool branch_taken_0x2c71f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c71f0) {
            ctx->pc = 0x2C720Cu;
            goto label_2c720c;
        }
    }
    ctx->pc = 0x2C71F8u;
    // 0x2c71f8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2c71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2c71fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c71fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7200: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7204: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7208: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c7208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_2c720c:
    // 0x2c720c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x2c720cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2c7210: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7214: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c7214u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2c7218:
    // 0x2c7218: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c721c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7220: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2c7220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7224: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c7224u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c7228: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C7228u;
    SET_GPR_U32(ctx, 31, 0x2C7230u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C7228u, 0x2C7230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7230u;
label_2c7230:
    // 0x2c7230: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7234: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c7234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c7238: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c723c: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2c723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7240: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2c7240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7244: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c7244u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c7248: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C7248u;
    SET_GPR_U32(ctx, 31, 0x2C7250u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C7248u, 0x2C7250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7250u;
label_2c7250:
    // 0x2c7250: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7254: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2c7254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c7258: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c7258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c725c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c725cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c7260: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C7260u;
    SET_GPR_U32(ctx, 31, 0x2C7268u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C7260u, 0x2C7268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7268u;
label_2c7268:
    // 0x2c7268: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c726c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7270: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c7270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7274: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7278: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c7278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c727c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c727cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7280: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2C7280u;
    SET_GPR_U32(ctx, 31, 0x2C7288u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2C7280u, 0x2C7288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7288u;
label_2c7288:
    // 0x2c7288: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c7288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c728c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c728cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c7290: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C7290u;
    SET_GPR_U32(ctx, 31, 0x2C7298u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C7290u, 0x2C7298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7298u;
label_2c7298:
    // 0x2c7298: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c7298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c729c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2C729Cu;
    SET_GPR_U32(ctx, 31, 0x2C72A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2C729Cu, 0x2C72A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72A4u;
label_2c72a4:
    // 0x2c72a4: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x2C72A4u;
    {
        const bool branch_taken_0x2c72a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c72a4) {
            ctx->pc = 0x2C7614u;
            goto label_2c7614;
        }
    }
    ctx->pc = 0x2C72ACu;
label_2c72ac:
    // 0x2c72ac: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c72acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c72b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c72b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c72b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C72B4u;
    SET_GPR_U32(ctx, 31, 0x2C72BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C72B4u, 0x2C72BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72BCu;
label_2c72bc:
    // 0x2c72bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c72bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c72c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c72c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c72c4: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c72c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c72c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c72cc: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c72ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c72d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c72d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c72d4: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2C72D4u;
    SET_GPR_U32(ctx, 31, 0x2C72DCu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2C72D4u, 0x2C72DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72DCu;
label_2c72dc:
    // 0x2c72dc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c72dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c72e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c72e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c72e4: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C72E4u;
    SET_GPR_U32(ctx, 31, 0x2C72ECu);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C72E4u, 0x2C72ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72ECu;
label_2c72ec:
    // 0x2c72ec: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c72ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c72f0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2C72F0u;
    SET_GPR_U32(ctx, 31, 0x2C72F8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2C72F0u, 0x2C72F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72F8u;
label_2c72f8:
    // 0x2c72f8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c72f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c72fc: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2c72fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2c7300: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2C7300u;
    {
        const bool branch_taken_0x2c7300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7300) {
            ctx->pc = 0x2C7430u;
            goto label_2c7430;
        }
    }
    ctx->pc = 0x2C7308u;
    // 0x2c7308: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c730c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2c730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2c7310: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x2c7310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2c7314: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x2c7314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x2c7318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c731c: 0x0  nop
    ctx->pc = 0x2c731cu;
    // NOP
    // 0x2c7320: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2c7320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c7324: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7328: 0x0  nop
    ctx->pc = 0x2c7328u;
    // NOP
    // 0x2c732c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2c732cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c7330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7334: 0x0  nop
    ctx->pc = 0x2c7334u;
    // NOP
    // 0x2c7338: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2c7338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c733c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c733cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7340: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c7340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7344: 0x0  nop
    ctx->pc = 0x2c7344u;
    // NOP
    // 0x2c7348: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2c7348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c734c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2c734cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2c7350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c7350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7354: 0x0  nop
    ctx->pc = 0x2c7354u;
    // NOP
    // 0x2c7358: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2c7358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c735c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c735cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7360: 0xa7a30054  sh          $v1, 0x54($sp)
    ctx->pc = 0x2c7360u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c7364: 0xa3a00056  sb          $zero, 0x56($sp)
    ctx->pc = 0x2c7364u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7368: 0xa3a00057  sb          $zero, 0x57($sp)
    ctx->pc = 0x2c7368u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c736c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7370: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x2c7370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x2c7374: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C7374u;
    {
        const bool branch_taken_0x2c7374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7374) {
            ctx->pc = 0x2C7430u;
            goto label_2c7430;
        }
    }
    ctx->pc = 0x2C737Cu;
    // 0x2c737c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c737cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7380: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2c7380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c7384: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x2C7384u;
    SET_GPR_U32(ctx, 31, 0x2C738Cu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x2C7384u, 0x2C738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C738Cu;
label_2c738c:
    // 0x2c738c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C738Cu;
    {
        const bool branch_taken_0x2c738c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c738c) {
            ctx->pc = 0x2C7430u;
            goto label_2c7430;
        }
    }
    ctx->pc = 0x2C7394u;
    // 0x2c7394: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2c7394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2c7398: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x2c7398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x2c739c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2C739Cu;
    SET_GPR_U32(ctx, 31, 0x2C73A4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2C739Cu, 0x2C73A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C73A4u;
label_2c73a4:
    // 0x2c73a4: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x2c73a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x2c73a8: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x2c73a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x2c73ac: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2C73ACu;
    SET_GPR_U32(ctx, 31, 0x2C73B4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2C73ACu, 0x2C73B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C73B4u;
label_2c73b4:
    // 0x2c73b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c73b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c73b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c73b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c73bc: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2c73bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c73c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c73c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c73c4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c73c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c73c8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c73cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c73ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c73d0: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c73d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2c73d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c73d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c73d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c73dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c73dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c73e0: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2c73e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c73e4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C73E4u;
    SET_GPR_U32(ctx, 31, 0x2C73ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C73E4u, 0x2C73ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C73ECu;
label_2c73ec:
    // 0x2c73ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c73ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c73f0: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x2c73f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2c73f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c73f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c73f8: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C73F8u;
    {
        const bool branch_taken_0x2c73f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c73f8) {
            ctx->pc = 0x2C7430u;
            goto label_2c7430;
        }
    }
    ctx->pc = 0x2C7400u;
    // 0x2c7400: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c7400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c7404: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7408: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c7408u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c740c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c740cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7410: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7414: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c7414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c7418: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c741c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c741cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7420: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7424: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c7424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7428: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c742c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c742cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c7430:
    // 0x2c7430: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7434: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2c7434u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c7438: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7438u;
    {
        const bool branch_taken_0x2c7438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7438) {
            ctx->pc = 0x2C7450u;
            goto label_2c7450;
        }
    }
    ctx->pc = 0x2C7440u;
    // 0x2c7440: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c7440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7444: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2c7444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2c7448: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c7448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c744c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2c744cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_2c7450:
    // 0x2c7450: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7454: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7458: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c7458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c745c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C745Cu;
    {
        const bool branch_taken_0x2c745c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c745c) {
            ctx->pc = 0x2C7498u;
            goto label_2c7498;
        }
    }
    ctx->pc = 0x2C7464u;
    // 0x2c7464: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7468: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c746c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2c746cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7470: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7474: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2c7474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7478: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c7478u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c747c: 0x0  nop
    ctx->pc = 0x2c747cu;
    // NOP
    // 0x2c7480: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7480u;
    {
        const bool branch_taken_0x2c7480 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7480) {
            ctx->pc = 0x2C7498u;
            goto label_2c7498;
        }
    }
    ctx->pc = 0x2C7488u;
    // 0x2c7488: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c748c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2c748cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c7490: 0x14600060  bnez        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2C7490u;
    {
        const bool branch_taken_0x2c7490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7490) {
            ctx->pc = 0x2C7614u;
            goto label_2c7614;
        }
    }
    ctx->pc = 0x2C7498u;
label_2c7498:
    // 0x2c7498: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C7498u;
    SET_GPR_U32(ctx, 31, 0x2C74A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C7498u, 0x2C74A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C74A0u;
label_2c74a0:
    // 0x2c74a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c74a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c74a4: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c74a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c74a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c74ac: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C74ACu;
    {
        const bool branch_taken_0x2c74ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c74ac) {
            ctx->pc = 0x2C74E4u;
            goto label_2c74e4;
        }
    }
    ctx->pc = 0x2C74B4u;
    // 0x2c74b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c74b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c74b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c74bc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c74bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c74c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c74c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c74c4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c74c8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c74c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c74cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c74d0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c74d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c74d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c74d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c74d8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c74d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c74dc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c74e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c74e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2c74e4:
    // 0x2c74e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c74e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c74e8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c74ec: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2c74ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c74f0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2c74f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2c74f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c74f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c74f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c74f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c74fc: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2c74fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2c7500: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c7500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c7504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7508: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c750c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7510: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c7510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c7514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7518: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c751c: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2c751cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7520: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2c7520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2c7524: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7524u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7528: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c752c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c752cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7530: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x2c7530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x2c7534: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x2c7534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
    // 0x2c7538: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2c7538u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c753c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c753cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7540: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2c7540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2c7544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c7544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7548: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c754c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c754cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c7550: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7554: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c7554u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7558: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c755c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c755cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7560: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c7560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7564: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2c7564u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7568: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2c7568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c756c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2c756cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2c7570: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x2c7570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7574: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x2c7574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2c7578: 0xa4e0000c  sh          $zero, 0xC($a3)
    ctx->pc = 0x2c7578u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c757c: 0x8fa80078  lw          $t0, 0x78($sp)
    ctx->pc = 0x2c757cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7580: 0x25021330  addiu       $v0, $t0, 0x1330
    ctx->pc = 0x2c7580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x2c7584: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2c7584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c7588: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c7588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c758c: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2c758cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x2c7590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7594: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7598: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c759c: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2c759cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c75a0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C75A0u;
    SET_GPR_U32(ctx, 31, 0x2C75A8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C75A0u, 0x2C75A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C75A8u;
label_2c75a8:
    // 0x2c75a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c75a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c75ac: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c75acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c75b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c75b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c75b4: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C75B4u;
    {
        const bool branch_taken_0x2c75b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c75b4) {
            ctx->pc = 0x2C75ECu;
            goto label_2c75ec;
        }
    }
    ctx->pc = 0x2C75BCu;
    // 0x2c75bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c75bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c75c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c75c4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c75c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c75c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c75c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c75cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c75d0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c75d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c75d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c75d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c75d8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c75d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c75dc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c75e0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c75e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c75e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c75e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c75e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2c75ec:
    // 0x2c75ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C75ECu;
    SET_GPR_U32(ctx, 31, 0x2C75F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C75ECu, 0x2C75F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C75F4u;
label_2c75f4:
    // 0x2c75f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c75f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c75f8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x2c75f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x2c75fc: 0x24630258  addiu       $v1, $v1, 0x258
    ctx->pc = 0x2c75fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 600));
    // 0x2c7600: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2c7600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c7604: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c7604u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c7608: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c760c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c760cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7610: 0xa4640058  sh          $a0, 0x58($v1)
    ctx->pc = 0x2c7610u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 88), (uint16_t)GPR_U32(ctx, 4));
label_2c7614:
    // 0x2c7614: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2c7614u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c761c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2c761cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c7620: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7628u;
}
