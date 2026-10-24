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

// Function: entry_001e8a00
// Address: 0x1e8a00 - 0x1e8a3c
void entry_001e8a00_0x1e8a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8a00_0x1e8a00");
#endif

    ctx->pc = 0x1e8a00u;

    // 0x1e8a00: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e8a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1e8a04: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x1e8a04u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x1e8a08: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1e8a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1e8a0c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1e8a0cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1e8a10: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e8a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1e8a14: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x1e8a14u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x1e8a18: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1e8a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1e8a1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e8a1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e8a20: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1e8a20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e8a24: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8A24u;
    {
        const bool branch_taken_0x1e8a24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a24) {
            ctx->pc = 0x1E8A3Cu;
            return;
        }
    }
    ctx->pc = 0x1E8A2Cu;
    // 0x1e8a2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e8a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1e8a30: 0x8424ef6a  lh          $a0, -0x1096($at)
    ctx->pc = 0x1e8a30u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x1e8a34: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e8a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1e8a38: 0xa424ef68  sh          $a0, -0x1098($at)
    ctx->pc = 0x1e8a38u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    ctx->pc = 0x1e8a3cu;
}
