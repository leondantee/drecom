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

// Function: entry_0034e59c
// Address: 0x34e59c - 0x34e5b8
void entry_0034e59c_0x34e59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034e59c_0x34e59c");
#endif

    ctx->pc = 0x34e59cu;

    // 0x34e59c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e5a0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34e5a4: 0x24703cf0  addiu       $s0, $v1, 0x3CF0
    ctx->pc = 0x34e5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15600));
    // 0x34e5a8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x34e5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34e5ac: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x34e5acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x34e5b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34e5b4: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x34e5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x34e5b8u;
}
