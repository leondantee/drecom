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

// Function: entry_0010ed68
// Address: 0x10ed68 - 0x10ed94
void entry_0010ed68_0x10ed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ed68_0x10ed68");
#endif

    switch (ctx->pc) {
        case 0x10ed70u: goto label_10ed70;
        default: break;
    }

    ctx->pc = 0x10ed68u;

    // 0x10ed68: 0xc04352c  jal         func_10D4B0
    ctx->pc = 0x10ED68u;
    SET_GPR_U32(ctx, 31, 0x10ED70u);
    ctx->pc = 0x10D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4B0u, 0x10ED68u, 0x10ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED70u;
label_10ed70:
    // 0x10ed70: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x10ed70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ed74: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10ed78: 0xac4445b8  sw          $a0, 0x45B8($v0)
    ctx->pc = 0x10ed78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3845B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845B8u, _value); } while (0);
    // 0x10ed7c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10ed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10ed80: 0xac6445bc  sw          $a0, 0x45BC($v1)
    ctx->pc = 0x10ed80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3845BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845BCu, _value); } while (0);
    // 0x10ed84: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10ed88: 0xac4445c0  sw          $a0, 0x45C0($v0)
    ctx->pc = 0x10ed88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3845C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845C0u, _value); } while (0);
    // 0x10ed8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10ED8Cu;
    {
        const bool branch_taken_0x10ed8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED8Cu;
        // 0x10ed90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed8c) {
            ctx->pc = 0x10EDA8u;
            return;
        }
    }
    ctx->pc = 0x10ED94u;
}
