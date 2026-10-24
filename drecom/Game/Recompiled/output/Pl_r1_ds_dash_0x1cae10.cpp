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

// Function: Pl_r1_ds_dash
// Address: 0x1cae10 - 0x1cb878
void Pl_r1_ds_dash_0x1cae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_ds_dash_0x1cae10");
#endif

    switch (ctx->pc) {
        case 0x1caed4u: goto label_1caed4;
        case 0x1caf30u: goto label_1caf30;
        case 0x1caf68u: goto label_1caf68;
        case 0x1cafbcu: goto label_1cafbc;
        case 0x1cafe4u: goto label_1cafe4;
        case 0x1caff8u: goto label_1caff8;
        case 0x1cb014u: goto label_1cb014;
        case 0x1cb1e4u: goto label_1cb1e4;
        case 0x1cb210u: goto label_1cb210;
        case 0x1cb228u: goto label_1cb228;
        case 0x1cb234u: goto label_1cb234;
        case 0x1cb248u: goto label_1cb248;
        case 0x1cb260u: goto label_1cb260;
        case 0x1cb2b4u: goto label_1cb2b4;
        case 0x1cb2c0u: goto label_1cb2c0;
        case 0x1cb308u: goto label_1cb308;
        case 0x1cb338u: goto label_1cb338;
        case 0x1cb360u: goto label_1cb360;
        case 0x1cb3b4u: goto label_1cb3b4;
        case 0x1cb518u: goto label_1cb518;
        case 0x1cb530u: goto label_1cb530;
        case 0x1cb54cu: goto label_1cb54c;
        case 0x1cb56cu: goto label_1cb56c;
        case 0x1cb584u: goto label_1cb584;
        case 0x1cb5d8u: goto label_1cb5d8;
        case 0x1cb5e4u: goto label_1cb5e4;
        case 0x1cb5f0u: goto label_1cb5f0;
        case 0x1cb610u: goto label_1cb610;
        case 0x1cb628u: goto label_1cb628;
        case 0x1cb63cu: goto label_1cb63c;
        case 0x1cb674u: goto label_1cb674;
        case 0x1cb68cu: goto label_1cb68c;
        case 0x1cb6a0u: goto label_1cb6a0;
        case 0x1cb84cu: goto label_1cb84c;
        default: break;
    }

    ctx->pc = 0x1cae10u;

    // 0x1cae10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cae14: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1cae14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1cae18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cae1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cae20: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1cae20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1cae24: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cae24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cae28: 0x2490c960  addiu       $s0, $a0, -0x36A0
    ctx->pc = 0x1cae28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953312));
    // 0x1cae2c: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1cae2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x1cae30: 0x24b10080  addiu       $s1, $a1, 0x80
    ctx->pc = 0x1cae30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1cae34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cae34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cae38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cae3c: 0xa06413a7  sb          $a0, 0x13A7($v1)
    ctx->pc = 0x1cae3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5031), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cae40: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1cae40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cae44: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1cae44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1cae48: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1cae48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1cae4c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1cae4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1cae50: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1cae50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1cae54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cae54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cae58: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1cae58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1cae5c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1cae5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cae60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cae60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cae64: 0x10830138  beq         $a0, $v1, . + 4 + (0x138 << 2)
    ctx->pc = 0x1CAE64u;
    {
        const bool branch_taken_0x1cae64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cae64) {
            ctx->pc = 0x1CB348u;
            goto label_1cb348;
        }
    }
    ctx->pc = 0x1CAE6Cu;
    // 0x1cae6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cae70: 0x1083011d  beq         $a0, $v1, . + 4 + (0x11D << 2)
    ctx->pc = 0x1CAE70u;
    {
        const bool branch_taken_0x1cae70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cae70) {
            ctx->pc = 0x1CB2E8u;
            goto label_1cb2e8;
        }
    }
    ctx->pc = 0x1CAE78u;
    // 0x1cae78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cae78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae7c: 0x108300bc  beq         $a0, $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x1CAE7Cu;
    {
        const bool branch_taken_0x1cae7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cae7c) {
            ctx->pc = 0x1CB170u;
            goto label_1cb170;
        }
    }
    ctx->pc = 0x1CAE84u;
    // 0x1cae84: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAE84u;
    {
        const bool branch_taken_0x1cae84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cae84) {
            ctx->pc = 0x1CAE94u;
            goto label_1cae94;
        }
    }
    ctx->pc = 0x1CAE8Cu;
    // 0x1cae8c: 0x10000270  b           . + 4 + (0x270 << 2)
    ctx->pc = 0x1CAE8Cu;
    {
        const bool branch_taken_0x1cae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cae8c) {
            ctx->pc = 0x1CB850u;
            goto label_1cb850;
        }
    }
    ctx->pc = 0x1CAE94u;
