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

// Function: eff2d_05_move
// Address: 0x21e230 - 0x21ecb8
void eff2d_05_move_0x21e230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_05_move_0x21e230");
#endif

    switch (ctx->pc) {
        case 0x21e2d8u: goto label_21e2d8;
        case 0x21e2f8u: goto label_21e2f8;
        case 0x21e318u: goto label_21e318;
        case 0x21e434u: goto label_21e434;
        case 0x21e454u: goto label_21e454;
        case 0x21e474u: goto label_21e474;
        case 0x21e4f0u: goto label_21e4f0;
        case 0x21e6d8u: goto label_21e6d8;
        case 0x21e6f8u: goto label_21e6f8;
        case 0x21e704u: goto label_21e704;
        case 0x21e740u: goto label_21e740;
        case 0x21e788u: goto label_21e788;
        case 0x21e794u: goto label_21e794;
        case 0x21e79cu: goto label_21e79c;
        case 0x21e894u: goto label_21e894;
        case 0x21e89cu: goto label_21e89c;
        case 0x21e8b8u: goto label_21e8b8;
        case 0x21e8d4u: goto label_21e8d4;
        case 0x21e8f8u: goto label_21e8f8;
        case 0x21e984u: goto label_21e984;
        case 0x21ea7cu: goto label_21ea7c;
        case 0x21ea88u: goto label_21ea88;
        case 0x21eab0u: goto label_21eab0;
        case 0x21eabcu: goto label_21eabc;
        case 0x21eaccu: goto label_21eacc;
        case 0x21ead8u: goto label_21ead8;
        case 0x21eafcu: goto label_21eafc;
        case 0x21eb20u: goto label_21eb20;
        case 0x21eb2cu: goto label_21eb2c;
        case 0x21eb3cu: goto label_21eb3c;
        case 0x21eb48u: goto label_21eb48;
        case 0x21eb70u: goto label_21eb70;
        case 0x21eb80u: goto label_21eb80;
        case 0x21ebacu: goto label_21ebac;
        case 0x21ebecu: goto label_21ebec;
        case 0x21ebf4u: goto label_21ebf4;
        default: break;
    }

    ctx->pc = 0x21e230u;

    // 0x21e230: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21e230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21e234: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x21e234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x21e238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21e238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21e23c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21e240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21e244: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x21e244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x21e248: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e24c: 0x8c630124  lw          $v1, 0x124($v1)
    ctx->pc = 0x21e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x21e250: 0x14600096  bnez        $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x21E250u;
    {
        const bool branch_taken_0x21e250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e250) {
            ctx->pc = 0x21E4ACu;
            goto label_21e4ac;
        }
    }
    ctx->pc = 0x21E258u;
    // 0x21e258: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x21e258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e25c: 0x8ca4012c  lw          $a0, 0x12C($a1)
    ctx->pc = 0x21e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 300)));
    // 0x21e260: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e264: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E264u;
    {
        const bool branch_taken_0x21e264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e264) {
            ctx->pc = 0x21E280u;
            goto label_21e280;
        }
    }
    ctx->pc = 0x21E26Cu;
    // 0x21e26c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21e26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e270: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e274: 0xac64012c  sw          $a0, 0x12C($v1)
    ctx->pc = 0x21e274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 4));
    // 0x21e278: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x21E278u;
    {
        const bool branch_taken_0x21e278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e278) {
            ctx->pc = 0x21E4ACu;
            goto label_21e4ac;
        }
    }
    ctx->pc = 0x21E280u;
