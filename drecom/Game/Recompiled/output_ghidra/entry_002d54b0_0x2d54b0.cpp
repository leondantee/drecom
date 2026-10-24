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

// Function: entry_002d54b0
// Address: 0x2d54b0 - 0x2d5520
void entry_002d54b0_0x2d54b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d54b0_0x2d54b0");
#endif

    switch (ctx->pc) {
        case 0x2d54d0u: goto label_2d54d0;
        case 0x2d5508u: goto label_2d5508;
        default: break;
    }

    ctx->pc = 0x2d54b0u;

    // 0x2d54b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d54b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d54b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d54b8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d54b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d54bc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2d54bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d54c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d54c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d54c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d54c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d54c8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D54C8u;
    SET_GPR_U32(ctx, 31, 0x2D54D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D54C8u, 0x2D54D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D54D0u;
label_2d54d0:
    // 0x2d54d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d54d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d54d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d54d8: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x2d54d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x2d54dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d54dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d54e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d54e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d54e4: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2d54e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2d54e8: 0x3c023fae  lui         $v0, 0x3FAE
    ctx->pc = 0x2d54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16302 << 16));
    // 0x2d54ec: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x2d54ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x2d54f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d54f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d54f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d54f8: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2d54f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x2d54fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d54fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5500: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D5500u;
    SET_GPR_U32(ctx, 31, 0x2D5508u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D5500u, 0x2D5508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5508u;
label_2d5508:
    // 0x2d5508: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d5508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d550c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2d550cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2d5510: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d5510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5514: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2d5514u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d5518: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2D5518u;
    {
        const bool branch_taken_0x2d5518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5518) {
            ctx->pc = 0x2D559Cu;
            return;
        }
    }
    ctx->pc = 0x2D5520u;
}
