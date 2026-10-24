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

// Function: entry_00370c60
// Address: 0x370c60 - 0x370cac
void entry_00370c60_0x370c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370c60_0x370c60");
#endif

    ctx->pc = 0x370c60u;

    // 0x370c60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c64: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x370c64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x370c68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c6c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x370c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x370c70: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x370c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x370c74: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x370c74u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370c78: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x370c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x370c7c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x370c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x370c80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c84: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x370c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x370c88: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x370c88u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370c8c: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x370c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x370c90: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x370c90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x370c94: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x370c94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370c98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x370c98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370c9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x370c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370ca0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x370ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x370ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x370CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370CACu;
}
