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

// Function: entry_0010d214
// Address: 0x10d214 - 0x10d220
void entry_0010d214_0x10d214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d214_0x10d214");
#endif

    ctx->pc = 0x10d214u;

    // 0x10d214: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10d214u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10d218: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x10d218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x10d21c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10d21cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x10d220u;
}
