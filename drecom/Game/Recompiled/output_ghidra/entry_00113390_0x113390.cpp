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

// Function: entry_00113390
// Address: 0x113390 - 0x11339c
void entry_00113390_0x113390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113390_0x113390");
#endif

    ctx->pc = 0x113390u;

    // 0x113390: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x113390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x113394: 0x2a900001  slti        $s0, $s4, 0x1
    ctx->pc = 0x113394u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x113398: 0x8fa20234  lw          $v0, 0x234($sp)
    ctx->pc = 0x113398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    ctx->pc = 0x11339cu;
}
