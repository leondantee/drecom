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

// Function: Em02_dm_ck
// Address: 0x29ce80 - 0x29d224
void Em02_dm_ck_0x29ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_dm_ck_0x29ce80");
#endif

    switch (ctx->pc) {
        case 0x29cedcu: goto label_29cedc;
        case 0x29cf28u: goto label_29cf28;
        default: break;
    }

    ctx->pc = 0x29ce80u;

    // 0x29ce80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29ce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29ce84: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x29ce84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x29ce88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ce88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ce8c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x29ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x29ce90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29ce94: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x29ce94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x29ce98: 0x106000dd  beqz        $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x29CE98u;
    {
        const bool branch_taken_0x29ce98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ce98) {
            ctx->pc = 0x29D210u;
            goto label_29d210;
        }
    }
    ctx->pc = 0x29CEA0u;
    // 0x29cea0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cea4: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x29cea4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x29cea8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29ceac: 0x8c501210  lw          $s0, 0x1210($v0)
    ctx->pc = 0x29ceacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x29ceb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29ceb4: 0x904311ef  lbu         $v1, 0x11EF($v0)
    ctx->pc = 0x29ceb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
    // 0x29ceb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cebc: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x29cebcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x29cec0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cec4: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x29cec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cec8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cecc: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x29ceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ced0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x29ced0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29ced4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29CED4u;
    SET_GPR_U32(ctx, 31, 0x29CEDCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29CED4u, 0x29CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CEDCu;
label_29cedc:
    // 0x29cedc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x29cedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x29cee0: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x29cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29cee4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29cee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cee8: 0x0  nop
    ctx->pc = 0x29cee8u;
    // NOP
    // 0x29ceec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ceecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29cef0: 0x0  nop
    ctx->pc = 0x29cef0u;
    // NOP
    // 0x29cef4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x29CEF4u;
    {
        const bool branch_taken_0x29cef4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29cef4) {
            ctx->pc = 0x29CF10u;
            goto label_29cf10;
        }
    }
    ctx->pc = 0x29CEFCu;
    // 0x29cefc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x29cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x29cf00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29cf00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29cf04: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x29cf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29cf08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29cf08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29cf0c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x29cf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_29cf10:
    // 0x29cf10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cf14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29cf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cf18: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x29cf18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29cf1c: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x29cf1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x29cf20: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x29CF20u;
    SET_GPR_U32(ctx, 31, 0x29CF28u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x29CF20u, 0x29CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF28u;
label_29cf28:
    // 0x29cf28: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x29cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x29cf2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29cf2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cf30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cf34: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x29cf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x29cf38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cf3c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x29cf3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x29cf40: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x29cf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x29cf44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29cf44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29cf48: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x29CF48u;
    {
        const bool branch_taken_0x29cf48 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29cf48) {
            ctx->pc = 0x29D0C4u;
            goto label_29d0c4;
        }
    }
    ctx->pc = 0x29CF50u;
    // 0x29cf50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cf54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29cf58: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x29cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29cf5c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29cf60: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29cf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29cf64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29CF64u;
    {
        const bool branch_taken_0x29cf64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cf64) {
            ctx->pc = 0x29CF78u;
            goto label_29cf78;
        }
    }
    ctx->pc = 0x29CF6Cu;
    // 0x29cf6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29cf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29cf70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cf74: 0xa46411f6  sh          $a0, 0x11F6($v1)
    ctx->pc = 0x29cf74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4598), (uint16_t)GPR_U32(ctx, 4));
label_29cf78:
    // 0x29cf78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cf7c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x29cf7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x29cf80: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x29cf80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29cf84: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x29cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x29cf88: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x29CF88u;
    {
        const bool branch_taken_0x29cf88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cf88) {
            ctx->pc = 0x29D038u;
            goto label_29d038;
        }
    }
    ctx->pc = 0x29CF90u;
    // 0x29cf90: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x29cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29cf94: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x29CF94u;
    {
        const bool branch_taken_0x29cf94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cf94) {
            ctx->pc = 0x29D038u;
            goto label_29d038;
        }
    }
    ctx->pc = 0x29CF9Cu;
    // 0x29cf9c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x29cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29cfa0: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x29CFA0u;
    {
        const bool branch_taken_0x29cfa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cfa0) {
            ctx->pc = 0x29D038u;
            goto label_29d038;
        }
    }
    ctx->pc = 0x29CFA8u;
    // 0x29cfa8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x29cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29cfac: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x29CFACu;
    {
        const bool branch_taken_0x29cfac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cfac) {
            ctx->pc = 0x29D038u;
            goto label_29d038;
        }
    }
    ctx->pc = 0x29CFB4u;
    // 0x29cfb4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x29cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29cfb8: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x29CFB8u;
    {
        const bool branch_taken_0x29cfb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cfb8) {
            ctx->pc = 0x29D038u;
            goto label_29d038;
        }
    }
    ctx->pc = 0x29CFC0u;
    // 0x29cfc0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x29cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29cfc4: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x29CFC4u;
    {
        const bool branch_taken_0x29cfc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cfc4) {
            ctx->pc = 0x29D038u;
            goto label_29d038;
        }
    }
    ctx->pc = 0x29CFCCu;
    // 0x29cfcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29cfd0: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x29CFD0u;
    {
        const bool branch_taken_0x29cfd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cfd0) {
            ctx->pc = 0x29D038u;
            goto label_29d038;
        }
    }
    ctx->pc = 0x29CFD8u;
    // 0x29cfd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29cfdc: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x29CFDCu;
    {
        const bool branch_taken_0x29cfdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cfdc) {
            ctx->pc = 0x29D038u;
            goto label_29d038;
        }
    }
    ctx->pc = 0x29CFE4u;
    // 0x29cfe4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29cfe8: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29CFE8u;
    {
        const bool branch_taken_0x29cfe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cfe8) {
            ctx->pc = 0x29D004u;
            goto label_29d004;
        }
    }
    ctx->pc = 0x29CFF0u;
    // 0x29cff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cff4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CFF4u;
    {
        const bool branch_taken_0x29cff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29cff4) {
            ctx->pc = 0x29D004u;
            goto label_29d004;
        }
    }
    ctx->pc = 0x29CFFCu;
    // 0x29cffc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x29CFFCu;
    {
        const bool branch_taken_0x29cffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cffc) {
            ctx->pc = 0x29D004u;
            goto label_29d004;
        }
    }
    ctx->pc = 0x29D004u;
