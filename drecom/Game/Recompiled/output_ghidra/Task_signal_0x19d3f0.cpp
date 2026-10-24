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

// Function: Task_signal
// Address: 0x19d3f0 - 0x19d424
void Task_signal_0x19d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Task_signal_0x19d3f0");
#endif

    ctx->pc = 0x19d3f0u;

    // 0x19d3f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d3f4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x19d3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x19d3f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x19d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d3fc: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x19d3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x19d400: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x19d400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x19d404: 0x2463fbe0  addiu       $v1, $v1, -0x420
    ctx->pc = 0x19d404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966240));
    // 0x19d408: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19d408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d40c: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x19d40cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19d410: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x19d410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x19d414: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x19d414u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x19d418: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19d418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19d41c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D424u;
}
