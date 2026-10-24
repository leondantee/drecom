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

// Function: entry_0035567c
// Address: 0x35567c - 0x3556fc
void entry_0035567c_0x35567c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035567c_0x35567c");
#endif

    ctx->pc = 0x35567cu;

    // 0x35567c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35567cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355680: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355684: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x355684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355688: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35568c: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x35568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355690: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355690u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355694: 0x0  nop
    ctx->pc = 0x355694u;
    // NOP
    // 0x355698: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x355698u;
    {
        const bool branch_taken_0x355698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355698) {
            ctx->pc = 0x355704u;
            return;
        }
    }
    ctx->pc = 0x3556A0u;
    // 0x3556a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3556a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3556a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3556a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3556a8: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x3556a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3556ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3556acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3556b0: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x3556b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3556b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3556b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3556b8: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x3556b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x3556bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3556bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3556c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3556c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3556c4: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x3556c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3556c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3556c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3556cc: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x3556ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3556d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3556d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3556d4: 0x0  nop
    ctx->pc = 0x3556d4u;
    // NOP
    // 0x3556d8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3556D8u;
    {
        const bool branch_taken_0x3556d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3556d8) {
            ctx->pc = 0x355704u;
            return;
        }
    }
    ctx->pc = 0x3556E0u;
    // 0x3556e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3556e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3556e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3556e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3556e8: 0xc46000b4  lwc1        $f0, 0xB4($v1)
    ctx->pc = 0x3556e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3556ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3556ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3556f0: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x3556f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x3556f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3556F4u;
    {
        const bool branch_taken_0x3556f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3556f4) {
            ctx->pc = 0x355704u;
            return;
        }
    }
    ctx->pc = 0x3556FCu;
}
