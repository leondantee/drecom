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

// Function: entry_00355558
// Address: 0x355558 - 0x3555d8
void entry_00355558_0x355558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355558_0x355558");
#endif

    ctx->pc = 0x355558u;

    // 0x355558: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35555c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35555cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355560: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x355560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355564: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355568: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x355568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35556c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x35556cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355570: 0x0  nop
    ctx->pc = 0x355570u;
    // NOP
    // 0x355574: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x355574u;
    {
        const bool branch_taken_0x355574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355574) {
            ctx->pc = 0x3555E0u;
            return;
        }
    }
    ctx->pc = 0x35557Cu;
    // 0x35557c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355580: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355584: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x355584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355588: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35558c: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x35558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355590: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x355590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x355594: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x355594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x355598: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35559c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35559cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3555a0: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x3555a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3555a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3555a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3555a8: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x3555a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3555ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3555acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3555b0: 0x0  nop
    ctx->pc = 0x3555b0u;
    // NOP
    // 0x3555b4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3555B4u;
    {
        const bool branch_taken_0x3555b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3555b4) {
            ctx->pc = 0x3555E0u;
            return;
        }
    }
    ctx->pc = 0x3555BCu;
    // 0x3555bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3555bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3555c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3555c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3555c4: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x3555c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3555c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3555c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3555cc: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x3555ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x3555d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3555D0u;
    {
        const bool branch_taken_0x3555d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3555d0) {
            ctx->pc = 0x3555E0u;
            return;
        }
    }
    ctx->pc = 0x3555D8u;
}
