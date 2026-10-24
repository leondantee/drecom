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

// Function: _sendIpuCommand
// Address: 0x106ce8 - 0x106d18
void _sendIpuCommand_0x106ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sendIpuCommand_0x106ce8");
#endif

    ctx->pc = 0x106ce8u;

    // 0x106ce8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106cec: 0x42f02  srl         $a1, $a0, 28
    ctx->pc = 0x106cecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x106cf0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x106cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x106cf4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x106cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x106cf8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x106cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x106cfc: 0x24633a70  addiu       $v1, $v1, 0x3A70
    ctx->pc = 0x106cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14960));
    // 0x106d00: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x106d00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x106d04: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x106d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x106d08: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x106d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x106d0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x106d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x106d10: 0x3e00008  jr          $ra
    ctx->pc = 0x106D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D10u;
        // 0x106d14: 0xac823c24  sw          $v0, 0x3C24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 15396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106D18u;
}
