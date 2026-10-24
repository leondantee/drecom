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

// Function: entry_0010de38
// Address: 0x10de38 - 0x10de58
void entry_0010de38_0x10de38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010de38_0x10de38");
#endif

    ctx->pc = 0x10de38u;

    // 0x10de38: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x10de38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10de3c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x10de3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x10de40: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x10DE40u;
    {
        const bool branch_taken_0x10de40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE40u;
        // 0x10de44: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de40) {
            ctx->pc = 0x10DEACu;
            return;
        }
    }
    ctx->pc = 0x10DE48u;
    // 0x10de48: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x10de48u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x10de4c: 0x24424000  addiu       $v0, $v0, 0x4000
    ctx->pc = 0x10de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16384));
    // 0x10de50: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x10de50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x10de54: 0x0  nop
    ctx->pc = 0x10de54u;
    // NOP
    ctx->pc = 0x10de58u;
}
