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

// Function: alignment
// Address: 0x1a2e70 - 0x1a2ed0
void alignment_0x1a2e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("alignment_0x1a2e70");
#endif

    ctx->pc = 0x1a2e70u;

    // 0x1a2e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2e74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a2e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a2e78: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1a2e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1a2e7c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1a2e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2e80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a2e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2e84: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1a2e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a2e88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a2e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a2e8c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a2e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a2e90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2e94: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a2e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a2e98: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a2e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2e9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a2e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a2ea0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a2ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2ea4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x1a2ea4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1a2ea8: 0x0  nop
    ctx->pc = 0x1a2ea8u;
    // NOP
    // 0x1a2eac: 0x0  nop
    ctx->pc = 0x1a2eacu;
    // NOP
    // 0x1a2eb0: 0x2810  mfhi        $a1
    ctx->pc = 0x1a2eb0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1a2eb4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a2eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2eb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a2ebc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a2ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a2ec0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a2ec4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a2ec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a2ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2ED0u;
}
