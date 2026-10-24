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

// Function: entry_0010ca18
// Address: 0x10ca18 - 0x10ca3c
void entry_0010ca18_0x10ca18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ca18_0x10ca18");
#endif

    switch (ctx->pc) {
        case 0x10ca34u: goto label_10ca34;
        default: break;
    }

    ctx->pc = 0x10ca18u;

    // 0x10ca18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ca1c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10CA1Cu;
    {
        const bool branch_taken_0x10ca1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA1Cu;
        // 0x10ca20: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca1c) {
            ctx->pc = 0x10CA3Cu;
            return;
        }
    }
    ctx->pc = 0x10CA24u;
    // 0x10ca24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10ca24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10ca28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca2c: 0xc04314e  jal         func_10C538
    ctx->pc = 0x10CA2Cu;
    SET_GPR_U32(ctx, 31, 0x10CA34u);
    ctx->pc = 0x10CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CA2Cu;
    // 0x10ca30: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C538u, 0x10CA2Cu, 0x10CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA34u;
label_10ca34:
    // 0x10ca34: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x10ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x10ca38: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10ca38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10ca3cu;
}
