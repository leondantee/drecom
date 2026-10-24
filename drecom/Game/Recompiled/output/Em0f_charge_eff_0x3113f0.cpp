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

// Function: Em0f_charge_eff
// Address: 0x3113f0 - 0x311508
void Em0f_charge_eff_0x3113f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_charge_eff_0x3113f0");
#endif

    switch (ctx->pc) {
        case 0x311410u: goto label_311410;
        case 0x311418u: goto label_311418;
        case 0x311434u: goto label_311434;
        case 0x311450u: goto label_311450;
        case 0x3114e4u: goto label_3114e4;
        default: break;
    }

    ctx->pc = 0x3113f0u;

    // 0x3113f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3113f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3113f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3113f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3113f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3113f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3113fc: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x3113fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x311400: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x311400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x311404: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x311404u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311408: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x311408u;
    {
        const bool branch_taken_0x311408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x311408) {
            ctx->pc = 0x3114E8u;
            goto label_3114e8;
        }
    }
    ctx->pc = 0x311410u;
label_311410:
    // 0x311410: 0xc06765c  jal         func_19D970
    ctx->pc = 0x311410u;
    SET_GPR_U32(ctx, 31, 0x311418u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x311410u, 0x311418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311418u;
label_311418:
    // 0x311418: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x311418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x31141c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31141cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311420: 0x0  nop
    ctx->pc = 0x311420u;
    // NOP
    // 0x311424: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x311424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311428: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x311428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x31142c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x31142Cu;
    SET_GPR_U32(ctx, 31, 0x311434u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x31142Cu, 0x311434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311434u;
label_311434:
    // 0x311434: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x311434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x311438: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31143c: 0x0  nop
    ctx->pc = 0x31143cu;
    // NOP
    // 0x311440: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x311440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311444: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x311444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x311448: 0xc06765c  jal         func_19D970
    ctx->pc = 0x311448u;
    SET_GPR_U32(ctx, 31, 0x311450u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x311448u, 0x311450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311450u;
label_311450:
    // 0x311450: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x311450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x311454: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x311454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x311458: 0x0  nop
    ctx->pc = 0x311458u;
    // NOP
    // 0x31145c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31145cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x311460: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x311460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x311464: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x311464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x311468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31146c: 0x0  nop
    ctx->pc = 0x31146cu;
    // NOP
    // 0x311470: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x311470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x311474: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311478: 0x0  nop
    ctx->pc = 0x311478u;
    // NOP
    // 0x31147c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x31147cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x311480: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x311480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311484: 0x0  nop
    ctx->pc = 0x311484u;
    // NOP
    // 0x311488: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x311488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x31148c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31148cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311490: 0x0  nop
    ctx->pc = 0x311490u;
    // NOP
    // 0x311494: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x311494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x311498: 0x3c023d99  lui         $v0, 0x3D99
    ctx->pc = 0x311498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15769 << 16));
    // 0x31149c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31149cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3114a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3114a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3114a4: 0x0  nop
    ctx->pc = 0x3114a4u;
    // NOP
    // 0x3114a8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3114a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3114ac: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3114acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x3114b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3114b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3114b4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3114b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x3114b8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3114b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3114bc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x3114bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x3114c0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3114c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3114c4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x3114c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x3114c8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x3114c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x3114cc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x3114ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3114d0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3114d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3114d4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3114d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3114d8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x3114d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3114dc: 0xc086584  jal         func_219610
    ctx->pc = 0x3114DCu;
    SET_GPR_U32(ctx, 31, 0x3114E4u);
    ctx->pc = 0x219610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219610u, 0x3114DCu, 0x3114E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3114E4u;
label_3114e4:
    // 0x3114e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3114e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3114e8:
    // 0x3114e8: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x3114e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3114ec: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x3114ECu;
    {
        const bool branch_taken_0x3114ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3114ec) {
            ctx->pc = 0x311410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311410;
        }
    }
    ctx->pc = 0x3114F4u;
    // 0x3114f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3114f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3114f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3114f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3114fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3114fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x311500: 0x3e00008  jr          $ra
    ctx->pc = 0x311500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311508u;
}
