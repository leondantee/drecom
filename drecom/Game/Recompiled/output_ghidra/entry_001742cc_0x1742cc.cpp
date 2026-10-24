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

// Function: entry_001742cc
// Address: 0x1742cc - 0x17438c
void entry_001742cc_0x1742cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001742cc_0x1742cc");
#endif

    switch (ctx->pc) {
        case 0x1742f4u: goto label_1742f4;
        default: break;
    }

    ctx->pc = 0x1742ccu;

    // 0x1742cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1742ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1742d0: 0x8c421210  lw          $v0, 0x1210($v0)
    ctx->pc = 0x1742d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x1742d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1742d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1742d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1742d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1742dc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1742dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1742e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1742e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1742e4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1742e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1742e8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1742e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1742ec: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1742ECu;
    SET_GPR_U32(ctx, 31, 0x1742F4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1742ECu, 0x1742F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1742F4u;
label_1742f4:
    // 0x1742f4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1742f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1742f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1742f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1742fc: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1742fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174300: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x174300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174304: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x174304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174308: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x174308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17430c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x17430cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x174310: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x174310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174314: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x174314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174318: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x174318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17431c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x17431cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174320: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x174320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x174324: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x174324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x174328: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x174328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17432c: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x17432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174330: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x174330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174334: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x174334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x174338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17433c: 0x0  nop
    ctx->pc = 0x17433cu;
    // NOP
    // 0x174340: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x174340u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x174344: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x174344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174348: 0x0  nop
    ctx->pc = 0x174348u;
    // NOP
    // 0x17434c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x17434Cu;
    {
        const bool branch_taken_0x17434c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17434c) {
            ctx->pc = 0x17438Cu;
            return;
        }
    }
    ctx->pc = 0x174354u;
    // 0x174354: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x174354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174358: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x174358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x17435c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17435cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174360: 0x0  nop
    ctx->pc = 0x174360u;
    // NOP
    // 0x174364: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x174364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x174368: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x174368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17436c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x17436cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x174370: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x174370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174374: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x174374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
    // 0x174378: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x174378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x17437c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17437cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x174380: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x174380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174384: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x174384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x174388: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x174388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    ctx->pc = 0x17438cu;
}
