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

// Function: caseD_5
// Address: 0x2a613c - 0x2a6268
void caseD_5_0x2a613c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2a613c");
#endif

    switch (ctx->pc) {
        case 0x2a614cu: goto label_2a614c;
        case 0x2a61a4u: goto label_2a61a4;
        case 0x2a61d0u: goto label_2a61d0;
        case 0x2a61f0u: goto label_2a61f0;
        case 0x2a6220u: goto label_2a6220;
        case 0x2a6264u: goto label_2a6264;
        default: break;
    }

    ctx->pc = 0x2a613cu;

    // 0x2a613c: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a613cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6140: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a6140u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a6144: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A6144u;
    SET_GPR_U32(ctx, 31, 0x2A614Cu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A6144u, 0x2A614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A614Cu;
label_2a614c:
    // 0x2a614c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a614cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6150: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x2a6150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6154: 0x3c063ae1  lui         $a2, 0x3AE1
    ctx->pc = 0x2a6154u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15073 << 16));
    // 0x2a6158: 0x34c5fc78  ori         $a1, $a2, 0xFC78
    ctx->pc = 0x2a6158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64632);
    // 0x2a615c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a615cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6160: 0x0  nop
    ctx->pc = 0x2a6160u;
    // NOP
    // 0x2a6164: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a6164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a6168: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x2a6168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x2a616c: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a616cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6170: 0x84e31278  lh          $v1, 0x1278($a3)
    ctx->pc = 0x2a6170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4728)));
    // 0x2a6174: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2a6174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a6178: 0xa4e41278  sh          $a0, 0x1278($a3)
    ctx->pc = 0x2a6178u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a617c: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a617cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6180: 0x84a61278  lh          $a2, 0x1278($a1)
    ctx->pc = 0x2a6180u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2a6184: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x2a6184u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2a6188: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2a6188u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2a618c: 0x30e3000f  andi        $v1, $a3, 0xF
    ctx->pc = 0x2a618cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x2a6190: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2A6190u;
    {
        const bool branch_taken_0x2a6190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6190) {
            ctx->pc = 0x2A6268u;
            return;
        }
    }
    ctx->pc = 0x2A6198u;
    // 0x2a6198: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2a6198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a619c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A619Cu;
    SET_GPR_U32(ctx, 31, 0x2A61A4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A619Cu, 0x2A61A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61A4u;
label_2a61a4:
    // 0x2a61a4: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x2a61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
    // 0x2a61a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a61a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a61ac: 0x0  nop
    ctx->pc = 0x2a61acu;
    // NOP
    // 0x2a61b0: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2a61b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2a61b4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2a61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2a61b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a61b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a61bc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a61bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a61c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a61c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a61c4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a61c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a61c8: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2A61C8u;
    SET_GPR_U32(ctx, 31, 0x2A61D0u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A61C8u, 0x2A61D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61D0u;
label_2a61d0:
    // 0x2a61d0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a61d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a61d4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2a61d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2a61d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a61d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a61dc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a61dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a61e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a61e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a61e4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a61e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a61e8: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2A61E8u;
    SET_GPR_U32(ctx, 31, 0x2A61F0u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A61E8u, 0x2A61F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A61F0u;
label_2a61f0:
    // 0x2a61f0: 0x3c04c316  lui         $a0, 0xC316
    ctx->pc = 0x2a61f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49942 << 16));
    // 0x2a61f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a61f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a61f8: 0x0  nop
    ctx->pc = 0x2a61f8u;
    // NOP
    // 0x2a61fc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2a61fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2a6200: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2a6200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2a6204: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a6204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a6208: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x2a6208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a620c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a620cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6210: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a6210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6214: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a6214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a6218: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2A6218u;
    SET_GPR_U32(ctx, 31, 0x2A6220u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A6218u, 0x2A6220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6220u;
label_2a6220:
    // 0x2a6220: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6220u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6224: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x2a6224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x2a6228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a6228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a622c: 0x0  nop
    ctx->pc = 0x2a622cu;
    // NOP
    // 0x2a6230: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2a6230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2a6234: 0x3c04c396  lui         $a0, 0xC396
    ctx->pc = 0x2a6234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50070 << 16));
    // 0x2a6238: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a6238u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a623c: 0x0  nop
    ctx->pc = 0x2a623cu;
    // NOP
    // 0x2a6240: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2a6240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2a6244: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2a6244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2a6248: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a6248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a624c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6250: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a6250u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a6254: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2a6254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a6258: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a6258u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a625c: 0xc0c4acc  jal         func_312B30
    ctx->pc = 0x2A625Cu;
    SET_GPR_U32(ctx, 31, 0x2A6264u);
    ctx->pc = 0x312B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B30u, 0x2A625Cu, 0x2A6264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6264u;
label_2a6264:
    // 0x2a6264: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6264u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2a6268u;
}
