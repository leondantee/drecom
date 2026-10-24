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

// Function: entry_001074fc
// Address: 0x1074fc - 0x107508
void entry_001074fc_0x1074fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001074fc_0x1074fc");
#endif

    ctx->pc = 0x1074fcu;

    // 0x1074fc: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x1074fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107500: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x107500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x107504: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x107504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x107508u;
}
