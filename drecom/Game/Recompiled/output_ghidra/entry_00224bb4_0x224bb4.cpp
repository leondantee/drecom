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

// Function: entry_00224bb4
// Address: 0x224bb4 - 0x224c2c
void entry_00224bb4_0x224bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224bb4_0x224bb4");
#endif

    ctx->pc = 0x224bb4u;

    // 0x224bb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x224bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224bb8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x224bb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x224bbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x224bc0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x224bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x224bc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224bc8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x224bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224bcc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224bd0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x224bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x224bd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224bd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x224bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224bdc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224be0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x224be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x224be4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x224be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x224be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224bec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x224becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224bf0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224bf4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x224bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x224bf8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x224bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x224bfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x224bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224c00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x224c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224c04: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224c08: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x224c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x224c0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x224c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224c10: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x224c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224c14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x224c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x224c18: 0x3406be00  ori         $a2, $zero, 0xBE00
    ctx->pc = 0x224c18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x224c1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x224c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224c20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x224c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x224c24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x224C24u;
    SET_GPR_U32(ctx, 31, 0x224C2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x224C24u, 0x224C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C2Cu;
}
