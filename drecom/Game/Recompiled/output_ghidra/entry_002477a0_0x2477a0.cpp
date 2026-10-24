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

// Function: entry_002477a0
// Address: 0x2477a0 - 0x2477b4
void entry_002477a0_0x2477a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002477a0_0x2477a0");
#endif

    ctx->pc = 0x2477a0u;

    // 0x2477a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2477a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2477a4: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x2477a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x2477a8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2477a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2477ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2477acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2477b0: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x2477b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2477b4u;
}
