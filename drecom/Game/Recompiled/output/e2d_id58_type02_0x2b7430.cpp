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

// Function: e2d_id58_type02
// Address: 0x2b7430 - 0x2b74c0
void e2d_id58_type02_0x2b7430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_type02_0x2b7430");
#endif

    switch (ctx->pc) {
        case 0x2b7448u: goto label_2b7448;
        case 0x2b7470u: goto label_2b7470;
        case 0x2b7494u: goto label_2b7494;
        default: break;
    }

    ctx->pc = 0x2b7430u;

    // 0x2b7430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7434: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b7434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b7438: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b7438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b743c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b743cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7440: 0xc0adc3c  jal         func_2B70F0
    ctx->pc = 0x2B7440u;
    SET_GPR_U32(ctx, 31, 0x2B7448u);
    ctx->pc = 0x2B70F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B70F0u, 0x2B7440u, 0x2B7448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7448u;
label_2b7448:
    // 0x2b7448: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b7448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b744c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7450: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b7450u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7454: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2b7454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2b7458: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b7458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b745c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b745cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7460: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7464: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2b7464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2b7468: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7468u;
    SET_GPR_U32(ctx, 31, 0x2B7470u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7468u, 0x2B7470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7470u;
label_2b7470:
    // 0x2b7470: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x2b7470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7474: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b7474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b7478: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b747c: 0x0  nop
    ctx->pc = 0x2b747cu;
    // NOP
    // 0x2b7480: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7484: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7488: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b7488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b748c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B748Cu;
    SET_GPR_U32(ctx, 31, 0x2B7494u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B748Cu, 0x2B7494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7494u;
label_2b7494:
    // 0x2b7494: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x2b7494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7498: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b7498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b749c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b749cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b74a0: 0x0  nop
    ctx->pc = 0x2b74a0u;
    // NOP
    // 0x2b74a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b74a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b74a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b74a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b74ac: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2b74acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2b74b0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b74b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b74b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b74b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b74b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B74B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B74B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B74C0u;
}
