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

// Function: entry_001951e0
// Address: 0x1951e0 - 0x195200
void entry_001951e0_0x1951e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001951e0_0x1951e0");
#endif

    ctx->pc = 0x1951e0u;

    // 0x1951e0: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1951e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1951e4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1951e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1951e8: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x1951e8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x1951ec: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1951ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1951f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1951f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1951f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1951f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1951f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1951f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1951fc: 0x0  nop
    ctx->pc = 0x1951fcu;
    // NOP
    ctx->pc = 0x195200u;
}
