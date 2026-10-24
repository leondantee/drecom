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

// Function: entry_002f73dc
// Address: 0x2f73dc - 0x2f7514
void entry_002f73dc_0x2f73dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f73dc_0x2f73dc");
#endif

    switch (ctx->pc) {
        case 0x2f7444u: goto label_2f7444;
        case 0x2f74acu: goto label_2f74ac;
        default: break;
    }

    ctx->pc = 0x2f73dcu;

    // 0x2f73dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f73dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f73e0: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2f73e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2f73e4: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x2f73e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f73e8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2f73e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2f73ec: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x2f73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2f73f0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f73f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f73f4: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x2f73f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2f73f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f73f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f73fc: 0x8c267508  lw          $a2, 0x7508($at)
    ctx->pc = 0x2f73fcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7400: 0x30c7ffff  andi        $a3, $a2, 0xFFFF
    ctx->pc = 0x2f7400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2f7404: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x2f7404u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2f7408: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x2f7408u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2f740c: 0x312aff00  andi        $t2, $t1, 0xFF00
    ctx->pc = 0x2f740cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65280);
    // 0x2f7410: 0xa5202  srl         $t2, $t2, 8
    ctx->pc = 0x2f7410u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x2f7414: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x2f7414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2f7418: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f741c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2f741cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f7420: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f7420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f7424: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x2f7424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2f7428: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x2f7428u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f742c: 0x0  nop
    ctx->pc = 0x2f742cu;
    // NOP
    // 0x2f7430: 0x0  nop
    ctx->pc = 0x2f7430u;
    // NOP
    // 0x2f7434: 0x1810  mfhi        $v1
    ctx->pc = 0x2f7434u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f7438: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x2f7438u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2f743c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F743Cu;
    SET_GPR_U32(ctx, 31, 0x2F7444u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F743Cu, 0x2F7444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7444u;
label_2f7444:
    // 0x2f7444: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f7444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7448: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f7448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f744c: 0x0  nop
    ctx->pc = 0x2f744cu;
    // NOP
    // 0x2f7450: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7450u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7454: 0x3c064234  lui         $a2, 0x4234
    ctx->pc = 0x2f7454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7458: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2f7458u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f745c: 0x0  nop
    ctx->pc = 0x2f745cu;
    // NOP
    // 0x2f7460: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7460u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7468: 0x8fa800f8  lw          $t0, 0xF8($sp)
    ctx->pc = 0x2f7468u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f746c: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f746cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7470: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2f7470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7474: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2f7474u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f7478: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2f7478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2f747c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f747cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7480: 0x8d0400c4  lw          $a0, 0xC4($t0)
    ctx->pc = 0x2f7480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 196)));
    // 0x2f7484: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2f7484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2f7488: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f7488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f748c: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f748cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f7490: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2f7490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2f7494: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f7494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7498: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x2f7498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f749c: 0x72405628  paddub      $t2, $s2, $zero
    ctx->pc = 0x2f749cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2f74a0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f74a0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f74a4: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F74A4u;
    SET_GPR_U32(ctx, 31, 0x2F74ACu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F74A4u, 0x2F74ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F74ACu;
label_2f74ac:
    // 0x2f74ac: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2f74acu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f74b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f74b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f74b4: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2f74b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2f74b8: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2f74b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f74bc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2f74bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f74c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f74c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f74c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f74c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f74c8: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x2f74c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f74cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f74ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f74d0: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x2f74d0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x387508u));
    // 0x2f74d4: 0x30a8ffff  andi        $t0, $a1, 0xFFFF
    ctx->pc = 0x2f74d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f74d8: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2f74d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2f74dc: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x2f74dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2f74e0: 0x3085ff00  andi        $a1, $a0, 0xFF00
    ctx->pc = 0x2f74e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x2f74e4: 0x53202  srl         $a2, $a1, 8
    ctx->pc = 0x2f74e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2f74e8: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x2f74e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2f74ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f74ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f74f0: 0xac277508  sw          $a3, 0x7508($at)
    ctx->pc = 0x2f74f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f74f4: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2f74f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2f74f8: 0x31090003  andi        $t1, $t0, 0x3
    ctx->pc = 0x2f74f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x2f74fc: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F74FCu;
    {
        const bool branch_taken_0x2f74fc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f74fc) {
            ctx->pc = 0x2F7514u;
            return;
        }
    }
    ctx->pc = 0x2F7504u;
    // 0x2f7504: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2f7504u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f7508: 0x7140ae28  paddub      $s5, $t2, $zero
    ctx->pc = 0x2f7508u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f750c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F750Cu;
    {
        const bool branch_taken_0x2f750c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f750c) {
            ctx->pc = 0x2F7518u;
            return;
        }
    }
    ctx->pc = 0x2F7514u;
}
