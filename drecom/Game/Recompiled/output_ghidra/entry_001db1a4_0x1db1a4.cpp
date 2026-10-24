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

// Function: entry_001db1a4
// Address: 0x1db1a4 - 0x1db1c0
void entry_001db1a4_0x1db1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db1a4_0x1db1a4");
#endif

    ctx->pc = 0x1db1a4u;

    // 0x1db1a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1db1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1db1a8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1db1a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1db1ac: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1db1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1db1b0: 0x34430700  ori         $v1, $v0, 0x700
    ctx->pc = 0x1db1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x1db1b4: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1db1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1db1b8: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1db1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1db1bc: 0x0  nop
    ctx->pc = 0x1db1bcu;
    // NOP
    ctx->pc = 0x1db1c0u;
}
