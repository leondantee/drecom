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

// Function: Check_fall_action
// Address: 0x161ea0 - 0x1625d4
void Check_fall_action_0x161ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_fall_action_0x161ea0");
#endif

    switch (ctx->pc) {
        case 0x161f44u: goto label_161f44;
        case 0x161f50u: goto label_161f50;
        case 0x162034u: goto label_162034;
        case 0x162084u: goto label_162084;
        case 0x1621f8u: goto label_1621f8;
        default: break;
    }

    ctx->pc = 0x161ea0u;

    // 0x161ea0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x161ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x161ea4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x161ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x161ea8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x161ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x161eac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x161eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x161eb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x161eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x161eb4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x161eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x161eb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x161eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x161ebc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161ec0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161ec4: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x161ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x161ec8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x161ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x161ecc: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x161eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x161ed0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x161ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x161ed4: 0x24540080  addiu       $s4, $v0, 0x80
    ctx->pc = 0x161ed4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x161ed8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x161ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x161edc: 0x2456ec70  addiu       $s6, $v0, -0x1390
    ctx->pc = 0x161edcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x161ee0: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x161ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x161ee4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x161ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x161ee8: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x161EE8u;
    {
        const bool branch_taken_0x161ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161ee8) {
            ctx->pc = 0x1623F0u;
            goto label_1623f0;
        }
    }
    ctx->pc = 0x161EF0u;
    // 0x161ef0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x161ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x161ef4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x161ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x161ef8: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x161EF8u;
    {
        const bool branch_taken_0x161ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161ef8) {
            ctx->pc = 0x1621BCu;
            goto label_1621bc;
        }
    }
    ctx->pc = 0x161F00u;
    // 0x161f00: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x161f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x161f04: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x161f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x161f08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x161f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x161f0c: 0x144000ab  bnez        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x161F0Cu;
    {
        const bool branch_taken_0x161f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161f0c) {
            ctx->pc = 0x1621BCu;
            goto label_1621bc;
        }
    }
    ctx->pc = 0x161F14u;
    // 0x161f14: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x161f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x161f18: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x161f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x161f1c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x161F1Cu;
    {
        const bool branch_taken_0x161f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161f1c) {
            ctx->pc = 0x162028u;
            goto label_162028;
        }
    }
    ctx->pc = 0x161F24u;
    // 0x161f24: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x161f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161f28: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x161f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x161f2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x161f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x161f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161f34: 0x0  nop
    ctx->pc = 0x161f34u;
    // NOP
    // 0x161f38: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x161f38u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161f3c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x161F3Cu;
    SET_GPR_U32(ctx, 31, 0x161F44u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x161F3Cu, 0x161F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161F44u;
label_161f44:
    // 0x161f44: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x161f44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x161f48: 0xc058704  jal         func_161C10
    ctx->pc = 0x161F48u;
    SET_GPR_U32(ctx, 31, 0x161F50u);
    ctx->pc = 0x161C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161C10u, 0x161F48u, 0x161F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161F50u;
label_161f50:
    // 0x161f50: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x161F50u;
    {
        const bool branch_taken_0x161f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161f50) {
            ctx->pc = 0x1621BCu;
            goto label_1621bc;
        }
    }
    ctx->pc = 0x161F58u;
    // 0x161f58: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x161f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x161f5c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x161f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x161f60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x161f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x161f64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x161f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x161f68: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x161f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x161f6c: 0xae0013f0  sw          $zero, 0x13F0($s0)
    ctx->pc = 0x161f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5104), GPR_U32(ctx, 0));
    // 0x161f70: 0xc6011b5c  lwc1        $f1, 0x1B5C($s0)
    ctx->pc = 0x161f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161f74: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x161f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x161f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161f7c: 0x0  nop
    ctx->pc = 0x161f7cu;
    // NOP
    // 0x161f80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161f84: 0x0  nop
    ctx->pc = 0x161f84u;
    // NOP
    // 0x161f88: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x161F88u;
    {
        const bool branch_taken_0x161f88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161f88) {
            ctx->pc = 0x161FDCu;
            goto label_161fdc;
        }
    }
    ctx->pc = 0x161F90u;
    // 0x161f90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161f94: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161f94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x161f98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x161f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161f9c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x161fa0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x161fa4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x161fa8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x161fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x161fac: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x161facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x161fb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x161fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x161fb4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x161fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x161fb8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x161fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x161fbc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x161fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x161fc0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x161fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x161fc4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x161fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x161fc8: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x161fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161fcc: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x161fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x161fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161fd4: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x161FD4u;
    {
        const bool branch_taken_0x161fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161fd4) {
            ctx->pc = 0x1625A8u;
            goto label_1625a8;
        }
    }
    ctx->pc = 0x161FDCu;
