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

// Function: entry_00127fa0
// Address: 0x127fa0 - 0x128044
void entry_00127fa0_0x127fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127fa0_0x127fa0");
#endif

    switch (ctx->pc) {
        case 0x127fb0u: goto label_127fb0;
        default: break;
    }

    ctx->pc = 0x127fa0u;

    // 0x127fa0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127fa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127fa8: 0xc05d25c  jal         func_174970
    ctx->pc = 0x127FA8u;
    SET_GPR_U32(ctx, 31, 0x127FB0u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x127FA8u, 0x127FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127FB0u;
label_127fb0:
    // 0x127fb0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x127FB0u;
    {
        const bool branch_taken_0x127fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127fb0) {
            ctx->pc = 0x128044u;
            return;
        }
    }
    ctx->pc = 0x127FB8u;
    // 0x127fb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127fbc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x127fc0: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x127fc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x127fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x127fc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x127fcc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x127fccu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127fd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x127fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x127fd4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x127fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127fd8: 0x0  nop
    ctx->pc = 0x127fd8u;
    // NOP
    // 0x127fdc: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x127FDCu;
    {
        const bool branch_taken_0x127fdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127fdc) {
            ctx->pc = 0x128044u;
            return;
        }
    }
    ctx->pc = 0x127FE4u;
    // 0x127fe4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127fe8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x127fec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x127ff0: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x127ff0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127ff4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x127ff8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127ffc: 0x0  nop
    ctx->pc = 0x127ffcu;
    // NOP
    // 0x128000: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x128000u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x128004: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x128004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128008: 0x0  nop
    ctx->pc = 0x128008u;
    // NOP
    // 0x12800c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x12800Cu;
    {
        const bool branch_taken_0x12800c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12800c) {
            ctx->pc = 0x128044u;
            return;
        }
    }
    ctx->pc = 0x128014u;
    // 0x128014: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128018: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12801c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12801cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x128020: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x128020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x128024: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128028: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128028u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12802c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12802cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128030: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128030u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x128034: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128038: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128038u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12803c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12803cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128040: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x128044u;
}
