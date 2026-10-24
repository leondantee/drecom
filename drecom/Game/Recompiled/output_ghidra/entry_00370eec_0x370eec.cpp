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

// Function: entry_00370eec
// Address: 0x370eec - 0x370f38
void entry_00370eec_0x370eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370eec_0x370eec");
#endif

    ctx->pc = 0x370eecu;

    // 0x370eec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ef0: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x370ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x370ef4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ef8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x370ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x370efc: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x370efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x370f00: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x370f00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370f04: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x370f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x370f08: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x370f08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x370f0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370f10: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x370f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x370f14: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x370f14u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370f18: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x370f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x370f1c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x370f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x370f20: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x370f20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370f24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x370f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x370f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370f2c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x370f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x370f30: 0x3e00008  jr          $ra
    ctx->pc = 0x370F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370F38u;
}