label_1cae94:
    // 0x1cae94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cae94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cae98: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1cae98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cae9c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1cae9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1caea0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1caea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1caea4: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1caea4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1caea8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1caea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1caeac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caeb0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1caeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1caeb4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1caeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caeb8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caebc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1caebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1caec0: 0x24060066  addiu       $a2, $zero, 0x66
    ctx->pc = 0x1caec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1caec4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1caec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caec8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1caec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1caecc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CAECCu;
    SET_GPR_U32(ctx, 31, 0x1CAED4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CAECCu, 0x1CAED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAED4u;
label_1caed4:
    // 0x1caed4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1caed4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1caed8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1caed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caedc: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x1caedcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1caee0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1caee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1caee4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1caee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1caee8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1caee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1caeec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1caeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1caef0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caef4: 0xac6013e8  sw          $zero, 0x13E8($v1)
    ctx->pc = 0x1caef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 0));
    // 0x1caef8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caefc: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x1caefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1caf00: 0x3c044240  lui         $a0, 0x4240
    ctx->pc = 0x1caf00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16960 << 16));
    // 0x1caf04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1caf04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1caf08: 0x0  nop
    ctx->pc = 0x1caf08u;
    // NOP
    // 0x1caf0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1caf0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1caf10: 0x0  nop
    ctx->pc = 0x1caf10u;
    // NOP
    // 0x1caf14: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1CAF14u;
    {
        const bool branch_taken_0x1caf14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1caf14) {
            ctx->pc = 0x1CAF54u;
            goto label_1caf54;
        }
    }
    ctx->pc = 0x1CAF1Cu;
    // 0x1caf1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf20: 0xc46c1380  lwc1        $f12, 0x1380($v1)
    ctx->pc = 0x1caf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1caf24: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1caf24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1caf28: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x1CAF28u;
    SET_GPR_U32(ctx, 31, 0x1CAF30u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x1CAF28u, 0x1CAF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF30u;
label_1caf30:
    // 0x1caf30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1caf30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1caf34: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CAF34u;
    {
        const bool branch_taken_0x1caf34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf34) {
            ctx->pc = 0x1CAF84u;
            goto label_1caf84;
        }
    }
    ctx->pc = 0x1CAF3Cu;
    // 0x1caf3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf40: 0x8c6413ec  lw          $a0, 0x13EC($v1)
    ctx->pc = 0x1caf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5100)));
    // 0x1caf44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf48: 0xac6413e8  sw          $a0, 0x13E8($v1)
    ctx->pc = 0x1caf48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 4));
    // 0x1caf4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CAF4Cu;
    {
        const bool branch_taken_0x1caf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf4c) {
            ctx->pc = 0x1CAF84u;
            goto label_1caf84;
        }
    }
    ctx->pc = 0x1CAF54u;
label_1caf54:
    // 0x1caf54: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1caf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf58: 0xc48c00d4  lwc1        $f12, 0xD4($a0)
    ctx->pc = 0x1caf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1caf5c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1caf5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1caf60: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x1CAF60u;
    SET_GPR_U32(ctx, 31, 0x1CAF68u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x1CAF60u, 0x1CAF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF68u;
label_1caf68:
    // 0x1caf68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1caf68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1caf6c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAF6Cu;
    {
        const bool branch_taken_0x1caf6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf6c) {
            ctx->pc = 0x1CAF84u;
            goto label_1caf84;
        }
    }
    ctx->pc = 0x1CAF74u;
    // 0x1caf74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf78: 0x8c6413ec  lw          $a0, 0x13EC($v1)
    ctx->pc = 0x1caf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5100)));
    // 0x1caf7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf80: 0xac6413e8  sw          $a0, 0x13E8($v1)
    ctx->pc = 0x1caf80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 4));
