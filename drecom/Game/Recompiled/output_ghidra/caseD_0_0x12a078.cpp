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

// Function: caseD_0
// Address: 0x12a078 - 0x12a11c
void caseD_0_0x12a078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x12a078");
#endif

    switch (ctx->pc) {
        case 0x12a088u: goto label_12a088;
        default: break;
    }

    ctx->pc = 0x12a078u;

    // 0x12a078: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12a078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a07c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12a07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a080: 0xc05d25c  jal         func_174970
    ctx->pc = 0x12A080u;
    SET_GPR_U32(ctx, 31, 0x12A088u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x12A080u, 0x12A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A088u;
label_12a088:
    // 0x12a088: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12A088u;
    {
        const bool branch_taken_0x12a088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a088) {
            ctx->pc = 0x12A11Cu;
            return;
        }
    }
    ctx->pc = 0x12A090u;
    // 0x12a090: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a094: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12a094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12a098: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x12a098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x12a09c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12a09cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12a0a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12a0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x12a0a4: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x12a0a4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a0a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12a0a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12a0ac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12a0acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a0b0: 0x0  nop
    ctx->pc = 0x12a0b0u;
    // NOP
    // 0x12a0b4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x12A0B4u;
    {
        const bool branch_taken_0x12a0b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a0b4) {
            ctx->pc = 0x12A11Cu;
            return;
        }
    }
    ctx->pc = 0x12A0BCu;
    // 0x12a0bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a0c0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x12a0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12a0c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x12a0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x12a0c8: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x12a0c8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a0cc: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x12a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x12a0d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a0d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a0d4: 0x0  nop
    ctx->pc = 0x12a0d4u;
    // NOP
    // 0x12a0d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12a0d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12a0dc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x12a0dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a0e0: 0x0  nop
    ctx->pc = 0x12a0e0u;
    // NOP
    // 0x12a0e4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x12A0E4u;
    {
        const bool branch_taken_0x12a0e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a0e4) {
            ctx->pc = 0x12A11Cu;
            return;
        }
    }
    ctx->pc = 0x12A0ECu;
    // 0x12a0ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a0f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a0f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a0f8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x12a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12a0fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a100: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a104: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a108: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a10c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a110: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a114: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a118: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x12a11cu;
}
