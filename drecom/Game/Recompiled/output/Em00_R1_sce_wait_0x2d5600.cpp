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

// Function: Em00_R1_sce_wait
// Address: 0x2d5600 - 0x2d5628
void Em00_R1_sce_wait_0x2d5600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_sce_wait_0x2d5600");
#endif

    ctx->pc = 0x2d5600u;

    // 0x2d5600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d5604: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2d5604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2d5608: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2d5608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d560c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2d560cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d5610: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2d5610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2d5614: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d5614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d5618: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2d5618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2d561c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d561cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d5620: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5628u;
}
