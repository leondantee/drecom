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

// Function: entry_001c8ccc
// Address: 0x1c8ccc - 0x1c8ce4
void entry_001c8ccc_0x1c8ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8ccc_0x1c8ccc");
#endif

    ctx->pc = 0x1c8cccu;

    // 0x1c8ccc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8cd0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c8cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c8cd4: 0x3c027fbf  lui         $v0, 0x7FBF
    ctx->pc = 0x1c8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32703 << 16));
    // 0x1c8cd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c8cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c8cdc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c8cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c8ce0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1c8ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c8ce4u;
}