label_1caf84:
    // 0x1caf84: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1caf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf88: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1caf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1caf8c: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1CAF8Cu;
    {
        const bool branch_taken_0x1caf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf8c) {
            ctx->pc = 0x1CB0C4u;
            goto label_1cb0c4;
        }
    }
    ctx->pc = 0x1CAF94u;
    // 0x1caf94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf98: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1caf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1caf9c: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1caf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1cafa0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cafa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cafa4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1cafa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1cafa8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1cafa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cafac: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1cafacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1cafb0: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x1cafb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1cafb4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1CAFB4u;
    SET_GPR_U32(ctx, 31, 0x1CAFBCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1CAFB4u, 0x1CAFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFBCu;
label_1cafbc:
    // 0x1cafbc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cafbcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cafc0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1cafc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cafc4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1cafc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cafc8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1cafc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cafcc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1cafccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cafd0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1cafd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cafd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cafd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cafd8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1cafd8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1cafdc: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1CAFDCu;
    SET_GPR_U32(ctx, 31, 0x1CAFE4u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1CAFDCu, 0x1CAFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFE4u;
label_1cafe4:
    // 0x1cafe4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1cafe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1cafe8: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x1cafe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cafec: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x1cafecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1caff0: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1CAFF0u;
    SET_GPR_U32(ctx, 31, 0x1CAFF8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1CAFF0u, 0x1CAFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFF8u;
label_1caff8:
    // 0x1caff8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1caff8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1caffc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb000: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1cb000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1cb004: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1cb004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb008: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x1cb008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb00c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1CB00Cu;
    SET_GPR_U32(ctx, 31, 0x1CB014u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1CB00Cu, 0x1CB014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB014u;
label_1cb014:
    // 0x1cb014: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb018: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1cb018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1cb01c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb020: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1cb020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb028: 0x0  nop
    ctx->pc = 0x1cb028u;
    // NOP
    // 0x1cb02c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb030: 0x0  nop
    ctx->pc = 0x1cb030u;
    // NOP
    // 0x1cb034: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB034u;
    {
        const bool branch_taken_0x1cb034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb034) {
            ctx->pc = 0x1CB080u;
            goto label_1cb080;
        }
    }
    ctx->pc = 0x1CB03Cu;
    // 0x1cb03c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb040: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1cb040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb044: 0x3c02bf86  lui         $v0, 0xBF86
    ctx->pc = 0x1cb044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49030 << 16));
    // 0x1cb048: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1cb048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1cb04c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb050: 0x0  nop
    ctx->pc = 0x1cb050u;
    // NOP
    // 0x1cb054: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb058: 0x0  nop
    ctx->pc = 0x1cb058u;
    // NOP
    // 0x1cb05c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x1CB05Cu;
    {
        const bool branch_taken_0x1cb05c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb05c) {
            ctx->pc = 0x1CB11Cu;
            goto label_1cb11c;
        }
    }
    ctx->pc = 0x1CB064u;
    // 0x1cb064: 0x3c02bf86  lui         $v0, 0xBF86
    ctx->pc = 0x1cb064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49030 << 16));
    // 0x1cb068: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1cb068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1cb06c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb070: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb074: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1cb074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1cb078: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1CB078u;
    {
        const bool branch_taken_0x1cb078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb078) {
            ctx->pc = 0x1CB11Cu;
            goto label_1cb11c;
        }
    }
    ctx->pc = 0x1CB080u;
label_1cb080:
    // 0x1cb080: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb084: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1cb084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb088: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x1cb088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x1cb08c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1cb08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1cb090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb094: 0x0  nop
    ctx->pc = 0x1cb094u;
    // NOP
    // 0x1cb098: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb09c: 0x0  nop
    ctx->pc = 0x1cb09cu;
    // NOP
    // 0x1cb0a0: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x1CB0A0u;
    {
        const bool branch_taken_0x1cb0a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb0a0) {
            ctx->pc = 0x1CB11Cu;
            goto label_1cb11c;
        }
    }
    ctx->pc = 0x1CB0A8u;
    // 0x1cb0a8: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x1cb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x1cb0ac: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1cb0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1cb0b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb0b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb0b8: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1cb0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1cb0bc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1CB0BCu;
    {
        const bool branch_taken_0x1cb0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb0bc) {
            ctx->pc = 0x1CB11Cu;
            goto label_1cb11c;
        }
    }
    ctx->pc = 0x1CB0C4u;
label_1cb0c4:
    // 0x1cb0c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb0c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb0c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb0cc: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1cb0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1cb0d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb0d4: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1cb0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb0d8: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1cb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1cb0dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb0e0: 0x0  nop
    ctx->pc = 0x1cb0e0u;
    // NOP
    // 0x1cb0e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb0e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb0e8: 0x0  nop
    ctx->pc = 0x1cb0e8u;
    // NOP
    // 0x1cb0ec: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB0ECu;
    {
        const bool branch_taken_0x1cb0ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb0ec) {
            ctx->pc = 0x1CB10Cu;
            goto label_1cb10c;
        }
    }
    ctx->pc = 0x1CB0F4u;
    // 0x1cb0f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb0f8: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x1cb0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb0fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb100: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1cb100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1cb104: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB104u;
    {
        const bool branch_taken_0x1cb104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb104) {
            ctx->pc = 0x1CB11Cu;
            goto label_1cb11c;
        }
    }
    ctx->pc = 0x1CB10Cu;