label_161fdc:
    // 0x161fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161fe0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x161fe4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x161fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161fe8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x161fec: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x161ff0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x161ff4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x161ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x161ff8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x161ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x161ffc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x161ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162000: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x162000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x162004: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x162004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162008: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x162008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16200c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x16200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x162010: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x162010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x162014: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x162014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162018: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x162018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x16201c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16201cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162020: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x162020u;
    {
        const bool branch_taken_0x162020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162020) {
            ctx->pc = 0x1625A8u;
            goto label_1625a8;
        }
    }
    ctx->pc = 0x162028u;
label_162028:
    // 0x162028: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x162028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16202c: 0xc058704  jal         func_161C10
    ctx->pc = 0x16202Cu;
    SET_GPR_U32(ctx, 31, 0x162034u);
    ctx->pc = 0x161C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161C10u, 0x16202Cu, 0x162034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162034u;
label_162034:
    // 0x162034: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x162034u;
    {
        const bool branch_taken_0x162034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162034) {
            ctx->pc = 0x1621BCu;
            goto label_1621bc;
        }
    }
    ctx->pc = 0x16203Cu;
    // 0x16203c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16203cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x162040: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x162040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x162044: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x162044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x162048: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x162048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16204c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16204cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x162050: 0xae0013f0  sw          $zero, 0x13F0($s0)
    ctx->pc = 0x162050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5104), GPR_U32(ctx, 0));
    // 0x162054: 0xc6011b5c  lwc1        $f1, 0x1B5C($s0)
    ctx->pc = 0x162054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162058: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x162058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x16205c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16205cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162060: 0x0  nop
    ctx->pc = 0x162060u;
    // NOP
    // 0x162064: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162068: 0x0  nop
    ctx->pc = 0x162068u;
    // NOP
    // 0x16206c: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x16206Cu;
    {
        const bool branch_taken_0x16206c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16206c) {
            ctx->pc = 0x162170u;
            goto label_162170;
        }
    }
    ctx->pc = 0x162074u;
    // 0x162074: 0xc60c1380  lwc1        $f12, 0x1380($s0)
    ctx->pc = 0x162074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x162078: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x162078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16207c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x16207Cu;
    SET_GPR_U32(ctx, 31, 0x162084u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x16207Cu, 0x162084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162084u;
label_162084:
    // 0x162084: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x162084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x162088: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x162088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16208c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16208cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162090: 0x0  nop
    ctx->pc = 0x162090u;
    // NOP
    // 0x162094: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162098: 0x0  nop
    ctx->pc = 0x162098u;
    // NOP
    // 0x16209c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16209Cu;
    {
        const bool branch_taken_0x16209c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16209c) {
            ctx->pc = 0x1620B8u;
            goto label_1620b8;
        }
    }
    ctx->pc = 0x1620A4u;
    // 0x1620a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1620a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1620a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1620a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1620ac: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1620acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1620b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1620b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1620b4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1620b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1620b8:
    // 0x1620b8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1620b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1620bc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1620bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1620c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1620c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1620c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1620c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1620c8: 0x0  nop
    ctx->pc = 0x1620c8u;
    // NOP
    // 0x1620cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1620ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1620d0: 0x0  nop
    ctx->pc = 0x1620d0u;
    // NOP
    // 0x1620d4: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1620D4u;
    {
        const bool branch_taken_0x1620d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1620d4) {
            ctx->pc = 0x162124u;
            goto label_162124;
        }
    }
    ctx->pc = 0x1620DCu;
    // 0x1620dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1620dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1620e0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1620e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1620e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1620e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1620e8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1620e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1620ec: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1620ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1620f0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1620f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1620f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1620f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1620f8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1620f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1620fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1620fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162100: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x162100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x162104: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x162104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162108: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x162108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16210c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x16210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x162110: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x162110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x162114: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x162114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162118: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x162118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x16211c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16211Cu;
    {
        const bool branch_taken_0x16211c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16211c) {
            ctx->pc = 0x162164u;
            goto label_162164;
        }
    }
    ctx->pc = 0x162124u;
