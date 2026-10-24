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

// Function: entry_0036762c
// Address: 0x36762c - 0x36766c
void entry_0036762c_0x36762c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036762c_0x36762c");
#endif

    switch (ctx->pc) {
        case 0x36764cu: goto label_36764c;
        default: break;
    }

    ctx->pc = 0x36762cu;

    // 0x36762c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36762cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367630: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367634: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x367638: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x367638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x36763c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36763cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367640: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x367640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x367644: 0xc0965d0  jal         func_259740
    ctx->pc = 0x367644u;
    SET_GPR_U32(ctx, 31, 0x36764Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367644u, 0x36764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36764Cu;
label_36764c:
    // 0x36764c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367650: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x367650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367654: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367658: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x367658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x36765c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36765cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367660: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x367660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x367664: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x367668: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x367668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36766cu;
}
