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

// Function: entry_00140e50
// Address: 0x140e50 - 0x140e80
void entry_00140e50_0x140e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140e50_0x140e50");
#endif

    ctx->pc = 0x140e50u;

    // 0x140e50: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x140e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x140e54: 0x8c238ef0  lw          $v1, -0x7110($at)
    ctx->pc = 0x140e54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E8EF0u));
    // 0x140e58: 0x2c61012d  sltiu       $at, $v1, 0x12D
    ctx->pc = 0x140e58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)301) ? 1 : 0);
    // 0x140e5c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x140E5Cu;
    {
        const bool branch_taken_0x140e5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x140e5c) {
            ctx->pc = 0x140E80u;
            return;
        }
    }
    ctx->pc = 0x140E64u;
    // 0x140e64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140e68: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x140e68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x140e6c: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x140e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x140e70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x140e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x140e74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x140e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x140e78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140e7c: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x140e7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x140e80u;
}