label_21e280:
    // 0x21e280: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e284: 0x8c63012c  lw          $v1, 0x12C($v1)
    ctx->pc = 0x21e284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x21e288: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21e288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e28c: 0x14640032  bne         $v1, $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x21E28Cu;
    {
        const bool branch_taken_0x21e28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x21e28c) {
            ctx->pc = 0x21E358u;
            goto label_21e358;
        }
    }
    ctx->pc = 0x21E294u;
    // 0x21e294: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e298: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x21e298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21e29c: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x21e29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21e2a0: 0xac850130  sw          $a1, 0x130($a0)
    ctx->pc = 0x21e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 5));
    // 0x21e2a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e2a8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x21e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x21e2ac: 0x1460007f  bnez        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x21E2ACu;
    {
        const bool branch_taken_0x21e2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e2ac) {
            ctx->pc = 0x21E4ACu;
            goto label_21e4ac;
        }
    }
    ctx->pc = 0x21E2B4u;
    // 0x21e2b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21e2b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e2bc: 0xac44012c  sw          $a0, 0x12C($v0)
    ctx->pc = 0x21e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 4));
    // 0x21e2c0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e2c4: 0x94640118  lhu         $a0, 0x118($v1)
    ctx->pc = 0x21e2c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x21e2c8: 0x3082fffe  andi        $v0, $a0, 0xFFFE
    ctx->pc = 0x21e2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65534);
    // 0x21e2cc: 0xa4620118  sh          $v0, 0x118($v1)
    ctx->pc = 0x21e2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x21e2d0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E2D0u;
    SET_GPR_U32(ctx, 31, 0x21E2D8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E2D0u, 0x21E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E2D8u;
label_21e2d8:
    // 0x21e2d8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x21e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x21e2dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21e2dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e2e0: 0x0  nop
    ctx->pc = 0x21e2e0u;
    // NOP
    // 0x21e2e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e2e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e2e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e2ec: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x21e2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x21e2f0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E2F0u;
    SET_GPR_U32(ctx, 31, 0x21E2F8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E2F0u, 0x21E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E2F8u;
label_21e2f8:
    // 0x21e2f8: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x21e2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x21e2fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21e2fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e300: 0x0  nop
    ctx->pc = 0x21e300u;
    // NOP
    // 0x21e304: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e308: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e30c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x21e30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x21e310: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E310u;
    SET_GPR_U32(ctx, 31, 0x21E318u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E310u, 0x21E318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E318u;
label_21e318:
    // 0x21e318: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x21e318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x21e31c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21e31cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e320: 0x0  nop
    ctx->pc = 0x21e320u;
    // NOP
    // 0x21e324: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e328: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e32c: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x21e32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x21e330: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x21e330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x21e334: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21e334u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e338: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e33c: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x21e33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x21e340: 0x3c05c000  lui         $a1, 0xC000
    ctx->pc = 0x21e340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49152 << 16));
    // 0x21e344: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x21e344u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e348: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e34c: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x21e34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x21e350: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x21E350u;
    {
        const bool branch_taken_0x21e350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e350) {
            ctx->pc = 0x21E4ACu;
            goto label_21e4ac;
        }
    }
    ctx->pc = 0x21E358u;
label_21e358:
    // 0x21e358: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e35c: 0x8c64012c  lw          $a0, 0x12C($v1)
    ctx->pc = 0x21e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x21e360: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21e360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21e364: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x21E364u;
    {
        const bool branch_taken_0x21e364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e364) {
            ctx->pc = 0x21E3B4u;
            goto label_21e3b4;
        }
    }
    ctx->pc = 0x21E36Cu;
    // 0x21e36c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e370: 0xc46200b4  lwc1        $f2, 0xB4($v1)
    ctx->pc = 0x21e370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21e374: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x21e374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x21e378: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x21e378u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e37c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x21e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x21e380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e384: 0x0  nop
    ctx->pc = 0x21e384u;
    // NOP
    // 0x21e388: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x21e388u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21e38c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x21e38cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e390: 0x0  nop
    ctx->pc = 0x21e390u;
    // NOP
    // 0x21e394: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x21E394u;
    {
        const bool branch_taken_0x21e394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21e394) {
            ctx->pc = 0x21E4ACu;
            goto label_21e4ac;
        }
    }
    ctx->pc = 0x21E39Cu;
    // 0x21e39c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e3a0: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x21e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x21e3a4: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x21e3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x21e3a8: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x21e3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
    // 0x21e3ac: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x21E3ACu;
    {
        const bool branch_taken_0x21e3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e3ac) {
            ctx->pc = 0x21E4ACu;
            goto label_21e4ac;
        }
    }
    ctx->pc = 0x21E3B4u;
label_21e3b4:
    // 0x21e3b4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e3b8: 0x8c64012c  lw          $a0, 0x12C($v1)
    ctx->pc = 0x21e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x21e3bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21e3c0: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E3C0u;
    {
        const bool branch_taken_0x21e3c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e3c0) {
            ctx->pc = 0x21E3DCu;
            goto label_21e3dc;
        }
    }
    ctx->pc = 0x21E3C8u;
    // 0x21e3c8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x21e3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21e3cc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x21e3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e3d0: 0xaca4012c  sw          $a0, 0x12C($a1)
    ctx->pc = 0x21e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 300), GPR_U32(ctx, 4));
    // 0x21e3d4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x21E3D4u;
    {
        const bool branch_taken_0x21e3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e3d4) {
            ctx->pc = 0x21E4ACu;
            goto label_21e4ac;
        }
    }
    ctx->pc = 0x21E3DCu;
