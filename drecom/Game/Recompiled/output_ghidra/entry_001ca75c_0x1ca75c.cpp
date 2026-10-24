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

// Function: entry_001ca75c
// Address: 0x1ca75c - 0x1ca808
void entry_001ca75c_0x1ca75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca75c_0x1ca75c");
#endif

    switch (ctx->pc) {
        case 0x1ca778u: goto label_1ca778;
        case 0x1ca784u: goto label_1ca784;
        case 0x1ca798u: goto label_1ca798;
        case 0x1ca7b0u: goto label_1ca7b0;
        default: break;
    }

    ctx->pc = 0x1ca75cu;

    // 0x1ca75c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ca75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ca760: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca764: 0xa043157d  sb          $v1, 0x157D($v0)
    ctx->pc = 0x1ca764u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5501), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca768: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca76c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ca76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ca770: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CA770u;
    SET_GPR_U32(ctx, 31, 0x1CA778u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CA770u, 0x1CA778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA778u;
label_1ca778:
    // 0x1ca778: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca77c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CA77Cu;
    SET_GPR_U32(ctx, 31, 0x1CA784u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CA77Cu, 0x1CA784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA784u;
label_1ca784:
    // 0x1ca784: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca788: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca78c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ca78cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ca790: 0xc057480  jal         func_15D200
    ctx->pc = 0x1CA790u;
    SET_GPR_U32(ctx, 31, 0x1CA798u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1CA790u, 0x1CA798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA798u;
label_1ca798:
    // 0x1ca798: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ca798u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ca79c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca7a0: 0x24850120  addiu       $a1, $a0, 0x120
    ctx->pc = 0x1ca7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ca7a4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1ca7a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ca7a8: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1CA7A8u;
    SET_GPR_U32(ctx, 31, 0x1CA7B0u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1CA7A8u, 0x1CA7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7B0u;
label_1ca7b0:
    // 0x1ca7b0: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1ca7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x1ca7b4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ca7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ca7b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca7bc: 0x0  nop
    ctx->pc = 0x1ca7bcu;
    // NOP
    // 0x1ca7c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ca7c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ca7c4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1ca7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1ca7c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca7cc: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1ca7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca7d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca7d4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1ca7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca7d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ca7d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ca7dc: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1ca7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1ca7e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca7e4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1ca7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca7e8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1ca7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca7ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca7ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca7f0: 0x0  nop
    ctx->pc = 0x1ca7f0u;
    // NOP
    // 0x1ca7f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA7F4u;
    {
        const bool branch_taken_0x1ca7f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca7f4) {
            ctx->pc = 0x1CA808u;
            return;
        }
    }
    ctx->pc = 0x1CA7FCu;
    // 0x1ca7fc: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1ca7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca800: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca804: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1ca804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x1ca808u;
}
