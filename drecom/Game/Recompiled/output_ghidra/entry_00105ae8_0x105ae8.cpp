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

// Function: entry_00105ae8
// Address: 0x105ae8 - 0x105b2c
void entry_00105ae8_0x105ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105ae8_0x105ae8");
#endif

    switch (ctx->pc) {
        case 0x105b28u: goto label_105b28;
        default: break;
    }

    ctx->pc = 0x105ae8u;

    // 0x105ae8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105aec: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x105aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x105af0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105af0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B420u));
    // 0x105af4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x105AF4u;
    {
        const bool branch_taken_0x105af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x105AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AF4u;
        // 0x105af8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105af4) {
            ctx->pc = 0x105B2Cu;
            return;
        }
    }
    ctx->pc = 0x105AFCu;
    // 0x105afc: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x105afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x105b00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105b04: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x105b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x105b08: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x105B08u;
    {
        const bool branch_taken_0x105b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x105B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B08u;
        // 0x105b0c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b08) {
            ctx->pc = 0x105B2Cu;
            return;
        }
    }
    ctx->pc = 0x105B10u;
    // 0x105b10: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x105b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x105b14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x105b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105b18: 0x8c443bf4  lw          $a0, 0x3BF4($v0)
    ctx->pc = 0x105b18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383BF4u));
    // 0x105b1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x105b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b20: 0xc042914  jal         func_10A450
    ctx->pc = 0x105B20u;
    SET_GPR_U32(ctx, 31, 0x105B28u);
    ctx->pc = 0x105B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B20u;
    // 0x105b24: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x105B20u, 0x105B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B28u;
label_105b28:
    // 0x105b28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x105b2cu;
}
