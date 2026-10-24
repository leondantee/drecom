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

// Function: entry_0022e4cc
// Address: 0x22e4cc - 0x22e514
void entry_0022e4cc_0x22e4cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e4cc_0x22e4cc");
#endif

    ctx->pc = 0x22e4ccu;

    // 0x22e4cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e4d0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x22e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x22e4d4: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x22e4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x22e4d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e4dc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x22e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x22e4e0: 0x24523b60  addiu       $s2, $v0, 0x3B60
    ctx->pc = 0x22e4e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 15200));
    // 0x22e4e4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x22e4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22e4e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22e4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e4ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22e4f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E4F0u;
    {
        const bool branch_taken_0x22e4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e4f0) {
            ctx->pc = 0x22E514u;
            return;
        }
    }
    ctx->pc = 0x22E4F8u;
    // 0x22e4f8: 0x26420150  addiu       $v0, $s2, 0x150
    ctx->pc = 0x22e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x22e4fc: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x22e4fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x22e500: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x22e500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22e504: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22e508: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22E508u;
    {
        const bool branch_taken_0x22e508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e508) {
            ctx->pc = 0x22E514u;
            return;
        }
    }
    ctx->pc = 0x22E510u;
    // 0x22e510: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x22e510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x22e514u;
}
