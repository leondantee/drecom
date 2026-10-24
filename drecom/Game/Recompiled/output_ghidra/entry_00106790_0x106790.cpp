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

// Function: entry_00106790
// Address: 0x106790 - 0x1067c0
void entry_00106790_0x106790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106790_0x106790");
#endif

    switch (ctx->pc) {
        case 0x1067bcu: goto label_1067bc;
        default: break;
    }

    ctx->pc = 0x106790u;

    // 0x106790: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x106790u;
    {
        const bool branch_taken_0x106790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106790u;
        // 0x106794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106790) {
            ctx->pc = 0x10696Cu;
            return;
        }
    }
    ctx->pc = 0x106798u;
    // 0x106798: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x106798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10679c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x10679cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1067a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1067A0u;
    {
        const bool branch_taken_0x1067a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067A0u;
        // 0x1067a4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067a0) {
            ctx->pc = 0x1067C0u;
            return;
        }
    }
    ctx->pc = 0x1067A8u;
    // 0x1067a8: 0x8c433db8  lw          $v1, 0x3DB8($v0)
    ctx->pc = 0x1067a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15800)));
    // 0x1067ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1067ACu;
    {
        const bool branch_taken_0x1067ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067ACu;
        // 0x1067b0: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067ac) {
            ctx->pc = 0x1067C4u;
            return;
        }
    }
    ctx->pc = 0x1067B4u;
    // 0x1067b4: 0xc041c58  jal         func_107160
    ctx->pc = 0x1067B4u;
    SET_GPR_U32(ctx, 31, 0x1067BCu);
    ctx->pc = 0x1067B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1067B4u;
    // 0x1067b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107160u, 0x1067B4u, 0x1067BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1067BCu;
label_1067bc:
    // 0x1067bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1067bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1067c0u;
}
