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

// Function: entry_0015b108
// Address: 0x15b108 - 0x15b148
void entry_0015b108_0x15b108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b108_0x15b108");
#endif

    ctx->pc = 0x15b108u;

    // 0x15b108: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15b10c: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x15b10cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x15b110: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x15b110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15b114: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x15b114u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x15b118: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15b11c: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x15b11cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x15b120: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15b120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15b124: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15b124u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15b128: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x15b128u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15b12c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B12Cu;
    {
        const bool branch_taken_0x15b12c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b12c) {
            ctx->pc = 0x15B148u;
            return;
        }
    }
    ctx->pc = 0x15B134u;
    // 0x15b134: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15b138: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x15b138u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x15b13c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15b13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15b140: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x15b140u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    // 0x15b144: 0x0  nop
    ctx->pc = 0x15b144u;
    // NOP
    ctx->pc = 0x15b148u;
}
