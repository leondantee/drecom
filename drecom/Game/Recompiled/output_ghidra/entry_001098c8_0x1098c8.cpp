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

// Function: entry_001098c8
// Address: 0x1098c8 - 0x1098fc
void entry_001098c8_0x1098c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001098c8_0x1098c8");
#endif

    switch (ctx->pc) {
        case 0x1098d4u: goto label_1098d4;
        case 0x1098f4u: goto label_1098f4;
        default: break;
    }

    ctx->pc = 0x1098c8u;

    // 0x1098c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1098c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098cc: 0xc0423dc  jal         func_108F70
    ctx->pc = 0x1098CCu;
    SET_GPR_U32(ctx, 31, 0x1098D4u);
    ctx->pc = 0x1098D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098CCu;
    // 0x1098d0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F70u, 0x1098CCu, 0x1098D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098D4u;
label_1098d4:
    // 0x1098d4: 0x240301bb  addiu       $v1, $zero, 0x1BB
    ctx->pc = 0x1098d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    // 0x1098d8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1098D8u;
    {
        const bool branch_taken_0x1098d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1098d8) {
            ctx->pc = 0x1098DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1098D8u;
            // 0x1098dc: 0xaec0000c  sw          $zero, 0xC($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1098FCu;
            return;
        }
    }
    ctx->pc = 0x1098E0u;
    // 0x1098e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1098e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1098e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1098e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098e8: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x1098e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x1098ec: 0xc04264a  jal         func_109928
    ctx->pc = 0x1098ECu;
    SET_GPR_U32(ctx, 31, 0x1098F4u);
    ctx->pc = 0x1098F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098ECu;
    // 0x1098f0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109928u, 0x1098ECu, 0x1098F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098F4u;
label_1098f4:
    // 0x1098f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1098F4u;
    {
        const bool branch_taken_0x1098f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1098F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098F4u;
        // 0x1098f8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098f4) {
            ctx->pc = 0x109900u;
            return;
        }
    }
    ctx->pc = 0x1098FCu;
}
