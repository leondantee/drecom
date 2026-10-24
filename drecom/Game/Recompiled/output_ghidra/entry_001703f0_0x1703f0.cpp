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

// Function: entry_001703f0
// Address: 0x1703f0 - 0x170488
void entry_001703f0_0x1703f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001703f0_0x1703f0");
#endif

    switch (ctx->pc) {
        case 0x170458u: goto label_170458;
        default: break;
    }

    ctx->pc = 0x1703f0u;

    // 0x1703f0: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x1703f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1703f4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1703f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1703f8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1703f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1703fc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1703fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x170400: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170404: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17040c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x17040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x170410: 0x78560000  lq          $s6, 0x0($v0)
    ctx->pc = 0x170410u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170414: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x170414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x170418: 0x7c560000  sq          $s6, 0x0($v0)
    ctx->pc = 0x170418u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 22));
    // 0x17041c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17041cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170420: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x170420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x170424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170428: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x170428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17042c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170430: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x170430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170434: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x170434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170438: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x170438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17043c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x17043cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x170440: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170444: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x170444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x170448: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x170448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17044c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x17044cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x170450: 0xc05da44  jal         func_176910
    ctx->pc = 0x170450u;
    SET_GPR_U32(ctx, 31, 0x170458u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x170450u, 0x170458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170458u;
label_170458:
    // 0x170458: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x170458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x17045c: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x17045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170460: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x170460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170468: 0x0  nop
    ctx->pc = 0x170468u;
    // NOP
    // 0x17046c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x17046Cu;
    {
        const bool branch_taken_0x17046c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17046c) {
            ctx->pc = 0x170488u;
            return;
        }
    }
    ctx->pc = 0x170474u;
    // 0x170474: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x170474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170478: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x170478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x17047c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17047cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170480: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x170480u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x170484: 0x0  nop
    ctx->pc = 0x170484u;
    // NOP
    ctx->pc = 0x170488u;
}