label_21e3dc:
    // 0x21e3dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e3e0: 0x8c64012c  lw          $a0, 0x12C($v1)
    ctx->pc = 0x21e3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x21e3e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x21e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21e3e8: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x21E3E8u;
    {
        const bool branch_taken_0x21e3e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e3e8) {
            ctx->pc = 0x21E4ACu;
            goto label_21e4ac;
        }
    }
    ctx->pc = 0x21E3F0u;
    // 0x21e3f0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e3f4: 0x8c900130  lw          $s0, 0x130($a0)
    ctx->pc = 0x21e3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21e3f8: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x21e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x21e3fc: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x21e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    // 0x21e400: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x21e400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e404: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x21e404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x21e408: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x21E408u;
    {
        const bool branch_taken_0x21e408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e408) {
            ctx->pc = 0x21E4ACu;
            goto label_21e4ac;
        }
    }
    ctx->pc = 0x21E410u;
    // 0x21e410: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21e410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21e414: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e418: 0xac64012c  sw          $a0, 0x12C($v1)
    ctx->pc = 0x21e418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 4));
    // 0x21e41c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x21e41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e420: 0x94a30118  lhu         $v1, 0x118($a1)
    ctx->pc = 0x21e420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x21e424: 0x3064fffe  andi        $a0, $v1, 0xFFFE
    ctx->pc = 0x21e424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x21e428: 0xa4a40118  sh          $a0, 0x118($a1)
    ctx->pc = 0x21e428u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 280), (uint16_t)GPR_U32(ctx, 4));
    // 0x21e42c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E42Cu;
    SET_GPR_U32(ctx, 31, 0x21E434u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E42Cu, 0x21E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E434u;
label_21e434:
    // 0x21e434: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x21e434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x21e438: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21e438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e43c: 0x0  nop
    ctx->pc = 0x21e43cu;
    // NOP
    // 0x21e440: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e444: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e448: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x21e448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x21e44c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E44Cu;
    SET_GPR_U32(ctx, 31, 0x21E454u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E44Cu, 0x21E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E454u;
label_21e454:
    // 0x21e454: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x21e454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x21e458: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21e458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e45c: 0x0  nop
    ctx->pc = 0x21e45cu;
    // NOP
    // 0x21e460: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e464: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e468: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x21e468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x21e46c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E46Cu;
    SET_GPR_U32(ctx, 31, 0x21E474u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E46Cu, 0x21E474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E474u;
label_21e474:
    // 0x21e474: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x21e474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x21e478: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21e478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e47c: 0x0  nop
    ctx->pc = 0x21e47cu;
    // NOP
    // 0x21e480: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e484: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e488: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x21e488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x21e48c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e490: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e494: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e498: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x21e498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x21e49c: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x21e49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
    // 0x21e4a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21e4a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e4a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e4a8: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x21e4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
label_21e4ac:
    // 0x21e4ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e4b0: 0x8c640124  lw          $a0, 0x124($v1)
    ctx->pc = 0x21e4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x21e4b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e4b8: 0x1483011d  bne         $a0, $v1, . + 4 + (0x11D << 2)
    ctx->pc = 0x21E4B8u;
    {
        const bool branch_taken_0x21e4b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e4b8) {
            ctx->pc = 0x21E930u;
            goto label_21e930;
        }
    }
    ctx->pc = 0x21E4C0u;
    // 0x21e4c0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e4c4: 0x8c63012c  lw          $v1, 0x12C($v1)
    ctx->pc = 0x21e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x21e4c8: 0x14600112  bnez        $v1, . + 4 + (0x112 << 2)
    ctx->pc = 0x21E4C8u;
    {
        const bool branch_taken_0x21e4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e4c8) {
            ctx->pc = 0x21E914u;
            goto label_21e914;
        }
    }
    ctx->pc = 0x21E4D0u;
    // 0x21e4d0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e4d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e4d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x21e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21e4dc: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x21e4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x21e4e0: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x21e4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21e4e4: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x21e4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x21e4e8: 0xc059e1c  jal         func_167870
    ctx->pc = 0x21E4E8u;
    SET_GPR_U32(ctx, 31, 0x21E4F0u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x21E4E8u, 0x21E4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E4F0u;
label_21e4f0:
    // 0x21e4f0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x21e4f0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21e4f4: 0x12400080  beqz        $s2, . + 4 + (0x80 << 2)
    ctx->pc = 0x21E4F4u;
    {
        const bool branch_taken_0x21e4f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e4f4) {
            ctx->pc = 0x21E6F8u;
            goto label_21e6f8;
        }
    }
    ctx->pc = 0x21E4FCu;
    // 0x21e4fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e500: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e504: 0xac43012c  sw          $v1, 0x12C($v0)
    ctx->pc = 0x21e504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 3));
    // 0x21e508: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x21e508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e50c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e510: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x21e510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x21e514: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x21e514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e518: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e51c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x21e51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x21e520: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x21e520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e524: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e528: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x21e528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x21e52c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21e530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e534: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e538: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x21e538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x21e53c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e540: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x21e540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e544: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x21e544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x21e548: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x21e548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x21e54c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e550: 0x0  nop
    ctx->pc = 0x21e550u;
    // NOP
    // 0x21e554: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21e554u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e558: 0x0  nop
    ctx->pc = 0x21e558u;
    // NOP
    // 0x21e55c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x21E55Cu;
    {
        const bool branch_taken_0x21e55c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21e55c) {
            ctx->pc = 0x21E5D8u;
            goto label_21e5d8;
        }
    }
    ctx->pc = 0x21E564u;
    // 0x21e564: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e568: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x21e568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x21e56c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e570: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x21e570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e574: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21e574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e578: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e57c: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x21e57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e580: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21e580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e584: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x21e584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x21e588: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e58c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x21e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x21e590: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e594: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x21e594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e598: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21e598u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e59c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e5a0: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x21e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e5a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21e5a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e5a8: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x21e5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x21e5ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e5b0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x21e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x21e5b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e5b8: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x21e5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e5bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21e5bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e5c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e5c4: 0xc44000b8  lwc1        $f0, 0xB8($v0)
    ctx->pc = 0x21e5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e5c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21e5c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e5cc: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x21e5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x21e5d0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x21E5D0u;
    {
        const bool branch_taken_0x21e5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e5d0) {
            ctx->pc = 0x21E644u;
            goto label_21e644;
        }
    }
    ctx->pc = 0x21E5D8u;
