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

// Function: entry_0025a2c8
// Address: 0x25a2c8 - 0x25a3b0
void entry_0025a2c8_0x25a2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a2c8_0x25a2c8");
#endif

    ctx->pc = 0x25a2c8u;

    // 0x25a2c8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a2cc: 0xa0601085  sb          $zero, 0x1085($v1)
    ctx->pc = 0x25a2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4229), (uint8_t)GPR_U32(ctx, 0));
    // 0x25a2d0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a2d4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a2d8: 0x8c840ca0  lw          $a0, 0xCA0($a0)
    ctx->pc = 0x25a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3232)));
    // 0x25a2dc: 0x24631078  addiu       $v1, $v1, 0x1078
    ctx->pc = 0x25a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4216));
    // 0x25a2e0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a2e4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25a2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25a2e8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a2ec: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a2f0: 0x24841078  addiu       $a0, $a0, 0x1078
    ctx->pc = 0x25a2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4216));
    // 0x25a2f4: 0x2463107c  addiu       $v1, $v1, 0x107C
    ctx->pc = 0x25a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4220));
    // 0x25a2f8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25a2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a2fc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25a2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25a300: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a304: 0x94631078  lhu         $v1, 0x1078($v1)
    ctx->pc = 0x25a304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4216)));
    // 0x25a308: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25a308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25a30c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25a30cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a310: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a314: 0xac641098  sw          $a0, 0x1098($v1)
    ctx->pc = 0x25a314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4248), GPR_U32(ctx, 4));
    // 0x25a318: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a31c: 0x9463108a  lhu         $v1, 0x108A($v1)
    ctx->pc = 0x25a31cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4234)));
    // 0x25a320: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25a320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25a324: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x25a324u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x25a328: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a32c: 0xac64109c  sw          $a0, 0x109C($v1)
    ctx->pc = 0x25a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4252), GPR_U32(ctx, 4));
    // 0x25a330: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a334: 0xa47e108c  sh          $fp, 0x108C($v1)
    ctx->pc = 0x25a334u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4236), (uint16_t)GPR_U32(ctx, 30));
    // 0x25a338: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a33c: 0xa460108e  sh          $zero, 0x108E($v1)
    ctx->pc = 0x25a33cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4238), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a340: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a344: 0x9463108a  lhu         $v1, 0x108A($v1)
    ctx->pc = 0x25a344u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4234)));
    // 0x25a348: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25a348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25a34c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25a34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25a350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25a350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a354: 0x0  nop
    ctx->pc = 0x25a354u;
    // NOP
    // 0x25a358: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25a358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25a35c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a360: 0xe4601074  swc1        $f0, 0x1074($v1)
    ctx->pc = 0x25a360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4212), bits); }
    // 0x25a364: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x25a364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x25a368: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a36c: 0xac641094  sw          $a0, 0x1094($v1)
    ctx->pc = 0x25a36cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4244), GPR_U32(ctx, 4));
    // 0x25a370: 0x97a400c0  lhu         $a0, 0xC0($sp)
    ctx->pc = 0x25a370u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25a374: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a378: 0xa4641080  sh          $a0, 0x1080($v1)
    ctx->pc = 0x25a378u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4224), (uint16_t)GPR_U32(ctx, 4));
    // 0x25a37c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x25a37cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25a380: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25a380u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25a384: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25a384u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25a388: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25a388u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25a38c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25a38cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25a390: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25a390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a394: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25a394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25a398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a39c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25a39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a3a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a3a4: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x25a3a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25a3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x25A3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A3B0u;
}