label_162124:
    // 0x162124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162128: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x162128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x16212c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162130: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x162130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x162134: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x162134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x162138: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x162138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x16213c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16213cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x162140: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x162140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x162144: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x162144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162148: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x162148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x16214c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16214cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162150: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x162150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x162154: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x162154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x162158: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x162158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x16215c: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x16215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162160: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x162160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
label_162164:
    // 0x162164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162168: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x162168u;
    {
        const bool branch_taken_0x162168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162168) {
            ctx->pc = 0x1625A8u;
            goto label_1625a8;
        }
    }
    ctx->pc = 0x162170u;
label_162170:
    // 0x162170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162174: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x162174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x162178: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x162178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16217c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x16217cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x162180: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x162180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x162184: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x162184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x162188: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x162188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16218c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x16218cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x162190: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x162190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162194: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x162194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x162198: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x162198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16219c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16219cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1621a0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1621a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1621a4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1621a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1621a8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1621a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1621ac: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1621acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x1621b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1621b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1621b4: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x1621B4u;
    {
        const bool branch_taken_0x1621b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1621b4) {
            ctx->pc = 0x1625A8u;
            goto label_1625a8;
        }
    }
    ctx->pc = 0x1621BCu;
label_1621bc:
    // 0x1621bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1621bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1621c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1621c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1621c4: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1621C4u;
    {
        const bool branch_taken_0x1621c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1621c4) {
            ctx->pc = 0x1623F0u;
            goto label_1623f0;
        }
    }
    ctx->pc = 0x1621CCu;
    // 0x1621cc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1621ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1621d0: 0x2455bb48  addiu       $s5, $v0, -0x44B8
    ctx->pc = 0x1621d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x1621d4: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1621d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1621d8: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1621d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1621dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1621dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1621e0: 0x0  nop
    ctx->pc = 0x1621e0u;
    // NOP
    // 0x1621e4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1621e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1621e8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1621e8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1621ec: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1621ecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1621f0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1621F0u;
    {
        const bool branch_taken_0x1621f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1621f0) {
            ctx->pc = 0x162270u;
            goto label_162270;
        }
    }
    ctx->pc = 0x1621F8u;
label_1621f8:
    // 0x1621f8: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x1621f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1621fc: 0x24550004  addiu       $s5, $v0, 0x4
    ctx->pc = 0x1621fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x162200: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x162200u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162204: 0x862210a6  lh          $v0, 0x10A6($s1)
    ctx->pc = 0x162204u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
    // 0x162208: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x162208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16220c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16220cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x162210: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x162210u;
    {
        const bool branch_taken_0x162210 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x162210) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x162218u;
    // 0x162218: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x162218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16221c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x16221cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x162220: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x162220u;
    {
        const bool branch_taken_0x162220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162220) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x162228u;
    // 0x162228: 0x8e0213f0  lw          $v0, 0x13F0($s0)
    ctx->pc = 0x162228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5104)));
    // 0x16222c: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16222Cu;
    {
        const bool branch_taken_0x16222c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x16222c) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x162234u;
    // 0x162234: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x162234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x162238: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x162238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x16223c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16223Cu;
    {
        const bool branch_taken_0x16223c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16223c) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x162244u;
    // 0x162244: 0xc6211288  lwc1        $f1, 0x1288($s1)
    ctx->pc = 0x162244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162248: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x162248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16224c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16224cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162250: 0x0  nop
    ctx->pc = 0x162250u;
    // NOP
    // 0x162254: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x162254u;
    {
        const bool branch_taken_0x162254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162254) {
            ctx->pc = 0x162268u;
            goto label_162268;
        }
    }
    ctx->pc = 0x16225Cu;
    // 0x16225c: 0xc6201288  lwc1        $f0, 0x1288($s1)
    ctx->pc = 0x16225cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162260: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x162260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x162264: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x162264u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_162268:
    // 0x162268: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x162268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x16226c: 0x0  nop
    ctx->pc = 0x16226cu;
    // NOP
