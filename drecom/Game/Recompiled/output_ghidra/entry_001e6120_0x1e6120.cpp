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

// Function: entry_001e6120
// Address: 0x1e6120 - 0x1e6138
void entry_001e6120_0x1e6120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6120_0x1e6120");
#endif

    ctx->pc = 0x1e6120u;

    // 0x1e6120: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e6120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6124: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e6124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e6128: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1e6128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e612c: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1e612cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e6130: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x1e6130u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
    // 0x1e6134: 0x0  nop
    ctx->pc = 0x1e6134u;
    // NOP
    ctx->pc = 0x1e6138u;
}
