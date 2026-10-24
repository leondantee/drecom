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

// Function: Em19_dm_ck
// Address: 0x2e2bd0 - 0x2e31b0
void Em19_dm_ck_0x2e2bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_dm_ck_0x2e2bd0");
#endif

    switch (ctx->pc) {
        case 0x2e2cc8u: goto label_2e2cc8;
        case 0x2e2ce0u: goto label_2e2ce0;
        case 0x2e2d20u: goto label_2e2d20;
        case 0x2e2ec4u: goto label_2e2ec4;
        case 0x2e2f24u: goto label_2e2f24;
        case 0x2e3010u: goto label_2e3010;
        case 0x2e30acu: goto label_2e30ac;
        case 0x2e3150u: goto label_2e3150;
        default: break;
    }

    ctx->pc = 0x2e2bd0u;

    // 0x2e2bd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e2bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e2bd4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2e2bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2e2bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e2bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e2bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e2bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e2be0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2e2be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2e2be4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2be8: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2e2be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e2bec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2bf0: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x2e2bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x2e2bf4: 0x10600168  beqz        $v1, . + 4 + (0x168 << 2)
    ctx->pc = 0x2E2BF4u;
    {
        const bool branch_taken_0x2e2bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2bf4) {
            ctx->pc = 0x2E3198u;
            goto label_2e3198;
        }
    }
    ctx->pc = 0x2E2BFCu;
    // 0x2e2bfc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e2bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2e2c00: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x2e2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x2e2c04: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2e2c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2e2c08: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E2C08u;
    {
        const bool branch_taken_0x2e2c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c08) {
            ctx->pc = 0x2E2C64u;
            goto label_2e2c64;
        }
    }
    ctx->pc = 0x2E2C10u;
    // 0x2e2c10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e2c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2c14: 0x844211f2  lh          $v0, 0x11F2($v0)
    ctx->pc = 0x2e2c14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x2e2c18: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2e2c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e2c1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e2c1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e2c20: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2e2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2e2c24: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2e2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2e2c28: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2e2c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2e2c2c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2e2c2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e2c30: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2e2c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e2c34: 0x0  nop
    ctx->pc = 0x2e2c34u;
    // NOP
    // 0x2e2c38: 0x1010  mfhi        $v0
    ctx->pc = 0x2e2c38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e2c3c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2e2c3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2e2c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2c44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e2c48: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2e2c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e2c4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e2c4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e2c50: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e2c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e2c54: 0x8422ef68  lh          $v0, -0x1098($at)
    ctx->pc = 0x2e2c54u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x2e2c58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e2c5c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e2c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e2c60: 0xa422ef68  sh          $v0, -0x1098($at)
    ctx->pc = 0x2e2c60u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
label_2e2c64:
    // 0x2e2c64: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e2c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e2c68: 0x8422ef68  lh          $v0, -0x1098($at)
    ctx->pc = 0x2e2c68u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x2e2c6c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2e2c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e2c70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e2c70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e2c74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e2c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e2c78: 0x8422ef6a  lh          $v0, -0x1096($at)
    ctx->pc = 0x2e2c78u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x2e2c7c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e2c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e2c80: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e2c80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e2c84: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2e2c84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e2c88: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2C88u;
    {
        const bool branch_taken_0x2e2c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c88) {
            ctx->pc = 0x2E2CA0u;
            goto label_2e2ca0;
        }
    }
    ctx->pc = 0x2E2C90u;
    // 0x2e2c90: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e2c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e2c94: 0x8422ef6a  lh          $v0, -0x1096($at)
    ctx->pc = 0x2e2c94u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x2e2c98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e2c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e2c9c: 0xa422ef68  sh          $v0, -0x1098($at)
    ctx->pc = 0x2e2c9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
