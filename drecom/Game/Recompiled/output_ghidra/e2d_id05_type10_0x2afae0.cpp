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

// Function: e2d_id05_type10
// Address: 0x2afae0 - 0x2afb38
void e2d_id05_type10_0x2afae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type10_0x2afae0");
#endif

    switch (ctx->pc) {
        case 0x2afaf8u: goto label_2afaf8;
        default: break;
    }

    ctx->pc = 0x2afae0u;

    // 0x2afae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2afae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2afae4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2afae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2afae8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2afae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2afaec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2afaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afaf0: 0xc0abd70  jal         func_2AF5C0
    ctx->pc = 0x2AFAF0u;
    SET_GPR_U32(ctx, 31, 0x2AFAF8u);
    ctx->pc = 0x2AF5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF5C0u, 0x2AFAF0u, 0x2AFAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFAF8u;
label_2afaf8:
    // 0x2afaf8: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2afaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2afafc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afafcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afb00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2afb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afb04: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2afb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2afb08: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2afb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2afb0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afb0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afb10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2afb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afb14: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2afb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2afb18: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2afb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2afb1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afb1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afb20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2afb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afb24: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2afb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2afb28: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2afb28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afb2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2afb2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2afb30: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFB38u;
}