label_162270:
    // 0x162270: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x162270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x162274: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x162274u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x162278: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x162278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16227c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x16227Cu;
    {
        const bool branch_taken_0x16227c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16227c) {
            ctx->pc = 0x1621F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1621f8;
        }
    }
    ctx->pc = 0x162284u;
    // 0x162284: 0x1240005a  beqz        $s2, . + 4 + (0x5A << 2)
    ctx->pc = 0x162284u;
    {
        const bool branch_taken_0x162284 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x162284) {
            ctx->pc = 0x1623F0u;
            goto label_1623f0;
        }
    }
    ctx->pc = 0x16228Cu;
    // 0x16228c: 0xc64111e0  lwc1        $f1, 0x11E0($s2)
    ctx->pc = 0x16228cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162290: 0xc60011e0  lwc1        $f0, 0x11E0($s0)
    ctx->pc = 0x162290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162294: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x162294u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162298: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x162298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x16229c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16229cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1622a0: 0x0  nop
    ctx->pc = 0x1622a0u;
    // NOP
    // 0x1622a4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1622a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1622a8: 0xc640128c  lwc1        $f0, 0x128C($s2)
    ctx->pc = 0x1622a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1622ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1622acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1622b0: 0x0  nop
    ctx->pc = 0x1622b0u;
    // NOP
    // 0x1622b4: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
    ctx->pc = 0x1622B4u;
    {
        const bool branch_taken_0x1622b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1622b4) {
            ctx->pc = 0x1623F0u;
            goto label_1623f0;
        }
    }
    ctx->pc = 0x1622BCu;
    // 0x1622bc: 0xc6410124  lwc1        $f1, 0x124($s2)
    ctx->pc = 0x1622bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1622c0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1622c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1622c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1622c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1622c8: 0x0  nop
    ctx->pc = 0x1622c8u;
    // NOP
    // 0x1622cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1622ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1622d0: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x1622d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1622d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1622d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1622d8: 0x0  nop
    ctx->pc = 0x1622d8u;
    // NOP
    // 0x1622dc: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x1622DCu;
    {
        const bool branch_taken_0x1622dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1622dc) {
            ctx->pc = 0x1623F0u;
            goto label_1623f0;
        }
    }
    ctx->pc = 0x1622E4u;
    // 0x1622e4: 0xc6410124  lwc1        $f1, 0x124($s2)
    ctx->pc = 0x1622e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1622e8: 0xc64011e4  lwc1        $f0, 0x11E4($s2)
    ctx->pc = 0x1622e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1622ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1622ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1622f0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1622f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1622f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1622f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1622f8: 0x0  nop
    ctx->pc = 0x1622f8u;
    // NOP
    // 0x1622fc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1622fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x162300: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x162300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162304: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162308: 0x0  nop
    ctx->pc = 0x162308u;
    // NOP
    // 0x16230c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x16230Cu;
    {
        const bool branch_taken_0x16230c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16230c) {
            ctx->pc = 0x1623F0u;
            goto label_1623f0;
        }
    }
    ctx->pc = 0x162314u;
    // 0x162314: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x162314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x162318: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x162318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x16231c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x16231cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x162320: 0xae1213f0  sw          $s2, 0x13F0($s0)
    ctx->pc = 0x162320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5104), GPR_U32(ctx, 18));
    // 0x162324: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x162324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x162328: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x162328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x16232c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x16232cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x162330: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x162330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x162334: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x162334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x162338: 0xc6011b5c  lwc1        $f1, 0x1B5C($s0)
    ctx->pc = 0x162338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16233c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x16233cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x162340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162344: 0x0  nop
    ctx->pc = 0x162344u;
    // NOP
    // 0x162348: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162348u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16234c: 0x0  nop
    ctx->pc = 0x16234cu;
    // NOP
    // 0x162350: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x162350u;
    {
        const bool branch_taken_0x162350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162350) {
            ctx->pc = 0x1623A4u;
            goto label_1623a4;
        }
    }
    ctx->pc = 0x162358u;
    // 0x162358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16235c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x16235cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x162360: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x162360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162364: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x162364u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x162368: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x162368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x16236c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x16236cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x162370: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x162370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x162374: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x162374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x162378: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x162378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16237c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x16237cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x162380: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x162380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162384: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x162384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x162388: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x162388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16238c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x16238cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x162390: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x162390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162394: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x162394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x162398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16239c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x16239Cu;
    {
        const bool branch_taken_0x16239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16239c) {
            ctx->pc = 0x1625A8u;
            goto label_1625a8;
        }
    }
    ctx->pc = 0x1623A4u;