label_21e5d8:
    // 0x21e5d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e5dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21e5e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e5e4: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x21e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e5e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21e5e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e5ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e5f0: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x21e5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e5f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21e5f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e5f8: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x21e5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x21e5fc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e600: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21e600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21e604: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e608: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x21e608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e60c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21e60cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e610: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e614: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x21e614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e618: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21e618u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e61c: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x21e61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x21e620: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e624: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21e624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21e628: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e62c: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x21e62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e630: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21e630u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e634: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e638: 0xc44000b8  lwc1        $f0, 0xB8($v0)
    ctx->pc = 0x21e638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e63c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21e63cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21e640: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x21e640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
label_21e644:
    // 0x21e644: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e648: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x21e648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x21e64c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x21e64cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x21e650: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21e650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21e654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e658: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e65c: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x21e65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x21e660: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e664: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x21e664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x21e668: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x21e668u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x21e66c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21e670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e674: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e678: 0xe440008c  swc1        $f0, 0x8C($v0)
    ctx->pc = 0x21e678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
    // 0x21e67c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x21e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x21e680: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x21e680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x21e684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e688: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e68c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x21e68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x21e690: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e694: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x21e694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e698: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x21e698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x21e69c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x21e69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x21e6a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e6a4: 0x0  nop
    ctx->pc = 0x21e6a4u;
    // NOP
    // 0x21e6a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21e6a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e6ac: 0x0  nop
    ctx->pc = 0x21e6acu;
    // NOP
    // 0x21e6b0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x21E6B0u;
    {
        const bool branch_taken_0x21e6b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21e6b0) {
            ctx->pc = 0x21E6E0u;
            goto label_21e6e0;
        }
    }
    ctx->pc = 0x21E6B8u;
    // 0x21e6b8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x21e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x21e6bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x21e6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x21e6c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21e6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21e6c4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e6c8: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x21e6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21e6cc: 0x24050320  addiu       $a1, $zero, 0x320
    ctx->pc = 0x21e6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x21e6d0: 0xc0c4864  jal         func_312190
    ctx->pc = 0x21E6D0u;
    SET_GPR_U32(ctx, 31, 0x21E6D8u);
    ctx->pc = 0x312190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312190u, 0x21E6D0u, 0x21E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E6D8u;
label_21e6d8:
    // 0x21e6d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21E6D8u;
    {
        const bool branch_taken_0x21e6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e6d8) {
            ctx->pc = 0x21E6F8u;
            goto label_21e6f8;
        }
    }
    ctx->pc = 0x21E6E0u;
label_21e6e0:
    // 0x21e6e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21e6e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21e6e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e6e8: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x21e6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21e6ec: 0x24050320  addiu       $a1, $zero, 0x320
    ctx->pc = 0x21e6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x21e6f0: 0xc0c4864  jal         func_312190
    ctx->pc = 0x21E6F0u;
    SET_GPR_U32(ctx, 31, 0x21E6F8u);
    ctx->pc = 0x312190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312190u, 0x21E6F0u, 0x21E6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E6F8u;
label_21e6f8:
    // 0x21e6f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x21e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21e6fc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x21E6FCu;
    SET_GPR_U32(ctx, 31, 0x21E704u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x21E6FCu, 0x21E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E704u;
label_21e704:
    // 0x21e704: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x21e704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x21e708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21e708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e70c: 0x0  nop
    ctx->pc = 0x21e70cu;
    // NOP
    // 0x21e710: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x21e710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x21e714: 0xa7a00064  sh          $zero, 0x64($sp)
    ctx->pc = 0x21e714u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x21e718: 0xa3a00066  sb          $zero, 0x66($sp)
    ctx->pc = 0x21e718u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x21e71c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x21e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21e720: 0xa3a20067  sb          $v0, 0x67($sp)
    ctx->pc = 0x21e720u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 103), (uint8_t)GPR_U32(ctx, 2));
    // 0x21e724: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e728: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x21e728u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e72c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x21e72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x21e730: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x21e730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21e734: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x21e734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21e738: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x21E738u;
    SET_GPR_U32(ctx, 31, 0x21E740u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x21E738u, 0x21E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E740u;
label_21e740:
    // 0x21e740: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x21E740u;
    {
        const bool branch_taken_0x21e740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e740) {
            ctx->pc = 0x21E930u;
            goto label_21e930;
        }
    }
    ctx->pc = 0x21E748u;
    // 0x21e748: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21e748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e74c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e750: 0xac64012c  sw          $a0, 0x12C($v1)
    ctx->pc = 0x21e750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 4));
    // 0x21e754: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x21e754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x21e758: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x21e758u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x21e75c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x21e75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x21e760: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x21e760u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x21e764: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x21E764u;
    {
        const bool branch_taken_0x21e764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e764) {
            ctx->pc = 0x21E7B0u;
            goto label_21e7b0;
        }
    }
    ctx->pc = 0x21E76Cu;
    // 0x21e76c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x21e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21e770: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21e770u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e774: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x21e774u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e778: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21e778u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e77c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x21e77cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e780: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x21E780u;
    SET_GPR_U32(ctx, 31, 0x21E788u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x21E780u, 0x21E788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E788u;
label_21e788:
    // 0x21e788: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x21e788u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e78c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21E78Cu;
    {
        const bool branch_taken_0x21e78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e78c) {
            ctx->pc = 0x21E7A0u;
            goto label_21e7a0;
        }
    }
    ctx->pc = 0x21E794u;
