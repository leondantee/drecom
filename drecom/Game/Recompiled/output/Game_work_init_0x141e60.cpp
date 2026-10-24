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

// Function: Game_work_init
// Address: 0x141e60 - 0x141eb0
void Game_work_init_0x141e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Game_work_init_0x141e60");
#endif

    switch (ctx->pc) {
        case 0x141e80u: goto label_141e80;
        default: break;
    }

    ctx->pc = 0x141e60u;

    // 0x141e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x141e64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141e6c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x141e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x141e70: 0x2471fe10  addiu       $s1, $v1, -0x1F0
    ctx->pc = 0x141e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
    // 0x141e74: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x141e74u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141e78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x141E78u;
    {
        const bool branch_taken_0x141e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141e78) {
            ctx->pc = 0x141E90u;
            goto label_141e90;
        }
    }
    ctx->pc = 0x141E80u;
label_141e80:
    // 0x141e80: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x141e80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x141e84: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x141e84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x141e88: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x141e88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x141e8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x141e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_141e90:
    // 0x141e90: 0x2e030270  sltiu       $v1, $s0, 0x270
    ctx->pc = 0x141e90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)624) ? 1 : 0);
    // 0x141e94: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141E94u;
    {
        const bool branch_taken_0x141e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141e94) {
            ctx->pc = 0x141E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141e80;
        }
    }
    ctx->pc = 0x141E9Cu;
    // 0x141e9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141ea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141ea4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x141ea4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x141ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x141EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141EB0u;
}
