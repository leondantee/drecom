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

// Function: entry_0010f9c4
// Address: 0x10f9c4 - 0x10f9d8
void entry_0010f9c4_0x10f9c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f9c4_0x10f9c4");
#endif

    ctx->pc = 0x10f9c4u;

    // 0x10f9c4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10f9c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f9cc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x10f9ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f9d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f9d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10f9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10f9d8u;
}
