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

// Function: _cleanup_r
// Address: 0x117260 - 0x11726c
void _cleanup_r_0x117260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_cleanup_r_0x117260");
#endif

    ctx->pc = 0x117260u;

    // 0x117260: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x117260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x117264: 0x8045ef6  j           func_117BD8
    ctx->pc = 0x117264u;
    ctx->pc = 0x117268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117264u;
    // 0x117268: 0x24a56fb0  addiu       $a1, $a1, 0x6FB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BD8u;
    _fwalk_0x117bd8(rdram, ctx, runtime); return;
    ctx->pc = 0x11726Cu;
}
