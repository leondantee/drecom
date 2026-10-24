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

// Function: entry_0017478c
// Address: 0x17478c - 0x174890
void entry_0017478c_0x17478c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017478c_0x17478c");
#endif

    switch (ctx->pc) {
        case 0x1747f8u: goto label_1747f8;
        default: break;
    }

    ctx->pc = 0x17478cu;

    // 0x17478c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17478cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174790: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x174790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174794: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x174794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x174798: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x174798u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17479c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17479cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1747a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1747a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1747a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1747a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1747a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1747a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1747ac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1747acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1747b0: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x1747b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1747b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1747b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1747b8: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x1747b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x1747bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1747bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1747c0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1747c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1747c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1747c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1747c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1747c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1747cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1747ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1747d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1747d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1747d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1747d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1747d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1747d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1747dc: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x1747dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1747e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1747e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1747e4: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x1747e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1747e8: 0xc44d0120  lwc1        $f13, 0x120($v0)
    ctx->pc = 0x1747e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1747ec: 0xc62e0004  lwc1        $f14, 0x4($s1)
    ctx->pc = 0x1747ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1747f0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1747F0u;
    SET_GPR_U32(ctx, 31, 0x1747F8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1747F0u, 0x1747F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1747F8u;
label_1747f8:
    // 0x1747f8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1747f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1747fc: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1747fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x174800: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x174800u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x174804: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174808: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x174808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17480c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17480cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174810: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x174810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x174814: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x174814u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x174818: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x174818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x17481c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17481cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174820: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x174820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x174824: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x174824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174828: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x174828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17482c: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x17482cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x174830: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x174830u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x174834: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174838: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x174838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17483c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17483cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174840: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x174840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x174844: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x174844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x174848: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x174848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x17484c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17484cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174850: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x174850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x174854: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x174854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174858: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x174858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17485c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17485cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x174860: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x174864: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x174864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174868: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x174868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17486c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x17486cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x174870: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x174870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x174874: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x174874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x174878: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x174878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17487c: 0x94830140  lhu         $v1, 0x140($a0)
    ctx->pc = 0x17487cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x174880: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x174880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x174884: 0xa4830140  sh          $v1, 0x140($a0)
    ctx->pc = 0x174884u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x174888: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x174888u;
    {
        const bool branch_taken_0x174888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174888) {
            ctx->pc = 0x174954u;
            return;
        }
    }
    ctx->pc = 0x174890u;
}
