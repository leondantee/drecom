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

// Function: Eff2d_init_common
// Address: 0x326460 - 0x3264c0
void Eff2d_init_common_0x326460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff2d_init_common_0x326460");
#endif

    switch (ctx->pc) {
        case 0x326494u: goto label_326494;
        default: break;
    }

    ctx->pc = 0x326460u;

    // 0x326460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x326464: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x326464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x326468: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x326468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x32646c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x32646cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326470: 0xc46100f8  lwc1        $f1, 0xF8($v1)
    ctx->pc = 0x326470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326474: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x326474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326478: 0x0  nop
    ctx->pc = 0x326478u;
    // NOP
    // 0x32647c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x32647cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x326480: 0x0  nop
    ctx->pc = 0x326480u;
    // NOP
    // 0x326484: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x326484u;
    {
        const bool branch_taken_0x326484 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x326484) {
            ctx->pc = 0x3264B0u;
            goto label_3264b0;
        }
    }
    ctx->pc = 0x32648Cu;
    // 0x32648c: 0xc067648  jal         func_19D920
    ctx->pc = 0x32648Cu;
    SET_GPR_U32(ctx, 31, 0x326494u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x32648Cu, 0x326494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326494u;
label_326494:
    // 0x326494: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x326494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326498: 0xc46100f8  lwc1        $f1, 0xF8($v1)
    ctx->pc = 0x326498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32649c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32649cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3264a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3264a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3264a4: 0xc46000f4  lwc1        $f0, 0xF4($v1)
    ctx->pc = 0x3264a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3264a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3264a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3264ac: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x3264acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
label_3264b0:
    // 0x3264b0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3264b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3264b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3264b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3264b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3264B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3264B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3264C0u;
}
