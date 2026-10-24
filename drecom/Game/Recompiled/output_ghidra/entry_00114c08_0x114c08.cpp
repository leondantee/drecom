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

// Function: entry_00114c08
// Address: 0x114c08 - 0x114c4c
void entry_00114c08_0x114c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114c08_0x114c08");
#endif

    switch (ctx->pc) {
        case 0x114c24u: goto label_114c24;
        default: break;
    }

    ctx->pc = 0x114c08u;

    // 0x114c08: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x114c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x114c0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x114c10: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x114c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x114c14: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x114C14u;
    {
        const bool branch_taken_0x114c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C14u;
        // 0x114c18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c14) {
            ctx->pc = 0x114CA8u;
            return;
        }
    }
    ctx->pc = 0x114C1Cu;
    // 0x114c1c: 0xc04440e  jal         func_111038
    ctx->pc = 0x114C1Cu;
    SET_GPR_U32(ctx, 31, 0x114C24u);
    ctx->pc = 0x114C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C1Cu;
    // 0x114c20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111038u, 0x114C1Cu, 0x114C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C24u;
label_114c24:
    // 0x114c24: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x114c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x114c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114c2c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x114C2Cu;
    {
        const bool branch_taken_0x114c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x114C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C2Cu;
        // 0x114c30: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c2c) {
            ctx->pc = 0x114C70u;
            return;
        }
    }
    ctx->pc = 0x114C34u;
    // 0x114c34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114C34u;
    {
        const bool branch_taken_0x114c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C34u;
        // 0x114c38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c34) {
            ctx->pc = 0x114C4Cu;
            return;
        }
    }
    ctx->pc = 0x114C3Cu;
    // 0x114c3c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x114C3Cu;
    {
        const bool branch_taken_0x114c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C3Cu;
        // 0x114c40: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c3c) {
            ctx->pc = 0x114C5Cu;
            return;
        }
    }
    ctx->pc = 0x114C44u;
    // 0x114c44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x114C44u;
    {
        const bool branch_taken_0x114c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114c44) {
            ctx->pc = 0x114C98u;
            return;
        }
    }
    ctx->pc = 0x114C4Cu;
}
