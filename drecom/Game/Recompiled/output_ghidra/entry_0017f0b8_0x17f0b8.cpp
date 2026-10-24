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

// Function: entry_0017f0b8
// Address: 0x17f0b8 - 0x17f0d4
void entry_0017f0b8_0x17f0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f0b8_0x17f0b8");
#endif

    ctx->pc = 0x17f0b8u;

    // 0x17f0b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x17f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f0bc: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x17f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x17f0c0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F0C0u;
    {
        const bool branch_taken_0x17f0c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f0c0) {
            ctx->pc = 0x17F0D4u;
            return;
        }
    }
    ctx->pc = 0x17F0C8u;
    // 0x17f0c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17f0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f0cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17F0CCu;
    {
        const bool branch_taken_0x17f0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f0cc) {
            ctx->pc = 0x17F0E0u;
            return;
        }
    }
    ctx->pc = 0x17F0D4u;
}