label_2e2ca0:
    // 0x2e2ca0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2ca4: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x2e2ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2ca8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2cac: 0x8c511210  lw          $s1, 0x1210($v0)
    ctx->pc = 0x2e2cacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x2e2cb0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2cb4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e2cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2cb8: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x2e2cb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2e2cbc: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x2e2cbcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x2e2cc0: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x2E2CC0u;
    SET_GPR_U32(ctx, 31, 0x2E2CC8u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2E2CC0u, 0x2E2CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2CC8u;
label_2e2cc8:
    // 0x2e2cc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2ccc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2cd0: 0xc46c11f8  lwc1        $f12, 0x11F8($v1)
    ctx->pc = 0x2e2cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e2cd4: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2e2cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e2cd8: 0xc058f20  jal         func_163C80
    ctx->pc = 0x2E2CD8u;
    SET_GPR_U32(ctx, 31, 0x2E2CE0u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x2E2CD8u, 0x2E2CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2CE0u;
label_2e2ce0:
    // 0x2e2ce0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2e2ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e2ce4: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x2e2ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2ce8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2ce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2cec: 0x0  nop
    ctx->pc = 0x2e2cecu;
    // NOP
    // 0x2e2cf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e2cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2cf4: 0x0  nop
    ctx->pc = 0x2e2cf4u;
    // NOP
    // 0x2e2cf8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2CF8u;
    {
        const bool branch_taken_0x2e2cf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2cf8) {
            ctx->pc = 0x2E2D14u;
            goto label_2e2d14;
        }
    }
    ctx->pc = 0x2E2D00u;
    // 0x2e2d00: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2e2d04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e2d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2d08: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2e2d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2d0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e2d0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e2d10: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2e2d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2e2d14:
    // 0x2e2d14: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e2d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2d18: 0xc0b8c6c  jal         func_2E31B0
    ctx->pc = 0x2E2D18u;
    SET_GPR_U32(ctx, 31, 0x2E2D20u);
    ctx->pc = 0x2E31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31B0u, 0x2E2D18u, 0x2E2D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2D20u;
label_2e2d20:
    // 0x2e2d20: 0x9203006a  lbu         $v1, 0x6A($s0)
    ctx->pc = 0x2e2d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x2e2d24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e2d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e2d28: 0xa203006a  sb          $v1, 0x6A($s0)
    ctx->pc = 0x2e2d28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e2d2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2d30: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2e2d30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2e2d34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e2d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e2d38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e2d38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e2d3c: 0x4610025  bgez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E2D3Cu;
    {
        const bool branch_taken_0x2e2d3c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2e2d3c) {
            ctx->pc = 0x2E2DD4u;
            goto label_2e2dd4;
        }
    }
    ctx->pc = 0x2E2D44u;
    // 0x2e2d44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2d48: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x2e2d48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x2e2d4c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2e2d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2e2d50: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2e2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e2d54: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E2D54u;
    {
        const bool branch_taken_0x2e2d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2d54) {
            ctx->pc = 0x2E2DA0u;
            goto label_2e2da0;
        }
    }
    ctx->pc = 0x2E2D5Cu;
    // 0x2e2d5c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2e2d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e2d60: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E2D60u;
    {
        const bool branch_taken_0x2e2d60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2d60) {
            ctx->pc = 0x2E2DA0u;
            goto label_2e2da0;
        }
    }
    ctx->pc = 0x2E2D68u;
    // 0x2e2d68: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e2d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e2d6c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E2D6Cu;
    {
        const bool branch_taken_0x2e2d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2d6c) {
            ctx->pc = 0x2E2DA0u;
            goto label_2e2da0;
        }
    }
    ctx->pc = 0x2E2D74u;
    // 0x2e2d74: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2e2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2e2d78: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2D78u;
    {
        const bool branch_taken_0x2e2d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2d78) {
            ctx->pc = 0x2E2DA0u;
            goto label_2e2da0;
        }
    }
    ctx->pc = 0x2E2D80u;
    // 0x2e2d80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e2d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2d84: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2D84u;
    {
        const bool branch_taken_0x2e2d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2d84) {
            ctx->pc = 0x2E2DA0u;
            goto label_2e2da0;
        }
    }
    ctx->pc = 0x2E2D8Cu;
    // 0x2e2d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e2d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2d90: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2D90u;
    {
        const bool branch_taken_0x2e2d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2d90) {
            ctx->pc = 0x2E2DA0u;
            goto label_2e2da0;
        }
    }
    ctx->pc = 0x2E2D98u;
    // 0x2e2d98: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2D98u;
    {
        const bool branch_taken_0x2e2d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2d98) {
            ctx->pc = 0x2E2DA0u;
            goto label_2e2da0;
        }
    }
    ctx->pc = 0x2E2DA0u;
label_2e2da0:
    // 0x2e2da0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e2da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2da4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2da8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e2da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e2dac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2db0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2e2db0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2db4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2db8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e2db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2dbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2dc0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e2dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2dc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2dc8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e2dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e2dcc: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x2E2DCCu;
    {
        const bool branch_taken_0x2e2dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2dcc) {
            ctx->pc = 0x2E3198u;
            goto label_2e3198;
        }
    }
    ctx->pc = 0x2E2DD4u;
