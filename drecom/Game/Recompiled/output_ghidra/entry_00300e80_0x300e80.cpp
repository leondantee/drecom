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

// Function: entry_00300e80
// Address: 0x300e80 - 0x300eb0
void entry_00300e80_0x300e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00300e80_0x300e80");
#endif

    ctx->pc = 0x300e80u;

    // 0x300e80: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300e84: 0xac401338  sw          $zero, 0x1338($v0)
    ctx->pc = 0x300e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4920), GPR_U32(ctx, 0));
    // 0x300e88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300e8c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x300e8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x300e90: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x300e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x300e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300e98: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x300E98u;
    {
        const bool branch_taken_0x300e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300e98) {
            ctx->pc = 0x300EE4u;
            return;
        }
    }
    ctx->pc = 0x300EA0u;
    // 0x300ea0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x300EA0u;
    {
        const bool branch_taken_0x300ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ea0) {
            ctx->pc = 0x300EB0u;
            return;
        }
    }
    ctx->pc = 0x300EA8u;
    // 0x300ea8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x300EA8u;
    {
        const bool branch_taken_0x300ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ea8) {
            ctx->pc = 0x300F10u;
            return;
        }
    }
    ctx->pc = 0x300EB0u;
}
