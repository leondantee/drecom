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

// Function: entry_00355398
// Address: 0x355398 - 0x355434
void entry_00355398_0x355398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355398_0x355398");
#endif

    ctx->pc = 0x355398u;

    // 0x355398: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35539c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3553a0: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x3553a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3553a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3553a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3553a8: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x3553a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3553ac: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3553acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3553b0: 0x0  nop
    ctx->pc = 0x3553b0u;
    // NOP
    // 0x3553b4: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x3553B4u;
    {
        const bool branch_taken_0x3553b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3553b4) {
            ctx->pc = 0x3554B4u;
            return;
        }
    }
    ctx->pc = 0x3553BCu;
    // 0x3553bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3553bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3553c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3553c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3553c4: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x3553c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3553c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3553c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3553cc: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x3553ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3553d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3553d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3553d4: 0x0  nop
    ctx->pc = 0x3553d4u;
    // NOP
    // 0x3553d8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x3553D8u;
    {
        const bool branch_taken_0x3553d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3553d8) {
            ctx->pc = 0x355434u;
            return;
        }
    }
    ctx->pc = 0x3553E0u;
    // 0x3553e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3553e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3553e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3553e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3553e8: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x3553e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3553ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3553ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3553f0: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x3553f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3553f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3553f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3553f8: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x3553f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x3553fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3553fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355400: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355404: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x355404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355408: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35540c: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x35540cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355410: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355414: 0x0  nop
    ctx->pc = 0x355414u;
    // NOP
    // 0x355418: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x355418u;
    {
        const bool branch_taken_0x355418 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355418) {
            ctx->pc = 0x355434u;
            return;
        }
    }
    ctx->pc = 0x355420u;
    // 0x355420: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355424: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355428: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x355428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35542c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35542cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355430: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x355430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    ctx->pc = 0x355434u;
}
