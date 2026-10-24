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

// Function: Em00_evt_yougan
// Address: 0x2cfbe0 - 0x2d00b0
void Em00_evt_yougan_0x2cfbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_evt_yougan_0x2cfbe0");
#endif

    switch (ctx->pc) {
        case 0x2cfc40u: goto label_2cfc40;
        case 0x2cfc8cu: goto label_2cfc8c;
        case 0x2cfd10u: goto label_2cfd10;
        case 0x2cfe18u: goto label_2cfe18;
        case 0x2cfe78u: goto label_2cfe78;
        case 0x2cfefcu: goto label_2cfefc;
        case 0x2cff0cu: goto label_2cff0c;
        case 0x2cff90u: goto label_2cff90;
        case 0x2d00a0u: goto label_2d00a0;
        default: break;
    }

    ctx->pc = 0x2cfbe0u;

    // 0x2cfbe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cfbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cfbe4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2cfbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2cfbe8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2cfbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2cfbec: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2cfbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2cfbf0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfbf4: 0x244286f0  addiu       $v0, $v0, -0x7910
    ctx->pc = 0x2cfbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936304));
    // 0x2cfbf8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2cfbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cfbfc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2cfbfcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3986F0u));
    // 0x2cfc00: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2cfc00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2cfc04: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfc08: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x2cfc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x2cfc0c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2cfc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cfc10: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2cfc10u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398700u));
    // 0x2cfc14: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2cfc14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2cfc18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfc1c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfc20: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfc24: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfc28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfc2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cfc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfc30: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CFC30u;
    {
        const bool branch_taken_0x2cfc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc30) {
            ctx->pc = 0x2CFC94u;
            goto label_2cfc94;
        }
    }
    ctx->pc = 0x2CFC38u;
    // 0x2cfc38: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2CFC38u;
    SET_GPR_U32(ctx, 31, 0x2CFC40u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2CFC38u, 0x2CFC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFC40u;
label_2cfc40:
    // 0x2cfc40: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2cfc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2cfc44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cfc44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cfc48: 0x0  nop
    ctx->pc = 0x2cfc48u;
    // NOP
    // 0x2cfc4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cfc4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cfc50: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2cfc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cfc54: 0x3c02c448  lui         $v0, 0xC448
    ctx->pc = 0x2cfc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50248 << 16));
    // 0x2cfc58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfc5c: 0x0  nop
    ctx->pc = 0x2cfc5cu;
    // NOP
    // 0x2cfc60: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2cfc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2cfc64: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2cfc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2cfc68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfc6c: 0x0  nop
    ctx->pc = 0x2cfc6cu;
    // NOP
    // 0x2cfc70: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cfc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cfc74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cfc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cfc78: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2cfc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cfc7c: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x2cfc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cfc80: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2cfc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cfc84: 0xc0d5fb4  jal         func_357ED0
    ctx->pc = 0x2CFC84u;
    SET_GPR_U32(ctx, 31, 0x2CFC8Cu);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2CFC84u, 0x2CFC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFC8Cu;
label_2cfc8c:
    // 0x2cfc8c: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x2CFC8Cu;
    {
        const bool branch_taken_0x2cfc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc8c) {
            ctx->pc = 0x2D00A0u;
            goto label_2d00a0;
        }
    }
    ctx->pc = 0x2CFC94u;
label_2cfc94:
    // 0x2cfc94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfc98: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfc9c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfca0: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfca8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cfca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfcac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cfcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cfcb0: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CFCB0u;
    {
        const bool branch_taken_0x2cfcb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cfcb0) {
            ctx->pc = 0x2CFD18u;
            goto label_2cfd18;
        }
    }
    ctx->pc = 0x2CFCB8u;
    // 0x2cfcb8: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x2cfcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x2cfcbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfcbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfcc0: 0x0  nop
    ctx->pc = 0x2cfcc0u;
    // NOP
    // 0x2cfcc4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2cfcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2cfcc8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2cfcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2cfccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfcccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfcd0: 0x0  nop
    ctx->pc = 0x2cfcd0u;
    // NOP
    // 0x2cfcd4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cfcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cfcd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfcdc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfce0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfce4: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfce8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfcec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cfcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfcf0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2cfcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2cfcf4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cfcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cfcf8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2cfcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cfcfc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2cfcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfd00: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2cfd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cfd04: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2cfd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cfd08: 0xc0d5fb4  jal         func_357ED0
    ctx->pc = 0x2CFD08u;
    SET_GPR_U32(ctx, 31, 0x2CFD10u);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2CFD08u, 0x2CFD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFD10u;
label_2cfd10:
    // 0x2cfd10: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x2CFD10u;
    {
        const bool branch_taken_0x2cfd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd10) {
            ctx->pc = 0x2D00A0u;
            goto label_2d00a0;
        }
    }
    ctx->pc = 0x2CFD18u;
