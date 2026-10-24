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

// Function: entry_00215820
// Address: 0x215820 - 0x215860
void entry_00215820_0x215820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215820_0x215820");
#endif

    switch (ctx->pc) {
        case 0x215840u: goto label_215840;
        case 0x215850u: goto label_215850;
        case 0x215858u: goto label_215858;
        default: break;
    }

    ctx->pc = 0x215820u;

    // 0x215820: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x215820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x215824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215828: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x215828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x21582c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x21582cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x215830: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x215830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x215834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215838: 0xc08543e  jal         func_2150F8
    ctx->pc = 0x215838u;
    SET_GPR_U32(ctx, 31, 0x215840u);
    ctx->pc = 0x21583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215838u;
    // 0x21583c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2150F8u;
    {
        ctx->pc = 0x215840u;
        ps2_syscalls::sceSifSendCmd(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215840u) { return; }
    ctx->pc = 0x215840u;
label_215840:
    // 0x215840: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x215840u;
    {
        const bool branch_taken_0x215840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215840) {
            ctx->pc = 0x215860u;
            return;
        }
    }
    ctx->pc = 0x215848u;
    // 0x215848: 0xc085576  jal         func_2155D8
    ctx->pc = 0x215848u;
    SET_GPR_U32(ctx, 31, 0x215850u);
    ctx->pc = 0x21584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215848u;
    // 0x21584c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155D8u, 0x215848u, 0x215850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215850u;
label_215850:
    // 0x215850: 0xc084a8c  jal         func_212A30
    ctx->pc = 0x215850u;
    SET_GPR_U32(ctx, 31, 0x215858u);
    ctx->pc = 0x215854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215850u;
    // 0x215854: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A30u;
    {
        ctx->pc = 0x215858u;
        ps2_syscalls::DeleteSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215858u) { return; }
    ctx->pc = 0x215858u;
label_215858:
    // 0x215858: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x215858u;
    {
        const bool branch_taken_0x215858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215858u;
        // 0x21585c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215858) {
            ctx->pc = 0x2158B4u;
            return;
        }
    }
    ctx->pc = 0x215860u;
}
