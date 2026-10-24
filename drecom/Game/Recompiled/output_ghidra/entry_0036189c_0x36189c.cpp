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

// Function: entry_0036189c
// Address: 0x36189c - 0x3618b0
void entry_0036189c_0x36189c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036189c_0x36189c");
#endif

    ctx->pc = 0x36189cu;

    // 0x36189c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36189cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3618a0: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x3618a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x3618a4: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x3618a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x3618a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3618a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3618ac: 0x0  nop
    ctx->pc = 0x3618acu;
    // NOP
    ctx->pc = 0x3618b0u;
}
