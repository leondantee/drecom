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

// Function: entry_002d59a8
// Address: 0x2d59a8 - 0x2d59b8
void entry_002d59a8_0x2d59a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d59a8_0x2d59a8");
#endif

    ctx->pc = 0x2d59a8u;

    // 0x2d59a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d59a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d59ac: 0x8c831348  lw          $v1, 0x1348($a0)
    ctx->pc = 0x2d59acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
    // 0x2d59b0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2d59b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2d59b4: 0xac831348  sw          $v1, 0x1348($a0)
    ctx->pc = 0x2d59b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4936), GPR_U32(ctx, 3));
    ctx->pc = 0x2d59b8u;
}
