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

// Function: entry_0012d100
// Address: 0x12d100 - 0x12d110
void entry_0012d100_0x12d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d100_0x12d100");
#endif

    ctx->pc = 0x12d100u;

    // 0x12d100: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x12d100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d104: 0x84c21278  lh          $v0, 0x1278($a2)
    ctx->pc = 0x12d104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
    // 0x12d108: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12d10c: 0xa4c21278  sh          $v0, 0x1278($a2)
    ctx->pc = 0x12d10cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4728), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12d110u;
}
