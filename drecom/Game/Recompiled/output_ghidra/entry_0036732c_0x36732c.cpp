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

// Function: entry_0036732c
// Address: 0x36732c - 0x36736c
void entry_0036732c_0x36732c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036732c_0x36732c");
#endif

    switch (ctx->pc) {
        case 0x36734cu: goto label_36734c;
        default: break;
    }

    ctx->pc = 0x36732cu;

    // 0x36732c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367330: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367334: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x367338: 0x2406050c  addiu       $a2, $zero, 0x50C
    ctx->pc = 0x367338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x36733c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36733cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367340: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x367340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x367344: 0xc0965d0  jal         func_259740
    ctx->pc = 0x367344u;
    SET_GPR_U32(ctx, 31, 0x36734Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367344u, 0x36734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36734Cu;
label_36734c:
    // 0x36734c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36734cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367350: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x367350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367354: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367358: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x367358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x36735c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367360: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x367360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x367364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x367368: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x367368u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x36736cu;
}
