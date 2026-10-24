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

// Function: entry_001c930c
// Address: 0x1c930c - 0x1c933c
void entry_001c930c_0x1c930c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c930c_0x1c930c");
#endif

    ctx->pc = 0x1c930cu;

    // 0x1c930c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9310: 0x904309db  lbu         $v1, 0x9DB($v0)
    ctx->pc = 0x1c9310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c9314: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c9314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c9318: 0x30640020  andi        $a0, $v1, 0x20
    ctx->pc = 0x1c9318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1c931c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C931Cu;
    {
        const bool branch_taken_0x1c931c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c931c) {
            ctx->pc = 0x1C933Cu;
            return;
        }
    }
    ctx->pc = 0x1C9324u;
    // 0x1c9324: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9328: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1c9328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c932c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1c932cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1c9330: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x1c9330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c9334: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C9334u;
    {
        const bool branch_taken_0x1c9334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9334) {
            ctx->pc = 0x1C9370u;
            return;
        }
    }
    ctx->pc = 0x1C933Cu;
}
