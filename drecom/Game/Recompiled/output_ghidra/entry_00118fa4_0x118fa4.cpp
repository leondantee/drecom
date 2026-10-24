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

// Function: entry_00118fa4
// Address: 0x118fa4 - 0x118fc8
void entry_00118fa4_0x118fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118fa4_0x118fa4");
#endif

    switch (ctx->pc) {
        case 0x118facu: goto label_118fac;
        default: break;
    }

    ctx->pc = 0x118fa4u;

    // 0x118fa4: 0xc046348  jal         func_118D20
    ctx->pc = 0x118FA4u;
    SET_GPR_U32(ctx, 31, 0x118FACu);
    ctx->pc = 0x118FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118FA4u;
    // 0x118fa8: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x118FA4u, 0x118FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118FACu;
label_118fac:
    // 0x118fac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x118facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118fb4: 0xacb60014  sw          $s6, 0x14($a1)
    ctx->pc = 0x118fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 22));
    // 0x118fb8: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x118FB8u;
    {
        const bool branch_taken_0x118fb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x118FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FB8u;
        // 0x118fbc: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118fb8) {
            ctx->pc = 0x118FF8u;
            return;
        }
    }
    ctx->pc = 0x118FC0u;
    // 0x118fc0: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x118fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x118fc4: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x118fc4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x118fc8u;
}