label_2e2dd4:
    // 0x2e2dd4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2dd8: 0x906411ef  lbu         $a0, 0x11EF($v1)
    ctx->pc = 0x2e2dd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4591)));
    // 0x2e2ddc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2de0: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2e2de0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e2de4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2de8: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x2e2de8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x2e2dec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2e2decu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2e2df0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2e2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2e2df4: 0x108300bb  beq         $a0, $v1, . + 4 + (0xBB << 2)
    ctx->pc = 0x2E2DF4u;
    {
        const bool branch_taken_0x2e2df4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2df4) {
            ctx->pc = 0x2E30E4u;
            goto label_2e30e4;
        }
    }
    ctx->pc = 0x2E2DFCu;
    // 0x2e2dfc: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2e2dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e2e00: 0x108300b8  beq         $a0, $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2E2E00u;
    {
        const bool branch_taken_0x2e2e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2e00) {
            ctx->pc = 0x2E30E4u;
            goto label_2e30e4;
        }
    }
    ctx->pc = 0x2E2E08u;
    // 0x2e2e08: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2e2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e2e0c: 0x108300b5  beq         $a0, $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2E2E0Cu;
    {
        const bool branch_taken_0x2e2e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2e0c) {
            ctx->pc = 0x2E30E4u;
            goto label_2e30e4;
        }
    }
    ctx->pc = 0x2E2E14u;
    // 0x2e2e14: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2e2e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2e2e18: 0x108300b2  beq         $a0, $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2E2E18u;
    {
        const bool branch_taken_0x2e2e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2e18) {
            ctx->pc = 0x2E30E4u;
            goto label_2e30e4;
        }
    }
    ctx->pc = 0x2E2E20u;
    // 0x2e2e20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2e24: 0x108300af  beq         $a0, $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x2E2E24u;
    {
        const bool branch_taken_0x2e2e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2e24) {
            ctx->pc = 0x2E30E4u;
            goto label_2e30e4;
        }
    }
    ctx->pc = 0x2E2E2Cu;
    // 0x2e2e2c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e2e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e2e30: 0x1083005c  beq         $a0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2E2E30u;
    {
        const bool branch_taken_0x2e2e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2e30) {
            ctx->pc = 0x2E2FA4u;
            goto label_2e2fa4;
        }
    }
    ctx->pc = 0x2E2E38u;
    // 0x2e2e38: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2e2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2e2e3c: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2E2E3Cu;
    {
        const bool branch_taken_0x2e2e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2e3c) {
            ctx->pc = 0x2E2FA4u;
            goto label_2e2fa4;
        }
    }
    ctx->pc = 0x2E2E44u;
    // 0x2e2e44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e2e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2e48: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2E48u;
    {
        const bool branch_taken_0x2e2e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2e48) {
            ctx->pc = 0x2E2E58u;
            goto label_2e2e58;
        }
    }
    ctx->pc = 0x2E2E50u;
    // 0x2e2e50: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2E2E50u;
    {
        const bool branch_taken_0x2e2e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e50) {
            ctx->pc = 0x2E30E4u;
            goto label_2e30e4;
        }
    }
    ctx->pc = 0x2E2E58u;
label_2e2e58:
    // 0x2e2e58: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2e2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e2e5c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e2e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e2e60: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E2E60u;
    {
        const bool branch_taken_0x2e2e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e60) {
            ctx->pc = 0x2E2F08u;
            goto label_2e2f08;
        }
    }
    ctx->pc = 0x2E2E68u;
    // 0x2e2e68: 0x9203006a  lbu         $v1, 0x6A($s0)
    ctx->pc = 0x2e2e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x2e2e6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e2e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e2e70: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x2e2e70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e2e74: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E2E74u;
    {
        const bool branch_taken_0x2e2e74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2e74) {
            ctx->pc = 0x2E2ED0u;
            goto label_2e2ed0;
        }
    }
    ctx->pc = 0x2E2E7Cu;
    // 0x2e2e7c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2e2e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2e2e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2e84: 0x0  nop
    ctx->pc = 0x2e2e84u;
    // NOP
    // 0x2e2e88: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x2e2e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2e2e8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e2e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2e90: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e2e94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e2e98: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e2e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e2e9c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e2e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e2ea0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2ea4: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x2e2ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2ea8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2e2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2e2eac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e2eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e2eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2eb4: 0x0  nop
    ctx->pc = 0x2e2eb4u;
    // NOP
    // 0x2e2eb8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e2eb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e2ebc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E2EBCu;
    SET_GPR_U32(ctx, 31, 0x2E2EC4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E2EBCu, 0x2E2EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2EC4u;
label_2e2ec4:
    // 0x2e2ec4: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e2ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e2ec8: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x2E2EC8u;
    {
        const bool branch_taken_0x2e2ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2ec8) {
            ctx->pc = 0x2E3198u;
            goto label_2e3198;
        }
    }
    ctx->pc = 0x2E2ED0u;
