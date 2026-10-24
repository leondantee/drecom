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

// Function: entry_00214b20
// Address: 0x214b20 - 0x214b50
void entry_00214b20_0x214b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214b20_0x214b20");
#endif

    ctx->pc = 0x214b20u;

    // 0x214b20: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x214b20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214b24: 0x1440fea4  bnez        $v0, . + 4 + (-0x15C << 2)
    ctx->pc = 0x214B24u;
    {
        const bool branch_taken_0x214b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B24u;
        // 0x214b28: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b24) {
            ctx->pc = 0x2145B8u;
            return;
        }
    }
    ctx->pc = 0x214B2Cu;
    // 0x214b2c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x214b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x214b30: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x214b30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x214b34: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x214b34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x214b38: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x214b38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214b3c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x214b3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214b40: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x214b40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214b44: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x214b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214b48: 0x3e00008  jr          $ra
    ctx->pc = 0x214B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B48u;
        // 0x214b4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214B50u;
}
