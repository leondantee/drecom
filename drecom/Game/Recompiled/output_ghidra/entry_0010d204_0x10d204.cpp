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

// Function: entry_0010d204
// Address: 0x10d204 - 0x10d214
void entry_0010d204_0x10d204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d204_0x10d204");
#endif

    ctx->pc = 0x10d204u;

    // 0x10d204: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x10d204u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x10d208: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d20c: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x10d20cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x10d210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x10d214u;
}
