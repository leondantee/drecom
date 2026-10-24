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

// Function: entry_002e2c64
// Address: 0x2e2c64 - 0x2e2ca0
void entry_002e2c64_0x2e2c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2c64_0x2e2c64");
#endif

    ctx->pc = 0x2e2c64u;

    // 0x2e2c64: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e2c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e2c68: 0x8422ef68  lh          $v0, -0x1098($at)
    ctx->pc = 0x2e2c68u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x2e2c6c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2e2c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e2c70: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e2c70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e2c74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e2c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e2c78: 0x8422ef6a  lh          $v0, -0x1096($at)
    ctx->pc = 0x2e2c78u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x2e2c7c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e2c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e2c80: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e2c80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e2c84: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2e2c84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e2c88: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2C88u;
    {
        const bool branch_taken_0x2e2c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2c88) {
            ctx->pc = 0x2E2CA0u;
            return;
        }
    }
    ctx->pc = 0x2E2C90u;
    // 0x2e2c90: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e2c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e2c94: 0x8422ef6a  lh          $v0, -0x1096($at)
    ctx->pc = 0x2e2c94u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x2e2c98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e2c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e2c9c: 0xa422ef68  sh          $v0, -0x1098($at)
    ctx->pc = 0x2e2c9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    ctx->pc = 0x2e2ca0u;
}
