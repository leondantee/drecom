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

// Function: entry_0022e7d0
// Address: 0x22e7d0 - 0x22e818
void entry_0022e7d0_0x22e7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e7d0_0x22e7d0");
#endif

    ctx->pc = 0x22e7d0u;

    // 0x22e7d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e7d4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x22e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x22e7d8: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x22e7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x22e7dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e7e0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x22e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x22e7e4: 0x24513b60  addiu       $s1, $v0, 0x3B60
    ctx->pc = 0x22e7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15200));
    // 0x22e7e8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x22e7e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22e7ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22e7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22e7f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22e7f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E7F4u;
    {
        const bool branch_taken_0x22e7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e7f4) {
            ctx->pc = 0x22E818u;
            return;
        }
    }
    ctx->pc = 0x22E7FCu;
    // 0x22e7fc: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x22e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x22e800: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x22e800u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x22e804: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x22e804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22e808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22e808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22e80c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22E80Cu;
    {
        const bool branch_taken_0x22e80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e80c) {
            ctx->pc = 0x22E818u;
            return;
        }
    }
    ctx->pc = 0x22E814u;
    // 0x22e814: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x22e814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x22e818u;
}
