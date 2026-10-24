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

// Function: entry_002f7718
// Address: 0x2f7718 - 0x2f77f8
void entry_002f7718_0x2f7718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7718_0x2f7718");
#endif

    switch (ctx->pc) {
        case 0x2f7728u: goto label_2f7728;
        case 0x2f7790u: goto label_2f7790;
        default: break;
    }

    ctx->pc = 0x2f7718u;

    // 0x2f7718: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f7718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f771c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2f771cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f7720: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F7720u;
    SET_GPR_U32(ctx, 31, 0x2F7728u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F7720u, 0x2F7728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7728u;
label_2f7728:
    // 0x2f7728: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f7728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f772c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f772cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7730: 0x0  nop
    ctx->pc = 0x2f7730u;
    // NOP
    // 0x2f7734: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7738: 0x3c044234  lui         $a0, 0x4234
    ctx->pc = 0x2f7738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16948 << 16));
    // 0x2f773c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f773cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7740: 0x0  nop
    ctx->pc = 0x2f7740u;
    // NOP
    // 0x2f7744: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7744u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7748: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2f7748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2f774c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f774cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7750: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7754: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7758: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f7758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f775c: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x2f775cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f7760: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2f7760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2f7764: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2f7764u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f7768: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f7768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f776c: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f776cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f7770: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2f7770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2f7774: 0x27ab00c0  addiu       $t3, $sp, 0xC0
    ctx->pc = 0x2f7774u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7778: 0x71604e28  paddub      $t1, $t3, $zero
    ctx->pc = 0x2f7778u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x2f777c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f777cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f7780: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7780u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7784: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7784u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7788: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F7788u;
    SET_GPR_U32(ctx, 31, 0x2F7790u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7788u, 0x2F7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7790u;
label_2f7790:
    // 0x2f7790: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2f7790u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7794: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7798: 0x8c297508  lw          $t1, 0x7508($at)
    ctx->pc = 0x2f7798u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x387508u));
    // 0x2f779c: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x2f779cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2f77a0: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2f77a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2f77a4: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2f77a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2f77a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f77a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f77ac: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2f77acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f77b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f77b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f77b4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f77b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f77b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f77b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f77bc: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x2f77bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f77c0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2f77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2f77c4: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x2f77c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2f77c8: 0x42a02  srl         $a1, $a0, 8
    ctx->pc = 0x2f77c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2f77cc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2f77ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f77d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f77d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f77d4: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x2f77d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f77d8: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x2f77d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2f77dc: 0x30e80003  andi        $t0, $a3, 0x3
    ctx->pc = 0x2f77dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2f77e0: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F77E0u;
    {
        const bool branch_taken_0x2f77e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f77e0) {
            ctx->pc = 0x2F77F8u;
            return;
        }
    }
    ctx->pc = 0x2F77E8u;
    // 0x2f77e8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2f77e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f77ec: 0x7120b628  paddub      $s6, $t1, $zero
    ctx->pc = 0x2f77ecu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f77f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F77F0u;
    {
        const bool branch_taken_0x2f77f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f77f0) {
            ctx->pc = 0x2F7800u;
            return;
        }
    }
    ctx->pc = 0x2F77F8u;
}