label_21e794:
    // 0x21e794: 0xc0c4c74  jal         func_3131D0
    ctx->pc = 0x21E794u;
    SET_GPR_U32(ctx, 31, 0x21E79Cu);
    ctx->pc = 0x3131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3131D0u, 0x21E794u, 0x21E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E79Cu;
label_21e79c:
    // 0x21e79c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21e79cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21e7a0:
    // 0x21e7a0: 0x2e03000a  sltiu       $v1, $s0, 0xA
    ctx->pc = 0x21e7a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x21e7a4: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21E7A4u;
    {
        const bool branch_taken_0x21e7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e7a4) {
            ctx->pc = 0x21E794u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e794;
        }
    }
    ctx->pc = 0x21E7ACu;
    // 0x21e7ac: 0x0  nop
    ctx->pc = 0x21e7acu;
    // NOP
label_21e7b0:
    // 0x21e7b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e7b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e7b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e7b8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e7bc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x21e7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x21e7c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21e7c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e7c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e7c8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x21e7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x21e7cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21e7ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e7d0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e7d4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x21e7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x21e7d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e7dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e7e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e7e4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x21e7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x21e7e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21e7e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e7ec: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e7f0: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x21e7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x21e7f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21e7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e7f8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e7fc: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x21e7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x21e800: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21e800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e804: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e808: 0xe46000d8  swc1        $f0, 0xD8($v1)
    ctx->pc = 0x21e808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
    // 0x21e80c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x21e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x21e810: 0x2464dbc0  addiu       $a0, $v1, -0x2440
    ctx->pc = 0x21e810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x21e814: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e818: 0xac640110  sw          $a0, 0x110($v1)
    ctx->pc = 0x21e818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 4));
    // 0x21e81c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x21e81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x21e820: 0x8c24dcf0  lw          $a0, -0x2310($at)
    ctx->pc = 0x21e820u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x21e824: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e828: 0xac640114  sw          $a0, 0x114($v1)
    ctx->pc = 0x21e828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 4));
    // 0x21e82c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e830: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x21e830u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x21e834: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x21e834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x21e838: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x21e838u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x21e83c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e840: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x21e840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x21e844: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x21e844u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x21e848: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e84c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e84cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e850: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e854: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x21e854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x21e858: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e85c: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x21e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x21e860: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x21e860u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x21e864: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e868: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e86c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e870: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x21e870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
    // 0x21e874: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21e874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21e878: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21e878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21e87c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e87cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e880: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e884: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x21e884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x21e888: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x21e888u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21e88c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x21E88Cu;
    {
        const bool branch_taken_0x21e88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e88c) {
            ctx->pc = 0x21E900u;
            goto label_21e900;
        }
    }
    ctx->pc = 0x21E894u;
