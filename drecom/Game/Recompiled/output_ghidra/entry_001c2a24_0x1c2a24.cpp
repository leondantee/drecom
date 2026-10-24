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

// Function: entry_001c2a24
// Address: 0x1c2a24 - 0x1c2a50
void entry_001c2a24_0x1c2a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2a24_0x1c2a24");
#endif

    ctx->pc = 0x1c2a24u;

    // 0x1c2a24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2a28: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c2a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c2a2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c2a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c2a30: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c2a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c2a34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2A34u;
    {
        const bool branch_taken_0x1c2a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a34) {
            ctx->pc = 0x1C2A50u;
            return;
        }
    }
    ctx->pc = 0x1C2A3Cu;
    // 0x1c2a3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c2a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c2a40: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c2a44: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c2a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c2a48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c2a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c2a4c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c2a4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    ctx->pc = 0x1c2a50u;
}
