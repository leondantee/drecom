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

// Function: entry_00117dfc
// Address: 0x117dfc - 0x117e24
void entry_00117dfc_0x117dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117dfc_0x117dfc");
#endif

    switch (ctx->pc) {
        case 0x117e14u: goto label_117e14;
        default: break;
    }

    ctx->pc = 0x117dfcu;

    // 0x117dfc: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x117dfcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x117e00: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x117E00u;
    {
        const bool branch_taken_0x117e00 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x117E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E00u;
        // 0x117e04: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e00) {
            ctx->pc = 0x117E24u;
            return;
        }
    }
    ctx->pc = 0x117E08u;
    // 0x117e08: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x117e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x117e0c: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x117E0Cu;
    SET_GPR_U32(ctx, 31, 0x117E14u);
    ctx->pc = 0x117E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E0Cu;
    // 0x117e10: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1177A0u, 0x117E0Cu, 0x117E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E14u;
label_117e14:
    // 0x117e14: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x117E14u;
    {
        const bool branch_taken_0x117e14 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x117E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E14u;
        // 0x117e18: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e14) {
            ctx->pc = 0x117E34u;
            return;
        }
    }
    ctx->pc = 0x117E1Cu;
    // 0x117e1c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x117e1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117e20: 0x34620800  ori         $v0, $v1, 0x800
    ctx->pc = 0x117e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    ctx->pc = 0x117e24u;
}
