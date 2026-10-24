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

// Function: entry_00125fc4
// Address: 0x125fc4 - 0x126070
void entry_00125fc4_0x125fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125fc4_0x125fc4");
#endif

    switch (ctx->pc) {
        case 0x125fd4u: goto label_125fd4;
        default: break;
    }

    ctx->pc = 0x125fc4u;

    // 0x125fc4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x125fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125fc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x125fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125fcc: 0xc05d25c  jal         func_174970
    ctx->pc = 0x125FCCu;
    SET_GPR_U32(ctx, 31, 0x125FD4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x125FCCu, 0x125FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125FD4u;
label_125fd4:
    // 0x125fd4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x125FD4u;
    {
        const bool branch_taken_0x125fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125fd4) {
            ctx->pc = 0x126070u;
            return;
        }
    }
    ctx->pc = 0x125FDCu;
    // 0x125fdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125fe0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x125fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125fe4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x125fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x125fe8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x125fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x125fec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x125fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x125ff0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x125ff0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125ff4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x125ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x125ff8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x125ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125ffc: 0x0  nop
    ctx->pc = 0x125ffcu;
    // NOP
    // 0x126000: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x126000u;
    {
        const bool branch_taken_0x126000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126000) {
            ctx->pc = 0x126070u;
            return;
        }
    }
    ctx->pc = 0x126008u;
    // 0x126008: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12600c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12600cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x126010: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x126010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x126014: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x126014u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126018: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x126018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x12601c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12601cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126020: 0x0  nop
    ctx->pc = 0x126020u;
    // NOP
    // 0x126024: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x126024u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x126028: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x126028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12602c: 0x0  nop
    ctx->pc = 0x12602cu;
    // NOP
    // 0x126030: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x126030u;
    {
        const bool branch_taken_0x126030 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x126030) {
            ctx->pc = 0x126070u;
            return;
        }
    }
    ctx->pc = 0x126038u;
    // 0x126038: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12603c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12603cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126040: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126044: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x126044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x126048: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12604c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12604cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126050: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126054: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126058: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12605c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12605cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126060: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126064: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x126068: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x126068u;
    {
        const bool branch_taken_0x126068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126068) {
            ctx->pc = 0x126548u;
            return;
        }
    }
    ctx->pc = 0x126070u;
}
