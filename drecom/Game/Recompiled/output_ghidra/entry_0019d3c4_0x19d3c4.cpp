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

// Function: entry_0019d3c4
// Address: 0x19d3c4 - 0x19d3e4
void entry_0019d3c4_0x19d3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d3c4_0x19d3c4");
#endif

    ctx->pc = 0x19d3c4u;

    // 0x19d3c4: 0x2463fbe0  addiu       $v1, $v1, -0x420
    ctx->pc = 0x19d3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966240));
    // 0x19d3c8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19d3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d3cc: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x19d3ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19d3d0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x19d3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x19d3d4: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x19d3d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x19d3d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19d3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19d3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x19D3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D3E4u;
}
