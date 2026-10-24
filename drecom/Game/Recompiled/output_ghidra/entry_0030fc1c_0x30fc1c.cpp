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

// Function: entry_0030fc1c
// Address: 0x30fc1c - 0x30fc34
void entry_0030fc1c_0x30fc1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030fc1c_0x30fc1c");
#endif

    ctx->pc = 0x30fc1cu;

    // 0x30fc1c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x30fc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fc20: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30fc24: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x30fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x30fc28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30fc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30fc2c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30fc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30fc30: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    ctx->pc = 0x30fc34u;
}
