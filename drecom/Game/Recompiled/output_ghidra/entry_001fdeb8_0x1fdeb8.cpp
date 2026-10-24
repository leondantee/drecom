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

// Function: entry_001fdeb8
// Address: 0x1fdeb8 - 0x1fdef8
void entry_001fdeb8_0x1fdeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdeb8_0x1fdeb8");
#endif

    ctx->pc = 0x1fdeb8u;

    // 0x1fdeb8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdebc: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fdebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fdec0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fdec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fdec4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fdec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fdec8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fdec8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fdecc: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1FDECCu;
    {
        const bool branch_taken_0x1fdecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdecc) {
            ctx->pc = 0x1FDE54u;
            return;
        }
    }
    ctx->pc = 0x1FDED4u;
    // 0x1fded4: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1fded4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fded8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fded8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fdedc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fdedcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fdee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fdee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fdee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fdee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdeec: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1fdeecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1fdef0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDEF8u;
}
