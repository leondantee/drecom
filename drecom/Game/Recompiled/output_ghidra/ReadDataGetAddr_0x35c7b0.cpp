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

// Function: ReadDataGetAddr
// Address: 0x35c7b0 - 0x35c82c
void ReadDataGetAddr_0x35c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadDataGetAddr_0x35c7b0");
#endif

    ctx->pc = 0x35c7b0u;

    // 0x35c7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c7b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x35c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x35c7b8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x35c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x35c7bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c7c0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x35c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x35c7c4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35C7C4u;
    {
        const bool branch_taken_0x35c7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c7c4) {
            ctx->pc = 0x35C818u;
            goto label_35c818;
        }
    }
    ctx->pc = 0x35C7CCu;
    // 0x35c7cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c7d0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x35c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x35c7d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c7d8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x35c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x35c7dc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x35c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35c7e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c7e4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x35c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35c7e8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x35c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35c7ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c7f0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x35c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35c7f4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x35c7f4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x35c7f8: 0x0  nop
    ctx->pc = 0x35c7f8u;
    // NOP
    // 0x35c7fc: 0x0  nop
    ctx->pc = 0x35c7fcu;
    // NOP
    // 0x35c800: 0x1810  mfhi        $v1
    ctx->pc = 0x35c800u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x35c804: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35c804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c808: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x35c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35c80c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x35c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35c810: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35c810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c814: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35c814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_35c818:
    // 0x35c818: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x35c818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c81c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x35c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x35c820: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35c820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35c824: 0x3e00008  jr          $ra
    ctx->pc = 0x35C824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C82Cu;
}
