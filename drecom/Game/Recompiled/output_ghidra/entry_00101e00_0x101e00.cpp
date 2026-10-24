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

// Function: entry_00101e00
// Address: 0x101e00 - 0x101e2c
void entry_00101e00_0x101e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101e00_0x101e00");
#endif

    ctx->pc = 0x101e00u;

    // 0x101e00: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x101e00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x101e04: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x101e04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x101e08: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x101e08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x101e0c: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x101e0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x101e10: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x101e10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101e14: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x101e14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101e18: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x101e18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101e1c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x101e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101e20: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x101e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101e24: 0x3e00008  jr          $ra
    ctx->pc = 0x101E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E24u;
        // 0x101e28: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101E2Cu;
}
