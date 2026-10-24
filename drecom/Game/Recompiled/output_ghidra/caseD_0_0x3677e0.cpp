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

// Function: caseD_0
// Address: 0x3677e0 - 0x367834
void caseD_0_0x3677e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x3677e0");
#endif

    switch (ctx->pc) {
        case 0x367800u: goto label_367800;
        default: break;
    }

    ctx->pc = 0x3677e0u;

    // 0x3677e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3677e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3677e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3677e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3677e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3677e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3677ec: 0x2406050c  addiu       $a2, $zero, 0x50C
    ctx->pc = 0x3677ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x3677f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3677f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3677f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3677f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3677f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3677F8u;
    SET_GPR_U32(ctx, 31, 0x367800u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3677F8u, 0x367800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367800u;
label_367800:
    // 0x367800: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367804: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x367804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x367808: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36780c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x36780cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x367810: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367814: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x367814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x367818: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x367818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x36781c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x36781cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x367820: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x367820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    // 0x367824: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367828: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x367828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x36782c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x367830: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x367830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x367834u;
}
