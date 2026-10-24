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

// Function: entry_0031cf74
// Address: 0x31cf74 - 0x31cf8c
void entry_0031cf74_0x31cf74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031cf74_0x31cf74");
#endif

    ctx->pc = 0x31cf74u;

    // 0x31cf74: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf78: 0xac60129c  sw          $zero, 0x129C($v1)
    ctx->pc = 0x31cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4764), GPR_U32(ctx, 0));
    // 0x31cf7c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf80: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x31cf80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31cf84: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x31cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31cf88: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x31cf88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x31cf8cu;
}
