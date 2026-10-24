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

// Function: QueueInit
// Address: 0x213c88 - 0x213cac
void QueueInit_0x213c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QueueInit_0x213c88");
#endif

    ctx->pc = 0x213c88u;

    // 0x213c88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x213c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x213c8c: 0x24439d40  addiu       $v1, $v0, -0x62C0
    ctx->pc = 0x213c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942016));
    // 0x213c90: 0xac449d40  sw          $a0, -0x62C0($v0)
    ctx->pc = 0x213c90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x619D40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619D40u, _value); } while (0);
    // 0x213c94: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x213c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x213c98: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x213c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c9c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x213c9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x619D48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619D48u, _value); } while (0);
    // 0x213ca0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x213ca0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619D44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619D44u, _value); } while (0);
    // 0x213ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x213CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CA4u;
        // 0x213ca8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213CACu;
}