label_21e894:
    // 0x21e894: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E894u;
    SET_GPR_U32(ctx, 31, 0x21E89Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E894u, 0x21E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E89Cu;
label_21e89c:
    // 0x21e89c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x21e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x21e8a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e8a4: 0x0  nop
    ctx->pc = 0x21e8a4u;
    // NOP
    // 0x21e8a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e8a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e8ac: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x21e8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x21e8b0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E8B0u;
    SET_GPR_U32(ctx, 31, 0x21E8B8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E8B0u, 0x21E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8B8u;
label_21e8b8:
    // 0x21e8b8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x21e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x21e8bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e8c0: 0x0  nop
    ctx->pc = 0x21e8c0u;
    // NOP
    // 0x21e8c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e8c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e8c8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x21e8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x21e8cc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E8CCu;
    SET_GPR_U32(ctx, 31, 0x21E8D4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E8CCu, 0x21E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8D4u;
label_21e8d4:
    // 0x21e8d4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x21e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x21e8d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21e8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e8dc: 0x0  nop
    ctx->pc = 0x21e8dcu;
    // NOP
    // 0x21e8e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e8e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e8e4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x21e8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x21e8e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x21e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21e8ec: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x21e8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x21e8f0: 0xc0c48b4  jal         func_3122D0
    ctx->pc = 0x21E8F0u;
    SET_GPR_U32(ctx, 31, 0x21E8F8u);
    ctx->pc = 0x3122D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3122D0u, 0x21E8F0u, 0x21E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E8F8u;
label_21e8f8:
    // 0x21e8f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21e8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21e8fc: 0x0  nop
    ctx->pc = 0x21e8fcu;
    // NOP
label_21e900:
    // 0x21e900: 0x2e030007  sltiu       $v1, $s0, 0x7
    ctx->pc = 0x21e900u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x21e904: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x21E904u;
    {
        const bool branch_taken_0x21e904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e904) {
            ctx->pc = 0x21E894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e894;
        }
    }
    ctx->pc = 0x21E90Cu;
    // 0x21e90c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21E90Cu;
    {
        const bool branch_taken_0x21e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e90c) {
            ctx->pc = 0x21E930u;
            goto label_21e930;
        }
    }
    ctx->pc = 0x21E914u;
label_21e914:
    // 0x21e914: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e918: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21e918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21e91c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21e91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21e920: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21e920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e924: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x21e924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e928: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21e928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21e92c: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x21e92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_21e930:
    // 0x21e930: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e934: 0x8c640124  lw          $a0, 0x124($v1)
    ctx->pc = 0x21e934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x21e938: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21e938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e93c: 0x148300c3  bne         $a0, $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x21E93Cu;
    {
        const bool branch_taken_0x21e93c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e93c) {
            ctx->pc = 0x21EC4Cu;
            goto label_21ec4c;
        }
    }
    ctx->pc = 0x21E944u;
    // 0x21e944: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e948: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x21e948u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e94c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e950: 0x8c63012c  lw          $v1, 0x12C($v1)
    ctx->pc = 0x21e950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x21e954: 0x146000b1  bnez        $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x21E954u;
    {
        const bool branch_taken_0x21e954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e954) {
            ctx->pc = 0x21EC1Cu;
            goto label_21ec1c;
        }
    }
    ctx->pc = 0x21E95Cu;
    // 0x21e95c: 0x8e24012c  lw          $a0, 0x12C($s1)
    ctx->pc = 0x21e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x21e960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e964: 0x14830088  bne         $a0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x21E964u;
    {
        const bool branch_taken_0x21e964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e964) {
            ctx->pc = 0x21EB88u;
            goto label_21eb88;
        }
    }
    ctx->pc = 0x21E96Cu;
    // 0x21e96c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e970: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x21e970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21e974: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x21e974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x21e978: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x21e978u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21e97c: 0xc08786c  jal         func_21E1B0
    ctx->pc = 0x21E97Cu;
    SET_GPR_U32(ctx, 31, 0x21E984u);
    ctx->pc = 0x21E1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E1B0u, 0x21E97Cu, 0x21E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E984u;
label_21e984:
    // 0x21e984: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x21E984u;
    {
        const bool branch_taken_0x21e984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e984) {
            ctx->pc = 0x21EB88u;
            goto label_21eb88;
        }
    }
    ctx->pc = 0x21E98Cu;
    // 0x21e98c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e990: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e994: 0xac64012c  sw          $a0, 0x12C($v1)
    ctx->pc = 0x21e994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 4));
    // 0x21e998: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e99c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x21e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x21e9a0: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x21e9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x21e9a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e9a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e9a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e9ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e9b0: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x21e9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x21e9b4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e9b8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x21e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x21e9bc: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x21e9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x21e9c0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21e9c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e9c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e9c8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e9cc: 0xe460008c  swc1        $f0, 0x8C($v1)
    ctx->pc = 0x21e9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 140), bits); }
    // 0x21e9d0: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x21e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x21e9d4: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x21e9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x21e9d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e9d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e9dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e9e0: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x21e9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x21e9e4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x21e9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e9e8: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x21e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x21e9ec: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x21e9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x21e9f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21e9f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e9f4: 0x0  nop
    ctx->pc = 0x21e9f4u;
    // NOP
    // 0x21e9f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21e9f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e9fc: 0x0  nop
    ctx->pc = 0x21e9fcu;
    // NOP
    // 0x21ea00: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x21EA00u;
    {
        const bool branch_taken_0x21ea00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ea00) {
            ctx->pc = 0x21EA74u;
            goto label_21ea74;
        }
    }
    ctx->pc = 0x21EA08u;
    // 0x21ea08: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ea0c: 0x8c640120  lw          $a0, 0x120($v1)
    ctx->pc = 0x21ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x21ea10: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x21ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x21ea14: 0x1483005c  bne         $a0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x21EA14u;
    {
        const bool branch_taken_0x21ea14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21ea14) {
            ctx->pc = 0x21EB88u;
            goto label_21eb88;
        }
    }
    ctx->pc = 0x21EA1Cu;
    // 0x21ea1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21ea20: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ea24: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x21ea24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x21ea28: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x21ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x21ea2c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21ea2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21ea30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21ea30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ea34: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ea38: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x21ea38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x21ea3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21ea3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ea40: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ea44: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x21ea44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x21ea48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21ea48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ea4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ea50: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x21ea50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x21ea54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21ea54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ea58: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ea5c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x21ea5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x21ea60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21ea60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ea64: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ea68: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x21ea68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x21ea6c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x21EA6Cu;
    {
        const bool branch_taken_0x21ea6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ea6c) {
            ctx->pc = 0x21EB88u;
            goto label_21eb88;
        }
    }
    ctx->pc = 0x21EA74u;
