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

// Function: entry_00129278
// Address: 0x129278 - 0x1292a8
void entry_00129278_0x129278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129278_0x129278");
#endif

    ctx->pc = 0x129278u;

    // 0x129278: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12927c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12927cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129280: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129284: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x129284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x129288: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12928c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12928cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129290: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129294: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129294u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x129298: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12929c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12929cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1292a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1292a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1292a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1292a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1292a8u;
}
