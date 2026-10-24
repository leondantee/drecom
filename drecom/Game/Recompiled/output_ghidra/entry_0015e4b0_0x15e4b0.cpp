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

// Function: entry_0015e4b0
// Address: 0x15e4b0 - 0x15e4ec
void entry_0015e4b0_0x15e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e4b0_0x15e4b0");
#endif

    ctx->pc = 0x15e4b0u;

    // 0x15e4b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15e4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15e4b4: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x15e4b4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x15e4b8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x15e4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15e4bc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x15e4bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x15e4c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15e4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15e4c4: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x15e4c4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x15e4c8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15e4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15e4cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15e4ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15e4d0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x15e4d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15e4d4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E4D4u;
    {
        const bool branch_taken_0x15e4d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e4d4) {
            ctx->pc = 0x15E4ECu;
            return;
        }
    }
    ctx->pc = 0x15E4DCu;
    // 0x15e4dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15e4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15e4e0: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x15e4e0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x15e4e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15e4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15e4e8: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x15e4e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    ctx->pc = 0x15e4ecu;
}