label_21ea74:
    // 0x21ea74: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21EA74u;
    SET_GPR_U32(ctx, 31, 0x21EA7Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21EA74u, 0x21EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EA7Cu;
label_21ea7c:
    // 0x21ea7c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x21ea7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x21ea80: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x21EA80u;
    SET_GPR_U32(ctx, 31, 0x21EA88u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x21EA80u, 0x21EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EA88u;
label_21ea88:
    // 0x21ea88: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21ea88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21ea8c: 0x3c033f50  lui         $v1, 0x3F50
    ctx->pc = 0x21ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
    // 0x21ea90: 0x3464624d  ori         $a0, $v1, 0x624D
    ctx->pc = 0x21ea90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25165);
    // 0x21ea94: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x21ea94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x21ea98: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x21ea98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54001);
    // 0x21ea9c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x21ea9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x21eaa0: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x21eaa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43516);
    // 0x21eaa4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x21eaa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x21eaa8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x21EAA8u;
    SET_GPR_U32(ctx, 31, 0x21EAB0u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x21EAA8u, 0x21EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EAB0u;
label_21eab0:
    // 0x21eab0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21eab0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21eab4: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x21EAB4u;
    SET_GPR_U32(ctx, 31, 0x21EABCu);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x21EAB4u, 0x21EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EABCu;
label_21eabc:
    // 0x21eabc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21eac0: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x21eac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x21eac4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21EAC4u;
    SET_GPR_U32(ctx, 31, 0x21EACCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21EAC4u, 0x21EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EACCu;
label_21eacc:
    // 0x21eacc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x21eaccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x21ead0: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x21EAD0u;
    SET_GPR_U32(ctx, 31, 0x21EAD8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x21EAD0u, 0x21EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EAD8u;
label_21ead8:
    // 0x21ead8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21ead8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21eadc: 0x3c033f84  lui         $v1, 0x3F84
    ctx->pc = 0x21eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16260 << 16));
    // 0x21eae0: 0x34637ae1  ori         $v1, $v1, 0x7AE1
    ctx->pc = 0x21eae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31457);
    // 0x21eae4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x21eae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x21eae8: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x21eae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
    // 0x21eaec: 0x3462147b  ori         $v0, $v1, 0x147B
    ctx->pc = 0x21eaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x21eaf0: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x21eaf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x21eaf4: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x21EAF4u;
    SET_GPR_U32(ctx, 31, 0x21EAFCu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x21EAF4u, 0x21EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EAFCu;
label_21eafc:
    // 0x21eafc: 0x3c03bf9e  lui         $v1, 0xBF9E
    ctx->pc = 0x21eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49054 << 16));
    // 0x21eb00: 0x3463b851  ori         $v1, $v1, 0xB851
    ctx->pc = 0x21eb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47185);
    // 0x21eb04: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x21eb04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x21eb08: 0x3403e000  ori         $v1, $zero, 0xE000
    ctx->pc = 0x21eb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x21eb0c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x21eb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x21eb10: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x21eb10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x21eb14: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21eb14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21eb18: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x21EB18u;
    SET_GPR_U32(ctx, 31, 0x21EB20u);
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x21EB18u, 0x21EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB20u;
label_21eb20:
    // 0x21eb20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21eb20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21eb24: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x21EB24u;
    SET_GPR_U32(ctx, 31, 0x21EB2Cu);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x21EB24u, 0x21EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB2Cu;
