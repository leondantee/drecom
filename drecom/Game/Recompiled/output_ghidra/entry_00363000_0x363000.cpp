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

// Function: entry_00363000
// Address: 0x363000 - 0x36303c
void entry_00363000_0x363000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363000_0x363000");
#endif

    ctx->pc = 0x363000u;

    // 0x363000: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x363000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x363004: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x363004u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x363008: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x363008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x36300c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x36300cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x363010: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x363010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x363014: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x363014u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x363018: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x363018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x36301c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x36301cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x363020: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x363020u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x363024: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x363024u;
    {
        const bool branch_taken_0x363024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x363024) {
            ctx->pc = 0x36303Cu;
            return;
        }
    }
    ctx->pc = 0x36302Cu;
    // 0x36302c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36302cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x363030: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x363030u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x363034: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x363034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x363038: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x363038u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    ctx->pc = 0x36303cu;
}
