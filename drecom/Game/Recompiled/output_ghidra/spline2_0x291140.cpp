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

// Function: spline2
// Address: 0x291140 - 0x2911c4
void spline2_0x291140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("spline2_0x291140");
#endif

    switch (ctx->pc) {
        case 0x291188u: goto label_291188;
        case 0x2911acu: goto label_2911ac;
        default: break;
    }

    ctx->pc = 0x291140u;

    // 0x291140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x291140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x291144: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x291144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x291148: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x291148u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29114c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29114cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x291150: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x291150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x291154: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x291154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x291158: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x291158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x29115c: 0xafa80040  sw          $t0, 0x40($sp)
    ctx->pc = 0x29115cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 8));
    // 0x291160: 0xafa90048  sw          $t1, 0x48($sp)
    ctx->pc = 0x291160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 9));
    // 0x291164: 0xafaa0050  sw          $t2, 0x50($sp)
    ctx->pc = 0x291164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 10));
    // 0x291168: 0xafab0058  sw          $t3, 0x58($sp)
    ctx->pc = 0x291168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 11));
    // 0x29116c: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x29116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291170: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x291170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291174: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x291174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x291178: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x291178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29117c: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x29117cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x291180: 0xc0a4368  jal         func_290DA0
    ctx->pc = 0x291180u;
    SET_GPR_U32(ctx, 31, 0x291188u);
    ctx->pc = 0x290DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290DA0u, 0x291180u, 0x291188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291188u;
label_291188:
    // 0x291188: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x291188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29118c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29118cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x291190: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x291190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x291194: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x291194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291198: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x291198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29119c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x29119cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2911a0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x2911a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2911a4: 0xc0a4368  jal         func_290DA0
    ctx->pc = 0x2911A4u;
    SET_GPR_U32(ctx, 31, 0x2911ACu);
    ctx->pc = 0x290DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290DA0u, 0x2911A4u, 0x2911ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2911ACu;
label_2911ac:
    // 0x2911ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2911acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2911b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2911b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2911b4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2911b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2911b8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2911b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2911bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2911BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2911BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2911C4u;
}