label_2e2ed0:
    // 0x2e2ed0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e2ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2ed4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2ed8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e2ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e2edc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e2edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2ee0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2ee4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e2ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e2ee8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2eec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e2eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2ef0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2ef4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e2ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2ef8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2efc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e2efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e2f00: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x2E2F00u;
    {
        const bool branch_taken_0x2e2f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f00) {
            ctx->pc = 0x2E3198u;
            goto label_2e3198;
        }
    }
    ctx->pc = 0x2E2F08u;
label_2e2f08:
    // 0x2e2f08: 0x9203006a  lbu         $v1, 0x6A($s0)
    ctx->pc = 0x2e2f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x2e2f0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e2f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e2f10: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2e2f10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e2f14: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E2F14u;
    {
        const bool branch_taken_0x2e2f14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f14) {
            ctx->pc = 0x2E2F70u;
            goto label_2e2f70;
        }
    }
    ctx->pc = 0x2E2F1Cu;
    // 0x2e2f1c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E2F1Cu;
    SET_GPR_U32(ctx, 31, 0x2E2F24u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E2F1Cu, 0x2E2F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F24u;
label_2e2f24:
    // 0x2e2f24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e2f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e2f28: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2e2f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2e2f2c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E2F2Cu;
    {
        const bool branch_taken_0x2e2f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f2c) {
            ctx->pc = 0x2E2F70u;
            goto label_2e2f70;
        }
    }
    ctx->pc = 0x2E2F34u;
    // 0x2e2f34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e2f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2f38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e2f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e2f40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e2f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2f44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e2f48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e2f4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e2f50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e2f58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e2f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e2f64: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x2e2f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f68: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2E2F68u;
    {
        const bool branch_taken_0x2e2f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f68) {
            ctx->pc = 0x2E3198u;
            goto label_2e3198;
        }
    }
    ctx->pc = 0x2E2F70u;
label_2e2f70:
    // 0x2e2f70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e2f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2f74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e2f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e2f7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f80: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2e2f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e2f88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e2f90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2f98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e2f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e2f9c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2E2F9Cu;
    {
        const bool branch_taken_0x2e2f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f9c) {
            ctx->pc = 0x2E3198u;
            goto label_2e3198;
        }
    }
    ctx->pc = 0x2E2FA4u;
label_2e2fa4:
    // 0x2e2fa4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2e2fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e2fa8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e2fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e2fac: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2E2FACu;
    {
        const bool branch_taken_0x2e2fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2fac) {
            ctx->pc = 0x2E3064u;
            goto label_2e3064;
        }
    }
    ctx->pc = 0x2E2FB4u;
    // 0x2e2fb4: 0x9203006a  lbu         $v1, 0x6A($s0)
    ctx->pc = 0x2e2fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x2e2fb8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e2fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e2fbc: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x2e2fbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e2fc0: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E2FC0u;
    {
        const bool branch_taken_0x2e2fc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2fc0) {
            ctx->pc = 0x2E3028u;
            goto label_2e3028;
        }
    }
    ctx->pc = 0x2E2FC8u;
    // 0x2e2fc8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2e2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2e2fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2fd0: 0x0  nop
    ctx->pc = 0x2e2fd0u;
    // NOP
    // 0x2e2fd4: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x2e2fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2e2fd8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e2fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2fdc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e2fe0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e2fe4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e2fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e2fe8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e2fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e2fec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2ff0: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x2e2ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2ff4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2e2ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2e2ff8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e2ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e2ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e2ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3000: 0x0  nop
    ctx->pc = 0x2e3000u;
    // NOP
    // 0x2e3004: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e3004u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e3008: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E3008u;
    SET_GPR_U32(ctx, 31, 0x2E3010u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E3008u, 0x2E3010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3010u;
label_2e3010:
    // 0x2e3010: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e3010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e3014: 0x9203006a  lbu         $v1, 0x6A($s0)
    ctx->pc = 0x2e3014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x2e3018: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e3018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e301c: 0xa203006a  sb          $v1, 0x6A($s0)
    ctx->pc = 0x2e301cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e3020: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2E3020u;
    {
        const bool branch_taken_0x2e3020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3020) {
            ctx->pc = 0x2E3198u;
            goto label_2e3198;
        }
    }
    ctx->pc = 0x2E3028u;
