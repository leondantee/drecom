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

// Function: entry_00246aa8
// Address: 0x246aa8 - 0x246b44
void entry_00246aa8_0x246aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246aa8_0x246aa8");
#endif

    switch (ctx->pc) {
        case 0x246ae0u: goto label_246ae0;
        default: break;
    }

    ctx->pc = 0x246aa8u;

    // 0x246aa8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246aac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ab0: 0xa0470002  sb          $a3, 0x2($v0)
    ctx->pc = 0x246ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x246ab4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246ab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246ab8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246abc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x246abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x246ac0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ac4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x246ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ac8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x246ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x246acc: 0x24061e1a  addiu       $a2, $zero, 0x1E1A
    ctx->pc = 0x246accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7706));
    // 0x246ad0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246ad4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x246ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x246ad8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x246AD8u;
    SET_GPR_U32(ctx, 31, 0x246AE0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x246AD8u, 0x246AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AE0u;
label_246ae0:
    // 0x246ae0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246ae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246ae4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246ae8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x246ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x246aec: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x246aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x246af0: 0x3c044170  lui         $a0, 0x4170
    ctx->pc = 0x246af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16752 << 16));
    // 0x246af4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x246af4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246af8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246afc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x246afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x246b00: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x246b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x246b04: 0x3c0540b0  lui         $a1, 0x40B0
    ctx->pc = 0x246b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16560 << 16));
    // 0x246b08: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x246b08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246b0c: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x246b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246b10: 0x24e21330  addiu       $v0, $a3, 0x1330
    ctx->pc = 0x246b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x246b14: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x246b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x246b18: 0x3c0440b0  lui         $a0, 0x40B0
    ctx->pc = 0x246b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16560 << 16));
    // 0x246b1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x246b1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246b20: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x246b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246b24: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x246b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x246b28: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x246b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x246b2c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x246b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246b30: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x246b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x246b34: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x246b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x246b38: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x246b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x246b3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x246b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x246b40: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x246b40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x246b44u;
}
