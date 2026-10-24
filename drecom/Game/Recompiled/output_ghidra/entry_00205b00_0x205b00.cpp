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

// Function: entry_00205b00
// Address: 0x205b00 - 0x205b88
void entry_00205b00_0x205b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205b00_0x205b00");
#endif

    switch (ctx->pc) {
        case 0x205b2cu: goto label_205b2c;
        case 0x205b40u: goto label_205b40;
        default: break;
    }

    ctx->pc = 0x205b00u;

    // 0x205b00: 0x3c023d03  lui         $v0, 0x3D03
    ctx->pc = 0x205b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15619 << 16));
    // 0x205b04: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x205b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x205b08: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x205b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x205b0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b18: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x205b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x205b1c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x205b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205b20: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x205b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x205b24: 0xc05c848  jal         func_172120
    ctx->pc = 0x205B24u;
    SET_GPR_U32(ctx, 31, 0x205B2Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x205B24u, 0x205B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B2Cu;
label_205b2c:
    // 0x205b2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b30: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x205b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205b34: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x205b34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x205b38: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x205B38u;
    SET_GPR_U32(ctx, 31, 0x205B40u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x205B38u, 0x205B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B40u;
label_205b40:
    // 0x205b40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b44: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x205b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x205b48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b4c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x205b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205b50: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x205b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x205b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205b58: 0x0  nop
    ctx->pc = 0x205b58u;
    // NOP
    // 0x205b5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x205b5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205b60: 0x0  nop
    ctx->pc = 0x205b60u;
    // NOP
    // 0x205b64: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x205B64u;
    {
        const bool branch_taken_0x205b64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205b64) {
            ctx->pc = 0x205B88u;
            return;
        }
    }
    ctx->pc = 0x205B6Cu;
    // 0x205b6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b70: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x205b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205b74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x205b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x205b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205b7c: 0x0  nop
    ctx->pc = 0x205b7cu;
    // NOP
    // 0x205b80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x205b80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x205b84: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x205b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    ctx->pc = 0x205b88u;
}
