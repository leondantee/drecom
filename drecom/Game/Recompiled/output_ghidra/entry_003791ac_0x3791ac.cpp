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

// Function: entry_003791ac
// Address: 0x3791ac - 0x3791e8
void entry_003791ac_0x3791ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003791ac_0x3791ac");
#endif

    ctx->pc = 0x3791acu;

    // 0x3791ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3791acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3791b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3791b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3791b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3791b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3791b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3791b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3791bc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3791bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3791c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3791c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3791c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3791c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3791c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3791c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3791cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3791ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3791d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3791d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3791d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3791d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3791d8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3791d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3791dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3791dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3791e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3791E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3791E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3791E8u;
}
