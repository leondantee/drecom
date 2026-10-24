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

// Function: entry_001062b4
// Address: 0x1062b4 - 0x1062f4
void entry_001062b4_0x1062b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001062b4_0x1062b4");
#endif

    switch (ctx->pc) {
        case 0x1062e0u: goto label_1062e0;
        default: break;
    }

    ctx->pc = 0x1062b4u;

    // 0x1062b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1062b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1062b8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1062B8u;
    {
        const bool branch_taken_0x1062b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1062BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062B8u;
        // 0x1062bc: 0x27b10020  addiu       $s1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062b8) {
            ctx->pc = 0x1062F4u;
            return;
        }
    }
    ctx->pc = 0x1062C0u;
    // 0x1062c0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1062c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1062c4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1062c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1062c8: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x1062c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1062cc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1062ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1062d0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1062d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062d4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1062d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1062d8: 0xc04191e  jal         func_106478
    ctx->pc = 0x1062D8u;
    SET_GPR_U32(ctx, 31, 0x1062E0u);
    ctx->pc = 0x1062DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1062D8u;
    // 0x1062dc: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106478u, 0x1062D8u, 0x1062E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1062E0u;
label_1062e0:
    // 0x1062e0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1062E0u;
    {
        const bool branch_taken_0x1062e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1062E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062E0u;
        // 0x1062e4: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062e0) {
            ctx->pc = 0x106314u;
            return;
        }
    }
    ctx->pc = 0x1062E8u;
    // 0x1062e8: 0xae403d08  sw          $zero, 0x3D08($s2)
    ctx->pc = 0x1062e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15624), GPR_U32(ctx, 0));
    // 0x1062ec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1062ECu;
    {
        const bool branch_taken_0x1062ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1062F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1062ECu;
        // 0x1062f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062ec) {
            ctx->pc = 0x106384u;
            return;
        }
    }
    ctx->pc = 0x1062F4u;
}
