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

// Function: entry_003555e0
// Address: 0x3555e0 - 0x35567c
void entry_003555e0_0x3555e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003555e0_0x3555e0");
#endif

    ctx->pc = 0x3555e0u;

    // 0x3555e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3555e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3555e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3555e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3555e8: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x3555e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3555ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3555ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3555f0: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x3555f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3555f4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3555f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3555f8: 0x0  nop
    ctx->pc = 0x3555f8u;
    // NOP
    // 0x3555fc: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x3555FCu;
    {
        const bool branch_taken_0x3555fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3555fc) {
            ctx->pc = 0x3556FCu;
            return;
        }
    }
    ctx->pc = 0x355604u;
    // 0x355604: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355608: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35560c: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x35560cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355610: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355614: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x355614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355618: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x355618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35561c: 0x0  nop
    ctx->pc = 0x35561cu;
    // NOP
    // 0x355620: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x355620u;
    {
        const bool branch_taken_0x355620 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355620) {
            ctx->pc = 0x35567Cu;
            return;
        }
    }
    ctx->pc = 0x355628u;
    // 0x355628: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35562c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35562cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355630: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x355630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355634: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355638: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x355638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35563c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35563cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x355640: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x355640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x355644: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355648: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35564c: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x35564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355650: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355654: 0xc46001a8  lwc1        $f0, 0x1A8($v1)
    ctx->pc = 0x355654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355658: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35565c: 0x0  nop
    ctx->pc = 0x35565cu;
    // NOP
    // 0x355660: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x355660u;
    {
        const bool branch_taken_0x355660 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355660) {
            ctx->pc = 0x35567Cu;
            return;
        }
    }
    ctx->pc = 0x355668u;
    // 0x355668: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35566c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35566cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355670: 0xc46000b4  lwc1        $f0, 0xB4($v1)
    ctx->pc = 0x355670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355674: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355678: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x355678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    ctx->pc = 0x35567cu;
}
