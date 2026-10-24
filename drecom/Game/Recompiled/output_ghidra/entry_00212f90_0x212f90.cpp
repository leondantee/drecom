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

// Function: entry_00212f90
// Address: 0x212f90 - 0x212fa0
void entry_00212f90_0x212f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212f90_0x212f90");
#endif

    switch (ctx->pc) {
        case 0x212f98u: goto label_212f98;
        default: break;
    }

    ctx->pc = 0x212f90u;

    // 0x212f90: 0xc084fb2  jal         func_213EC8
    ctx->pc = 0x212F90u;
    SET_GPR_U32(ctx, 31, 0x212F98u);
    ctx->pc = 0x212F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212F90u;
    // 0x212f94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213EC8u;
    {
        ctx->pc = 0x212F98u;
        ps2_stubs::sceTtyWrite(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x212F98u) { return; }
    ctx->pc = 0x212F98u;
label_212f98:
    // 0x212f98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x212F98u;
    {
        const bool branch_taken_0x212f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F98u;
        // 0x212f9c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f98) {
            ctx->pc = 0x212FA8u;
            return;
        }
    }
    ctx->pc = 0x212FA0u;
}
