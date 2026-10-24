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

// Function: BgmTblSet
// Address: 0x19fc60 - 0x19fca8
void BgmTblSet_0x19fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BgmTblSet_0x19fc60");
#endif

    ctx->pc = 0x19fc60u;

    // 0x19fc60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19fc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fc64: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x19fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x19fc68: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x19fc68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19fc6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19fc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19fc70: 0x8c230068  lw          $v1, 0x68($at)
    ctx->pc = 0x19fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0068u));
    // 0x19fc74: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x19fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19fc78: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x19fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x19fc7c: 0x24637e40  addiu       $v1, $v1, 0x7E40
    ctx->pc = 0x19fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32320));
    // 0x19fc80: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x19fc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19fc84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19fc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19fc88: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x19fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x19fc8c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x19fc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19fc90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19fc94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19fc98: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x19fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x19fc9c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19fc9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19fca0: 0x3e00008  jr          $ra
    ctx->pc = 0x19FCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FCA8u;
}
