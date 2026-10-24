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

// Function: entry_00107204
// Address: 0x107204 - 0x107218
void entry_00107204_0x107204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107204_0x107204");
#endif

    ctx->pc = 0x107204u;

    // 0x107204: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x107204u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107208: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x107208u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x10720c: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x10720cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x107210: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x107210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x107214: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x107214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x107218u;
}