label_2e3028:
    // 0x2e3028: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e3028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e302c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3030: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e3030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e3034: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e3034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3038: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e303c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e303cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e3040: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3044: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e3044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3048: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e304c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e304cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3050: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3054: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e3054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e3058: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x2e3058u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e305c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2E305Cu;
    {
        const bool branch_taken_0x2e305c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e305c) {
            ctx->pc = 0x2E3198u;
            goto label_2e3198;
        }
    }
    ctx->pc = 0x2E3064u;
label_2e3064:
    // 0x2e3064: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e3064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e3068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e306c: 0x0  nop
    ctx->pc = 0x2e306cu;
    // NOP
    // 0x2e3070: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x2e3070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2e3074: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e3074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3078: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e3078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e307c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e307cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e3080: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e3080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e3084: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e3084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e3088: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e3088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e308c: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x2e308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3090: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2e3090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2e3094: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e3094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e3098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e3098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e309c: 0x0  nop
    ctx->pc = 0x2e309cu;
    // NOP
    // 0x2e30a0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e30a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e30a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E30A4u;
    SET_GPR_U32(ctx, 31, 0x2E30ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E30A4u, 0x2E30ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E30ACu;
label_2e30ac:
    // 0x2e30ac: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e30acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e30b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e30b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e30b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e30b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e30b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e30b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e30bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e30bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e30c0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2e30c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e30c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e30c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e30c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e30cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e30ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e30d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e30d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e30d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e30d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e30d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e30d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e30dc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2E30DCu;
    {
        const bool branch_taken_0x2e30dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e30dc) {
            ctx->pc = 0x2E3198u;
            goto label_2e3198;
        }
    }
    ctx->pc = 0x2E30E4u;
label_2e30e4:
    // 0x2e30e4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2e30e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e30e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e30e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e30ec: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E30ECu;
    {
        const bool branch_taken_0x2e30ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e30ec) {
            ctx->pc = 0x2E3168u;
            goto label_2e3168;
        }
    }
    ctx->pc = 0x2E30F4u;
    // 0x2e30f4: 0x9203006a  lbu         $v1, 0x6A($s0)
    ctx->pc = 0x2e30f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x2e30f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e30f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e30fc: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x2e30fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e3100: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E3100u;
    {
        const bool branch_taken_0x2e3100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3100) {
            ctx->pc = 0x2E3168u;
            goto label_2e3168;
        }
    }
    ctx->pc = 0x2E3108u;
    // 0x2e3108: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e3108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e310c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e310cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3110: 0x0  nop
    ctx->pc = 0x2e3110u;
    // NOP
    // 0x2e3114: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x2e3114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2e3118: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e3118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e311c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e311cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e3120: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e3120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e3124: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e3124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e3128: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e3128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e312c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e312cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3130: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x2e3130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3134: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2e3134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2e3138: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e3138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e313c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e313cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3140: 0x0  nop
    ctx->pc = 0x2e3140u;
    // NOP
    // 0x2e3144: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e3144u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e3148: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E3148u;
    SET_GPR_U32(ctx, 31, 0x2E3150u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E3148u, 0x2E3150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3150u;
label_2e3150:
    // 0x2e3150: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e3150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e3154: 0x9203006a  lbu         $v1, 0x6A($s0)
    ctx->pc = 0x2e3154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x2e3158: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x2e3158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x2e315c: 0xa203006a  sb          $v1, 0x6A($s0)
    ctx->pc = 0x2e315cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e3160: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E3160u;
    {
        const bool branch_taken_0x2e3160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3160) {
            ctx->pc = 0x2E3198u;
            goto label_2e3198;
        }
    }
    ctx->pc = 0x2E3168u;
label_2e3168:
    // 0x2e3168: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e3168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e316c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e316cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3170: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e3170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e3174: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e3174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3178: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e317c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e317cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e3180: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3184: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e3184u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3188: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e318c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e318cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3190: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e3190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3194: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e3194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2e3198:
    // 0x2e3198: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2e3198u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e319c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e319cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e31a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e31a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e31a4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e31a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e31a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E31A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E31A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E31B0u;
}
