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

// Function: _initSeqAgain
// Address: 0x10aae0 - 0x10aaf0
void _initSeqAgain_0x10aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_initSeqAgain_0x10aae0");
#endif

    ctx->pc = 0x10aae0u;

    // 0x10aae0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10aae4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aae8: 0x804169e  j           func_105A78
    ctx->pc = 0x10AAE8u;
    ctx->pc = 0x10AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAE8u;
    // 0x10aaec: 0xac4044b0  sw          $zero, 0x44B0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17584), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A78u;
    _ipuSetMPEG1_0x105a78(rdram, ctx, runtime); return;
    ctx->pc = 0x10AAF0u;
}
