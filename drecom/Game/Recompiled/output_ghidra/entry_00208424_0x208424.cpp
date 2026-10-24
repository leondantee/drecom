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

// Function: entry_00208424
// Address: 0x208424 - 0x208470
void entry_00208424_0x208424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208424_0x208424");
#endif

    switch (ctx->pc) {
        case 0x208444u: goto label_208444;
        default: break;
    }

    ctx->pc = 0x208424u;

    // 0x208424: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208428: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x208428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20842c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20842cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x208430: 0x24063c07  addiu       $a2, $zero, 0x3C07
    ctx->pc = 0x208430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15367));
    // 0x208434: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x208434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208438: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x208438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20843c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20843Cu;
    SET_GPR_U32(ctx, 31, 0x208444u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20843Cu, 0x208444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208444u;
label_208444:
    // 0x208444: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208448: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x208448u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20844c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x20844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208450: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x208450u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x208454: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208458: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x208458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20845c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208460: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x208460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x208464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208468: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20846c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x20846cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    ctx->pc = 0x208470u;
}
