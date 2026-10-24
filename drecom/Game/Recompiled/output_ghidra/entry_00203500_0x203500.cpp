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

// Function: entry_00203500
// Address: 0x203500 - 0x203510
void entry_00203500_0x203500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203500_0x203500");
#endif

    ctx->pc = 0x203500u;

    // 0x203500: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203504: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203504u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203508: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x203508u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x20350c: 0x0  nop
    ctx->pc = 0x20350cu;
    // NOP
    ctx->pc = 0x203510u;
}
