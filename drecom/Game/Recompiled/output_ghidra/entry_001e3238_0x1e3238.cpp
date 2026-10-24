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

// Function: entry_001e3238
// Address: 0x1e3238 - 0x1e3240
void entry_001e3238_0x1e3238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3238_0x1e3238");
#endif

    ctx->pc = 0x1e3238u;

    // 0x1e3238: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e3238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e323c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1e323cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1e3240u;
}
