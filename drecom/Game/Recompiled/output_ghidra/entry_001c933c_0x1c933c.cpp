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

// Function: entry_001c933c
// Address: 0x1c933c - 0x1c9370
void entry_001c933c_0x1c933c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c933c_0x1c933c");
#endif

    ctx->pc = 0x1c933cu;

    // 0x1c933c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c933cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9340: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x1c9340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c9344: 0x3c078040  lui         $a3, 0x8040
    ctx->pc = 0x1c9344u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32832 << 16));
    // 0x1c9348: 0xc74025  or          $t0, $a2, $a3
    ctx->pc = 0x1c9348u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1c934c: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x1c934cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x1c9350: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9354: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1c9354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c9358: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x1c9358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x1c935c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c935cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c9360: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1c9360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c9364: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1c9364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1c9368: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9368u;
    {
        const bool branch_taken_0x1c9368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9368) {
            ctx->pc = 0x1C9388u;
            return;
        }
    }
    ctx->pc = 0x1C9370u;
}
