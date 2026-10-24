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

// Function: entry_001a1c00
// Address: 0x1a1c00 - 0x1a1c28
void entry_001a1c00_0x1a1c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1c00_0x1a1c00");
#endif

    ctx->pc = 0x1a1c00u;

    // 0x1a1c00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1c04: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a1c08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1C08u;
    {
        const bool branch_taken_0x1a1c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c08) {
            ctx->pc = 0x1A1C28u;
            return;
        }
    }
    ctx->pc = 0x1A1C10u;
    // 0x1a1c10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a1c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a1c14: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x1a1c14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x1a1c18: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a1c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a1c1c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1a1c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1a1c20: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A1C20u;
    {
        const bool branch_taken_0x1a1c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c20) {
            ctx->pc = 0x1A1C60u;
            return;
        }
    }
    ctx->pc = 0x1A1C28u;
}
