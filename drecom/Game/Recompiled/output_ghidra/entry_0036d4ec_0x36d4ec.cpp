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

// Function: entry_0036d4ec
// Address: 0x36d4ec - 0x36d510
void entry_0036d4ec_0x36d4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d4ec_0x36d4ec");
#endif

    ctx->pc = 0x36d4ecu;

    // 0x36d4ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d4f0: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x36d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36d4f4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x36d4f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36d4f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d4fc: 0x24421338  addiu       $v0, $v0, 0x1338
    ctx->pc = 0x36d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4920));
    // 0x36d500: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x36d500u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x36d504: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d508: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x36d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36d50c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x36d50cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x36d510u;
}
