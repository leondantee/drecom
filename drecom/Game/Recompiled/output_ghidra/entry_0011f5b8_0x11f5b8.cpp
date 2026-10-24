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

// Function: entry_0011f5b8
// Address: 0x11f5b8 - 0x11f5d4
void entry_0011f5b8_0x11f5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f5b8_0x11f5b8");
#endif

    ctx->pc = 0x11f5b8u;

    // 0x11f5b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F5B8u;
    {
        const bool branch_taken_0x11f5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5B8u;
        // 0x11f5bc: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5b8) {
            ctx->pc = 0x11F5E0u;
            return;
        }
    }
    ctx->pc = 0x11F5C0u;
    // 0x11f5c0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x11F5C0u;
    {
        const bool branch_taken_0x11f5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f5c0) {
            ctx->pc = 0x11F59Cu;
            return;
        }
    }
    ctx->pc = 0x11F5C8u;
    // 0x11f5c8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x11f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11f5cc: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x11f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x11f5d0: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x11F5D0u;
    {
        const bool branch_taken_0x11f5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11f5d0) {
            ctx->pc = 0x11F59Cu;
            return;
        }
    }
    ctx->pc = 0x11F5D8u;
}