label_2cfd18:
    // 0x2cfd18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfd1c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfd20: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfd24: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfd28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfd2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cfd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfd30: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x2cfd30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2cfd34: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CFD34u;
    {
        const bool branch_taken_0x2cfd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd34) {
            ctx->pc = 0x2CFD80u;
            goto label_2cfd80;
        }
    }
    ctx->pc = 0x2CFD3Cu;
    // 0x2cfd3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfd40: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfd44: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfd48: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfd4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfd50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cfd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfd54: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x2cfd54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2cfd58: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CFD58u;
    {
        const bool branch_taken_0x2cfd58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd58) {
            ctx->pc = 0x2CFD80u;
            goto label_2cfd80;
        }
    }
    ctx->pc = 0x2CFD60u;
    // 0x2cfd60: 0x3c02bfef  lui         $v0, 0xBFEF
    ctx->pc = 0x2cfd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49135 << 16));
    // 0x2cfd64: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x2cfd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x2cfd68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfd6c: 0x0  nop
    ctx->pc = 0x2cfd6cu;
    // NOP
    // 0x2cfd70: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2cfd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2cfd74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cfd74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfd78: 0x0  nop
    ctx->pc = 0x2cfd78u;
    // NOP
    // 0x2cfd7c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2cfd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2cfd80:
    // 0x2cfd80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfd84: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfd88: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfd8c: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfd90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfd94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cfd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfd98: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x2cfd98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2cfd9c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CFD9Cu;
    {
        const bool branch_taken_0x2cfd9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfd9c) {
            ctx->pc = 0x2CFDB8u;
            goto label_2cfdb8;
        }
    }
    ctx->pc = 0x2CFDA4u;
    // 0x2cfda4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2cfda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2cfda8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2cfda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2cfdac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfdb0: 0x0  nop
    ctx->pc = 0x2cfdb0u;
    // NOP
    // 0x2cfdb4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2cfdb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2cfdb8:
    // 0x2cfdb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfdbc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfdc0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfdc4: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfdc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfdcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cfdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfdd0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2cfdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cfdd4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CFDD4u;
    {
        const bool branch_taken_0x2cfdd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cfdd4) {
            ctx->pc = 0x2CFE00u;
            goto label_2cfe00;
        }
    }
    ctx->pc = 0x2CFDDCu;
    // 0x2cfddc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfde0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfde0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfde4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfde8: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfdec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfdf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cfdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfdf4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2cfdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2cfdf8: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2CFDF8u;
    {
        const bool branch_taken_0x2cfdf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cfdf8) {
            ctx->pc = 0x2CFF04u;
            goto label_2cff04;
        }
    }
    ctx->pc = 0x2CFE00u;
label_2cfe00:
    // 0x2cfe00: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2cfe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2cfe04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfe04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfe08: 0x0  nop
    ctx->pc = 0x2cfe08u;
    // NOP
    // 0x2cfe0c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2cfe0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2cfe10: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2CFE10u;
    SET_GPR_U32(ctx, 31, 0x2CFE18u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2CFE10u, 0x2CFE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE18u;
label_2cfe18:
    // 0x2cfe18: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2cfe18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2cfe1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cfe1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cfe20: 0x0  nop
    ctx->pc = 0x2cfe20u;
    // NOP
    // 0x2cfe24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cfe24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cfe28: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2cfe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2cfe2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfe2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfe30: 0x0  nop
    ctx->pc = 0x2cfe30u;
    // NOP
    // 0x2cfe34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cfe34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cfe38: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cfe38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cfe3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfe40: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfe40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfe44: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfe44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfe48: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfe4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfe50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cfe50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfe54: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2cfe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cfe58: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFE58u;
    {
        const bool branch_taken_0x2cfe58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cfe58) {
            ctx->pc = 0x2CFE70u;
            goto label_2cfe70;
        }
    }
    ctx->pc = 0x2CFE60u;
    // 0x2cfe60: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x2cfe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x2cfe64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfe64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfe68: 0x0  nop
    ctx->pc = 0x2cfe68u;
    // NOP
    // 0x2cfe6c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2cfe6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2cfe70:
    // 0x2cfe70: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2CFE70u;
    SET_GPR_U32(ctx, 31, 0x2CFE78u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2CFE70u, 0x2CFE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFE78u;
label_2cfe78:
    // 0x2cfe78: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2cfe7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cfe7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cfe80: 0x0  nop
    ctx->pc = 0x2cfe80u;
    // NOP
    // 0x2cfe84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cfe84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cfe88: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cfe88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2cfe8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cfe8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfe90: 0x0  nop
    ctx->pc = 0x2cfe90u;
    // NOP
    // 0x2cfe94: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cfe94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cfe98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfe9c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfea0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfea4: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfeac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2cfeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfeb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cfeb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cfeb4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2cfeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2cfeb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cfeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cfebc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cfebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cfec0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cfec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cfec4: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cfec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cfec8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cfec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfecc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cfeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfed0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2cfed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2cfed4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cfed8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2cfed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cfedc: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x2cfedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cfee0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2cfee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cfee4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2cfee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cfee8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2cfee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cfeec: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2cfeecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cfef0: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x2cfef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cfef4: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x2CFEF4u;
    SET_GPR_U32(ctx, 31, 0x2CFEFCu);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2CFEF4u, 0x2CFEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFEFCu;
label_2cfefc:
    // 0x2cfefc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2CFEFCu;
    {
        const bool branch_taken_0x2cfefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfefc) {
            ctx->pc = 0x2D00A0u;
            goto label_2d00a0;
        }
    }
    ctx->pc = 0x2CFF04u;
