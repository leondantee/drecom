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

// Function: entry_0011bb38
// Address: 0x11bb38 - 0x11bb48
void entry_0011bb38_0x11bb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bb38_0x11bb38");
#endif

    ctx->pc = 0x11bb38u;

    // 0x11bb38: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11bb38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11bb3c: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x11bb3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11bb40: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x11bb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x11bb44: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x11bb44u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    ctx->pc = 0x11bb48u;
}
