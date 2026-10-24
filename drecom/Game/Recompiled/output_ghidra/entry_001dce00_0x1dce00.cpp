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

// Function: entry_001dce00
// Address: 0x1dce00 - 0x1dcec8
void entry_001dce00_0x1dce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dce00_0x1dce00");
#endif

    switch (ctx->pc) {
        case 0x1dce9cu: goto label_1dce9c;
        default: break;
    }

    ctx->pc = 0x1dce00u;

    // 0x1dce00: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dce00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dce04: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dce04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dce08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dce0c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dce10: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dce10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dce14: 0x2444bd00  addiu       $a0, $v0, -0x4300
    ctx->pc = 0x1dce14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dce18: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1dce18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dce1c: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1dce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1dce20: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1dce20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1dce24: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dce24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dce28: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x1dce28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dce2c: 0x14800046  bnez        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1DCE2Cu;
    {
        const bool branch_taken_0x1dce2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dce2c) {
            ctx->pc = 0x1DCF48u;
            return;
        }
    }
    ctx->pc = 0x1DCE34u;
    // 0x1dce34: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dce34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dce38: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dce38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dce3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dce40: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1dce40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dce44: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dce44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dce48: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1dce48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dce4c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1dce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dce50: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1dce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dce54: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1dce54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dce58: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1dce58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dce5c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1dce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1dce60: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dce60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dce64: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dce64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dce68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dce6c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dce70: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dce70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dce74: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dce78: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dce78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dce7c: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x1dce7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dce80: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1dce80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1dce84: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dce88: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dce8c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1dce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dce90: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1dce90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dce94: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DCE94u;
    SET_GPR_U32(ctx, 31, 0x1DCE9Cu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DCE94u, 0x1DCE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE9Cu;
label_1dce9c:
    // 0x1dce9c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1dce9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1dcea0: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x1dcea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcea4: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dcea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcea8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dcea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dceac: 0x0  nop
    ctx->pc = 0x1dceacu;
    // NOP
    // 0x1dceb0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCEB0u;
    {
        const bool branch_taken_0x1dceb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dceb0) {
            ctx->pc = 0x1DCEC8u;
            return;
        }
    }
    ctx->pc = 0x1DCEB8u;
    // 0x1dceb8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1dceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcebc: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dcebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dcec0: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dcec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dcec4: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1dcec4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1dcec8u;
}
