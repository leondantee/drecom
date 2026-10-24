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

// Function: entry_0031d8b0
// Address: 0x31d8b0 - 0x31d8d4
void entry_0031d8b0_0x31d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d8b0_0x31d8b0");
#endif

    ctx->pc = 0x31d8b0u;

    // 0x31d8b0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d8b4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31d8b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31d8b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d8bc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31d8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x31d8c0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x31d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31d8c4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d8c8: 0xac43128c  sw          $v1, 0x128C($v0)
    ctx->pc = 0x31d8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 3));
    // 0x31d8cc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d8d0: 0xac40129c  sw          $zero, 0x129C($v0)
    ctx->pc = 0x31d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4764), GPR_U32(ctx, 0));
    ctx->pc = 0x31d8d4u;
}
