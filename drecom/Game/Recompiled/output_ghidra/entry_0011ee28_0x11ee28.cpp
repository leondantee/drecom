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

// Function: entry_0011ee28
// Address: 0x11ee28 - 0x11ee34
void entry_0011ee28_0x11ee28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ee28_0x11ee28");
#endif

    ctx->pc = 0x11ee28u;

    // 0x11ee28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11ee2c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x11ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x11ee30: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11ee30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11ee34u;
}
