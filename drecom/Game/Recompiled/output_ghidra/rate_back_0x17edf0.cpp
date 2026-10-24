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

// Function: rate_back
// Address: 0x17edf0 - 0x17eec8
void rate_back_0x17edf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("rate_back_0x17edf0");
#endif

    switch (ctx->pc) {
        case 0x17ee20u: goto label_17ee20;
        default: break;
    }

    ctx->pc = 0x17edf0u;

    // 0x17edf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17edf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17edf4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x17edf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x17edf8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x17edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x17edfc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x17ee00: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x17ee00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x17ee04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x17ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ee08: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17EE08u;
    {
        const bool branch_taken_0x17ee08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ee08) {
            ctx->pc = 0x17EE2Cu;
            goto label_17ee2c;
        }
    }
    ctx->pc = 0x17EE10u;
    // 0x17ee10: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x17ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ee14: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x17ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ee18: 0xc05fbb4  jal         func_17EED0
    ctx->pc = 0x17EE18u;
    SET_GPR_U32(ctx, 31, 0x17EE20u);
    ctx->pc = 0x17EED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EED0u, 0x17EE18u, 0x17EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EE20u;
label_17ee20:
    // 0x17ee20: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x17ee20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x17ee24: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x17EE24u;
    {
        const bool branch_taken_0x17ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ee24) {
            ctx->pc = 0x17EEB4u;
            goto label_17eeb4;
        }
    }
    ctx->pc = 0x17EE2Cu;
label_17ee2c:
    // 0x17ee2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ee30: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17EE30u;
    {
        const bool branch_taken_0x17ee30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17ee30) {
            ctx->pc = 0x17EE4Cu;
            goto label_17ee4c;
        }
    }
    ctx->pc = 0x17EE38u;
    // 0x17ee38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ee38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ee3c: 0x0  nop
    ctx->pc = 0x17ee3cu;
    // NOP
    // 0x17ee40: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17ee40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17ee44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17EE44u;
    {
        const bool branch_taken_0x17ee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ee44) {
            ctx->pc = 0x17EE68u;
            goto label_17ee68;
        }
    }
    ctx->pc = 0x17EE4Cu;
label_17ee4c:
    // 0x17ee4c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17ee50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17ee50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17ee54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17ee54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17ee58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17ee58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ee5c: 0x0  nop
    ctx->pc = 0x17ee5cu;
    // NOP
    // 0x17ee60: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17ee60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17ee64: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17ee64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17ee68:
    // 0x17ee68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x17ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ee6c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17EE6Cu;
    {
        const bool branch_taken_0x17ee6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17ee6c) {
            ctx->pc = 0x17EE88u;
            goto label_17ee88;
        }
    }
    ctx->pc = 0x17EE74u;
    // 0x17ee74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ee74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ee78: 0x0  nop
    ctx->pc = 0x17ee78u;
    // NOP
    // 0x17ee7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17ee7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17ee80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17EE80u;
    {
        const bool branch_taken_0x17ee80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ee80) {
            ctx->pc = 0x17EEA4u;
            goto label_17eea4;
        }
    }
    ctx->pc = 0x17EE88u;
label_17ee88:
    // 0x17ee88: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17ee88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17ee8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17ee8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17ee90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17ee90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17ee94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17ee94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ee98: 0x0  nop
    ctx->pc = 0x17ee98u;
    // NOP
    // 0x17ee9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17ee9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17eea0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17eea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17eea4:
    // 0x17eea4: 0x0  nop
    ctx->pc = 0x17eea4u;
    // NOP
    // 0x17eea8: 0x0  nop
    ctx->pc = 0x17eea8u;
    // NOP
    // 0x17eeac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17eeacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17eeb0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x17eeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_17eeb4:
    // 0x17eeb4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x17eeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eeb8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x17eeb8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eebc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x17eebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17eec0: 0x3e00008  jr          $ra
    ctx->pc = 0x17EEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EEC8u;
}
