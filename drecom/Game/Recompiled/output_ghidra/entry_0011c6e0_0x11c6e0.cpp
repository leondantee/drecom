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

// Function: entry_0011c6e0
// Address: 0x11c6e0 - 0x11c6f8
void entry_0011c6e0_0x11c6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c6e0_0x11c6e0");
#endif

    ctx->pc = 0x11c6e0u;

    // 0x11c6e0: 0xae3d0000  sw          $sp, 0x0($s1)
    ctx->pc = 0x11c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 29));
    // 0x11c6e4: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x11c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x11c6e8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c6ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c6f0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11c6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c6f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x11c6f8u;
}
