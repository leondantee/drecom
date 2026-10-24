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

// Function: entry_00107df4
// Address: 0x107df4 - 0x107e28
void entry_00107df4_0x107df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107df4_0x107df4");
#endif

    switch (ctx->pc) {
        case 0x107e24u: goto label_107e24;
        default: break;
    }

    ctx->pc = 0x107df4u;

    // 0x107df4: 0x8e233dac  lw          $v1, 0x3DAC($s1)
    ctx->pc = 0x107df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15788)));
    // 0x107df8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x107df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107dfc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x107dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x107e00: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x107E00u;
    {
        const bool branch_taken_0x107e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E00u;
        // 0x107e04: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e00) {
            ctx->pc = 0x107E28u;
            return;
        }
    }
    ctx->pc = 0x107E08u;
    // 0x107e08: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x107e08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107e0c: 0x8e023d1c  lw          $v0, 0x3D1C($s0)
    ctx->pc = 0x107e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383D1Cu));
    // 0x107e10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107E10u;
    {
        const bool branch_taken_0x107e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E10u;
        // 0x107e14: 0x8e233dac  lw          $v1, 0x3DAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e10) {
            ctx->pc = 0x107E2Cu;
            return;
        }
    }
    ctx->pc = 0x107E18u;
    // 0x107e18: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x107e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x107e1c: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x107E1Cu;
    SET_GPR_U32(ctx, 31, 0x107E24u);
    ctx->pc = 0x107E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107E1Cu;
    // 0x107e20: 0x2484c7e8  addiu       $a0, $a0, -0x3818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x107E1Cu, 0x107E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107E24u;
label_107e24:
    // 0x107e24: 0xae003d1c  sw          $zero, 0x3D1C($s0)
    ctx->pc = 0x107e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15644), GPR_U32(ctx, 0));
    ctx->pc = 0x107e28u;
}
