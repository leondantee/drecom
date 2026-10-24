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

// Function: entry_00177c38
// Address: 0x177c38 - 0x177c4c
void entry_00177c38_0x177c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177c38_0x177c38");
#endif

    ctx->pc = 0x177c38u;

    // 0x177c38: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x177c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x177c3c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x177c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x177c40: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x177c40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177c44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x177c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177c48: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177c48u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x177c4cu;
}
