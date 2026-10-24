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

// Function: caseD_6
// Address: 0x34b18c - 0x34b28c
void caseD_6_0x34b18c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x34b18c");
#endif

    switch (ctx->pc) {
        case 0x34b198u: goto label_34b198;
        case 0x34b220u: goto label_34b220;
        case 0x34b230u: goto label_34b230;
        case 0x34b284u: goto label_34b284;
        default: break;
    }

    ctx->pc = 0x34b18cu;

    // 0x34b18c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b190: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34B190u;
    SET_GPR_U32(ctx, 31, 0x34B198u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34B190u, 0x34B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B198u;
label_34b198:
    // 0x34b198: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b19c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b1a0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34b1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b1a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b1a8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34b1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b1ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34b1acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34b1b0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34b1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34b1b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b1b8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b1bc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34b1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b1c0: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x34b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34b1c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b1c8: 0x0  nop
    ctx->pc = 0x34b1c8u;
    // NOP
    // 0x34b1cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34b1ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34b1d0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34b1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34b1d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b1d8: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x34b1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b1dc: 0x3c053f7a  lui         $a1, 0x3F7A
    ctx->pc = 0x34b1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16250 << 16));
    // 0x34b1e0: 0x34a3e148  ori         $v1, $a1, 0xE148
    ctx->pc = 0x34b1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57672);
    // 0x34b1e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34b1e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34b1e8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x34b1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b1ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34b1ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34b1f0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x34b1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x34b1f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b1f8: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x34b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x34b1fc: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x34b1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x34b200: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34b200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34b204: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x34b204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b208: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34b208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34b20c: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x34b20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x34b210: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b214: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34b214u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34b218: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34B218u;
    SET_GPR_U32(ctx, 31, 0x34B220u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34B218u, 0x34B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B220u;
label_34b220:
    // 0x34b220: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34b220u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34b224: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b228: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34B228u;
    SET_GPR_U32(ctx, 31, 0x34B230u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34B228u, 0x34B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B230u;
label_34b230:
    // 0x34b230: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34b230u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34b234: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b238: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34b238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34b23c: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x34b23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b240: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34b240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b244: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x34b244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b248: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34b248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b24c: 0x0  nop
    ctx->pc = 0x34b24cu;
    // NOP
    // 0x34b250: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
    ctx->pc = 0x34B250u;
    {
        const bool branch_taken_0x34b250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b250) {
            ctx->pc = 0x34B34Cu;
            return;
        }
    }
    ctx->pc = 0x34B258u;
    // 0x34b258: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x34b258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34b25c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b260: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34b260u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b264: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b268: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34b268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b26c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34b26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34b270: 0x24060412  addiu       $a2, $zero, 0x412
    ctx->pc = 0x34b270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x34b274: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34b274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b278: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34b278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34b27c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34B27Cu;
    SET_GPR_U32(ctx, 31, 0x34B284u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34B27Cu, 0x34B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B284u;
label_34b284:
    // 0x34b284: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x34B284u;
    {
        const bool branch_taken_0x34b284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b284) {
            ctx->pc = 0x34B34Cu;
            return;
        }
    }
    ctx->pc = 0x34B28Cu;
}
