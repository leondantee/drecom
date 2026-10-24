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

// Function: entry_0037c2a4
// Address: 0x37c2a4 - 0x37c370
void entry_0037c2a4_0x37c2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037c2a4_0x37c2a4");
#endif

    switch (ctx->pc) {
        case 0x37c2bcu: goto label_37c2bc;
        default: break;
    }

    ctx->pc = 0x37c2a4u;

    // 0x37c2a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c2a8: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x37c2a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x37c2ac: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x37c2acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37c2b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c2b4: 0xc096348  jal         func_258D20
    ctx->pc = 0x37C2B4u;
    SET_GPR_U32(ctx, 31, 0x37C2BCu);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x37C2B4u, 0x37C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C2BCu;
label_37c2bc:
    // 0x37c2bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x37c2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c2c0: 0xc46112cc  lwc1        $f1, 0x12CC($v1)
    ctx->pc = 0x37c2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37c2c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x37c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c2c8: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x37c2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c2cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37c2ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37c2d0: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x37c2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x37c2d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x37c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c2d8: 0xc46112cc  lwc1        $f1, 0x12CC($v1)
    ctx->pc = 0x37c2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37c2dc: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x37c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x37c2e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37c2e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c2e4: 0x0  nop
    ctx->pc = 0x37c2e4u;
    // NOP
    // 0x37c2e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37c2e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37c2ec: 0x0  nop
    ctx->pc = 0x37c2ecu;
    // NOP
    // 0x37c2f0: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x37C2F0u;
    {
        const bool branch_taken_0x37c2f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37c2f0) {
            ctx->pc = 0x37C370u;
            return;
        }
    }
    ctx->pc = 0x37C2F8u;
    // 0x37c2f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c2fc: 0xc48112cc  lwc1        $f1, 0x12CC($a0)
    ctx->pc = 0x37c2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37c300: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x37c300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x37c304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37c304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c308: 0x0  nop
    ctx->pc = 0x37c308u;
    // NOP
    // 0x37c30c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37c30cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37c310: 0xe48012cc  swc1        $f0, 0x12CC($a0)
    ctx->pc = 0x37c310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4812), bits); }
    // 0x37c314: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c318: 0x3c033f85  lui         $v1, 0x3F85
    ctx->pc = 0x37c318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16261 << 16));
    // 0x37c31c: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x37c31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7864);
    // 0x37c320: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37c320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c324: 0xc48001a0  lwc1        $f0, 0x1A0($a0)
    ctx->pc = 0x37c324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c328: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37c328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37c32c: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x37c32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x37c330: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c334: 0x3c033f85  lui         $v1, 0x3F85
    ctx->pc = 0x37c334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16261 << 16));
    // 0x37c338: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x37c338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7864);
    // 0x37c33c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37c33cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c340: 0xc48001a4  lwc1        $f0, 0x1A4($a0)
    ctx->pc = 0x37c340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c344: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37c344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37c348: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x37c348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x37c34c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c350: 0x3c033f85  lui         $v1, 0x3F85
    ctx->pc = 0x37c350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16261 << 16));
    // 0x37c354: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x37c354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7864);
    // 0x37c358: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37c358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c35c: 0xc48001a8  lwc1        $f0, 0x1A8($a0)
    ctx->pc = 0x37c35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c360: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37c360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37c364: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x37c364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x37c368: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x37C368u;
    {
        const bool branch_taken_0x37c368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c368) {
            ctx->pc = 0x37C3E0u;
            return;
        }
    }
    ctx->pc = 0x37C370u;
}