label_1cb10c:
    // 0x1cb10c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb110: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cb110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb114: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb118: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1cb118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_1cb11c:
    // 0x1cb11c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb11cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb120: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb124: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x1cb124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x1cb128: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb12c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb130: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x1cb130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x1cb134: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb138: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x1cb138u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cb13c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb140: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb144: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1cb144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1cb148: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb14c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb150: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1cb150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1cb154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb158: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb15c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1cb15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1cb160: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb164: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1cb164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1cb168: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb16c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cb16cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1cb170:
    // 0x1cb170: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb174: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1cb174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb178: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1cb178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1cb17c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb180: 0x0  nop
    ctx->pc = 0x1cb180u;
    // NOP
    // 0x1cb184: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cb184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cb188: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1cb188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1cb18c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb190: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1cb190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb194: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1cb194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1cb198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb19c: 0x0  nop
    ctx->pc = 0x1cb19cu;
    // NOP
    // 0x1cb1a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb1a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb1a4: 0x0  nop
    ctx->pc = 0x1cb1a4u;
    // NOP
    // 0x1cb1a8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB1A8u;
    {
        const bool branch_taken_0x1cb1a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb1a8) {
            ctx->pc = 0x1CB1C0u;
            goto label_1cb1c0;
        }
    }
    ctx->pc = 0x1CB1B0u;
    // 0x1cb1b0: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1cb1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1cb1b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb1b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb1bc: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1cb1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_1cb1c0:
    // 0x1cb1c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb1c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb1c8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1cb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1cb1cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cb1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cb1d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1cb1d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cb1d4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1cb1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb1d8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1cb1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb1dc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CB1DCu;
    SET_GPR_U32(ctx, 31, 0x1CB1E4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CB1DCu, 0x1CB1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1E4u;
label_1cb1e4:
    // 0x1cb1e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb1e8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cb1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1cb1ec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb1f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb1f4: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1cb1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1cb1f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cb1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cb1fc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1cb1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cb200: 0xc48c1b50  lwc1        $f12, 0x1B50($a0)
    ctx->pc = 0x1cb200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb204: 0xc46d1b58  lwc1        $f13, 0x1B58($v1)
    ctx->pc = 0x1cb204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb208: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CB208u;
    SET_GPR_U32(ctx, 31, 0x1CB210u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CB208u, 0x1CB210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB210u;
label_1cb210:
    // 0x1cb210: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb214: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x1cb214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x1cb218: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb21c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cb21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cb220: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CB220u;
    SET_GPR_U32(ctx, 31, 0x1CB228u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CB220u, 0x1CB228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB228u;
label_1cb228:
    // 0x1cb228: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb22c: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x1CB22Cu;
    SET_GPR_U32(ctx, 31, 0x1CB234u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x1CB22Cu, 0x1CB234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB234u;
label_1cb234:
    // 0x1cb234: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb238: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb23c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cb23cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cb240: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x1CB240u;
    SET_GPR_U32(ctx, 31, 0x1CB248u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x1CB240u, 0x1CB248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB248u;
label_1cb248:
    // 0x1cb248: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb24c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb250: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1cb250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1cb254: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1cb254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1cb258: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1CB258u;
    SET_GPR_U32(ctx, 31, 0x1CB260u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1CB258u, 0x1CB260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB260u;
label_1cb260:
    // 0x1cb260: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1cb264: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1cb264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1cb268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb26c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb270: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cb270u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cb274: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb278: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1cb278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb27c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb280: 0x0  nop
    ctx->pc = 0x1cb280u;
    // NOP
    // 0x1cb284: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB284u;
    {
        const bool branch_taken_0x1cb284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb284) {
            ctx->pc = 0x1CB2A4u;
            goto label_1cb2a4;
        }
    }
    ctx->pc = 0x1CB28Cu;
    // 0x1cb28c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1cb28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1cb290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb294: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb298: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cb298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cb29c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb2a0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1cb2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1cb2a4:
    // 0x1cb2a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb2a8: 0xc44c1b58  lwc1        $f12, 0x1B58($v0)
    ctx->pc = 0x1cb2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb2ac: 0xc057324  jal         func_15CC90
    ctx->pc = 0x1CB2ACu;
    SET_GPR_U32(ctx, 31, 0x1CB2B4u);
    ctx->pc = 0x15CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CC90u, 0x1CB2ACu, 0x1CB2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2B4u;
label_1cb2b4:
    // 0x1cb2b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cb2b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cb2b8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CB2B8u;
    SET_GPR_U32(ctx, 31, 0x1CB2C0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CB2B8u, 0x1CB2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2C0u;
label_1cb2c0:
    // 0x1cb2c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb2c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1cb2c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1cb2c8: 0x10600161  beqz        $v1, . + 4 + (0x161 << 2)
    ctx->pc = 0x1CB2C8u;
    {
        const bool branch_taken_0x1cb2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb2c8) {
            ctx->pc = 0x1CB850u;
            goto label_1cb850;
        }
    }
    ctx->pc = 0x1CB2D0u;
    // 0x1cb2d0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb2d4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1cb2d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1cb2d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cb2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb2dc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1cb2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cb2e0: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x1CB2E0u;
    {
        const bool branch_taken_0x1cb2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb2e0) {
            ctx->pc = 0x1CB850u;
            goto label_1cb850;
        }
    }
    ctx->pc = 0x1CB2E8u;
label_1cb2e8:
    // 0x1cb2e8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb2ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb2f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cb2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1cb2f4: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x1cb2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x1cb2f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb2fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cb2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cb300: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CB300u;
    SET_GPR_U32(ctx, 31, 0x1CB308u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CB300u, 0x1CB308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB308u;
label_1cb308:
    // 0x1cb308: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cb308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1cb30c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb310: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb314: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1cb314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1cb318: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1cb318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1cb31c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb320: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1cb320u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cb324: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x1cb324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x1cb328: 0x34448000  ori         $a0, $v0, 0x8000
    ctx->pc = 0x1cb328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1cb32c: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x1cb32cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x1cb330: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1CB330u;
    SET_GPR_U32(ctx, 31, 0x1CB338u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1CB330u, 0x1CB338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB338u;
label_1cb338:
    // 0x1cb338: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb33c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1cb33cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1cb340: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb344: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cb344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1cb348:
    // 0x1cb348: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb34c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb350: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1cb350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1cb354: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1cb354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1cb358: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1CB358u;
    SET_GPR_U32(ctx, 31, 0x1CB360u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1CB358u, 0x1CB360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB360u;
label_1cb360:
    // 0x1cb360: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1cb364: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb368: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1cb368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x1cb36c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb370: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1cb370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb374: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1cb374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1cb378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb37c: 0x0  nop
    ctx->pc = 0x1cb37cu;
    // NOP
    // 0x1cb380: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cb380u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cb384: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb388: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cb388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb38c: 0x0  nop
    ctx->pc = 0x1cb38cu;
    // NOP
    // 0x1cb390: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB390u;
    {
        const bool branch_taken_0x1cb390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb390) {
            ctx->pc = 0x1CB3A4u;
            goto label_1cb3a4;
        }
    }
    ctx->pc = 0x1CB398u;
    // 0x1cb398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb39c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb3a0: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1cb3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_1cb3a4:
    // 0x1cb3a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb3a8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1cb3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1cb3ac: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1CB3ACu;
    SET_GPR_U32(ctx, 31, 0x1CB3B4u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1CB3ACu, 0x1CB3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3B4u;
label_1cb3b4:
    // 0x1cb3b4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1cb3b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb3bc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1cb3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb3c0: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1cb3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x1cb3c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1cb3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1cb3c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb3cc: 0x0  nop
    ctx->pc = 0x1cb3ccu;
    // NOP
    // 0x1cb3d0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1cb3d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb3d4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1cb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1cb3d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb3dc: 0x0  nop
    ctx->pc = 0x1cb3dcu;
    // NOP
    // 0x1cb3e0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1cb3e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb3e4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb3e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cb3e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb3ec: 0x0  nop
    ctx->pc = 0x1cb3ecu;
    // NOP
    // 0x1cb3f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB3F0u;
    {
        const bool branch_taken_0x1cb3f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb3f0) {
            ctx->pc = 0x1CB404u;
            goto label_1cb404;
        }
    }
    ctx->pc = 0x1CB3F8u;
    // 0x1cb3f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb3fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb400: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1cb400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
label_1cb404:
    // 0x1cb404: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb408: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x1cb408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x1cb40c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1CB40Cu;
    {
        const bool branch_taken_0x1cb40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb40c) {
            ctx->pc = 0x1CB4F4u;
            goto label_1cb4f4;
        }
    }
    ctx->pc = 0x1CB414u;
    // 0x1cb414: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb418: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1cb418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb41c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb41cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb420: 0x0  nop
    ctx->pc = 0x1cb420u;
    // NOP
    // 0x1cb424: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb424u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb428: 0x0  nop
    ctx->pc = 0x1cb428u;
    // NOP
    // 0x1cb42c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1CB42Cu;
    {
        const bool branch_taken_0x1cb42c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb42c) {
            ctx->pc = 0x1CB498u;
            goto label_1cb498;
        }
    }
    ctx->pc = 0x1CB434u;
    // 0x1cb434: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb438: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1cb438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb43c: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1cb43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x1cb440: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cb440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1cb444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb448: 0x0  nop
    ctx->pc = 0x1cb448u;
    // NOP
    // 0x1cb44c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb44cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb450: 0x0  nop
    ctx->pc = 0x1cb450u;
    // NOP
    // 0x1cb454: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1CB454u;
    {
        const bool branch_taken_0x1cb454 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb454) {
            ctx->pc = 0x1CB484u;
            goto label_1cb484;
        }
    }
    ctx->pc = 0x1CB45Cu;
    // 0x1cb45c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb460: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1cb460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb464: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1cb464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x1cb468: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cb468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1cb46c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb470: 0x0  nop
    ctx->pc = 0x1cb470u;
    // NOP
    // 0x1cb474: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cb474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cb478: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1cb478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1cb47c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1CB47Cu;
    {
        const bool branch_taken_0x1cb47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb47c) {
            ctx->pc = 0x1CB4F4u;
            goto label_1cb4f4;
        }
    }
    ctx->pc = 0x1CB484u;
label_1cb484:
    // 0x1cb484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb488: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb48c: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1cb48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1cb490: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1CB490u;
    {
        const bool branch_taken_0x1cb490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb490) {
            ctx->pc = 0x1CB4F4u;
            goto label_1cb4f4;
        }
    }
    ctx->pc = 0x1CB498u;
label_1cb498:
    // 0x1cb498: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb49c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1cb49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb4a0: 0x3c02bd23  lui         $v0, 0xBD23
    ctx->pc = 0x1cb4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48419 << 16));
    // 0x1cb4a4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cb4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1cb4a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb4ac: 0x0  nop
    ctx->pc = 0x1cb4acu;
    // NOP
    // 0x1cb4b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb4b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb4b4: 0x0  nop
    ctx->pc = 0x1cb4b4u;
    // NOP
    // 0x1cb4b8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1CB4B8u;
    {
        const bool branch_taken_0x1cb4b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb4b8) {
            ctx->pc = 0x1CB4E8u;
            goto label_1cb4e8;
        }
    }
    ctx->pc = 0x1CB4C0u;
    // 0x1cb4c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb4c4: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1cb4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb4c8: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1cb4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x1cb4cc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cb4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1cb4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb4d4: 0x0  nop
    ctx->pc = 0x1cb4d4u;
    // NOP
    // 0x1cb4d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cb4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cb4dc: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1cb4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1cb4e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB4E0u;
    {
        const bool branch_taken_0x1cb4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb4e0) {
            ctx->pc = 0x1CB4F4u;
            goto label_1cb4f4;
        }
    }
    ctx->pc = 0x1CB4E8u;
