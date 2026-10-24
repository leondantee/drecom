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

// Function: entry_001c1e9c
// Address: 0x1c1e9c - 0x1c1eb4
void entry_001c1e9c_0x1c1e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1e9c_0x1c1e9c");
#endif

    ctx->pc = 0x1c1e9cu;

    // 0x1c1e9c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c1e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1ea0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c1ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c1ea4: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c1ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c1ea8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c1ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c1eac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c1eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c1eb0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c1eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c1eb4u;
}
