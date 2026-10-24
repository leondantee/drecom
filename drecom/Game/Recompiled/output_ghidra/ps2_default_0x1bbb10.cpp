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

// Function: default
// Address: 0x1bbb10 - 0x1bbb3c
void ps2_default_0x1bbb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1bbb10");
#endif

    ctx->pc = 0x1bbb10u;

    // 0x1bbb10: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bbb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bbb14: 0x8c831b6c  lw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1bbb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
    // 0x1bbb18: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBB18u;
    {
        const bool branch_taken_0x1bbb18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb18) {
            ctx->pc = 0x1BBB3Cu;
            return;
        }
    }
    ctx->pc = 0x1BBB20u;
    // 0x1bbb20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bbb24: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1bbb24u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1bbb28: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x1bbb28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
    // 0x1bbb2c: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1bbb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1bbb30: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1bbb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1bbb34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bbb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bbb38: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1bbb38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1bbb3cu;
}
