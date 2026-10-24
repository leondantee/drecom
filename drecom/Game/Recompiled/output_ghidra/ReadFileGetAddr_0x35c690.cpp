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

// Function: ReadFileGetAddr
// Address: 0x35c690 - 0x35c6ec
void ReadFileGetAddr_0x35c690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadFileGetAddr_0x35c690");
#endif

    ctx->pc = 0x35c690u;

    // 0x35c690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35c690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35c694: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35c698: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x35c698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x35c69c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x35c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x35c6a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x35c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c6a4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x35c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35c6a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x35c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c6ac: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x35c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x35c6b0: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x35c6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35c6b4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35C6B4u;
    {
        const bool branch_taken_0x35c6b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c6b4) {
            ctx->pc = 0x35C6D8u;
            goto label_35c6d8;
        }
    }
    ctx->pc = 0x35C6BCu;
    // 0x35c6bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x35c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c6c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x35c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c6c4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x35c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35c6c8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x35c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x35c6cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35c6d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35c6d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35c6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_35c6d8:
    // 0x35c6d8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x35c6d8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x35c6dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c6e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35c6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35c6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x35C6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C6ECu;
}
