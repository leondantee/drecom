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

// Function: e2d_id58_type05
// Address: 0x2b7610 - 0x2b76a0
void e2d_id58_type05_0x2b7610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id58_type05_0x2b7610");
#endif

    switch (ctx->pc) {
        case 0x2b7628u: goto label_2b7628;
        case 0x2b7650u: goto label_2b7650;
        case 0x2b7674u: goto label_2b7674;
        default: break;
    }

    ctx->pc = 0x2b7610u;

    // 0x2b7610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b7610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b7614: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b7614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b7618: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b7618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b761c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b761cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7620: 0xc0adc78  jal         func_2B71E0
    ctx->pc = 0x2B7620u;
    SET_GPR_U32(ctx, 31, 0x2B7628u);
    ctx->pc = 0x2B71E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B71E0u, 0x2B7620u, 0x2B7628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7628u;
label_2b7628:
    // 0x2b7628: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b7628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b762c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b762cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7630: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b7630u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7634: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2b7634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2b7638: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b7638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b763c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b763cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7640: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7644: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2b7644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2b7648: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B7648u;
    SET_GPR_U32(ctx, 31, 0x2B7650u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B7648u, 0x2B7650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7650u;
label_2b7650:
    // 0x2b7650: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x2b7650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7654: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b7654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b7658: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b7658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b765c: 0x0  nop
    ctx->pc = 0x2b765cu;
    // NOP
    // 0x2b7660: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7664: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b7664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7668: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b7668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2b766c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B766Cu;
    SET_GPR_U32(ctx, 31, 0x2B7674u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B766Cu, 0x2B7674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7674u;
label_2b7674:
    // 0x2b7674: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x2b7674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
    // 0x2b7678: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b7678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b767c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b767cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7680: 0x0  nop
    ctx->pc = 0x2b7680u;
    // NOP
    // 0x2b7684: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b7684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b7688: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b7688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b768c: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2b768cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2b7690: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b7690u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7694: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b7694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b7698: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B76A0u;
}
