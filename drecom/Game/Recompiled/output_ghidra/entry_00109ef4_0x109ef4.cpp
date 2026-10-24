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

// Function: entry_00109ef4
// Address: 0x109ef4 - 0x109f20
void entry_00109ef4_0x109ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109ef4_0x109ef4");
#endif

    ctx->pc = 0x109ef4u;

    // 0x109ef4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x109ef4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x109ef8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x109ef8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x109efc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x109efcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x109f00: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x109f00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x109f04: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x109f04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x109f08: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x109f08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x109f0c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x109f0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109f10: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x109f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109f14: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x109f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109f18: 0x3e00008  jr          $ra
    ctx->pc = 0x109F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F18u;
        // 0x109f1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109F20u;
}
