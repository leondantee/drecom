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

// Function: entry_001b2c88
// Address: 0x1b2c88 - 0x1b2cc0
void entry_001b2c88_0x1b2c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2c88_0x1b2c88");
#endif

    ctx->pc = 0x1b2c88u;

    // 0x1b2c88: 0x92440012  lbu         $a0, 0x12($s2)
    ctx->pc = 0x1b2c88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x1b2c8c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1b2c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b2c90: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x1b2c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x1b2c94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B2C94u;
    {
        const bool branch_taken_0x1b2c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c94) {
            ctx->pc = 0x1B2CC0u;
            return;
        }
    }
    ctx->pc = 0x1B2C9Cu;
    // 0x1b2c9c: 0x240403e9  addiu       $a0, $zero, 0x3E9
    ctx->pc = 0x1b2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x1b2ca0: 0xa64411f2  sh          $a0, 0x11F2($s2)
    ctx->pc = 0x1b2ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4594), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b2ca4: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x1b2ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2ca8: 0x90a20014  lbu         $v0, 0x14($a1)
    ctx->pc = 0x1b2ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1b2cac: 0xa24211ef  sb          $v0, 0x11EF($s2)
    ctx->pc = 0x1b2cacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b2cb0: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x1b2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1b2cb4: 0xa64211f6  sh          $v0, 0x11F6($s2)
    ctx->pc = 0x1b2cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2cb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2CB8u;
    {
        const bool branch_taken_0x1b2cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2cb8) {
            ctx->pc = 0x1B2CE0u;
            return;
        }
    }
    ctx->pc = 0x1B2CC0u;
}
