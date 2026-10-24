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

// Function: entry_0019bdf0
// Address: 0x19bdf0 - 0x19be1c
void entry_0019bdf0_0x19bdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bdf0_0x19bdf0");
#endif

    switch (ctx->pc) {
        case 0x19bdfcu: goto label_19bdfc;
        default: break;
    }

    ctx->pc = 0x19bdf0u;

    // 0x19bdf0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bdf4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19BDF4u;
    SET_GPR_U32(ctx, 31, 0x19BDFCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19BDF4u, 0x19BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDFCu;
label_19bdfc:
    // 0x19bdfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19be00: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19be00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19be04: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BE04u;
    {
        const bool branch_taken_0x19be04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19be04) {
            ctx->pc = 0x19BE1Cu;
            return;
        }
    }
    ctx->pc = 0x19BE0Cu;
    // 0x19be0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19be10: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19be10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19be14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19be14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19be18: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19be18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x19be1cu;
}
