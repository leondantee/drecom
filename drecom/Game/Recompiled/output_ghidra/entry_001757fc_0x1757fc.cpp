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

// Function: entry_001757fc
// Address: 0x1757fc - 0x175810
void entry_001757fc_0x1757fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001757fc_0x1757fc");
#endif

    ctx->pc = 0x1757fcu;

    // 0x1757fc: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x1757fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175800: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x175800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x175804: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x175804u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x175808: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x175808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x17580c: 0x0  nop
    ctx->pc = 0x17580cu;
    // NOP
    ctx->pc = 0x175810u;
}
