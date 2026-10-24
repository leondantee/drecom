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

// Function: entry_00184484
// Address: 0x184484 - 0x1844bc
void entry_00184484_0x184484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184484_0x184484");
#endif

    switch (ctx->pc) {
        case 0x18449cu: goto label_18449c;
        case 0x1844b4u: goto label_1844b4;
        default: break;
    }

    ctx->pc = 0x184484u;

    // 0x184484: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184488: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x184488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18448c: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x18448cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x184490: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x184490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x184494: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x184494u;
    SET_GPR_U32(ctx, 31, 0x18449Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x184494u, 0x18449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18449Cu;
label_18449c:
    // 0x18449c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x18449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1844a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1844a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1844a4: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x1844a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1844a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1844a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1844ac: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1844ACu;
    SET_GPR_U32(ctx, 31, 0x1844B4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1844ACu, 0x1844B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1844B4u;
label_1844b4:
    // 0x1844b4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1844B4u;
    {
        const bool branch_taken_0x1844b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1844b4) {
            ctx->pc = 0x18459Cu;
            return;
        }
    }
    ctx->pc = 0x1844BCu;
}
