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

// Function: e2d_id55_type05
// Address: 0x2b6cf0 - 0x2b6d28
void e2d_id55_type05_0x2b6cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id55_type05_0x2b6cf0");
#endif

    switch (ctx->pc) {
        case 0x2b6d08u: goto label_2b6d08;
        default: break;
    }

    ctx->pc = 0x2b6cf0u;

    // 0x2b6cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6cf4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b6cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b6cf8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b6cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b6cfc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b6cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6d00: 0xc0ada68  jal         func_2B69A0
    ctx->pc = 0x2B6D00u;
    SET_GPR_U32(ctx, 31, 0x2B6D08u);
    ctx->pc = 0x2B69A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B69A0u, 0x2B6D00u, 0x2B6D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6D08u;
label_2b6d08:
    // 0x2b6d08: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2b6d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2b6d0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6d10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6d14: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b6d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b6d18: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b6d18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6d1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b6d1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b6d20: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6D28u;
}
