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

// Function: entry_00171660
// Address: 0x171660 - 0x171728
void entry_00171660_0x171660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171660_0x171660");
#endif

    switch (ctx->pc) {
        case 0x1716fcu: goto label_1716fc;
        default: break;
    }

    ctx->pc = 0x171660u;

    // 0x171660: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x171660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171664: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x171664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x171668: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x171668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17166c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17166cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x171670: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x171670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171674: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x171674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17167c: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x17167cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171680: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x171680u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171684: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x171684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x171688: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x171688u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x17168c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x17168cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171690: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x171690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x171694: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x171694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x171698: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x171698u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17169c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17169cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1716a0: 0x2444bd00  addiu       $a0, $v0, -0x4300
    ctx->pc = 0x1716a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1716a4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1716a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1716a8: 0xc4a0008c  lwc1        $f0, 0x8C($a1)
    ctx->pc = 0x1716a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1716ac: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1716acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1716b0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1716b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1716b4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1716b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1716b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1716b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1716bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1716bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1716c0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1716c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1716c4: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x1716c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1716c8: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x1716c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1716cc: 0x8cc7007c  lw          $a3, 0x7C($a2)
    ctx->pc = 0x1716ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x1716d0: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1716d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1716d4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1716D4u;
    {
        const bool branch_taken_0x1716d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1716d4) {
            ctx->pc = 0x171728u;
            return;
        }
    }
    ctx->pc = 0x1716DCu;
    // 0x1716dc: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x1716dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1716e0: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x1716e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1716e4: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x1716e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1716e8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1716e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1716ec: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x1716ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1716f0: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x1716f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1716f4: 0xc05da44  jal         func_176910
    ctx->pc = 0x1716F4u;
    SET_GPR_U32(ctx, 31, 0x1716FCu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1716F4u, 0x1716FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716FCu;
label_1716fc:
    // 0x1716fc: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1716fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x171700: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x171700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171704: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171708: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x171708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17170c: 0x0  nop
    ctx->pc = 0x17170cu;
    // NOP
    // 0x171710: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x171710u;
    {
        const bool branch_taken_0x171710 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171710) {
            ctx->pc = 0x171728u;
            return;
        }
    }
    ctx->pc = 0x171718u;
    // 0x171718: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17171c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x17171cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x171720: 0x3214ffff  andi        $s4, $s0, 0xFFFF
    ctx->pc = 0x171720u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171724: 0x0  nop
    ctx->pc = 0x171724u;
    // NOP
    ctx->pc = 0x171728u;
}
