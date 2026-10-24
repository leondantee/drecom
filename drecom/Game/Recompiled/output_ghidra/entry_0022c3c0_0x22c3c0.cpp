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

// Function: entry_0022c3c0
// Address: 0x22c3c0 - 0x22c46c
void entry_0022c3c0_0x22c3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c3c0_0x22c3c0");
#endif

    switch (ctx->pc) {
        case 0x22c440u: goto label_22c440;
        default: break;
    }

    ctx->pc = 0x22c3c0u;

    // 0x22c3c0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x22c3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c3c4: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x22c3c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x22c3c8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x22c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x22c3cc: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x22c3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22c3d0: 0x1480006e  bnez        $a0, . + 4 + (0x6E << 2)
    ctx->pc = 0x22C3D0u;
    {
        const bool branch_taken_0x22c3d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c3d0) {
            ctx->pc = 0x22C58Cu;
            return;
        }
    }
    ctx->pc = 0x22C3D8u;
    // 0x22c3d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c3dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c3e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c3e4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22c3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22c3e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c3e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c3ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c3f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c3f4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22c3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22c3f8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x22c3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c400: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c404: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c408: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22c408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22c40c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x22c410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c414: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c418: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c41c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22c41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22c420: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c424: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c428: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22c428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22c42c: 0x24063c24  addiu       $a2, $zero, 0x3C24
    ctx->pc = 0x22c42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15396));
    // 0x22c430: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22c430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c434: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22c434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22c438: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22C438u;
    SET_GPR_U32(ctx, 31, 0x22C440u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22C438u, 0x22C440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C440u;
label_22c440:
    // 0x22c440: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22c440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c444: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c448: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x22c448u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x22c44c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c450: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22c450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c454: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22c454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22c458: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x22c458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x22c45c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22c45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22c460: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22c460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x22c464: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x22C464u;
    {
        const bool branch_taken_0x22c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c464) {
            ctx->pc = 0x22C58Cu;
            return;
        }
    }
    ctx->pc = 0x22C46Cu;
}