label_29d004:
    // 0x29d004: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29d004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d008: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d00c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29d00cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d010: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d014: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x29d014u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d018: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d01c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29d01cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d020: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d024: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29d024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d028: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d02c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29d030: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x29D030u;
    {
        const bool branch_taken_0x29d030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d030) {
            ctx->pc = 0x29D210u;
            goto label_29d210;
        }
    }
    ctx->pc = 0x29D038u;
label_29d038:
    // 0x29d038: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29d038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d03c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d040: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29d040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d044: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29d044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d048: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d04c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29d04cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d050: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d054: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29d054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d058: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d05c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29d05cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d060: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d064: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29d064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29d068: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x29d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d06c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x29d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x29d070: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x29d070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x29d074: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29d074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d078: 0x0  nop
    ctx->pc = 0x29d078u;
    // NOP
    // 0x29d07c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29d07cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d080: 0x0  nop
    ctx->pc = 0x29d080u;
    // NOP
    // 0x29d084: 0x45010062  bc1t        . + 4 + (0x62 << 2)
    ctx->pc = 0x29D084u;
    {
        const bool branch_taken_0x29d084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d084) {
            ctx->pc = 0x29D210u;
            goto label_29d210;
        }
    }
    ctx->pc = 0x29D08Cu;
    // 0x29d08c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d090: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d094: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29d094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d098: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29d098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d09c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d0a0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29d0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d0a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d0a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29d0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d0ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d0b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29d0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d0b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d0b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29d0bc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x29D0BCu;
    {
        const bool branch_taken_0x29d0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d0bc) {
            ctx->pc = 0x29D210u;
            goto label_29d210;
        }
    }
    ctx->pc = 0x29D0C4u;
label_29d0c4:
    // 0x29d0c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29d0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29d0c8: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x29d0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x29d0cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x29d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x29d0d0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x29d0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29d0d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29d0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29d0d8: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x29d0d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x29d0dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d0e0: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x29d0e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x29d0e4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x29d0e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29d0e8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29d0ec: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x29D0ECu;
    {
        const bool branch_taken_0x29d0ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29d0ec) {
            ctx->pc = 0x29D190u;
            goto label_29d190;
        }
    }
    ctx->pc = 0x29D0F4u;
    // 0x29d0f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d0f8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D0F8u;
    {
        const bool branch_taken_0x29d0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29d0f8) {
            ctx->pc = 0x29D108u;
            goto label_29d108;
        }
    }
    ctx->pc = 0x29D100u;
    // 0x29d100: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x29D100u;
    {
        const bool branch_taken_0x29d100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d100) {
            ctx->pc = 0x29D108u;
            goto label_29d108;
        }
    }
    ctx->pc = 0x29D108u;
label_29d108:
    // 0x29d108: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29d108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d10c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d110: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29d110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d114: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d118: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x29d118u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d11c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d120: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29d120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d124: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d128: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29d128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d12c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d130: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29d130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29d134: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x29d134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d138: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x29d138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x29d13c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x29d13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x29d140: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29d140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d144: 0x0  nop
    ctx->pc = 0x29d144u;
    // NOP
    // 0x29d148: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29d148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d14c: 0x0  nop
    ctx->pc = 0x29d14cu;
    // NOP
    // 0x29d150: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x29D150u;
    {
        const bool branch_taken_0x29d150 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d150) {
            ctx->pc = 0x29D210u;
            goto label_29d210;
        }
    }
    ctx->pc = 0x29D158u;
    // 0x29d158: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29d158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d15c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d160: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29d160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d164: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29d164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d168: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d16c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29d16cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d170: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d174: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29d174u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d178: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d17c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29d17cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d180: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d184: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29d184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29d188: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x29D188u;
    {
        const bool branch_taken_0x29d188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d188) {
            ctx->pc = 0x29D210u;
            goto label_29d210;
        }
    }
    ctx->pc = 0x29D190u;
label_29d190:
    // 0x29d190: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29d190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d194: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d198: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29d198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d19c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d1a0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x29d1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d1a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d1a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29d1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d1ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d1b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29d1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d1b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d1b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29d1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29d1bc: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x29d1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d1c0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x29d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x29d1c4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x29d1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x29d1c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29d1c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d1cc: 0x0  nop
    ctx->pc = 0x29d1ccu;
    // NOP
    // 0x29d1d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29d1d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d1d4: 0x0  nop
    ctx->pc = 0x29d1d4u;
    // NOP
    // 0x29d1d8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x29D1D8u;
    {
        const bool branch_taken_0x29d1d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d1d8) {
            ctx->pc = 0x29D210u;
            goto label_29d210;
        }
    }
    ctx->pc = 0x29D1E0u;
    // 0x29d1e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d1e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d1e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29d1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d1ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29d1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d1f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d1f4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29d1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29d1f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d1fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29d1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d200: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d204: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29d204u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29d208: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29d208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d20c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29d210:
    // 0x29d210: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x29d210u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d218: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29d218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29d21c: 0x3e00008  jr          $ra
    ctx->pc = 0x29D21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D224u;
}
