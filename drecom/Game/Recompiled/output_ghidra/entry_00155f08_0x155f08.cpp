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

// Function: entry_00155f08
// Address: 0x155f08 - 0x155f30
void entry_00155f08_0x155f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155f08_0x155f08");
#endif

    ctx->pc = 0x155f08u;

    // 0x155f08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x155f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x155f0c: 0x90234f10  lbu         $v1, 0x4F10($at)
    ctx->pc = 0x155f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F4F10u));
    // 0x155f10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x155f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155f14: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x155f14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x155f18: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x155F18u;
    {
        const bool branch_taken_0x155f18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x155f18) {
            ctx->pc = 0x155F30u;
            return;
        }
    }
    ctx->pc = 0x155F20u;
    // 0x155f20: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x155f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x155f24: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x155f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x155f28: 0xa0234f10  sb          $v1, 0x4F10($at)
    ctx->pc = 0x155f28u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F4F10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F10u, _value); } while (0);
    // 0x155f2c: 0x0  nop
    ctx->pc = 0x155f2cu;
    // NOP
    ctx->pc = 0x155f30u;
}
