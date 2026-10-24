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

// Function: entry_002e60b8
// Address: 0x2e60b8 - 0x2e61e0
void entry_002e60b8_0x2e60b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e60b8_0x2e60b8");
#endif

    switch (ctx->pc) {
        case 0x2e6124u: goto label_2e6124;
        case 0x2e6160u: goto label_2e6160;
        case 0x2e619cu: goto label_2e619c;
        case 0x2e61d8u: goto label_2e61d8;
        default: break;
    }

    ctx->pc = 0x2e60b8u;

    // 0x2e60b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e60b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e60bc: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2e60bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2e60c0: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2E60C0u;
    {
        const bool branch_taken_0x2e60c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e60c0) {
            ctx->pc = 0x2E61E0u;
            return;
        }
    }
    ctx->pc = 0x2E60C8u;
    // 0x2e60c8: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2e60c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e60cc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2e60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2e60d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e60d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e60d4: 0x0  nop
    ctx->pc = 0x2e60d4u;
    // NOP
    // 0x2e60d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e60d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e60dc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e60dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e60e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e60e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e60e4: 0x0  nop
    ctx->pc = 0x2e60e4u;
    // NOP
    // 0x2e60e8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e60e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e60ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e60ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e60f0: 0x0  nop
    ctx->pc = 0x2e60f0u;
    // NOP
    // 0x2e60f4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e60f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e60f8: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x2e60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x2e60fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e60fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6100: 0x0  nop
    ctx->pc = 0x2e6100u;
    // NOP
    // 0x2e6104: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e6104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e6108: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e6108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e610c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e610cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6110: 0x0  nop
    ctx->pc = 0x2e6110u;
    // NOP
    // 0x2e6114: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2e6114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e6118: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e6118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e611c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E611Cu;
    SET_GPR_U32(ctx, 31, 0x2E6124u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E611Cu, 0x2E6124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6124u;
label_2e6124:
    // 0x2e6124: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e6124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e6128: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e6128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e612c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e6130: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e6130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e6134: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e6134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e6138: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e6138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e613c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e613cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6140: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e6140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e6144: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e6144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e6148: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e6148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e614c: 0xc60c0094  lwc1        $f12, 0x94($s0)
    ctx->pc = 0x2e614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e6150: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e6150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6154: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2e6154u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e6158: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2E6158u;
    SET_GPR_U32(ctx, 31, 0x2E6160u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2E6158u, 0x2E6160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6160u;
label_2e6160:
    // 0x2e6160: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e6160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e6164: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e6164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e6168: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e6168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e616c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e616cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e6170: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e6170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e6174: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e6174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e6178: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e6178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e617c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e617cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e6180: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e6180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e6184: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e6184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6188: 0xc60c0094  lwc1        $f12, 0x94($s0)
    ctx->pc = 0x2e6188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e618c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e618cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6190: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2e6190u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e6194: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2E6194u;
    SET_GPR_U32(ctx, 31, 0x2E619Cu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2E6194u, 0x2E619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E619Cu;
label_2e619c:
    // 0x2e619c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e619cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e61a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e61a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e61a4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e61a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e61a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e61ac: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e61acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e61b0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e61b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e61b4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e61b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e61b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e61b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e61bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e61bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e61c0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e61c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e61c4: 0xc60c0094  lwc1        $f12, 0x94($s0)
    ctx->pc = 0x2e61c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e61c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e61c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e61cc: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2e61ccu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e61d0: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2E61D0u;
    SET_GPR_U32(ctx, 31, 0x2E61D8u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2E61D0u, 0x2E61D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E61D8u;
label_2e61d8:
    // 0x2e61d8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2E61D8u;
    {
        const bool branch_taken_0x2e61d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e61d8) {
            ctx->pc = 0x2E6314u;
            return;
        }
    }
    ctx->pc = 0x2E61E0u;
}
