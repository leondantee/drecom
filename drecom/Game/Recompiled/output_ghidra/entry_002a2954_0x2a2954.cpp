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

// Function: entry_002a2954
// Address: 0x2a2954 - 0x2a2a50
void entry_002a2954_0x2a2954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a2954_0x2a2954");
#endif

    switch (ctx->pc) {
        case 0x2a2968u: goto label_2a2968;
        case 0x2a297cu: goto label_2a297c;
        case 0x2a29e8u: goto label_2a29e8;
        case 0x2a2a4cu: goto label_2a2a4c;
        default: break;
    }

    ctx->pc = 0x2a2954u;

    // 0x2a2954: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2958: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a2958u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a295c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a295cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2960: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A2960u;
    SET_GPR_U32(ctx, 31, 0x2A2968u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A2960u, 0x2A2968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2968u;
label_2a2968:
    // 0x2a2968: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a2968u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a296c: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2a296cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2970: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a2970u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a2974: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2A2974u;
    SET_GPR_U32(ctx, 31, 0x2A297Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2A2974u, 0x2A297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A297Cu;
label_2a297c:
    // 0x2a297c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a297cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a2980: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x2a2980u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2984: 0x910309db  lbu         $v1, 0x9DB($t0)
    ctx->pc = 0x2a2984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2523)));
    // 0x2a2988: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a2988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a298c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2a298cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2a2990: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2A2990u;
    {
        const bool branch_taken_0x2a2990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2990) {
            ctx->pc = 0x2A2A50u;
            return;
        }
    }
    ctx->pc = 0x2A2998u;
    // 0x2a2998: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a299c: 0x0  nop
    ctx->pc = 0x2a299cu;
    // NOP
    // 0x2a29a0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a29a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a29a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a29a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a29a8: 0x0  nop
    ctx->pc = 0x2a29a8u;
    // NOP
    // 0x2a29ac: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a29acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a29b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a29b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a29b4: 0x0  nop
    ctx->pc = 0x2a29b4u;
    // NOP
    // 0x2a29b8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a29b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a29bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a29c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a29c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a29c4: 0x0  nop
    ctx->pc = 0x2a29c4u;
    // NOP
    // 0x2a29c8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a29c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2a29cc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a29ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a29d0: 0x248500d0  addiu       $a1, $a0, 0xD0
    ctx->pc = 0x2a29d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x2a29d4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2a29d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a29d8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2a29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a29dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2a29dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2a29e0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A29E0u;
    SET_GPR_U32(ctx, 31, 0x2A29E8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A29E0u, 0x2A29E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A29E8u;
label_2a29e8:
    // 0x2a29e8: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x2a29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x2a29ec: 0x34440a92  ori         $a0, $v0, 0xA92
    ctx->pc = 0x2a29ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2a29f0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a29f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a29f4: 0x0  nop
    ctx->pc = 0x2a29f4u;
    // NOP
    // 0x2a29f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a29f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a29fc: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2a29fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2a00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a2a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a2a04: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2a2a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a2a08: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a2a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2a0c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x2a2a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2a2a10: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a2a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a2a14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a2a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a2a18: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x2a2a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x2a2a1c: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x2a2a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2a2a20: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a2a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a2a24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a2a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a2a28: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x2a2a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2a2a2c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a2a30: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a2a34: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2a2a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a2a38: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a2a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a2a3c: 0x24470200  addiu       $a3, $v0, 0x200
    ctx->pc = 0x2a2a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2a2a40: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a2a40u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a2a44: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A2A44u;
    SET_GPR_U32(ctx, 31, 0x2A2A4Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A2A44u, 0x2A2A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A4Cu;
label_2a2a4c:
    // 0x2a2a4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a2a4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2a2a50u;
}
