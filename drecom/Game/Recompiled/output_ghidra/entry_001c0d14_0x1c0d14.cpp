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

// Function: entry_001c0d14
// Address: 0x1c0d14 - 0x1c0d40
void entry_001c0d14_0x1c0d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0d14_0x1c0d14");
#endif

    ctx->pc = 0x1c0d14u;

    // 0x1c0d14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c0d18: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c0d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c0d1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c0d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c0d20: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x1c0d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x1c0d24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0D24u;
    {
        const bool branch_taken_0x1c0d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0d24) {
            ctx->pc = 0x1C0D40u;
            return;
        }
    }
    ctx->pc = 0x1C0D2Cu;
    // 0x1c0d2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c0d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c0d30: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c0d34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c0d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c0d38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c0d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c0d3c: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c0d3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    ctx->pc = 0x1c0d40u;
}
