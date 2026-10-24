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

// Function: entry_001dd284
// Address: 0x1dd284 - 0x1dd348
void entry_001dd284_0x1dd284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd284_0x1dd284");
#endif

    switch (ctx->pc) {
        case 0x1dd31cu: goto label_1dd31c;
        default: break;
    }

    ctx->pc = 0x1dd284u;

    // 0x1dd284: 0x3216ffff  andi        $s6, $s0, 0xFFFF
    ctx->pc = 0x1dd284u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd288: 0x16a840  sll         $s5, $s6, 1
    ctx->pc = 0x1dd288u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x1dd28c: 0x2b6b821  addu        $s7, $s5, $s6
    ctx->pc = 0x1dd28cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x1dd290: 0x172100  sll         $a0, $s7, 4
    ctx->pc = 0x1dd290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1dd294: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1dd294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1dd298: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1dd298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1dd29c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd2a0: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x1dd2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1dd2a4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1dd2a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd2a8: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1dd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dd2ac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dd2acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dd2b0: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1dd2b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd2b4: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1dd2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1dd2b8: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1dd2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1dd2bc: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1dd2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1dd2c0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1dd2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1dd2c4: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1dd2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1dd2c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1dd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd2cc: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x1dd2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd2d0: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1dd2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1dd2d4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1dd2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd2d8: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1dd2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1dd2dc: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1dd2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dd2e0: 0x5b900  sll         $s7, $a1, 4
    ctx->pc = 0x1dd2e0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1dd2e4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1dd2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1dd2e8: 0x2476bd00  addiu       $s6, $v1, -0x4300
    ctx->pc = 0x1dd2e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1dd2ec: 0x2d71821  addu        $v1, $s6, $s7
    ctx->pc = 0x1dd2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x1dd2f0: 0x8c63007c  lw          $v1, 0x7C($v1)
    ctx->pc = 0x1dd2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1dd2f4: 0x30760001  andi        $s6, $v1, 0x1
    ctx->pc = 0x1dd2f4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1dd2f8: 0x16c00013  bnez        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DD2F8u;
    {
        const bool branch_taken_0x1dd2f8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd2f8) {
            ctx->pc = 0x1DD348u;
            return;
        }
    }
    ctx->pc = 0x1DD300u;
    // 0x1dd300: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1dd300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd304: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1dd304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1dd308: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x1dd308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1dd30c: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1dd30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dd310: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1dd310u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1dd314: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DD314u;
    SET_GPR_U32(ctx, 31, 0x1DD31Cu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DD314u, 0x1DD31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD31Cu;
label_1dd31c:
    // 0x1dd31c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1dd320: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x1dd320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd324: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd328: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dd328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd32c: 0x0  nop
    ctx->pc = 0x1dd32cu;
    // NOP
    // 0x1dd330: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD330u;
    {
        const bool branch_taken_0x1dd330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd330) {
            ctx->pc = 0x1DD348u;
            return;
        }
    }
    ctx->pc = 0x1DD338u;
    // 0x1dd338: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd33c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dd33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dd340: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1dd340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd344: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x1dd344u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1dd348u;
}
