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

// Function: entry_00200fb0
// Address: 0x200fb0 - 0x200fc8
void entry_00200fb0_0x200fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200fb0_0x200fb0");
#endif

    ctx->pc = 0x200fb0u;

    // 0x200fb0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x200fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200fb4: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x200fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x200fb8: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x200fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x200fbc: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x200fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x200fc0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x200FC0u;
    {
        const bool branch_taken_0x200fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200fc0) {
            ctx->pc = 0x200FF8u;
            return;
        }
    }
    ctx->pc = 0x200FC8u;
}
