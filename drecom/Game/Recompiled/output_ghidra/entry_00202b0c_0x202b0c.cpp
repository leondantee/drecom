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

// Function: entry_00202b0c
// Address: 0x202b0c - 0x202b28
void entry_00202b0c_0x202b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202b0c_0x202b0c");
#endif

    ctx->pc = 0x202b0cu;

    // 0x202b0c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b10: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202b10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202b14: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x202b14u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x202b18: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x202b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x202b1c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202b20: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202b20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202b24: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202b24u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    ctx->pc = 0x202b28u;
}
