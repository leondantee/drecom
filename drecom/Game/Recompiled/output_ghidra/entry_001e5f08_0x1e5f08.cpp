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

// Function: entry_001e5f08
// Address: 0x1e5f08 - 0x1e5f20
void entry_001e5f08_0x1e5f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5f08_0x1e5f08");
#endif

    ctx->pc = 0x1e5f08u;

    // 0x1e5f08: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e5f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e5f0c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e5f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e5f10: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1e5f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e5f14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e5f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e5f18: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e5f18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e5f1c: 0x0  nop
    ctx->pc = 0x1e5f1cu;
    // NOP
    ctx->pc = 0x1e5f20u;
}
