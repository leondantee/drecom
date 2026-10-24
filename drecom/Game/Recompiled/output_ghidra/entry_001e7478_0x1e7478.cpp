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

// Function: entry_001e7478
// Address: 0x1e7478 - 0x1e7480
void entry_001e7478_0x1e7478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7478_0x1e7478");
#endif

    ctx->pc = 0x1e7478u;

    // 0x1e7478: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1e7478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e747c: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x1e747cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1e7480u;
}
