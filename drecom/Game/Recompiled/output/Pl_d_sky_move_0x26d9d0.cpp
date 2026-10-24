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

// Function: Pl_d_sky_move
// Address: 0x26d9d0 - 0x26de28
void Pl_d_sky_move_0x26d9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_d_sky_move_0x26d9d0");
#endif

    switch (ctx->pc) {
        case 0x26d9fcu: goto label_26d9fc;
        case 0x26da10u: goto label_26da10;
        case 0x26da20u: goto label_26da20;
        case 0x26db30u: goto label_26db30;
        case 0x26db50u: goto label_26db50;
        case 0x26db78u: goto label_26db78;
        case 0x26dba0u: goto label_26dba0;
        case 0x26dbb0u: goto label_26dbb0;
        default: break;
    }

    ctx->pc = 0x26d9d0u;

    // 0x26d9d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26d9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26d9d4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x26d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x26d9d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26d9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26d9dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d9e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26d9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26d9e4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x26d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x26d9e8: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x26d9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x26d9ec: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x26d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x26d9f0: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x26d9f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x26d9f4: 0xc057a4c  jal         func_15E930
    ctx->pc = 0x26D9F4u;
    SET_GPR_U32(ctx, 31, 0x26D9FCu);
    ctx->pc = 0x15E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E930u, 0x26D9F4u, 0x26D9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9FCu;
label_26d9fc:
    // 0x26d9fc: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x26d9fcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26da00: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x26da00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x26da04: 0x260512c0  addiu       $a1, $s0, 0x12C0
    ctx->pc = 0x26da04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4800));
    // 0x26da08: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26DA08u;
    SET_GPR_U32(ctx, 31, 0x26DA10u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26DA08u, 0x26DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA10u;
label_26da10:
    // 0x26da10: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26da10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26da14: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x26da14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x26da18: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x26DA18u;
    SET_GPR_U32(ctx, 31, 0x26DA20u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x26DA18u, 0x26DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA20u;
label_26da20:
    // 0x26da20: 0x3c0244b2  lui         $v0, 0x44B2
    ctx->pc = 0x26da20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17586 << 16));
    // 0x26da24: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x26da24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x26da28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26da28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26da2c: 0x0  nop
    ctx->pc = 0x26da2cu;
    // NOP
    // 0x26da30: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26da30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26da34: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26da34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26da38: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x26da38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26da3c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x26da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x26da40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26da40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26da44: 0x0  nop
    ctx->pc = 0x26da44u;
    // NOP
    // 0x26da48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26da48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26da4c: 0x0  nop
    ctx->pc = 0x26da4cu;
    // NOP
    // 0x26da50: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x26DA50u;
    {
        const bool branch_taken_0x26da50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26da50) {
            ctx->pc = 0x26DAC0u;
            goto label_26dac0;
        }
    }
    ctx->pc = 0x26DA58u;
    // 0x26da58: 0x8e021b60  lw          $v0, 0x1B60($s0)
    ctx->pc = 0x26da58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7008)));
    // 0x26da5c: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x26da5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x26da60: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x26DA60u;
    {
        const bool branch_taken_0x26da60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26da60) {
            ctx->pc = 0x26DAC0u;
            goto label_26dac0;
        }
    }
    ctx->pc = 0x26DA68u;
    // 0x26da68: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x26da68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26da6c: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x26da6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x26da70: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x26da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26da74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26da74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26da78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26da78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26da7c: 0x0  nop
    ctx->pc = 0x26da7cu;
    // NOP
    // 0x26da80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26da80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26da84: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x26da84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x26da88: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x26da88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26da8c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26da90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26da90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26da94: 0x0  nop
    ctx->pc = 0x26da94u;
    // NOP
    // 0x26da98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26da98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26da9c: 0x0  nop
    ctx->pc = 0x26da9cu;
    // NOP
    // 0x26daa0: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x26DAA0u;
    {
        const bool branch_taken_0x26daa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26daa0) {
            ctx->pc = 0x26DB00u;
            goto label_26db00;
        }
    }
    ctx->pc = 0x26DAA8u;
    // 0x26daa8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26daac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26daacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dab0: 0x0  nop
    ctx->pc = 0x26dab0u;
    // NOP
    // 0x26dab4: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x26dab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x26dab8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26DAB8u;
    {
        const bool branch_taken_0x26dab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dab8) {
            ctx->pc = 0x26DB00u;
            goto label_26db00;
        }
    }
    ctx->pc = 0x26DAC0u;
