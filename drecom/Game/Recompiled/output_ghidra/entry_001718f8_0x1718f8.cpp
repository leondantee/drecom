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

// Function: entry_001718f8
// Address: 0x1718f8 - 0x171998
void entry_001718f8_0x1718f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001718f8_0x1718f8");
#endif

    switch (ctx->pc) {
        case 0x17196cu: goto label_17196c;
        default: break;
    }

    ctx->pc = 0x1718f8u;

    // 0x1718f8: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1718f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1718fc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1718fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x171900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x171900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171904: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x171904u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x171908: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17190c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x17190cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171910: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x171910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171914: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x171914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171918: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x171918u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17191c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x17191cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x171920: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x171920u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x171924: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x171924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171928: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x171928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x17192c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x17192cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x171930: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x171930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x171934: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x171934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x171938: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x171938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x17193c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x17193cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x171940: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x171940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171944: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x171944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x171948: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x171948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x17194c: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x17194cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x171950: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x171950u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x171954: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x171954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x171958: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x171958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17195c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x17195cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x171960: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x171960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x171964: 0xc05da44  jal         func_176910
    ctx->pc = 0x171964u;
    SET_GPR_U32(ctx, 31, 0x17196Cu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x171964u, 0x17196Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17196Cu;
label_17196c:
    // 0x17196c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x17196cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x171970: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x171970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171974: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171978: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x171978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17197c: 0x0  nop
    ctx->pc = 0x17197cu;
    // NOP
    // 0x171980: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x171980u;
    {
        const bool branch_taken_0x171980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171980) {
            ctx->pc = 0x171998u;
            return;
        }
    }
    ctx->pc = 0x171988u;
    // 0x171988: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x171988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17198c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x17198cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x171990: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x171990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171994: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x171994u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x171998u;
}
