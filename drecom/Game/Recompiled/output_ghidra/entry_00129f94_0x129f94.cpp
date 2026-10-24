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

// Function: entry_00129f94
// Address: 0x129f94 - 0x12a040
void entry_00129f94_0x129f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129f94_0x129f94");
#endif

    switch (ctx->pc) {
        case 0x129fa4u: goto label_129fa4;
        default: break;
    }

    ctx->pc = 0x129f94u;

    // 0x129f94: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x129f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129f98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129f9c: 0xc05d25c  jal         func_174970
    ctx->pc = 0x129F9Cu;
    SET_GPR_U32(ctx, 31, 0x129FA4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x129F9Cu, 0x129FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FA4u;
label_129fa4:
    // 0x129fa4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x129FA4u;
    {
        const bool branch_taken_0x129fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129fa4) {
            ctx->pc = 0x12A040u;
            return;
        }
    }
    ctx->pc = 0x129FACu;
    // 0x129fac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129fb0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x129fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129fb4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x129fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x129fb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x129fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x129fbc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x129fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x129fc0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x129fc0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129fc4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x129fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x129fc8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x129fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129fcc: 0x0  nop
    ctx->pc = 0x129fccu;
    // NOP
    // 0x129fd0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x129FD0u;
    {
        const bool branch_taken_0x129fd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129fd0) {
            ctx->pc = 0x12A040u;
            return;
        }
    }
    ctx->pc = 0x129FD8u;
    // 0x129fd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129fdc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x129fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129fe0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x129fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x129fe4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x129fe4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129fe8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x129fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x129fec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129ff0: 0x0  nop
    ctx->pc = 0x129ff0u;
    // NOP
    // 0x129ff4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x129ff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x129ff8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x129ff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129ffc: 0x0  nop
    ctx->pc = 0x129ffcu;
    // NOP
    // 0x12a000: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x12A000u;
    {
        const bool branch_taken_0x12a000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a000) {
            ctx->pc = 0x12A040u;
            return;
        }
    }
    ctx->pc = 0x12A008u;
    // 0x12a008: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a00c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a010: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a014: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x12a014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12a018: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a01c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a01cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a020: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a024: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a028: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a02c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a02cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a030: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a034: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12a038: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x12A038u;
    {
        const bool branch_taken_0x12a038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a038) {
            ctx->pc = 0x12A534u;
            return;
        }
    }
    ctx->pc = 0x12A040u;
}
