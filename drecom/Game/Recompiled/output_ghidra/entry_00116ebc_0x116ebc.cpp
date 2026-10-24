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

// Function: entry_00116ebc
// Address: 0x116ebc - 0x116eec
void entry_00116ebc_0x116ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116ebc_0x116ebc");
#endif

    ctx->pc = 0x116ebcu;

    // 0x116ebc: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x116ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x116ec0: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x116ec0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x116ec4: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x116ec4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x116ec8: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x116ec8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x116ecc: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x116eccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x116ed0: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x116ed0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x116ed4: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x116ed4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x116ed8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x116ed8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x116edc: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x116edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116ee0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x116ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x116EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EE4u;
        // 0x116ee8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116EECu;
}
