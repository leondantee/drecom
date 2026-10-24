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

// Function: e2d_id63_type02
// Address: 0x2b9e10 - 0x2b9e78
void e2d_id63_type02_0x2b9e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id63_type02_0x2b9e10");
#endif

    switch (ctx->pc) {
        case 0x2b9e28u: goto label_2b9e28;
        default: break;
    }

    ctx->pc = 0x2b9e10u;

    // 0x2b9e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9e14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b9e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b9e18: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b9e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b9e1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b9e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9e20: 0xc0ae748  jal         func_2B9D20
    ctx->pc = 0x2B9E20u;
    SET_GPR_U32(ctx, 31, 0x2B9E28u);
    ctx->pc = 0x2B9D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9D20u, 0x2B9E20u, 0x2B9E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E28u;
label_2b9e28:
    // 0x2b9e28: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x2b9e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
    // 0x2b9e2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9e2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9e30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9e34: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b9e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b9e38: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x2b9e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x2b9e3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9e40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9e44: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b9e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b9e48: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x2b9e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x2b9e4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9e50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9e54: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b9e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b9e58: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b9e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b9e5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9e60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9e64: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b9e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b9e68: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b9e68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9e6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b9e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b9e70: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9E78u;
}
