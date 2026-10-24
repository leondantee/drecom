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

// Function: entry_00243ae4
// Address: 0x243ae4 - 0x243b5c
void entry_00243ae4_0x243ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243ae4_0x243ae4");
#endif

    ctx->pc = 0x243ae4u;

    // 0x243ae4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ae8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x243ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x243aec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243af0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x243af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x243af4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x243af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243af8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243afc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243b00: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x243b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x243b04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x243b04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243b08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243b0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243b10: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x243b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x243b14: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x243b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x243b18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243b1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243b20: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243b24: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x243b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x243b28: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x243b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x243b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243b30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243b34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243b38: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x243b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x243b3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243b40: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x243b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243b44: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x243b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x243b48: 0x3406be00  ori         $a2, $zero, 0xBE00
    ctx->pc = 0x243b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x243b4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x243b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243b50: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x243b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x243b54: 0xc0965d0  jal         func_259740
    ctx->pc = 0x243B54u;
    SET_GPR_U32(ctx, 31, 0x243B5Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x243B54u, 0x243B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B5Cu;
}
