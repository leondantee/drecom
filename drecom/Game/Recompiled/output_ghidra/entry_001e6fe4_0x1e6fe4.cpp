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

// Function: entry_001e6fe4
// Address: 0x1e6fe4 - 0x1e6ff8
void entry_001e6fe4_0x1e6fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6fe4_0x1e6fe4");
#endif

    ctx->pc = 0x1e6fe4u;

    // 0x1e6fe4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e6fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6fe8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1e6fe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e6fec: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1e6fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e6ff0: 0xc51025  or          $v0, $a2, $a1
    ctx->pc = 0x1e6ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1e6ff4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1e6ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1e6ff8u;
}
