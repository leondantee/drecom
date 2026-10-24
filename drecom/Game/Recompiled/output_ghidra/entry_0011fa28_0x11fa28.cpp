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

// Function: entry_0011fa28
// Address: 0x11fa28 - 0x11fa48
void entry_0011fa28_0x11fa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fa28_0x11fa28");
#endif

    ctx->pc = 0x11fa28u;

    // 0x11fa28: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11fa2c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FA2Cu;
    {
        const bool branch_taken_0x11fa2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fa2c) {
            ctx->pc = 0x11FA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FA2Cu;
            // 0x11fa30: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FA50u;
            return;
        }
    }
    ctx->pc = 0x11FA34u;
    // 0x11fa34: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x11fa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x11fa38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FA38u;
    {
        const bool branch_taken_0x11fa38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA38u;
        // 0x11fa3c: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa38) {
            ctx->pc = 0x11FA48u;
            return;
        }
    }
    ctx->pc = 0x11FA40u;
    // 0x11fa40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11FA40u;
    {
        const bool branch_taken_0x11fa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA40u;
        // 0x11fa44: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa40) {
            ctx->pc = 0x11FA4Cu;
            return;
        }
    }
    ctx->pc = 0x11FA48u;
}