label_1cb4e8:
    // 0x1cb4e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb4e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb4ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb4f0: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1cb4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
label_1cb4f4:
    // 0x1cb4f4: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1cb4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1cb4f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cb4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cb4fc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1cb4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cb500: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb504: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb508: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1cb508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb50c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1cb50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb510: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CB510u;
    SET_GPR_U32(ctx, 31, 0x1CB518u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CB510u, 0x1CB518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB518u;
label_1cb518:
    // 0x1cb518: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb51c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cb51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1cb520: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb524: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cb524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cb528: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CB528u;
    SET_GPR_U32(ctx, 31, 0x1CB530u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CB528u, 0x1CB530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB530u;
label_1cb530:
    // 0x1cb530: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb534: 0xc4401b50  lwc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1cb534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb538: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb53c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1cb53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1cb540: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb544: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x1CB544u;
    SET_GPR_U32(ctx, 31, 0x1CB54Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x1CB544u, 0x1CB54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB54Cu;
label_1cb54c:
    // 0x1cb54c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb54cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb550: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb554: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1cb554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1cb558: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb55c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb560: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cb560u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cb564: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x1CB564u;
    SET_GPR_U32(ctx, 31, 0x1CB56Cu);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x1CB564u, 0x1CB56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB56Cu;
label_1cb56c:
    // 0x1cb56c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb570: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb574: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1cb574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1cb578: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1cb578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1cb57c: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1CB57Cu;
    SET_GPR_U32(ctx, 31, 0x1CB584u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1CB57Cu, 0x1CB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB584u;
label_1cb584:
    // 0x1cb584: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1cb588: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1cb588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1cb58c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb590: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb594: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cb594u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cb598: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb59c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1cb59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb5a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb5a4: 0x0  nop
    ctx->pc = 0x1cb5a4u;
    // NOP
    // 0x1cb5a8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB5A8u;
    {
        const bool branch_taken_0x1cb5a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb5a8) {
            ctx->pc = 0x1CB5C8u;
            goto label_1cb5c8;
        }
    }
    ctx->pc = 0x1CB5B0u;
    // 0x1cb5b0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1cb5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1cb5b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb5b8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb5bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cb5bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cb5c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb5c4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1cb5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1cb5c8:
    // 0x1cb5c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb5cc: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1cb5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb5d0: 0xc057324  jal         func_15CC90
    ctx->pc = 0x1CB5D0u;
    SET_GPR_U32(ctx, 31, 0x1CB5D8u);
    ctx->pc = 0x15CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CC90u, 0x1CB5D0u, 0x1CB5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5D8u;
label_1cb5d8:
    // 0x1cb5d8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cb5d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cb5dc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CB5DCu;
    SET_GPR_U32(ctx, 31, 0x1CB5E4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CB5DCu, 0x1CB5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5E4u;
label_1cb5e4:
    // 0x1cb5e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1cb5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cb5e8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CB5E8u;
    SET_GPR_U32(ctx, 31, 0x1CB5F0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CB5E8u, 0x1CB5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5F0u;
label_1cb5f0:
    // 0x1cb5f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb5f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb5f8: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1cb5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1cb5fc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1cb5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cb600: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cb600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cb604: 0x24478b60  addiu       $a3, $v0, -0x74A0
    ctx->pc = 0x1cb604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937440));
    // 0x1cb608: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CB608u;
    SET_GPR_U32(ctx, 31, 0x1CB610u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CB608u, 0x1CB610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB610u;
label_1cb610:
    // 0x1cb610: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CB610u;
    {
        const bool branch_taken_0x1cb610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb610) {
            ctx->pc = 0x1CB63Cu;
            goto label_1cb63c;
        }
    }
    ctx->pc = 0x1CB618u;
    // 0x1cb618: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1cb618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1cb61c: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1cb61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1cb620: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1CB620u;
    SET_GPR_U32(ctx, 31, 0x1CB628u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1CB620u, 0x1CB628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB628u;
label_1cb628:
    // 0x1cb628: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x1cb628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x1cb62c: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x1cb62cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x1cb630: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x1cb630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x1cb634: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1CB634u;
    SET_GPR_U32(ctx, 31, 0x1CB63Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1CB634u, 0x1CB63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB63Cu;
label_1cb63c:
    // 0x1cb63c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1cb63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb640: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1cb640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1cb644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb648: 0x0  nop
    ctx->pc = 0x1cb648u;
    // NOP
    // 0x1cb64c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cb64cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cb650: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1cb650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1cb654: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb658: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb65c: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1cb65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1cb660: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1cb660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cb664: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cb664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cb668: 0x24478b60  addiu       $a3, $v0, -0x74A0
    ctx->pc = 0x1cb668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937440));
    // 0x1cb66c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CB66Cu;
    SET_GPR_U32(ctx, 31, 0x1CB674u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CB66Cu, 0x1CB674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB674u;
label_1cb674:
    // 0x1cb674: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CB674u;
    {
        const bool branch_taken_0x1cb674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb674) {
            ctx->pc = 0x1CB6A4u;
            goto label_1cb6a4;
        }
    }
    ctx->pc = 0x1CB67Cu;
    // 0x1cb67c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1cb67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1cb680: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1cb680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1cb684: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1CB684u;
    SET_GPR_U32(ctx, 31, 0x1CB68Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1CB684u, 0x1CB68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB68Cu;
label_1cb68c:
    // 0x1cb68c: 0x3c100600  lui         $s0, 0x600
    ctx->pc = 0x1cb68cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1536 << 16));
    // 0x1cb690: 0x3604ff80  ori         $a0, $s0, 0xFF80
    ctx->pc = 0x1cb690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65408);
    // 0x1cb694: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1cb694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1cb698: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1CB698u;
    SET_GPR_U32(ctx, 31, 0x1CB6A0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1CB698u, 0x1CB6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB6A0u;
label_1cb6a0:
    // 0x1cb6a0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1cb6a0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cb6a4:
    // 0x1cb6a4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb6a8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1cb6a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1cb6ac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB6ACu;
    {
        const bool branch_taken_0x1cb6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb6ac) {
            ctx->pc = 0x1CB6CCu;
            goto label_1cb6cc;
        }
    }
    ctx->pc = 0x1CB6B4u;
    // 0x1cb6b4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1cb6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb6b8: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x1cb6b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1cb6bc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1cb6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1cb6c0: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x1cb6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cb6c4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1CB6C4u;
    {
        const bool branch_taken_0x1cb6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb6c4) {
            ctx->pc = 0x1CB824u;
            goto label_1cb824;
        }
    }
    ctx->pc = 0x1CB6CCu;
