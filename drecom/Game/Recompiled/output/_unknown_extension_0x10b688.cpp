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

// Function: _unknown_extension
// Address: 0x10b688 - 0x10b694
void _unknown_extension_0x10b688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_unknown_extension_0x10b688");
#endif

    ctx->pc = 0x10b688u;

    // 0x10b688: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10b688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10b68c: 0x8042b36  j           func_10ACD8
    ctx->pc = 0x10B68Cu;
    ctx->pc = 0x10B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B68Cu;
    // 0x10b690: 0x2484ca08  addiu       $a0, $a0, -0x35F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    ps2__Error_0x10acd8(rdram, ctx, runtime); return;
    ctx->pc = 0x10B694u;
}
