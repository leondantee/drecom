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

// Function: entry_00230e88
// Address: 0x230e88 - 0x230ecc
void entry_00230e88_0x230e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230e88_0x230e88");
#endif

    switch (ctx->pc) {
        case 0x230ea8u: goto label_230ea8;
        case 0x230eb8u: goto label_230eb8;
        case 0x230ec4u: goto label_230ec4;
        default: break;
    }

    ctx->pc = 0x230e88u;

    // 0x230e88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e90: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x230e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x230e94: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x230e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x230e98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x230e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230e9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x230e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x230ea0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x230EA0u;
    SET_GPR_U32(ctx, 31, 0x230EA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x230EA0u, 0x230EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EA8u;
label_230ea8:
    // 0x230ea8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230eac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x230eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x230eb0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x230EB0u;
    SET_GPR_U32(ctx, 31, 0x230EB8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x230EB0u, 0x230EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EB8u;
label_230eb8:
    // 0x230eb8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230ebc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x230EBCu;
    SET_GPR_U32(ctx, 31, 0x230EC4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x230EBCu, 0x230EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EC4u;
label_230ec4:
    // 0x230ec4: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x230EC4u;
    {
        const bool branch_taken_0x230ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230ec4) {
            ctx->pc = 0x231154u;
            return;
        }
    }
    ctx->pc = 0x230ECCu;
}
