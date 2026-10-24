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

// Function: entry_002d1798
// Address: 0x2d1798 - 0x2d1810
void entry_002d1798_0x2d1798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1798_0x2d1798");
#endif

    switch (ctx->pc) {
        case 0x2d17b8u: goto label_2d17b8;
        case 0x2d17d8u: goto label_2d17d8;
        case 0x2d17f8u: goto label_2d17f8;
        default: break;
    }

    ctx->pc = 0x2d1798u;

    // 0x2d1798: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d1798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d179c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d179cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d17a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d17a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d17a4: 0x24065a00  addiu       $a2, $zero, 0x5A00
    ctx->pc = 0x2d17a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x2d17a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d17a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d17ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d17acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d17b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D17B0u;
    SET_GPR_U32(ctx, 31, 0x2D17B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D17B0u, 0x2D17B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17B8u;
label_2d17b8:
    // 0x2d17b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d17b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d17bc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d17bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d17c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d17c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d17c4: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x2d17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x2d17c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d17c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d17cc: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2d17ccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d17d0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D17D0u;
    SET_GPR_U32(ctx, 31, 0x2D17D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D17D0u, 0x2D17D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17D8u;
label_2d17d8:
    // 0x2d17d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d17dc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2d17dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2d17e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d17e4: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x2d17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x2d17e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d17e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d17ec: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2d17ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d17f0: 0xc0b54f4  jal         func_2D53D0
    ctx->pc = 0x2D17F0u;
    SET_GPR_U32(ctx, 31, 0x2D17F8u);
    ctx->pc = 0x2D53D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D53D0u, 0x2D17F0u, 0x2D17F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17F8u;
label_2d17f8:
    // 0x2d17f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d17f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d17fc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d17fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d1800: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d1800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1804: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d1804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d1808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d1808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d180c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d180cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d1810u;
}
