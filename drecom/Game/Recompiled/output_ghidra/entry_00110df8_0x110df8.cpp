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

// Function: entry_00110df8
// Address: 0x110df8 - 0x110e00
void entry_00110df8_0x110df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110df8_0x110df8");
#endif

    ctx->pc = 0x110df8u;

    // 0x110df8: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x110df8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x110dfc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x110dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->pc = 0x110e00u;
}
