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

// Function: entry_0024989c
// Address: 0x24989c - 0x2498b0
void entry_0024989c_0x24989c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024989c_0x24989c");
#endif

    ctx->pc = 0x24989cu;

    // 0x24989c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2498a0: 0x84620030  lh          $v0, 0x30($v1)
    ctx->pc = 0x2498a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2498a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2498a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2498a8: 0xa4620030  sh          $v0, 0x30($v1)
    ctx->pc = 0x2498a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x2498ac: 0x0  nop
    ctx->pc = 0x2498acu;
    // NOP
    ctx->pc = 0x2498b0u;
}
