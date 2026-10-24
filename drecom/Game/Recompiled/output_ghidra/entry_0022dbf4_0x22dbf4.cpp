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

// Function: entry_0022dbf4
// Address: 0x22dbf4 - 0x22dc98
void entry_0022dbf4_0x22dbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022dbf4_0x22dbf4");
#endif

    ctx->pc = 0x22dbf4u;

    // 0x22dbf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dbf8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dbfc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22dbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22dc00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22dc00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dc04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc08: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dc0c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22dc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22dc10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22dc10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dc14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc18: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dc1c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22dc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22dc20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22dc24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22dc24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dc28: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dc30: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22dc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22dc34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22dc38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22dc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dc3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc40: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dc44: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22dc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22dc48: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x22dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x22dc4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22dc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22dc50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22dc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dc54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dc5c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x22dc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x22dc60: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x22dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x22dc64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22dc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22dc68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22dc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22dc6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22dc74: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x22dc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x22dc78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22dc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22dc80: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22dc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22dc84: 0x24067825  addiu       $a2, $zero, 0x7825
    ctx->pc = 0x22dc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30757));
    // 0x22dc88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22dc88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dc8c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22dc8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22dc90: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22DC90u;
    SET_GPR_U32(ctx, 31, 0x22DC98u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22DC90u, 0x22DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC98u;
}
