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

// Function: entry_002bcd10
// Address: 0x2bcd10 - 0x2bcd2c
void entry_002bcd10_0x2bcd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002bcd10_0x2bcd10");
#endif

    ctx->pc = 0x2bcd10u;

    // 0x2bcd10: 0x24648e8c  addiu       $a0, $v1, -0x7174
    ctx->pc = 0x2bcd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938252));
    // 0x2bcd14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bcd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bcd18: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x2bcd18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
    // 0x2bcd1c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bcd1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcd20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bcd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bcd24: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCD2Cu;
}
