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

// Function: entry_00220a2c
// Address: 0x220a2c - 0x220a68
void entry_00220a2c_0x220a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220a2c_0x220a2c");
#endif

    ctx->pc = 0x220a2cu;

    // 0x220a2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x220a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x220a30: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x220a30u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x220a34: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x220a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x220a38: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x220a38u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x220a3c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x220a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x220a40: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x220a40u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x220a44: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x220a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x220a48: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x220a48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x220a4c: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x220a4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x220a50: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x220A50u;
    {
        const bool branch_taken_0x220a50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x220a50) {
            ctx->pc = 0x220A68u;
            return;
        }
    }
    ctx->pc = 0x220A58u;
    // 0x220a58: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x220a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x220a5c: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x220a5cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x220a60: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x220a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x220a64: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x220a64u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    ctx->pc = 0x220a68u;
}
