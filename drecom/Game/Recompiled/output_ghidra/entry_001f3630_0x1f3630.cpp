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

// Function: entry_001f3630
// Address: 0x1f3630 - 0x1f36b8
void entry_001f3630_0x1f3630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3630_0x1f3630");
#endif

    ctx->pc = 0x1f3630u;

    // 0x1f3630: 0x960209ea  lhu         $v0, 0x9EA($s0)
    ctx->pc = 0x1f3630u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2538)));
    // 0x1f3634: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f3634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f3638: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x1f3638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f363c: 0x14200030  bnez        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1F363Cu;
    {
        const bool branch_taken_0x1f363c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f363c) {
            ctx->pc = 0x1F3700u;
            return;
        }
    }
    ctx->pc = 0x1F3644u;
    // 0x1f3644: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3648: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f3648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f364c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1f3650: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3654: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1f3654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3658: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f3658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f365c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1f365cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1f3660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3664: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3668: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f366c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1f366cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1f3670: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3674: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x1f3674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f3678: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1f3678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1f367c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f367cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3680: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f3680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f3684: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f3684u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3688: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f3688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f368c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f368cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3690: 0x0  nop
    ctx->pc = 0x1f3690u;
    // NOP
    // 0x1f3694: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F3694u;
    {
        const bool branch_taken_0x1f3694 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3694) {
            ctx->pc = 0x1F36B8u;
            return;
        }
    }
    ctx->pc = 0x1F369Cu;
    // 0x1f369c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f369cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f36a0: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1f36a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f36a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f36a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f36a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f36a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f36ac: 0x0  nop
    ctx->pc = 0x1f36acu;
    // NOP
    // 0x1f36b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f36b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f36b4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f36b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x1f36b8u;
}
