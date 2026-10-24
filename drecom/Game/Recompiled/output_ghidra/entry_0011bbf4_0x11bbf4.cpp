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

// Function: entry_0011bbf4
// Address: 0x11bbf4 - 0x11bc00
void entry_0011bbf4_0x11bbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bbf4_0x11bbf4");
#endif

    ctx->pc = 0x11bbf4u;

    // 0x11bbf4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11bbf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11bbf8: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x11bbf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11bbfc: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x11bbfcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    ctx->pc = 0x11bc00u;
}
