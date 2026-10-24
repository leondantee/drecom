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

// Function: entry_00128838
// Address: 0x128838 - 0x1288e4
void entry_00128838_0x128838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128838_0x128838");
#endif

    switch (ctx->pc) {
        case 0x128848u: goto label_128848;
        default: break;
    }

    ctx->pc = 0x128838u;

    // 0x128838: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x128838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12883c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12883cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128840: 0xc05d25c  jal         func_174970
    ctx->pc = 0x128840u;
    SET_GPR_U32(ctx, 31, 0x128848u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x128840u, 0x128848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128848u;
label_128848:
    // 0x128848: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x128848u;
    {
        const bool branch_taken_0x128848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128848) {
            ctx->pc = 0x1288E4u;
            return;
        }
    }
    ctx->pc = 0x128850u;
    // 0x128850: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128854: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x128854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128858: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x128858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x12885c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12885cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128860: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x128864: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x128864u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128868: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x128868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12886c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12886cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128870: 0x0  nop
    ctx->pc = 0x128870u;
    // NOP
    // 0x128874: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x128874u;
    {
        const bool branch_taken_0x128874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128874) {
            ctx->pc = 0x1288E4u;
            return;
        }
    }
    ctx->pc = 0x12887Cu;
    // 0x12887c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12887cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128880: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x128880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128884: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x128884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x128888: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x128888u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12888c: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x12888cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x128890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128894: 0x0  nop
    ctx->pc = 0x128894u;
    // NOP
    // 0x128898: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x128898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12889c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x12889cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1288a0: 0x0  nop
    ctx->pc = 0x1288a0u;
    // NOP
    // 0x1288a4: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1288A4u;
    {
        const bool branch_taken_0x1288a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1288a4) {
            ctx->pc = 0x1288E4u;
            return;
        }
    }
    ctx->pc = 0x1288ACu;
    // 0x1288ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1288acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1288b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1288b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1288b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1288b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1288b8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1288b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1288bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1288bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1288c0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1288c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1288c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1288c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1288c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1288c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1288cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1288ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1288d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1288d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1288d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1288d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1288d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1288d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1288dc: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x1288DCu;
    {
        const bool branch_taken_0x1288dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1288dc) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x1288E4u;
}
