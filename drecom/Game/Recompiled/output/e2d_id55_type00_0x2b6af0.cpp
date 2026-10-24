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

// Function: e2d_id55_type00
// Address: 0x2b6af0 - 0x2b6b28
void e2d_id55_type00_0x2b6af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id55_type00_0x2b6af0");
#endif

    switch (ctx->pc) {
        case 0x2b6b08u: goto label_2b6b08;
        default: break;
    }

    ctx->pc = 0x2b6af0u;

    // 0x2b6af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6af4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b6af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b6af8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b6af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b6afc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b6afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6b00: 0xc0ada68  jal         func_2B69A0
    ctx->pc = 0x2B6B00u;
    SET_GPR_U32(ctx, 31, 0x2B6B08u);
    ctx->pc = 0x2B69A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B69A0u, 0x2B6B00u, 0x2B6B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B08u;
label_2b6b08:
    // 0x2b6b08: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b6b0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6b10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6b14: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b6b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b6b18: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b6b18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6b1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b6b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b6b20: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6B28u;
}