label_1cb6cc:
    // 0x1cb6cc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb6d0: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x1cb6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb6d4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1cb6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1cb6d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb6d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb6dc: 0x0  nop
    ctx->pc = 0x1cb6dcu;
    // NOP
    // 0x1cb6e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cb6e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cb6e4: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1cb6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x1cb6e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb6ec: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1cb6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb6f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb6f4: 0x0  nop
    ctx->pc = 0x1cb6f4u;
    // NOP
    // 0x1cb6f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb6f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb6fc: 0x0  nop
    ctx->pc = 0x1cb6fcu;
    // NOP
    // 0x1cb700: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB700u;
    {
        const bool branch_taken_0x1cb700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb700) {
            ctx->pc = 0x1CB714u;
            goto label_1cb714;
        }
    }
    ctx->pc = 0x1CB708u;
    // 0x1cb708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb70c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb710: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x1cb710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
label_1cb714:
    // 0x1cb714: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb718: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1cb718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb71c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1cb71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1cb720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb724: 0x0  nop
    ctx->pc = 0x1cb724u;
    // NOP
    // 0x1cb728: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb72c: 0x0  nop
    ctx->pc = 0x1cb72cu;
    // NOP
    // 0x1cb730: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x1CB730u;
    {
        const bool branch_taken_0x1cb730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb730) {
            ctx->pc = 0x1CB824u;
            goto label_1cb824;
        }
    }
    ctx->pc = 0x1CB738u;
    // 0x1cb738: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb73c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1cb73cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1cb740: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1CB740u;
    {
        const bool branch_taken_0x1cb740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb740) {
            ctx->pc = 0x1CB824u;
            goto label_1cb824;
        }
    }
    ctx->pc = 0x1CB748u;
    // 0x1cb748: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb74c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1cb74cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb750: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cb750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cb754: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1cb754u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cb758: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x1cb758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x1cb75c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB75Cu;
    {
        const bool branch_taken_0x1cb75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb75c) {
            ctx->pc = 0x1CB7A8u;
            goto label_1cb7a8;
        }
    }
    ctx->pc = 0x1CB764u;
    // 0x1cb764: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cb764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb768: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb76c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cb76cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cb770: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1cb770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1cb774: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1cb774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb778: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x1cb778u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cb77c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1cb77cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb780: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1cb780u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb784: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x1cb784u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb788: 0xa1000003  sb          $zero, 0x3($t0)
    ctx->pc = 0x1cb788u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb78c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb790: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cb790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cb794: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cb794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb798: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb79c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cb79cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cb7a0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1CB7A0u;
    {
        const bool branch_taken_0x1cb7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb7a0) {
            ctx->pc = 0x1CB860u;
            goto label_1cb860;
        }
    }
    ctx->pc = 0x1CB7A8u;
