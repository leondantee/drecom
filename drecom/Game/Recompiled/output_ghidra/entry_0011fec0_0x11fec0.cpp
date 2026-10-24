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

// Function: entry_0011fec0
// Address: 0x11fec0 - 0x11fee4
void entry_0011fec0_0x11fec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fec0_0x11fec0");
#endif

    ctx->pc = 0x11fec0u;

    // 0x11fec0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11FEC0u;
    {
        const bool branch_taken_0x11fec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FEC0u;
        // 0x11fec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fec0) {
            ctx->pc = 0x11FF14u;
            return;
        }
    }
    ctx->pc = 0x11FEC8u;
    // 0x11fec8: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x11fec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x11fecc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FECCu;
    {
        const bool branch_taken_0x11fecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FECCu;
        // 0x11fed0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fecc) {
            ctx->pc = 0x11FEE4u;
            return;
        }
    }
    ctx->pc = 0x11FED4u;
    // 0x11fed4: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11FED4u;
    {
        const bool branch_taken_0x11fed4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FED4u;
        // 0x11fed8: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fed4) {
            ctx->pc = 0x11FEB8u;
            return;
        }
    }
    ctx->pc = 0x11FEDCu;
    // 0x11fedc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FEDCu;
    {
        const bool branch_taken_0x11fedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fedc) {
            ctx->pc = 0x11FEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FEDCu;
            // 0x11fee0: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FEF0u;
            return;
        }
    }
    ctx->pc = 0x11FEE4u;
}