label_26dac0:
    // 0x26dac0: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x26dac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dac4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26dac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26dac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dacc: 0x0  nop
    ctx->pc = 0x26daccu;
    // NOP
    // 0x26dad0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26dad0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26dad4: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x26dad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x26dad8: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x26dad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dadc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26dadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dae0: 0x0  nop
    ctx->pc = 0x26dae0u;
    // NOP
    // 0x26dae4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26dae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dae8: 0x0  nop
    ctx->pc = 0x26dae8u;
    // NOP
    // 0x26daec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26DAECu;
    {
        const bool branch_taken_0x26daec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26daec) {
            ctx->pc = 0x26DB00u;
            goto label_26db00;
        }
    }
    ctx->pc = 0x26DAF4u;
    // 0x26daf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26daf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26daf8: 0x0  nop
    ctx->pc = 0x26daf8u;
    // NOP
    // 0x26dafc: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x26dafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_26db00:
    // 0x26db00: 0x8e021b60  lw          $v0, 0x1B60($s0)
    ctx->pc = 0x26db00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7008)));
    // 0x26db04: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x26db04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x26db08: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26DB08u;
    {
        const bool branch_taken_0x26db08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26db08) {
            ctx->pc = 0x26DB5Cu;
            goto label_26db5c;
        }
    }
    ctx->pc = 0x26DB10u;
    // 0x26db10: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x26db10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x26db14: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26DB14u;
    {
        const bool branch_taken_0x26db14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26db14) {
            ctx->pc = 0x26DB5Cu;
            goto label_26db5c;
        }
    }
    ctx->pc = 0x26DB1Cu;
    // 0x26db1c: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x26db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x26db20: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x26db20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x26db24: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x26db24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x26db28: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x26DB28u;
    SET_GPR_U32(ctx, 31, 0x26DB30u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x26DB28u, 0x26DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB30u;
label_26db30:
    // 0x26db30: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26db30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x26db34: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x26db34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x26db38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26db38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26db3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26db3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26db40: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x26db40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26db44: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x26db44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26db48: 0xc058f50  jal         func_163D40
    ctx->pc = 0x26DB48u;
    SET_GPR_U32(ctx, 31, 0x26DB50u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x26DB48u, 0x26DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB50u;
label_26db50:
    // 0x26db50: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x26db50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x26db54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26DB54u;
    {
        const bool branch_taken_0x26db54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26db54) {
            ctx->pc = 0x26DB7Cu;
            goto label_26db7c;
        }
    }
    ctx->pc = 0x26DB5Cu;
label_26db5c:
    // 0x26db5c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x26db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x26db60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26db60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26db64: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26db64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26db68: 0xc60c1290  lwc1        $f12, 0x1290($s0)
    ctx->pc = 0x26db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26db6c: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x26db6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26db70: 0xc058f50  jal         func_163D40
    ctx->pc = 0x26DB70u;
    SET_GPR_U32(ctx, 31, 0x26DB78u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x26DB70u, 0x26DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB78u;
label_26db78:
    // 0x26db78: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x26db78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_26db7c:
    // 0x26db7c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26db7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26db80: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26db80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26db84: 0x3063000a  andi        $v1, $v1, 0xA
    ctx->pc = 0x26db84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)10);
    // 0x26db88: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x26DB88u;
    {
        const bool branch_taken_0x26db88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26db88) {
            ctx->pc = 0x26DCD8u;
            goto label_26dcd8;
        }
    }
    ctx->pc = 0x26DB90u;
    // 0x26db90: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x26db90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x26db94: 0x260512c0  addiu       $a1, $s0, 0x12C0
    ctx->pc = 0x26db94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4800));
    // 0x26db98: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26DB98u;
    SET_GPR_U32(ctx, 31, 0x26DBA0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26DB98u, 0x26DBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBA0u;
label_26dba0:
    // 0x26dba0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26dba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26dba4: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x26dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x26dba8: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x26DBA8u;
    SET_GPR_U32(ctx, 31, 0x26DBB0u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x26DBA8u, 0x26DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBB0u;
label_26dbb0:
    // 0x26dbb0: 0x3c0344b2  lui         $v1, 0x44B2
    ctx->pc = 0x26dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17586 << 16));
    // 0x26dbb4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x26dbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x26dbb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x26dbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26dbbc: 0x0  nop
    ctx->pc = 0x26dbbcu;
    // NOP
    // 0x26dbc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26dbc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26dbc4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26dbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26dbc8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26dbc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26dbcc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26dbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26dbd0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x26dbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x26dbd4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DBD4u;
    {
        const bool branch_taken_0x26dbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dbd4) {
            ctx->pc = 0x26DBF4u;
            goto label_26dbf4;
        }
    }
    ctx->pc = 0x26DBDCu;
    // 0x26dbdc: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dbe0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x26dbe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dbe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dbe8: 0x0  nop
    ctx->pc = 0x26dbe8u;
    // NOP
    // 0x26dbec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26dbecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26dbf0: 0xe6001b58  swc1        $f0, 0x1B58($s0)
    ctx->pc = 0x26dbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7000), bits); }
