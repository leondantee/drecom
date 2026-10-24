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

// Function: entry_002302b0
// Address: 0x2302b0 - 0x2302f8
void entry_002302b0_0x2302b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002302b0_0x2302b0");
#endif

    ctx->pc = 0x2302b0u;

    // 0x2302b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2302b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2302b4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2302b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2302b8: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x2302b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x2302bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2302bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2302c0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2302c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2302c4: 0x24523b60  addiu       $s2, $v0, 0x3B60
    ctx->pc = 0x2302c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 15200));
    // 0x2302c8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2302c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2302cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2302ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2302d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2302d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2302d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2302D4u;
    {
        const bool branch_taken_0x2302d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2302d4) {
            ctx->pc = 0x2302F8u;
            return;
        }
    }
    ctx->pc = 0x2302DCu;
    // 0x2302dc: 0x26420150  addiu       $v0, $s2, 0x150
    ctx->pc = 0x2302dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x2302e0: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2302e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2302e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2302e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2302e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2302e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2302ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2302ECu;
    {
        const bool branch_taken_0x2302ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2302ec) {
            ctx->pc = 0x2302F8u;
            return;
        }
    }
    ctx->pc = 0x2302F4u;
    // 0x2302f4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2302f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2302f8u;
}
