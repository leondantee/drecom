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

// Function: entry_0033d8ac
// Address: 0x33d8ac - 0x33d8d0
void entry_0033d8ac_0x33d8ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d8ac_0x33d8ac");
#endif

    ctx->pc = 0x33d8acu;

    // 0x33d8ac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d8b0: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x33d8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d8b4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d8b8: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x33d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x33d8bc: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x33d8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x33d8c0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d8c4: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x33d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x33d8c8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x33d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x33d8cc: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x33d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
    ctx->pc = 0x33d8d0u;
}
