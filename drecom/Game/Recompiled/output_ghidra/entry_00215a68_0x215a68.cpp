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

// Function: entry_00215a68
// Address: 0x215a68 - 0x215aa8
void entry_00215a68_0x215a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215a68_0x215a68");
#endif

    switch (ctx->pc) {
        case 0x215a88u: goto label_215a88;
        case 0x215a98u: goto label_215a98;
        case 0x215aa0u: goto label_215aa0;
        default: break;
    }

    ctx->pc = 0x215a68u;

    // 0x215a68: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x215a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x215a6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a70: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x215a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x215a74: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x215a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x215a78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x215a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x215a7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a80: 0xc08543e  jal         func_2150F8
    ctx->pc = 0x215A80u;
    SET_GPR_U32(ctx, 31, 0x215A88u);
    ctx->pc = 0x215A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A80u;
    // 0x215a84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2150F8u;
    {
        ctx->pc = 0x215A88u;
        ps2_syscalls::sceSifSendCmd(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215A88u) { return; }
    ctx->pc = 0x215A88u;
label_215a88:
    // 0x215a88: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x215A88u;
    {
        const bool branch_taken_0x215a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215a88) {
            ctx->pc = 0x215AA8u;
            return;
        }
    }
    ctx->pc = 0x215A90u;
    // 0x215a90: 0xc085576  jal         func_2155D8
    ctx->pc = 0x215A90u;
    SET_GPR_U32(ctx, 31, 0x215A98u);
    ctx->pc = 0x215A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A90u;
    // 0x215a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155D8u, 0x215A90u, 0x215A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A98u;
label_215a98:
    // 0x215a98: 0xc084a8c  jal         func_212A30
    ctx->pc = 0x215A98u;
    SET_GPR_U32(ctx, 31, 0x215AA0u);
    ctx->pc = 0x215A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A98u;
    // 0x215a9c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A30u;
    {
        ctx->pc = 0x215AA0u;
        ps2_syscalls::DeleteSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215AA0u) { return; }
    ctx->pc = 0x215AA0u;
label_215aa0:
    // 0x215aa0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x215AA0u;
    {
        const bool branch_taken_0x215aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AA0u;
        // 0x215aa4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215aa0) {
            ctx->pc = 0x215AFCu;
            return;
        }
    }
    ctx->pc = 0x215AA8u;
}
