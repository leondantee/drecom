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

// Function: entry_001d9668
// Address: 0x1d9668 - 0x1d9678
void entry_001d9668_0x1d9668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9668_0x1d9668");
#endif

    ctx->pc = 0x1d9668u;

    // 0x1d9668: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1d9668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d966c: 0x34460001  ori         $a2, $v0, 0x1
    ctx->pc = 0x1d966cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1d9670: 0x97a40018  lhu         $a0, 0x18($sp)
    ctx->pc = 0x1d9670u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9674: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1d9674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1d9678u;
}
