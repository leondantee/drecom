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

// Function: entry_0023d62c
// Address: 0x23d62c - 0x23d750
void entry_0023d62c_0x23d62c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d62c_0x23d62c");
#endif

    switch (ctx->pc) {
        case 0x23d6a8u: goto label_23d6a8;
        case 0x23d72cu: goto label_23d72c;
        case 0x23d734u: goto label_23d734;
        default: break;
    }

    ctx->pc = 0x23d62cu;

    // 0x23d62c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x23d62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d630: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x23d630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x23d634: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x23d634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23d638: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x23d638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x23d63c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d63cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d640: 0x0  nop
    ctx->pc = 0x23d640u;
    // NOP
    // 0x23d644: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x23d644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x23d648: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d64c: 0x0  nop
    ctx->pc = 0x23d64cu;
    // NOP
    // 0x23d650: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x23d650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x23d654: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d658: 0x0  nop
    ctx->pc = 0x23d658u;
    // NOP
    // 0x23d65c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x23d65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x23d660: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23d660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23d664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d668: 0x0  nop
    ctx->pc = 0x23d668u;
    // NOP
    // 0x23d66c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x23d66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x23d670: 0x3c0643c8  lui         $a2, 0x43C8
    ctx->pc = 0x23d670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17352 << 16));
    // 0x23d674: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x23d674u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d678: 0x0  nop
    ctx->pc = 0x23d678u;
    // NOP
    // 0x23d67c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x23d67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x23d680: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23d680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d684: 0xa7a40084  sh          $a0, 0x84($sp)
    ctx->pc = 0x23d684u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 4));
    // 0x23d688: 0xa3a00086  sb          $zero, 0x86($sp)
    ctx->pc = 0x23d688u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d68c: 0xa3a00087  sb          $zero, 0x87($sp)
    ctx->pc = 0x23d68cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d690: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x23d690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d694: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x23d694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x23d698: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x23d698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23d69c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x23d69cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x23d6a0: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x23D6A0u;
    SET_GPR_U32(ctx, 31, 0x23D6A8u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x23D6A0u, 0x23D6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6A8u;
label_23d6a8:
    // 0x23d6a8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x23d6a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23d6ac: 0x11000095  beqz        $t0, . + 4 + (0x95 << 2)
    ctx->pc = 0x23D6ACu;
    {
        const bool branch_taken_0x23d6ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d6ac) {
            ctx->pc = 0x23D904u;
            return;
        }
    }
    ctx->pc = 0x23D6B4u;
    // 0x23d6b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d6b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d6b8: 0x0  nop
    ctx->pc = 0x23d6b8u;
    // NOP
    // 0x23d6bc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x23d6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x23d6c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d6c4: 0x0  nop
    ctx->pc = 0x23d6c4u;
    // NOP
    // 0x23d6c8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x23d6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x23d6cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d6ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d6d0: 0x0  nop
    ctx->pc = 0x23d6d0u;
    // NOP
    // 0x23d6d4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x23d6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x23d6d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23d6dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d6e0: 0x0  nop
    ctx->pc = 0x23d6e0u;
    // NOP
    // 0x23d6e4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x23d6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x23d6e8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d6ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23d6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23d6f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23d6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23d6f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23d6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23d6f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23d6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23d6fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23d6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23d700: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23d700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23d704: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23d704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23d708: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23d708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23d70c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x23d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x23d710: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23d714: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x23d714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23d718: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23d718u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23d71c: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23d71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23d720: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23d720u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23d724: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23D724u;
    SET_GPR_U32(ctx, 31, 0x23D72Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23D724u, 0x23D72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D72Cu;
label_23d72c:
    // 0x23d72c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23D72Cu;
    SET_GPR_U32(ctx, 31, 0x23D734u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23D72Cu, 0x23D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D734u;
label_23d734:
    // 0x23d734: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D734u;
    {
        const bool branch_taken_0x23d734 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23d734) {
            ctx->pc = 0x23D750u;
            return;
        }
    }
    ctx->pc = 0x23D73Cu;
    // 0x23d73c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23d73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23d740: 0x0  nop
    ctx->pc = 0x23d740u;
    // NOP
    // 0x23d744: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23d744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23d748: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23D748u;
    {
        const bool branch_taken_0x23d748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d748) {
            ctx->pc = 0x23D76Cu;
            return;
        }
    }
    ctx->pc = 0x23D750u;
}