label_26dbf4:
    // 0x26dbf4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x26dbf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26dbf8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26dbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26dbfc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x26dbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x26dc00: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DC00u;
    {
        const bool branch_taken_0x26dc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dc00) {
            ctx->pc = 0x26DC20u;
            goto label_26dc20;
        }
    }
    ctx->pc = 0x26DC08u;
    // 0x26dc08: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dc0c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x26dc10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dc10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dc14: 0x0  nop
    ctx->pc = 0x26dc14u;
    // NOP
    // 0x26dc18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26dc18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26dc1c: 0xe6001b58  swc1        $f0, 0x1B58($s0)
    ctx->pc = 0x26dc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7000), bits); }
label_26dc20:
    // 0x26dc20: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dc24: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x26dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x26dc28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dc28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dc2c: 0x0  nop
    ctx->pc = 0x26dc2cu;
    // NOP
    // 0x26dc30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26dc30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dc34: 0x0  nop
    ctx->pc = 0x26dc34u;
    // NOP
    // 0x26dc38: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x26DC38u;
    {
        const bool branch_taken_0x26dc38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dc38) {
            ctx->pc = 0x26DC50u;
            goto label_26dc50;
        }
    }
    ctx->pc = 0x26DC40u;
    // 0x26dc40: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x26dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x26dc44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dc44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dc48: 0x0  nop
    ctx->pc = 0x26dc48u;
    // NOP
    // 0x26dc4c: 0xe6001b58  swc1        $f0, 0x1B58($s0)
    ctx->pc = 0x26dc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7000), bits); }
label_26dc50:
    // 0x26dc50: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dc54: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x26dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x26dc58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dc58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dc5c: 0x0  nop
    ctx->pc = 0x26dc5cu;
    // NOP
    // 0x26dc60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26dc60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dc64: 0x0  nop
    ctx->pc = 0x26dc64u;
    // NOP
    // 0x26dc68: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x26DC68u;
    {
        const bool branch_taken_0x26dc68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dc68) {
            ctx->pc = 0x26DC80u;
            goto label_26dc80;
        }
    }
    ctx->pc = 0x26DC70u;
    // 0x26dc70: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x26dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x26dc74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dc74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dc78: 0x0  nop
    ctx->pc = 0x26dc78u;
    // NOP
    // 0x26dc7c: 0xe6001b58  swc1        $f0, 0x1B58($s0)
    ctx->pc = 0x26dc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7000), bits); }
label_26dc80:
    // 0x26dc80: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dc84: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x26dc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dc88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26dc88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26dc8c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x26dc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x26dc90: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x26dc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dc94: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x26dc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dc98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26dc98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dc9c: 0x0  nop
    ctx->pc = 0x26dc9cu;
    // NOP
    // 0x26dca0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26DCA0u;
    {
        const bool branch_taken_0x26dca0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dca0) {
            ctx->pc = 0x26DCB0u;
            goto label_26dcb0;
        }
    }
    ctx->pc = 0x26DCA8u;
    // 0x26dca8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x26dca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dcac: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x26dcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_26dcb0:
    // 0x26dcb0: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x26dcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dcb4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x26dcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dcb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26dcb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dcbc: 0x0  nop
    ctx->pc = 0x26dcbcu;
    // NOP
    // 0x26dcc0: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
    ctx->pc = 0x26DCC0u;
    {
        const bool branch_taken_0x26dcc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dcc0) {
            ctx->pc = 0x26DDBCu;
            goto label_26ddbc;
        }
    }
    ctx->pc = 0x26DCC8u;
    // 0x26dcc8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x26dcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dccc: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x26dcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x26dcd0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x26DCD0u;
    {
        const bool branch_taken_0x26dcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dcd0) {
            ctx->pc = 0x26DDBCu;
            goto label_26ddbc;
        }
    }
    ctx->pc = 0x26DCD8u;
label_26dcd8:
    // 0x26dcd8: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dcdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26dcdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dce0: 0x0  nop
    ctx->pc = 0x26dce0u;
    // NOP
    // 0x26dce4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26dce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dce8: 0x0  nop
    ctx->pc = 0x26dce8u;
    // NOP
    // 0x26dcec: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x26DCECu;
    {
        const bool branch_taken_0x26dcec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dcec) {
            ctx->pc = 0x26DD48u;
            goto label_26dd48;
        }
    }
    ctx->pc = 0x26DCF4u;
    // 0x26dcf4: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dcf8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26dcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x26dcfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dcfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dd00: 0x0  nop
    ctx->pc = 0x26dd00u;
    // NOP
    // 0x26dd04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26dd04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dd08: 0x0  nop
    ctx->pc = 0x26dd08u;
    // NOP
    // 0x26dd0c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x26DD0Cu;
    {
        const bool branch_taken_0x26dd0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dd0c) {
            ctx->pc = 0x26DD34u;
            goto label_26dd34;
        }
    }
    ctx->pc = 0x26DD14u;
    // 0x26dd14: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dd18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x26dd1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dd1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dd20: 0x0  nop
    ctx->pc = 0x26dd20u;
    // NOP
    // 0x26dd24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26dd24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26dd28: 0xe6001b58  swc1        $f0, 0x1B58($s0)
    ctx->pc = 0x26dd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7000), bits); }
    // 0x26dd2c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26DD2Cu;
    {
        const bool branch_taken_0x26dd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dd2c) {
            ctx->pc = 0x26DD94u;
            goto label_26dd94;
        }
    }
    ctx->pc = 0x26DD34u;
