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

// Function: entry_001bf9a0
// Address: 0x1bf9a0 - 0x1bf9b8
void entry_001bf9a0_0x1bf9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf9a0_0x1bf9a0");
#endif

    ctx->pc = 0x1bf9a0u;

    // 0x1bf9a0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bf9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf9a4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bf9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bf9a8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1bf9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1bf9ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bf9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bf9b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf9b4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bf9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1bf9b8u;
}
