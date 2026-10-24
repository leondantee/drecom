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

// Function: entry_00215878
// Address: 0x215878 - 0x2158b4
void entry_00215878_0x215878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215878_0x215878");
#endif

    switch (ctx->pc) {
        case 0x2158a0u: goto label_2158a0;
        case 0x2158b0u: goto label_2158b0;
        default: break;
    }

    ctx->pc = 0x215878u;

    // 0x215878: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x215878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21587c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x21587cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x215880: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x215880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x215884: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x215884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    // 0x215888: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21588c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x21588cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x215890: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x215890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215894: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x215894u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215898: 0xc08543e  jal         func_2150F8
    ctx->pc = 0x215898u;
    SET_GPR_U32(ctx, 31, 0x2158A0u);
    ctx->pc = 0x21589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215898u;
    // 0x21589c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2150F8u;
    {
        ctx->pc = 0x2158A0u;
        ps2_syscalls::sceSifSendCmd(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2158A0u) { return; }
    ctx->pc = 0x2158A0u;
label_2158a0:
    // 0x2158a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2158A0u;
    {
        const bool branch_taken_0x2158a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2158A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158A0u;
        // 0x2158a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158a0) {
            ctx->pc = 0x2158B4u;
            return;
        }
    }
    ctx->pc = 0x2158A8u;
    // 0x2158a8: 0xc085576  jal         func_2155D8
    ctx->pc = 0x2158A8u;
    SET_GPR_U32(ctx, 31, 0x2158B0u);
    ctx->pc = 0x2158ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2158A8u;
    // 0x2158ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155D8u, 0x2158A8u, 0x2158B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2158B0u;
label_2158b0:
    // 0x2158b0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2158b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x2158b4u;
}
