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

// Function: entry_001c4070
// Address: 0x1c4070 - 0x1c40a0
void entry_001c4070_0x1c4070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4070_0x1c4070");
#endif

    ctx->pc = 0x1c4070u;

    // 0x1c4070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4074: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c4074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c4078: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c4078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c407c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c407cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c4080: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4080u;
    {
        const bool branch_taken_0x1c4080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4080) {
            ctx->pc = 0x1C40A0u;
            return;
        }
    }
    ctx->pc = 0x1C4088u;
    // 0x1c4088: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c4088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c408c: 0x8c23a4a8  lw          $v1, -0x5B58($at)
    ctx->pc = 0x1c408cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1c4090: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c4090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c4094: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c4094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c4098: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1c4098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1c409c: 0xac22a4a8  sw          $v0, -0x5B58($at)
    ctx->pc = 0x1c409cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
    ctx->pc = 0x1c40a0u;
}
