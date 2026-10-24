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

// Function: entry_00116284
// Address: 0x116284 - 0x1162c0
void entry_00116284_0x116284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116284_0x116284");
#endif

    switch (ctx->pc) {
        case 0x1162b0u: goto label_1162b0;
        default: break;
    }

    ctx->pc = 0x116284u;

    // 0x116284: 0x138823  negu        $s1, $s3
    ctx->pc = 0x116284u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x116288: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x116288u;
    {
        const bool branch_taken_0x116288 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116288u;
        // 0x11628c: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116288) {
            ctx->pc = 0x1162E8u;
            return;
        }
    }
    ctx->pc = 0x116290u;
    // 0x116290: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x116290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x116294: 0x2463da08  addiu       $v1, $v1, -0x25F8
    ctx->pc = 0x116294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957576));
    // 0x116298: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x116298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11629c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1162a0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1162a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162a4: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x1162a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1162a8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1162A8u;
    SET_GPR_U32(ctx, 31, 0x1162B0u);
    ctx->pc = 0x1162ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162A8u;
    // 0x1162ac: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1162A8u, 0x1162B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162B0u;
label_1162b0:
    // 0x1162b0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1162B0u;
    {
        const bool branch_taken_0x1162b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1162B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162B0u;
        // 0x1162b4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162b0) {
            ctx->pc = 0x1162E8u;
            return;
        }
    }
    ctx->pc = 0x1162B8u;
    // 0x1162b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1162b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1162bc: 0x2451dad0  addiu       $s1, $v0, -0x2530
    ctx->pc = 0x1162bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957776));
    ctx->pc = 0x1162c0u;
}
