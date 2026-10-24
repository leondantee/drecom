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

// Function: entry_00289a44
// Address: 0x289a44 - 0x289a68
void entry_00289a44_0x289a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289a44_0x289a44");
#endif

    ctx->pc = 0x289a44u;

    // 0x289a44: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x289a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x289a48: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x289a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x289a4c: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x289a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x289a50: 0xafa800d4  sw          $t0, 0xD4($sp)
    ctx->pc = 0x289a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 8));
    // 0x289a54: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x289a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x289a58: 0xafa700d8  sw          $a3, 0xD8($sp)
    ctx->pc = 0x289a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 7));
    // 0x289a5c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x289a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x289a60: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x289a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
    // 0x289a64: 0x0  nop
    ctx->pc = 0x289a64u;
    // NOP
    ctx->pc = 0x289a68u;
}
