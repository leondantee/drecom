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

// Function: entry_0010f958
// Address: 0x10f958 - 0x10f968
void entry_0010f958_0x10f958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f958_0x10f958");
#endif

    ctx->pc = 0x10f958u;

    // 0x10f958: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10f958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10f95c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x10f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10f960: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x10f960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x10f964: 0x8c6445bc  lw          $a0, 0x45BC($v1)
    ctx->pc = 0x10f964u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3845BCu));
    ctx->pc = 0x10f968u;
}
