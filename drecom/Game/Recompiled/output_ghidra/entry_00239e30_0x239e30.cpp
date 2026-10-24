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

// Function: entry_00239e30
// Address: 0x239e30 - 0x239edc
void entry_00239e30_0x239e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239e30_0x239e30");
#endif

    switch (ctx->pc) {
        case 0x239e60u: goto label_239e60;
        default: break;
    }

    ctx->pc = 0x239e30u;

    // 0x239e30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239e34: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x239e34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x239e38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x239e3c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x239e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x239e40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239e44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239e48: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x239e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239e4c: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x239e4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x239e50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239e54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239e58: 0xc0965d0  jal         func_259740
    ctx->pc = 0x239E58u;
    SET_GPR_U32(ctx, 31, 0x239E60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x239E58u, 0x239E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239E60u;
label_239e60:
    // 0x239e60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x239e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239e64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239e68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239e6c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x239e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x239e70: 0x3c02c0e0  lui         $v0, 0xC0E0
    ctx->pc = 0x239e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49376 << 16));
    // 0x239e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239e78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239e7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239e80: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x239e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x239e84: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x239e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x239e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239e8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239e90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239e94: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x239e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x239e98: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x239e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x239e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239ea0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ea4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239ea8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x239ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x239eac: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x239eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x239eb0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239eb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ebc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239ec0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x239ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x239ec4: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x239ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x239ec8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239ecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239ed0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ed4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239ed8: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x239ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->pc = 0x239edcu;
}
