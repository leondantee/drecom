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

// Function: entry_0022fae8
// Address: 0x22fae8 - 0x22fb30
void entry_0022fae8_0x22fae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fae8_0x22fae8");
#endif

    ctx->pc = 0x22fae8u;

    // 0x22fae8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22faec: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x22faecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x22faf0: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x22faf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x22faf4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22faf8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x22faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x22fafc: 0x24523b60  addiu       $s2, $v0, 0x3B60
    ctx->pc = 0x22fafcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 15200));
    // 0x22fb00: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x22fb00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22fb04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22fb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22fb08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22fb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22fb0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22FB0Cu;
    {
        const bool branch_taken_0x22fb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fb0c) {
            ctx->pc = 0x22FB30u;
            return;
        }
    }
    ctx->pc = 0x22FB14u;
    // 0x22fb14: 0x26420150  addiu       $v0, $s2, 0x150
    ctx->pc = 0x22fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x22fb18: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x22fb18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x22fb1c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x22fb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22fb20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22fb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22fb24: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22FB24u;
    {
        const bool branch_taken_0x22fb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fb24) {
            ctx->pc = 0x22FB30u;
            return;
        }
    }
    ctx->pc = 0x22FB2Cu;
    // 0x22fb2c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x22fb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x22fb30u;
}
