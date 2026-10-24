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

// Function: entry_0014d9d8
// Address: 0x14d9d8 - 0x14d9e8
void entry_0014d9d8_0x14d9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d9d8_0x14d9d8");
#endif

    ctx->pc = 0x14d9d8u;

    // 0x14d9d8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x14d9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14d9dc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x14d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x14d9e0: 0xe21825  or          $v1, $a3, $v0
    ctx->pc = 0x14d9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x14d9e4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x14d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x14d9e8u;
}
