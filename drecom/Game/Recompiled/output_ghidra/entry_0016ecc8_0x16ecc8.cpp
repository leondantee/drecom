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

// Function: entry_0016ecc8
// Address: 0x16ecc8 - 0x16ecd8
void entry_0016ecc8_0x16ecc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ecc8_0x16ecc8");
#endif

    ctx->pc = 0x16ecc8u;

    // 0x16ecc8: 0x2631003c  addiu       $s1, $s1, 0x3C
    ctx->pc = 0x16ecc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x16eccc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x16ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x16ecd0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x16ecd0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16ecd4: 0x0  nop
    ctx->pc = 0x16ecd4u;
    // NOP
    ctx->pc = 0x16ecd8u;
}
