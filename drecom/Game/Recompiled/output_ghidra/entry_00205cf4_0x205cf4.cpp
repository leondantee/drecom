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

// Function: entry_00205cf4
// Address: 0x205cf4 - 0x205d7c
void entry_00205cf4_0x205cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205cf4_0x205cf4");
#endif

    switch (ctx->pc) {
        case 0x205d20u: goto label_205d20;
        case 0x205d34u: goto label_205d34;
        default: break;
    }

    ctx->pc = 0x205cf4u;

    // 0x205cf4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205cf8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x205cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205cfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d00: 0x3c023d03  lui         $v0, 0x3D03
    ctx->pc = 0x205d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15619 << 16));
    // 0x205d04: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x205d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x205d08: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x205d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x205d0c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x205d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x205d10: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x205d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205d14: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x205d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x205d18: 0xc05c848  jal         func_172120
    ctx->pc = 0x205D18u;
    SET_GPR_U32(ctx, 31, 0x205D20u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x205D18u, 0x205D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D20u;
label_205d20:
    // 0x205d20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d24: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x205d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205d28: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x205d28u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x205d2c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x205D2Cu;
    SET_GPR_U32(ctx, 31, 0x205D34u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x205D2Cu, 0x205D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D34u;
label_205d34:
    // 0x205d34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d38: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x205d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x205d3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d40: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x205d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205d44: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x205d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x205d48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205d4c: 0x0  nop
    ctx->pc = 0x205d4cu;
    // NOP
    // 0x205d50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x205d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205d54: 0x0  nop
    ctx->pc = 0x205d54u;
    // NOP
    // 0x205d58: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x205D58u;
    {
        const bool branch_taken_0x205d58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205d58) {
            ctx->pc = 0x205D7Cu;
            return;
        }
    }
    ctx->pc = 0x205D60u;
    // 0x205d60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d64: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x205d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205d68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x205d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x205d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205d70: 0x0  nop
    ctx->pc = 0x205d70u;
    // NOP
    // 0x205d74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x205d74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x205d78: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x205d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    ctx->pc = 0x205d7cu;
}
