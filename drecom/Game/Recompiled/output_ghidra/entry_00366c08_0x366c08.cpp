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

// Function: entry_00366c08
// Address: 0x366c08 - 0x366c6c
void entry_00366c08_0x366c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366c08_0x366c08");
#endif

    switch (ctx->pc) {
        case 0x366c18u: goto label_366c18;
        case 0x366c24u: goto label_366c24;
        default: break;
    }

    ctx->pc = 0x366c08u;

    // 0x366c08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x366c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x366c10: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x366C10u;
    SET_GPR_U32(ctx, 31, 0x366C18u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x366C10u, 0x366C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C18u;
label_366c18:
    // 0x366c18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c1c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x366C1Cu;
    SET_GPR_U32(ctx, 31, 0x366C24u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x366C1Cu, 0x366C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C24u;
label_366c24:
    // 0x366c24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c28: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x366c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366c2c: 0x3c024116  lui         $v0, 0x4116
    ctx->pc = 0x366c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16662 << 16));
    // 0x366c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x366c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366c34: 0x0  nop
    ctx->pc = 0x366c34u;
    // NOP
    // 0x366c38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x366c3c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x366c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x366c40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c44: 0xc4410180  lwc1        $f1, 0x180($v0)
    ctx->pc = 0x366c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366c48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366c4c: 0x0  nop
    ctx->pc = 0x366c4cu;
    // NOP
    // 0x366c50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x366c50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366c54: 0x0  nop
    ctx->pc = 0x366c54u;
    // NOP
    // 0x366c58: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x366C58u;
    {
        const bool branch_taken_0x366c58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x366c58) {
            ctx->pc = 0x366C6Cu;
            return;
        }
    }
    ctx->pc = 0x366C60u;
    // 0x366c60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366c60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366c64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c68: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x366c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    ctx->pc = 0x366c6cu;
}
