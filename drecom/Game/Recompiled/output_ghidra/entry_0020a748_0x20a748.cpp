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

// Function: entry_0020a748
// Address: 0x20a748 - 0x20a800
void entry_0020a748_0x20a748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a748_0x20a748");
#endif

    switch (ctx->pc) {
        case 0x20a750u: goto label_20a750;
        case 0x20a76cu: goto label_20a76c;
        default: break;
    }

    ctx->pc = 0x20a748u;

    // 0x20a748: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20A748u;
    SET_GPR_U32(ctx, 31, 0x20A750u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20A748u, 0x20A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A750u;
label_20a750:
    // 0x20a750: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x20a750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x20a754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20a754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a758: 0x0  nop
    ctx->pc = 0x20a758u;
    // NOP
    // 0x20a75c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20a75cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20a760: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x20a760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x20a764: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20A764u;
    SET_GPR_U32(ctx, 31, 0x20A76Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20A764u, 0x20A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A76Cu;
label_20a76c:
    // 0x20a76c: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x20a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x20a770: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20a770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a774: 0x0  nop
    ctx->pc = 0x20a774u;
    // NOP
    // 0x20a778: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20a778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20a77c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x20a77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x20a780: 0x8fa60218  lw          $a2, 0x218($sp)
    ctx->pc = 0x20a780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a784: 0x84c71278  lh          $a3, 0x1278($a2)
    ctx->pc = 0x20a784u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
    // 0x20a788: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x20a788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x20a78c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20a78cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20a790: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x20a790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x20a794: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20A794u;
    {
        const bool branch_taken_0x20a794 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a794) {
            ctx->pc = 0x20A800u;
            return;
        }
    }
    ctx->pc = 0x20A79Cu;
    // 0x20a79c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x20a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x20a7a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20a7a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a7a4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x20a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20a7a8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20a7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20a7ac: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x20a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x20a7b0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20a7b4: 0x24629390  addiu       $v0, $v1, -0x6C70
    ctx->pc = 0x20a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939536));
    // 0x20a7b8: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x20a7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20a7bc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x20a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a7c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x20a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20a7c4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x20a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x20a7c8: 0x24829390  addiu       $v0, $a0, -0x6C70
    ctx->pc = 0x20a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939536));
    // 0x20a7cc: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x20a7ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a7d0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x20a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x20a7d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20a7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20a7d8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20a7d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a7dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20a7dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a7e0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20a7e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a7e4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20a7e4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a7e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a7ec: 0xc42d9490  lwc1        $f13, -0x6B70($at)
    ctx->pc = 0x20a7ecu;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20a7f0: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x20a7f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x20a7f4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20a7f4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a7f8: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x20A7F8u;
    SET_GPR_U32(ctx, 31, 0x20A800u);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x20A7F8u, 0x20A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A800u;
}