label_2cff04:
    // 0x2cff04: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2CFF04u;
    SET_GPR_U32(ctx, 31, 0x2CFF0Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2CFF04u, 0x2CFF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFF0Cu;
label_2cff0c:
    // 0x2cff0c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2cff10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cff10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cff14: 0x0  nop
    ctx->pc = 0x2cff14u;
    // NOP
    // 0x2cff18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cff18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cff1c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2cff20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cff20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cff24: 0x0  nop
    ctx->pc = 0x2cff24u;
    // NOP
    // 0x2cff28: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cff28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cff2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cff30: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cff30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cff34: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cff34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cff38: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cff3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cff40: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2cff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cff44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cff44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cff48: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2cff48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2cff4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cff50: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2cff50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2cff54: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2cff54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2cff58: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2cff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2cff5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cff60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cff64: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2cff64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2cff68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2cff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cff6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2cff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2cff70: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x2cff70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cff74: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2cff74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cff78: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2cff78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cff7c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2cff7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cff80: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2cff80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cff84: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x2cff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cff88: 0xc0d5f88  jal         func_357E20
    ctx->pc = 0x2CFF88u;
    SET_GPR_U32(ctx, 31, 0x2CFF90u);
    ctx->pc = 0x357E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E20u, 0x2CFF88u, 0x2CFF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFF90u;
label_2cff90:
    // 0x2cff90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cff94: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x2cff94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2cff98: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CFF98u;
    {
        const bool branch_taken_0x2cff98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cff98) {
            ctx->pc = 0x2CFFC0u;
            goto label_2cffc0;
        }
    }
    ctx->pc = 0x2CFFA0u;
    // 0x2cffa0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2cffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cffa4: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x2cffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x2cffa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cffa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cffac: 0x0  nop
    ctx->pc = 0x2cffacu;
    // NOP
    // 0x2cffb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cffb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cffb4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cffb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cffb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CFFB8u;
    {
        const bool branch_taken_0x2cffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cffb8) {
            ctx->pc = 0x2CFFD8u;
            goto label_2cffd8;
        }
    }
    ctx->pc = 0x2CFFC0u;
label_2cffc0:
    // 0x2cffc0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2cffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cffc4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2cffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2cffc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cffc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cffcc: 0x0  nop
    ctx->pc = 0x2cffccu;
    // NOP
    // 0x2cffd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cffd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cffd4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cffd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2cffd8:
    // 0x2cffd8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cffd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cffdc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2cffe0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2cffe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2cffe4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cffe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cffec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cffecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cfff0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2cfff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2cfff4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cfff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cfff8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cfff8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2cfffc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2cfffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d0000: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d0000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d0004: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d0004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d0008: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2d0008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2d000c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2d000cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2d0010: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d0010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d0014: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d0014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d0018: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2d0018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d001c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d001cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d0020: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2d0020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2d0024: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D0024u;
    {
        const bool branch_taken_0x2d0024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0024) {
            ctx->pc = 0x2D00A0u;
            goto label_2d00a0;
        }
    }
    ctx->pc = 0x2D002Cu;
    // 0x2d002c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d0030: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0034: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0038: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2d0038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2d003c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0040: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0044: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d0044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0048: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d0048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d004c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d0050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0054: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2d0054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0058: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2d0058u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2d005c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2d005cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0060: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d0060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d0064: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2d0064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d0068: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2d0068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d006c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d006cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0070: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d0070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d0074: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x2d0074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x2d0078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d007c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0080: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2d0080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d0084: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d0084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0088: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d0088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d008c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2d008cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0090: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d0090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0094: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d0094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0098: 0xc0d5fb4  jal         func_357ED0
    ctx->pc = 0x2D0098u;
    SET_GPR_U32(ctx, 31, 0x2D00A0u);
    ctx->pc = 0x357ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357ED0u, 0x2D0098u, 0x2D00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00A0u;
label_2d00a0:
    // 0x2d00a0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d00a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d00a4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d00a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d00a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D00A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D00A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D00B0u;
}
