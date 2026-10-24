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

// Function: entry_00116bc4
// Address: 0x116bc4 - 0x116bf4
void entry_00116bc4_0x116bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116bc4_0x116bc4");
#endif

    switch (ctx->pc) {
        case 0x116bd8u: goto label_116bd8;
        case 0x116bf0u: goto label_116bf0;
        default: break;
    }

    ctx->pc = 0x116bc4u;

    // 0x116bc4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x116bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x116bc8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bcc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x116bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116bd0: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116BD0u;
    SET_GPR_U32(ctx, 31, 0x116BD8u);
    ctx->pc = 0x116BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BD0u;
    // 0x116bd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116BD0u, 0x116BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BD8u;
label_116bd8:
    // 0x116bd8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x116bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116bdc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116be0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x116be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x116be4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x116be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116be8: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116BE8u;
    SET_GPR_U32(ctx, 31, 0x116BF0u);
    ctx->pc = 0x116BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BE8u;
    // 0x116bec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116BE8u, 0x116BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BF0u;
label_116bf0:
    // 0x116bf0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->pc = 0x116bf4u;
}