label_1623a4:
    // 0x1623a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1623a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1623a8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1623a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1623ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1623acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1623b0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1623b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1623b4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1623b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1623b8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1623b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1623bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1623bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1623c0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1623c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1623c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1623c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1623c8: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x1623c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x1623cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1623ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1623d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1623d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1623d4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1623d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1623d8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1623d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1623dc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1623dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1623e0: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1623e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x1623e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1623e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1623e8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1623E8u;
    {
        const bool branch_taken_0x1623e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1623e8) {
            ctx->pc = 0x1625A8u;
            goto label_1625a8;
        }
    }
    ctx->pc = 0x1623F0u;
label_1623f0:
    // 0x1623f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1623f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1623f4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1623f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1623f8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1623f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1623fc: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1623FCu;
    {
        const bool branch_taken_0x1623fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1623fc) {
            ctx->pc = 0x162508u;
            goto label_162508;
        }
    }
    ctx->pc = 0x162404u;
    // 0x162404: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x162404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x162408: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x162408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16240c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162410: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x162410u;
    {
        const bool branch_taken_0x162410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162410) {
            ctx->pc = 0x1624D0u;
            goto label_1624d0;
        }
    }
    ctx->pc = 0x162418u;
    // 0x162418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16241c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x16241Cu;
    {
        const bool branch_taken_0x16241c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16241c) {
            ctx->pc = 0x1624D0u;
            goto label_1624d0;
        }
    }
    ctx->pc = 0x162424u;
    // 0x162424: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162428: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162428u;
    {
        const bool branch_taken_0x162428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162428) {
            ctx->pc = 0x162440u;
            goto label_162440;
        }
    }
    ctx->pc = 0x162430u;
    // 0x162430: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162430u;
    {
        const bool branch_taken_0x162430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162430) {
            ctx->pc = 0x162440u;
            goto label_162440;
        }
    }
    ctx->pc = 0x162438u;
    // 0x162438: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x162438u;
    {
        const bool branch_taken_0x162438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162438) {
            ctx->pc = 0x162508u;
            goto label_162508;
        }
    }
    ctx->pc = 0x162440u;
label_162440:
    // 0x162440: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x162440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x162444: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x162444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x162448: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x162448u;
    {
        const bool branch_taken_0x162448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162448) {
            ctx->pc = 0x162498u;
            goto label_162498;
        }
    }
    ctx->pc = 0x162450u;
    // 0x162450: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x162450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162454: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x162454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x162458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16245c: 0x0  nop
    ctx->pc = 0x16245cu;
    // NOP
    // 0x162460: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162460u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162464: 0x0  nop
    ctx->pc = 0x162464u;
    // NOP
    // 0x162468: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x162468u;
    {
        const bool branch_taken_0x162468 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162468) {
            ctx->pc = 0x162498u;
            goto label_162498;
        }
    }
    ctx->pc = 0x162470u;
    // 0x162470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162474: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x162474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x162478: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x162478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x16247c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x16247cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x162480: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x162480u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x162484: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x162484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x162488: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x162488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x16248c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162490: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x162490u;
    {
        const bool branch_taken_0x162490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162490) {
            ctx->pc = 0x1625A8u;
            goto label_1625a8;
        }
    }
    ctx->pc = 0x162498u;
