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

// Function: entry_001dbc94
// Address: 0x1dbc94 - 0x1dbcb0
void entry_001dbc94_0x1dbc94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbc94_0x1dbc94");
#endif

    ctx->pc = 0x1dbc94u;

    // 0x1dbc94: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1dbc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dbc98: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dbc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbc9c: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1dbc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1dbca0: 0x34420700  ori         $v0, $v0, 0x700
    ctx->pc = 0x1dbca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x1dbca4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1dbca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbca8: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1dbca8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x1dbcac: 0x0  nop
    ctx->pc = 0x1dbcacu;
    // NOP
    ctx->pc = 0x1dbcb0u;
}
