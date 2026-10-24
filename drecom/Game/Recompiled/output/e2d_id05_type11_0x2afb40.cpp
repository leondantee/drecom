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

// Function: e2d_id05_type11
// Address: 0x2afb40 - 0x2afb98
void e2d_id05_type11_0x2afb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type11_0x2afb40");
#endif

    switch (ctx->pc) {
        case 0x2afb58u: goto label_2afb58;
        default: break;
    }

    ctx->pc = 0x2afb40u;

    // 0x2afb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2afb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2afb44: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2afb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2afb48: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2afb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2afb4c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2afb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afb50: 0xc0abe88  jal         func_2AFA20
    ctx->pc = 0x2AFB50u;
    SET_GPR_U32(ctx, 31, 0x2AFB58u);
    ctx->pc = 0x2AFA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFA20u, 0x2AFB50u, 0x2AFB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFB58u;
label_2afb58:
    // 0x2afb58: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2afb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2afb5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afb5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afb60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2afb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afb64: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2afb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2afb68: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2afb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2afb6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afb6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afb70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2afb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afb74: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2afb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2afb78: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2afb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2afb7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2afb7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afb80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2afb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2afb84: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2afb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2afb88: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2afb88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afb8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2afb8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2afb90: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFB98u;
}
