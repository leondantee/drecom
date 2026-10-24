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

// Function: entry_00107ad4
// Address: 0x107ad4 - 0x107adc
void entry_00107ad4_0x107ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107ad4_0x107ad4");
#endif

    ctx->pc = 0x107ad4u;

    // 0x107ad4: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x107ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x107ad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x107adcu;
}
