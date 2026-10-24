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

// Function: entry_00170900
// Address: 0x170900 - 0x170908
void entry_00170900_0x170900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170900_0x170900");
#endif

    ctx->pc = 0x170900u;

    // 0x170900: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x170900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x170904: 0x30d0ffff  andi        $s0, $a2, 0xFFFF
    ctx->pc = 0x170904u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x170908u;
}
