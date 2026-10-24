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

// Function: entry_0017083c
// Address: 0x17083c - 0x170900
void entry_0017083c_0x17083c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017083c_0x17083c");
#endif

    switch (ctx->pc) {
        case 0x1708d8u: goto label_1708d8;
        default: break;
    }

    ctx->pc = 0x17083cu;

    // 0x17083c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17083cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170840: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x170840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x170844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170848: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x170848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17084c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170850: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170858: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x170858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x17085c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17085cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170860: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x170860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x170864: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x170864u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x170868: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x170868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17086c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x17086cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x170870: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x170870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x170874: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x170874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170878: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x170878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x17087c: 0x24a2bd00  addiu       $v0, $a1, -0x4300
    ctx->pc = 0x17087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x170880: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x170880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x170884: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x170884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170888: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x170888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x17088c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x17088cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170890: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x170890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x170894: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x170894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x170898: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x170898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17089c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17089cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1708a0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1708a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1708a4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1708a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1708a8: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x1708a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x1708ac: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x1708acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1708b0: 0x14c00013  bnez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1708B0u;
    {
        const bool branch_taken_0x1708b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1708b0) {
            ctx->pc = 0x170900u;
            return;
        }
    }
    ctx->pc = 0x1708B8u;
    // 0x1708b8: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x1708b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1708bc: 0x8ce20130  lw          $v0, 0x130($a3)
    ctx->pc = 0x1708bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x1708c0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1708c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1708c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1708c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1708c8: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1708c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1708cc: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1708ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1708d0: 0xc05da44  jal         func_176910
    ctx->pc = 0x1708D0u;
    SET_GPR_U32(ctx, 31, 0x1708D8u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1708D0u, 0x1708D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1708D8u;
label_1708d8:
    // 0x1708d8: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1708d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1708dc: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x1708dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1708e0: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1708e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1708e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1708e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1708e8: 0x0  nop
    ctx->pc = 0x1708e8u;
    // NOP
    // 0x1708ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1708ECu;
    {
        const bool branch_taken_0x1708ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1708ec) {
            ctx->pc = 0x170900u;
            return;
        }
    }
    ctx->pc = 0x1708F4u;
    // 0x1708f4: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1708f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1708f8: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1708f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1708fc: 0x3212ffff  andi        $s2, $s0, 0xFFFF
    ctx->pc = 0x1708fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x170900u;
}
