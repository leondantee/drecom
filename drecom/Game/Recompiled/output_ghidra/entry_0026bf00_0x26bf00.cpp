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

// Function: entry_0026bf00
// Address: 0x26bf00 - 0x26bf24
void entry_0026bf00_0x26bf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026bf00_0x26bf00");
#endif

    ctx->pc = 0x26bf00u;

    // 0x26bf00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bf04: 0x846413ae  lh          $a0, 0x13AE($v1)
    ctx->pc = 0x26bf04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5038)));
    // 0x26bf08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bf0c: 0xa46413ac  sh          $a0, 0x13AC($v1)
    ctx->pc = 0x26bf0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5036), (uint16_t)GPR_U32(ctx, 4));
    // 0x26bf10: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x26bf10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bf14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26bf14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bf18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x26bf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26bf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x26BF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BF24u;
}
