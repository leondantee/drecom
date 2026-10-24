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

// Function: e2d_id91_type00
// Address: 0x2be700 - 0x2be74c
void e2d_id91_type00_0x2be700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id91_type00_0x2be700");
#endif

    switch (ctx->pc) {
        case 0x2be714u: goto label_2be714;
        default: break;
    }

    ctx->pc = 0x2be700u;

    // 0x2be700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2be700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2be704: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2be704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2be708: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2be708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2be70c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BE70Cu;
    SET_GPR_U32(ctx, 31, 0x2BE714u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BE70Cu, 0x2BE714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE714u;
label_2be714:
    // 0x2be714: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2be714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2be718: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2be718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2be71c: 0x0  nop
    ctx->pc = 0x2be71cu;
    // NOP
    // 0x2be720: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2be720u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2be724: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x2be724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x2be728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2be728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2be72c: 0x0  nop
    ctx->pc = 0x2be72cu;
    // NOP
    // 0x2be730: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2be734: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2be734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2be738: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2be738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2be73c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2be73cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be740: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2be740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2be744: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE74Cu;
}
