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

// Function: entry_002c6328
// Address: 0x2c6328 - 0x2c6350
void entry_002c6328_0x2c6328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6328_0x2c6328");
#endif

    ctx->pc = 0x2c6328u;

    // 0x2c6328: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2c6328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c632c: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x2c632cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2c6330: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2c6330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2c6334: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6338: 0x1064008a  beq         $v1, $a0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2C6338u;
    {
        const bool branch_taken_0x2c6338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c6338) {
            ctx->pc = 0x2C6564u;
            return;
        }
    }
    ctx->pc = 0x2C6340u;
    // 0x2c6340: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6340u;
    {
        const bool branch_taken_0x2c6340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6340) {
            ctx->pc = 0x2C6350u;
            return;
        }
    }
    ctx->pc = 0x2C6348u;
    // 0x2c6348: 0x100001ff  b           . + 4 + (0x1FF << 2)
    ctx->pc = 0x2C6348u;
    {
        const bool branch_taken_0x2c6348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6348) {
            ctx->pc = 0x2C6B48u;
            return;
        }
    }
    ctx->pc = 0x2C6350u;
}
