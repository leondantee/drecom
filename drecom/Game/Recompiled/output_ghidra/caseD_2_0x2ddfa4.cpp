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

// Function: caseD_2
// Address: 0x2ddfa4 - 0x2de01c
void caseD_2_0x2ddfa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x2ddfa4");
#endif

    switch (ctx->pc) {
        case 0x2ddfc4u: goto label_2ddfc4;
        default: break;
    }

    ctx->pc = 0x2ddfa4u;

    // 0x2ddfa4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddfa8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddfac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2ddfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2ddfb0: 0x2406003a  addiu       $a2, $zero, 0x3A
    ctx->pc = 0x2ddfb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2ddfb4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2ddfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ddfb8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2ddfb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ddfbc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DDFBCu;
    SET_GPR_U32(ctx, 31, 0x2DDFC4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DDFBCu, 0x2DDFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDFC4u;
label_2ddfc4:
    // 0x2ddfc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ddfc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddfc8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddfcc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2ddfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2ddfd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ddfd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddfd4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddfd8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2ddfd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2ddfdc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2ddfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2ddfe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ddfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ddfe4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddfe8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2ddfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2ddfec: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2ddfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ddff0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddff4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2ddff4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ddff8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2ddff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddffc: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2ddffcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2de000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2de000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de004: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de008: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2de008u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2de00c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de010: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2de010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2de014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2de014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2de018: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2de018u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2de01cu;
}
