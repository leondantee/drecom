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

// Function: entry_00221f9c
// Address: 0x221f9c - 0x221fb0
void entry_00221f9c_0x221f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221f9c_0x221f9c");
#endif

    ctx->pc = 0x221f9cu;

    // 0x221f9c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x221f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x221fa0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x221fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x221fa4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x221fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x221fa8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x221fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x221fac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x221facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x221fb0u;
}
