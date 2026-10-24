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

// Function: entry_001ccb5c
// Address: 0x1ccb5c - 0x1ccb98
void entry_001ccb5c_0x1ccb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccb5c_0x1ccb5c");
#endif

    ctx->pc = 0x1ccb5cu;

    // 0x1ccb5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb60: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ccb60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ccb64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ccb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ccb68: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1ccb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1ccb6c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1CCB6Cu;
    {
        const bool branch_taken_0x1ccb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccb6c) {
            ctx->pc = 0x1CCB98u;
            return;
        }
    }
    ctx->pc = 0x1CCB74u;
    // 0x1ccb74: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1ccb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1ccb78: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1ccb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1ccb7c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCB7Cu;
    {
        const bool branch_taken_0x1ccb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccb7c) {
            ctx->pc = 0x1CCB98u;
            return;
        }
    }
    ctx->pc = 0x1CCB84u;
    // 0x1ccb84: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ccb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb88: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1ccb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ccb8c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ccb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ccb90: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ccb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ccb94: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1ccb94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1ccb98u;
}