label_26dd34:
    // 0x26dd34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26dd34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dd38: 0x0  nop
    ctx->pc = 0x26dd38u;
    // NOP
    // 0x26dd3c: 0xe6001b58  swc1        $f0, 0x1B58($s0)
    ctx->pc = 0x26dd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7000), bits); }
    // 0x26dd40: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26DD40u;
    {
        const bool branch_taken_0x26dd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dd40) {
            ctx->pc = 0x26DD94u;
            goto label_26dd94;
        }
    }
    ctx->pc = 0x26DD48u;
label_26dd48:
    // 0x26dd48: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dd4c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x26dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x26dd50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dd50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dd54: 0x0  nop
    ctx->pc = 0x26dd54u;
    // NOP
    // 0x26dd58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26dd58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dd5c: 0x0  nop
    ctx->pc = 0x26dd5cu;
    // NOP
    // 0x26dd60: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x26DD60u;
    {
        const bool branch_taken_0x26dd60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dd60) {
            ctx->pc = 0x26DD88u;
            goto label_26dd88;
        }
    }
    ctx->pc = 0x26DD68u;
    // 0x26dd68: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dd6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x26dd70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dd70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dd74: 0x0  nop
    ctx->pc = 0x26dd74u;
    // NOP
    // 0x26dd78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26dd78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26dd7c: 0xe6001b58  swc1        $f0, 0x1B58($s0)
    ctx->pc = 0x26dd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7000), bits); }
    // 0x26dd80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26DD80u;
    {
        const bool branch_taken_0x26dd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dd80) {
            ctx->pc = 0x26DD94u;
            goto label_26dd94;
        }
    }
    ctx->pc = 0x26DD88u;
label_26dd88:
    // 0x26dd88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26dd88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dd8c: 0x0  nop
    ctx->pc = 0x26dd8cu;
    // NOP
    // 0x26dd90: 0xe6001b58  swc1        $f0, 0x1B58($s0)
    ctx->pc = 0x26dd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7000), bits); }
label_26dd94:
    // 0x26dd94: 0x8e031b60  lw          $v1, 0x1B60($s0)
    ctx->pc = 0x26dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7008)));
    // 0x26dd98: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x26dd98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x26dd9c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DD9Cu;
    {
        const bool branch_taken_0x26dd9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dd9c) {
            ctx->pc = 0x26DDBCu;
            goto label_26ddbc;
        }
    }
    ctx->pc = 0x26DDA4u;
    // 0x26dda4: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x26dda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dda8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x26dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x26ddac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26ddacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ddb0: 0x0  nop
    ctx->pc = 0x26ddb0u;
    // NOP
    // 0x26ddb4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26ddb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26ddb8: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x26ddb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_26ddbc:
    // 0x26ddbc: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26ddbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ddc0: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x26ddc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ddc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26ddc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ddc8: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x26ddc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x26ddcc: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x26ddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ddd0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x26ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ddd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26ddd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ddd8: 0x0  nop
    ctx->pc = 0x26ddd8u;
    // NOP
    // 0x26dddc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x26DDDCu;
    {
        const bool branch_taken_0x26dddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dddc) {
            ctx->pc = 0x26DDECu;
            goto label_26ddec;
        }
    }
    ctx->pc = 0x26DDE4u;
    // 0x26dde4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x26dde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26dde8: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x26dde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_26ddec:
    // 0x26ddec: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x26ddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ddf0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x26ddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ddf4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26ddf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ddf8: 0x0  nop
    ctx->pc = 0x26ddf8u;
    // NOP
    // 0x26ddfc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x26DDFCu;
    {
        const bool branch_taken_0x26ddfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ddfc) {
            ctx->pc = 0x26DE0Cu;
            goto label_26de0c;
        }
    }
    ctx->pc = 0x26DE04u;
    // 0x26de04: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x26de04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26de08: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x26de08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_26de0c:
    // 0x26de0c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x26de0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26de10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26de10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26de14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26de14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26de18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26de18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26de1c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x26de1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26de20: 0x3e00008  jr          $ra
    ctx->pc = 0x26DE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DE28u;
}
