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

// Function: entry_0031dcf8
// Address: 0x31dcf8 - 0x31dd20
void entry_0031dcf8_0x31dcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031dcf8_0x31dcf8");
#endif

    ctx->pc = 0x31dcf8u;

    // 0x31dcf8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31dcfc: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x31dcfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x31dd00: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31dd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31dd04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dd08: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31DD08u;
    {
        const bool branch_taken_0x31dd08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31dd08) {
            ctx->pc = 0x31DD50u;
            return;
        }
    }
    ctx->pc = 0x31DD10u;
    // 0x31dd10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DD10u;
    {
        const bool branch_taken_0x31dd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dd10) {
            ctx->pc = 0x31DD20u;
            return;
        }
    }
    ctx->pc = 0x31DD18u;
    // 0x31dd18: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31DD18u;
    {
        const bool branch_taken_0x31dd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31dd18) {
            ctx->pc = 0x31DDC4u;
            return;
        }
    }
    ctx->pc = 0x31DD20u;
}
