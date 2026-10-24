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

// Function: entry_001dab78
// Address: 0x1dab78 - 0x1dabc8
void entry_001dab78_0x1dab78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dab78_0x1dab78");
#endif

    ctx->pc = 0x1dab78u;

    // 0x1dab78: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1dab78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dab7c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dab80: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x1dab80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x1dab84: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x1dab84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x1dab88: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1dab88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dab8c: 0x24030160  addiu       $v1, $zero, 0x160
    ctx->pc = 0x1dab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x1dab90: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1dab90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dab94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dab94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dab98: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x1dab98u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x1dab9c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1dab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1daba0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1daba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daba4: 0xfc640028  sd          $a0, 0x28($v1)
    ctx->pc = 0x1daba4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 4));
    // 0x1daba8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1daba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dabac: 0xfc600030  sd          $zero, 0x30($v1)
    ctx->pc = 0x1dabacu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
    // 0x1dabb0: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x1dabb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1dabb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dabb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dabb8: 0xfc640038  sd          $a0, 0x38($v1)
    ctx->pc = 0x1dabb8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 4));
    // 0x1dabbc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1dabbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dabc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DABC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DABC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DABC8u;
}
