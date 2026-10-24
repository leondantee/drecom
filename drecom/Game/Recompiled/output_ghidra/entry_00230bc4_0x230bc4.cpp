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

// Function: entry_00230bc4
// Address: 0x230bc4 - 0x230c04
void entry_00230bc4_0x230bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230bc4_0x230bc4");
#endif

    switch (ctx->pc) {
        case 0x230bd4u: goto label_230bd4;
        case 0x230be0u: goto label_230be0;
        default: break;
    }

    ctx->pc = 0x230bc4u;

    // 0x230bc4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230bc8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x230bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x230bcc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x230BCCu;
    SET_GPR_U32(ctx, 31, 0x230BD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x230BCCu, 0x230BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230BD4u;
label_230bd4:
    // 0x230bd4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230bd8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x230BD8u;
    SET_GPR_U32(ctx, 31, 0x230BE0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x230BD8u, 0x230BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230BE0u;
label_230be0:
    // 0x230be0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230be4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x230be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x230be8: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x230BE8u;
    {
        const bool branch_taken_0x230be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x230be8) {
            ctx->pc = 0x230CA4u;
            return;
        }
    }
    ctx->pc = 0x230BF0u;
    // 0x230bf0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x230bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230bf4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230bf8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x230bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x230bfc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x230BFCu;
    {
        const bool branch_taken_0x230bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230bfc) {
            ctx->pc = 0x230CA4u;
            return;
        }
    }
    ctx->pc = 0x230C04u;
}
