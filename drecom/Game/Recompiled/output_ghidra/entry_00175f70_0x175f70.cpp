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

// Function: entry_00175f70
// Address: 0x175f70 - 0x175f78
void entry_00175f70_0x175f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175f70_0x175f70");
#endif

    ctx->pc = 0x175f70u;

    // 0x175f70: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x175f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x175f74: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x175f74u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x175f78u;
}
