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

// Function: entry_0011f9d8
// Address: 0x11f9d8 - 0x11fa00
void entry_0011f9d8_0x11f9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f9d8_0x11f9d8");
#endif

    ctx->pc = 0x11f9d8u;

    // 0x11f9d8: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x11f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x11f9dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11f9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11f9e0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x11f9e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11f9e4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11F9E4u;
    {
        const bool branch_taken_0x11f9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9E4u;
        // 0x11f9e8: 0x3083007f  andi        $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9e4) {
            ctx->pc = 0x11FA28u;
            return;
        }
    }
    ctx->pc = 0x11F9ECu;
    // 0x11f9ec: 0x3c073fff  lui         $a3, 0x3FFF
    ctx->pc = 0x11f9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16383 << 16));
    // 0x11f9f0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x11f9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11f9f4: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x11f9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x11f9f8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x11f9f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x11f9fc: 0x0  nop
    ctx->pc = 0x11f9fcu;
    // NOP
    ctx->pc = 0x11fa00u;
}
