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

// Function: entry_0025d2fc
// Address: 0x25d2fc - 0x25d318
void entry_0025d2fc_0x25d2fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d2fc_0x25d2fc");
#endif

    ctx->pc = 0x25d2fcu;

    // 0x25d2fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d300: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x25d300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x25d304: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25d304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d308: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x25d308u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d30c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25d30cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25d310: 0x3e00008  jr          $ra
    ctx->pc = 0x25D310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D318u;
}