label_1cb7a8:
    // 0x1cb7a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb7a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb7ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb7b0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1cb7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1cb7b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cb7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb7b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb7bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cb7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cb7c0: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1cb7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1cb7c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb7c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cb7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cb7cc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb7d0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1cb7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb7d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb7d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cb7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb7dc: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x1cb7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x1cb7e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb7e4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1cb7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1cb7e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb7e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb7ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb7f0: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1cb7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1cb7f4: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1cb7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x1cb7f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cb7f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb7fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb800: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1cb800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1cb804: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cb804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cb808: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1cb808u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cb80c: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x1cb80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x1cb810: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1cb810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cb814: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cb814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cb818: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1cb818u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1cb81c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CB81Cu;
    {
        const bool branch_taken_0x1cb81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb81c) {
            ctx->pc = 0x1CB860u;
            goto label_1cb860;
        }
    }
    ctx->pc = 0x1CB824u;
label_1cb824:
    // 0x1cb824: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb828: 0x8465127c  lh          $a1, 0x127C($v1)
    ctx->pc = 0x1cb828u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1cb82c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x1cb82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1cb830: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1cb830u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1cb834: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1cb834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1cb838: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB838u;
    {
        const bool branch_taken_0x1cb838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb838) {
            ctx->pc = 0x1CB850u;
            goto label_1cb850;
        }
    }
    ctx->pc = 0x1CB840u;
    // 0x1cb840: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb844: 0xc072b30  jal         func_1CACC0
    ctx->pc = 0x1CB844u;
    SET_GPR_U32(ctx, 31, 0x1CB84Cu);
    ctx->pc = 0x1CACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CACC0u, 0x1CB844u, 0x1CB84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB84Cu;
label_1cb84c:
    // 0x1cb84c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cb84cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1cb850:
    // 0x1cb850: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1cb850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb854: 0x84c3127c  lh          $v1, 0x127C($a2)
    ctx->pc = 0x1cb854u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4732)));
    // 0x1cb858: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cb858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb85c: 0xa4c3127c  sh          $v1, 0x127C($a2)
    ctx->pc = 0x1cb85cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4732), (uint16_t)GPR_U32(ctx, 3));
label_1cb860:
    // 0x1cb860: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1cb860u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb864: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb86c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1cb86cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cb870: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB878u;
}
