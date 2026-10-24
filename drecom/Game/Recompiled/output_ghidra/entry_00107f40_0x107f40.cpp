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

// Function: entry_00107f40
// Address: 0x107f40 - 0x107f4c
void entry_00107f40_0x107f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107f40_0x107f40");
#endif

    ctx->pc = 0x107f40u;

    // 0x107f40: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x107f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x107f44: 0x8c443c0c  lw          $a0, 0x3C0C($v0)
    ctx->pc = 0x107f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15372)));
    // 0x107f48: 0x8c653c18  lw          $a1, 0x3C18($v1)
    ctx->pc = 0x107f48u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x383C18u));
    ctx->pc = 0x107f4cu;
}
