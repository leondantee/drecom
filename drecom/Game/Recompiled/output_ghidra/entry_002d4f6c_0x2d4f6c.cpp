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

// Function: entry_002d4f6c
// Address: 0x2d4f6c - 0x2d4f94
void entry_002d4f6c_0x2d4f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4f6c_0x2d4f6c");
#endif

    ctx->pc = 0x2d4f6cu;

    // 0x2d4f6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d4f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d4f70: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d4f70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d4f74: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d4f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d4f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4f7c: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D4F7Cu;
    {
        const bool branch_taken_0x2d4f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d4f7c) {
            ctx->pc = 0x2D4FC4u;
            return;
        }
    }
    ctx->pc = 0x2D4F84u;
    // 0x2d4f84: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4F84u;
    {
        const bool branch_taken_0x2d4f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4f84) {
            ctx->pc = 0x2D4F94u;
            return;
        }
    }
    ctx->pc = 0x2D4F8Cu;
    // 0x2d4f8c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2D4F8Cu;
    {
        const bool branch_taken_0x2d4f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4f8c) {
            ctx->pc = 0x2D503Cu;
            return;
        }
    }
    ctx->pc = 0x2D4F94u;
}
