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

// Function: entry_0011bbd8
// Address: 0x11bbd8 - 0x11bbe8
void entry_0011bbd8_0x11bbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bbd8_0x11bbd8");
#endif

    ctx->pc = 0x11bbd8u;

    // 0x11bbd8: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x11bbd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11bbdc: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x11bbdcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x11bbe0: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x11bbe0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x11bbe4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x11bbe4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->pc = 0x11bbe8u;
}