label_162498:
    // 0x162498: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x162498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x16249c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x16249cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1624a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1624A0u;
    {
        const bool branch_taken_0x1624a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1624a0) {
            ctx->pc = 0x162508u;
            goto label_162508;
        }
    }
    ctx->pc = 0x1624A8u;
    // 0x1624a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1624a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1624ac: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1624acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1624b0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1624b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1624b4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1624b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1624b8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1624b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1624bc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1624bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1624c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1624c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1624c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1624c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1624c8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1624C8u;
    {
        const bool branch_taken_0x1624c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1624c8) {
            ctx->pc = 0x1625A8u;
            goto label_1625a8;
        }
    }
    ctx->pc = 0x1624D0u;
label_1624d0:
    // 0x1624d0: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x1624d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x1624d4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1624d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1624d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1624D8u;
    {
        const bool branch_taken_0x1624d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1624d8) {
            ctx->pc = 0x162508u;
            goto label_162508;
        }
    }
    ctx->pc = 0x1624E0u;
    // 0x1624e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1624e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1624e4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1624e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1624e8: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1624e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1624ec: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1624ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1624f0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1624f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1624f4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1624f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1624f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1624f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1624fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1624fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162500: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x162500u;
    {
        const bool branch_taken_0x162500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162500) {
            ctx->pc = 0x1625A8u;
            goto label_1625a8;
        }
    }
    ctx->pc = 0x162508u;
label_162508:
    // 0x162508: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x162508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x16250c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16250cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x162510: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162514: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162514u;
    {
        const bool branch_taken_0x162514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162514) {
            ctx->pc = 0x16252Cu;
            goto label_16252c;
        }
    }
    ctx->pc = 0x16251Cu;
    // 0x16251c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16251Cu;
    {
        const bool branch_taken_0x16251c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16251c) {
            ctx->pc = 0x16252Cu;
            goto label_16252c;
        }
    }
    ctx->pc = 0x162524u;
    // 0x162524: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x162524u;
    {
        const bool branch_taken_0x162524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162524) {
            ctx->pc = 0x1625A4u;
            goto label_1625a4;
        }
    }
    ctx->pc = 0x16252Cu;
label_16252c:
    // 0x16252c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x162530: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x162530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x162534: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162534u;
    {
        const bool branch_taken_0x162534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162534) {
            ctx->pc = 0x16254Cu;
            goto label_16254c;
        }
    }
    ctx->pc = 0x16253Cu;
    // 0x16253c: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x16253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x162540: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x162540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x162544: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x162544u;
    {
        const bool branch_taken_0x162544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162544) {
            ctx->pc = 0x1625A4u;
            goto label_1625a4;
        }
    }
    ctx->pc = 0x16254Cu;
label_16254c:
    // 0x16254c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x162550: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x162550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x162554: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162554u;
    {
        const bool branch_taken_0x162554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162554) {
            ctx->pc = 0x162568u;
            goto label_162568;
        }
    }
    ctx->pc = 0x16255Cu;
    // 0x16255c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162560: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x162560u;
    {
        const bool branch_taken_0x162560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162560) {
            ctx->pc = 0x1625A8u;
            goto label_1625a8;
        }
    }
    ctx->pc = 0x162568u;
label_162568:
    // 0x162568: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x162568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16256c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x16256cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x162570: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x162570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162574: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x162574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x162578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16257c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x16257cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x162580: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x162580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x162584: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x162584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x162588: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x162588u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x16258c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x16258cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x162590: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x162590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x162594: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x162594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x162598: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x162598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16259c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16259Cu;
    {
        const bool branch_taken_0x16259c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16259c) {
            ctx->pc = 0x1625A8u;
            goto label_1625a8;
        }
    }
    ctx->pc = 0x1625A4u;
label_1625a4:
    // 0x1625a4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1625a4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1625a8:
    // 0x1625a8: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x1625a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1625ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1625acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1625b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1625b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1625b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1625b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1625b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1625b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1625bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1625bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1625c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1625c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1625c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1625c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1625c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1625c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1625cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1625CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1625CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1625D4u;
}
