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

// Function: entry_00108444
// Address: 0x108444 - 0x10844c
void entry_00108444_0x108444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108444_0x108444");
#endif

    ctx->pc = 0x108444u;

    // 0x108444: 0x8f0300e0  lw          $v1, 0xE0($t8)
    ctx->pc = 0x108444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 224)));
    // 0x108448: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x108448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    ctx->pc = 0x10844cu;
}
