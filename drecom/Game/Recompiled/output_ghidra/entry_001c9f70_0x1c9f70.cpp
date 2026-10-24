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

// Function: entry_001c9f70
// Address: 0x1c9f70 - 0x1c9fb4
void entry_001c9f70_0x1c9f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9f70_0x1c9f70");
#endif

    ctx->pc = 0x1c9f70u;

    // 0x1c9f70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c9f74: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1c9f74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c9f78: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1c9f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1c9f7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c9f80: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1c9f80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1c9f84: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1c9f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c9f88: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1c9f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1c9f8c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9F8Cu;
    {
        const bool branch_taken_0x1c9f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9f8c) {
            ctx->pc = 0x1C9FB4u;
            return;
        }
    }
    ctx->pc = 0x1C9F94u;
    // 0x1c9f94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c9f98: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1c9f98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c9f9c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1c9f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1c9fa0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c9fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c9fa4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c9fa8: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1c9fa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1c9fac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1c9facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c9fb0: 0xa0601921  sb          $zero, 0x1921($v1)
    ctx->pc = 0x1c9fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6433), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c9fb4u;
}
