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

// Function: entry_0010adc8
// Address: 0x10adc8 - 0x10ae04
void entry_0010adc8_0x10adc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010adc8_0x10adc8");
#endif

    ctx->pc = 0x10adc8u;

    // 0x10adc8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10adcc: 0x25e43100  addiu       $a0, $t7, 0x3100
    ctx->pc = 0x10adccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 12544));
    // 0x10add0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10add0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10add4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10add4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10add8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x10add8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10addc: 0x3463b430  ori         $v1, $v1, 0xB430
    ctx->pc = 0x10addcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46128);
    // 0x10ade0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ade4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x10ade8: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x10ade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x10adec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10adecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10adf0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10adf0u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x10adf4: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x10adf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x10adf8: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x10adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x10adfc: 0x3e00008  jr          $ra
    ctx->pc = 0x10ADFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADFCu;
        // 0x10ae00: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ADFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AE04u;
}
