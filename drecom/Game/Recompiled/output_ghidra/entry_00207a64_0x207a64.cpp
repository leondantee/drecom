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

// Function: entry_00207a64
// Address: 0x207a64 - 0x207ac0
void entry_00207a64_0x207a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207a64_0x207a64");
#endif

    switch (ctx->pc) {
        case 0x207aa0u: goto label_207aa0;
        default: break;
    }

    ctx->pc = 0x207a64u;

    // 0x207a64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207a68: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207a6c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x207a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x207a70: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x207a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x207a74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207a78: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207a7c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x207a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x207a80: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207a84: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207a88: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x207a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x207a8c: 0x2406640a  addiu       $a2, $zero, 0x640A
    ctx->pc = 0x207a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25610));
    // 0x207a90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x207a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207a94: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x207a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x207a98: 0xc0965d0  jal         func_259740
    ctx->pc = 0x207A98u;
    SET_GPR_U32(ctx, 31, 0x207AA0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x207A98u, 0x207AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207AA0u;
label_207aa0:
    // 0x207aa0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207aa4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x207aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x207aa8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207aac: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x207aacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x207ab0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207ab4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x207ab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x207ab8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x207abc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x207abcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x207ac0u;
}
