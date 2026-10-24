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

// Function: entry_00367400
// Address: 0x367400 - 0x367440
void entry_00367400_0x367400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00367400_0x367400");
#endif

    switch (ctx->pc) {
        case 0x367420u: goto label_367420;
        default: break;
    }

    ctx->pc = 0x367400u;

    // 0x367400: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367404: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367408: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36740c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x36740cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x367410: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x367410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367414: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x367414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x367418: 0xc0965d0  jal         func_259740
    ctx->pc = 0x367418u;
    SET_GPR_U32(ctx, 31, 0x367420u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367418u, 0x367420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367420u;
label_367420:
    // 0x367420: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367424: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x367424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367428: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36742c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x36742cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x367430: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367434: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x367434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x367438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36743c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36743cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x367440u;
}
