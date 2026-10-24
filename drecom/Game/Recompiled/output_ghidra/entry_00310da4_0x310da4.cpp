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

// Function: entry_00310da4
// Address: 0x310da4 - 0x310dec
void entry_00310da4_0x310da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310da4_0x310da4");
#endif

    switch (ctx->pc) {
        case 0x310dc4u: goto label_310dc4;
        default: break;
    }

    ctx->pc = 0x310da4u;

    // 0x310da4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310da8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x310da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310dac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x310dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x310db0: 0x2406280c  addiu       $a2, $zero, 0x280C
    ctx->pc = 0x310db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10252));
    // 0x310db4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x310db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310db8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x310db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x310dbc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x310DBCu;
    SET_GPR_U32(ctx, 31, 0x310DC4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x310DBCu, 0x310DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310DC4u;
label_310dc4:
    // 0x310dc4: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x310dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x310dc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310dcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310dd0: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x310dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x310dd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310dd8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x310dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x310ddc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310de0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x310de0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x310de4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x310de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x310de8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x310de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x310decu;
}
