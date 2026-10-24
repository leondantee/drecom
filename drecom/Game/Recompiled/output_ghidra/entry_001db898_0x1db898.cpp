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

// Function: entry_001db898
// Address: 0x1db898 - 0x1db8b8
void entry_001db898_0x1db898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db898_0x1db898");
#endif

    ctx->pc = 0x1db898u;

    // 0x1db898: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1db898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1db89c: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x1db89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db8a0: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x1db8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x1db8a4: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x1db8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db8a8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1db8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1db8ac: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x1db8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1db8b0: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1db8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1db8b4: 0x0  nop
    ctx->pc = 0x1db8b4u;
    // NOP
    ctx->pc = 0x1db8b8u;
}
