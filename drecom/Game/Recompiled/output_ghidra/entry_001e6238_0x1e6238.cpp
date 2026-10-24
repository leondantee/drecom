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

// Function: entry_001e6238
// Address: 0x1e6238 - 0x1e6250
void entry_001e6238_0x1e6238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6238_0x1e6238");
#endif

    ctx->pc = 0x1e6238u;

    // 0x1e6238: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e6238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e623c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e623cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e6240: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1e6240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e6244: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e6244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e6248: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e6248u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e624c: 0x0  nop
    ctx->pc = 0x1e624cu;
    // NOP
    ctx->pc = 0x1e6250u;
}
