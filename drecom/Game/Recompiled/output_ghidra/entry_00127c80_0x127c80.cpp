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

// Function: entry_00127c80
// Address: 0x127c80 - 0x127d2c
void entry_00127c80_0x127c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127c80_0x127c80");
#endif

    switch (ctx->pc) {
        case 0x127c90u: goto label_127c90;
        default: break;
    }

    ctx->pc = 0x127c80u;

    // 0x127c80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127c84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127c88: 0xc05d25c  jal         func_174970
    ctx->pc = 0x127C88u;
    SET_GPR_U32(ctx, 31, 0x127C90u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x127C88u, 0x127C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127C90u;
label_127c90:
    // 0x127c90: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x127C90u;
    {
        const bool branch_taken_0x127c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127c90) {
            ctx->pc = 0x127D2Cu;
            return;
        }
    }
    ctx->pc = 0x127C98u;
    // 0x127c98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127c9c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x127ca0: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x127ca4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x127ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x127ca8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x127cac: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x127cacu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127cb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x127cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x127cb4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x127cb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127cb8: 0x0  nop
    ctx->pc = 0x127cb8u;
    // NOP
    // 0x127cbc: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x127CBCu;
    {
        const bool branch_taken_0x127cbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127cbc) {
            ctx->pc = 0x127D2Cu;
            return;
        }
    }
    ctx->pc = 0x127CC4u;
    // 0x127cc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127cc8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x127ccc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x127cd0: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x127cd0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127cd4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x127cd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127cd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127cdc: 0x0  nop
    ctx->pc = 0x127cdcu;
    // NOP
    // 0x127ce0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x127ce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x127ce4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x127ce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127ce8: 0x0  nop
    ctx->pc = 0x127ce8u;
    // NOP
    // 0x127cec: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x127CECu;
    {
        const bool branch_taken_0x127cec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x127cec) {
            ctx->pc = 0x127D2Cu;
            return;
        }
    }
    ctx->pc = 0x127CF4u;
    // 0x127cf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127cf8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127cfc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x127d00: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x127d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x127d04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127d08: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127d08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x127d0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127d10: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127d10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x127d14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127d18: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127d18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x127d1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127d20: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x127d24: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x127D24u;
    {
        const bool branch_taken_0x127d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127d24) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x127D2Cu;
}
