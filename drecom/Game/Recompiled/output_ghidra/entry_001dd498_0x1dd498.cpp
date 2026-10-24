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

// Function: entry_001dd498
// Address: 0x1dd498 - 0x1dd568
void entry_001dd498_0x1dd498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd498_0x1dd498");
#endif

    switch (ctx->pc) {
        case 0x1dd53cu: goto label_1dd53c;
        default: break;
    }

    ctx->pc = 0x1dd498u;

    // 0x1dd498: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1dd498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd49c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1dd49cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1dd4a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1dd4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dd4a4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd4a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd4ac: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd4b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd4b4: 0x8c44007c  lw          $a0, 0x7C($v0)
    ctx->pc = 0x1dd4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1dd4b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1dd4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1dd4bc: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x1dd4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dd4c0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1dd4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1dd4c4: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1DD4C4u;
    {
        const bool branch_taken_0x1dd4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd4c4) {
            ctx->pc = 0x1DD5E8u;
            return;
        }
    }
    ctx->pc = 0x1DD4CCu;
    // 0x1dd4cc: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dd4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd4d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dd4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dd4d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd4d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd4dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd4e0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd4e4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dd4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd4e8: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x1dd4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1dd4ec: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1dd4ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd4f0: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1dd4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dd4f4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dd4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dd4f8: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1dd4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd4fc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1dd4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1dd500: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1dd500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dd504: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dd504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dd508: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dd508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dd50c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dd50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dd510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd514: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x1dd514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd518: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1dd518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1dd51c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dd51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dd520: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x1dd520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x1dd524: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dd524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dd528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd52c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1dd52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dd530: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1dd530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dd534: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DD534u;
    SET_GPR_U32(ctx, 31, 0x1DD53Cu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DD534u, 0x1DD53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD53Cu;
label_1dd53c:
    // 0x1dd53c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1dd540: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x1dd540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd544: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd548: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dd548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd54c: 0x0  nop
    ctx->pc = 0x1dd54cu;
    // NOP
    // 0x1dd550: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD550u;
    {
        const bool branch_taken_0x1dd550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd550) {
            ctx->pc = 0x1DD568u;
            return;
        }
    }
    ctx->pc = 0x1DD558u;
    // 0x1dd558: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dd558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd55c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dd55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dd560: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dd560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dd564: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1dd564u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1dd568u;
}
