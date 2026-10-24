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

// Function: entry_0019bea8
// Address: 0x19bea8 - 0x19befc
void entry_0019bea8_0x19bea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bea8_0x19bea8");
#endif

    switch (ctx->pc) {
        case 0x19bec8u: goto label_19bec8;
        case 0x19bee4u: goto label_19bee4;
        default: break;
    }

    ctx->pc = 0x19bea8u;

    // 0x19bea8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19beac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19beacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19beb0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19beb4: 0x2406640b  addiu       $a2, $zero, 0x640B
    ctx->pc = 0x19beb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25611));
    // 0x19beb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19beb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bebc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19bebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19bec0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19BEC0u;
    SET_GPR_U32(ctx, 31, 0x19BEC8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19BEC0u, 0x19BEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEC8u;
label_19bec8:
    // 0x19bec8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19becc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19beccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bed0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bed4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x19bed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x19bed8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bedc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19BEDCu;
    SET_GPR_U32(ctx, 31, 0x19BEE4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19BEDCu, 0x19BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BEE4u;
label_19bee4:
    // 0x19bee4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19bee8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19bee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19beec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19beecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bef0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19bef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19bef4: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x19BEF4u;
    {
        const bool branch_taken_0x19bef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bef4) {
            ctx->pc = 0x19C094u;
            return;
        }
    }
    ctx->pc = 0x19BEFCu;
}
