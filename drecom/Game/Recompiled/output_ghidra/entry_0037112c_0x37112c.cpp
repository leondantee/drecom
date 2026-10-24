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

// Function: entry_0037112c
// Address: 0x37112c - 0x371178
void entry_0037112c_0x37112c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037112c_0x37112c");
#endif

    ctx->pc = 0x37112cu;

    // 0x37112c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x37112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371130: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x371130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x371134: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371138: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x371138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x37113c: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x37113cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x371140: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x371140u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x371144: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x371144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x371148: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x371148u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x37114c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x37114cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371150: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x371150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x371154: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x371154u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x371158: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x371158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x37115c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x37115cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x371160: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x371160u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371164: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37116c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x37116cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x371170: 0x3e00008  jr          $ra
    ctx->pc = 0x371170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371178u;
}
