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

// Function: caseD_4
// Address: 0x2071d4 - 0x207218
void caseD_4_0x2071d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x2071d4");
#endif

    switch (ctx->pc) {
        case 0x2071f4u: goto label_2071f4;
        default: break;
    }

    ctx->pc = 0x2071d4u;

    // 0x2071d4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2071d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2071d8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2071d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2071dc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2071dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2071e0: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x2071e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x2071e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2071e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2071e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2071e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2071ec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2071ECu;
    SET_GPR_U32(ctx, 31, 0x2071F4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2071ECu, 0x2071F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071F4u;
label_2071f4:
    // 0x2071f4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2071f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2071f8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2071f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2071fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2071fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207200: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x207200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207204: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x207204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x207208: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20720c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20720cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x207210: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x207214: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x207214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x207218u;
}
