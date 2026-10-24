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

// Function: entry_001a4d9c
// Address: 0x1a4d9c - 0x1a4dbc
void entry_001a4d9c_0x1a4d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4d9c_0x1a4d9c");
#endif

    ctx->pc = 0x1a4d9cu;

    // 0x1a4d9c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4da0: 0x80630305  lb          $v1, 0x305($v1)
    ctx->pc = 0x1a4da0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 773)));
    // 0x1a4da4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4da8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4da8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4dac: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4DACu;
    {
        const bool branch_taken_0x1a4dac = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a4dac) {
            ctx->pc = 0x1A4DBCu;
            return;
        }
    }
    ctx->pc = 0x1A4DB4u;
    // 0x1a4db4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4db8: 0xa0600305  sb          $zero, 0x305($v1)
    ctx->pc = 0x1a4db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 773), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1a4dbcu;
}
