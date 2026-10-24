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

// Function: entry_00107030
// Address: 0x107030 - 0x107038
void entry_00107030_0x107030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107030_0x107030");
#endif

    ctx->pc = 0x107030u;

    // 0x107030: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x107030u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x107034: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x107034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x107038u;
}