label_21eb2c:
    // 0x21eb2c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21eb30: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x21eb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x21eb34: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21EB34u;
    SET_GPR_U32(ctx, 31, 0x21EB3Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21EB34u, 0x21EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB3Cu;
label_21eb3c:
    // 0x21eb3c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x21eb3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x21eb40: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x21EB40u;
    SET_GPR_U32(ctx, 31, 0x21EB48u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x21EB40u, 0x21EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB48u;
label_21eb48:
    // 0x21eb48: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21eb48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21eb4c: 0x3c033f50  lui         $v1, 0x3F50
    ctx->pc = 0x21eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
    // 0x21eb50: 0x3463624d  ori         $v1, $v1, 0x624D
    ctx->pc = 0x21eb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25165);
    // 0x21eb54: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x21eb54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x21eb58: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x21eb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54001);
    // 0x21eb5c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x21eb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x21eb60: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x21eb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43516);
    // 0x21eb64: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x21eb64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x21eb68: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x21EB68u;
    SET_GPR_U32(ctx, 31, 0x21EB70u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x21EB68u, 0x21EB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB70u;
label_21eb70:
    // 0x21eb70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x21eb70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21eb74: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x21eb74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x21eb78: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x21EB78u;
    SET_GPR_U32(ctx, 31, 0x21EB80u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x21EB78u, 0x21EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB80u;
label_21eb80:
    // 0x21eb80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21eb84: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x21eb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_21eb88:
    // 0x21eb88: 0x8e23012c  lw          $v1, 0x12C($s1)
    ctx->pc = 0x21eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x21eb8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21eb90: 0x14640022  bne         $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x21EB90u;
    {
        const bool branch_taken_0x21eb90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x21eb90) {
            ctx->pc = 0x21EC1Cu;
            goto label_21ec1c;
        }
    }
    ctx->pc = 0x21EB98u;
    // 0x21eb98: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21eb9c: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x21eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x21eba0: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x21eba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x21eba4: 0xc067594  jal         func_19D650
    ctx->pc = 0x21EBA4u;
    SET_GPR_U32(ctx, 31, 0x21EBACu);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x21EBA4u, 0x21EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EBACu;
label_21ebac:
    // 0x21ebac: 0x3c0343b9  lui         $v1, 0x43B9
    ctx->pc = 0x21ebacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17337 << 16));
    // 0x21ebb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ebb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ebb4: 0x0  nop
    ctx->pc = 0x21ebb4u;
    // NOP
    // 0x21ebb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21ebb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ebbc: 0x0  nop
    ctx->pc = 0x21ebbcu;
    // NOP
    // 0x21ebc0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x21EBC0u;
    {
        const bool branch_taken_0x21ebc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ebc0) {
            ctx->pc = 0x21EC1Cu;
            goto label_21ec1c;
        }
    }
    ctx->pc = 0x21EBC8u;
    // 0x21ebc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x21ebc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x21ebcc: 0x8424f1ac  lh          $a0, -0xE54($at)
    ctx->pc = 0x21ebccu;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x21ebd0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x21ebd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x21ebd4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x21ebd4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x21ebd8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x21EBD8u;
    {
        const bool branch_taken_0x21ebd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ebd8) {
            ctx->pc = 0x21EC1Cu;
            goto label_21ec1c;
        }
    }
    ctx->pc = 0x21EBE0u;
    // 0x21ebe0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x21ebe0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21ebe4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21EBE4u;
    {
        const bool branch_taken_0x21ebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ebe4) {
            ctx->pc = 0x21EC00u;
            goto label_21ec00;
        }
    }
    ctx->pc = 0x21EBECu;
label_21ebec:
    // 0x21ebec: 0xc0c4c74  jal         func_3131D0
    ctx->pc = 0x21EBECu;
    SET_GPR_U32(ctx, 31, 0x21EBF4u);
    ctx->pc = 0x3131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3131D0u, 0x21EBECu, 0x21EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EBF4u;
label_21ebf4:
    // 0x21ebf4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21ebf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21ebf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21ebf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21ebfc: 0x0  nop
    ctx->pc = 0x21ebfcu;
    // NOP
label_21ec00:
    // 0x21ec00: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x21ec00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x21ec04: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21EC04u;
    {
        const bool branch_taken_0x21ec04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ec04) {
            ctx->pc = 0x21EBECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ebec;
        }
    }
    ctx->pc = 0x21EC0Cu;
    // 0x21ec0c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x21ec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ec10: 0x8ca3020c  lw          $v1, 0x20C($a1)
    ctx->pc = 0x21ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x21ec14: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x21ec14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x21ec18: 0xaca4020c  sw          $a0, 0x20C($a1)
    ctx->pc = 0x21ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 4));
label_21ec1c:
    // 0x21ec1c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ec20: 0x8c65012c  lw          $a1, 0x12C($v1)
    ctx->pc = 0x21ec20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x21ec24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ec28: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21EC28u;
    {
        const bool branch_taken_0x21ec28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x21ec28) {
            ctx->pc = 0x21EC4Cu;
            goto label_21ec4c;
        }
    }
    ctx->pc = 0x21EC30u;
    // 0x21ec30: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ec34: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21ec38: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21ec38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21ec3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ec3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ec40: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x21ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ec44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21ec44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21ec48: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x21ec48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_21ec4c:
    // 0x21ec4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ec50: 0x8c640124  lw          $a0, 0x124($v1)
    ctx->pc = 0x21ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x21ec54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21ec58: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x21EC58u;
    {
        const bool branch_taken_0x21ec58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21ec58) {
            ctx->pc = 0x21EC9Cu;
            goto label_21ec9c;
        }
    }
    ctx->pc = 0x21EC60u;
    // 0x21ec60: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ec64: 0xc481010c  lwc1        $f1, 0x10C($a0)
    ctx->pc = 0x21ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ec68: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x21ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x21ec6c: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x21ec6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x21ec70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21ec70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ec74: 0x0  nop
    ctx->pc = 0x21ec74u;
    // NOP
    // 0x21ec78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21ec78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21ec7c: 0xe480010c  swc1        $f0, 0x10C($a0)
    ctx->pc = 0x21ec7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 268), bits); }
    // 0x21ec80: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ec84: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x21ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x21ec88: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x21ec88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x21ec8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21ec8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ec90: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x21ec90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ec94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21ec94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21ec98: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x21ec98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_21ec9c:
    // 0x21ec9c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x21ec9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21eca0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21eca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21eca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21eca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21eca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21eca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ecac: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x21ecacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21ecb0: 0x3e00008  jr          $ra
    ctx->pc = 0x21ECB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ECB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21ECB8u;
}
