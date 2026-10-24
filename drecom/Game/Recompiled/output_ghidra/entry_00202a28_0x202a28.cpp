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

// Function: entry_00202a28
// Address: 0x202a28 - 0x202a38
void entry_00202a28_0x202a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202a28_0x202a28");
#endif

    ctx->pc = 0x202a28u;

    // 0x202a28: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a2c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a30: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x202a30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x202a34: 0x0  nop
    ctx->pc = 0x202a34u;
    // NOP
    ctx->pc = 0x202a38u;
}
