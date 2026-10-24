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

// Function: entry_002f7820
// Address: 0x2f7820 - 0x2f7914
void entry_002f7820_0x2f7820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7820_0x2f7820");
#endif

    switch (ctx->pc) {
        case 0x2f7884u: goto label_2f7884;
        case 0x2f78ecu: goto label_2f78ec;
        default: break;
    }

    ctx->pc = 0x2f7820u;

    // 0x2f7820: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7824: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f7824u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7828: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f7828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f782c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2f782cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f7830: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2f7830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f7834: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f7834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f7838: 0x34200  sll         $t0, $v1, 8
    ctx->pc = 0x2f7838u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f783c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f783cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7840: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2f7840u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7844: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2f7844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f7848: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2f7848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f784c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x2f784cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f7850: 0x30a6ff00  andi        $a2, $a1, 0xFF00
    ctx->pc = 0x2f7850u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x2f7854: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x2f7854u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x2f7858: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x2f7858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2f785c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f785cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7860: 0xac287508  sw          $t0, 0x7508($at)
    ctx->pc = 0x2f7860u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f7864: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x2f7864u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f7868: 0x240a0016  addiu       $t2, $zero, 0x16
    ctx->pc = 0x2f7868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2f786c: 0x12a001b  divu        $zero, $t1, $t2
    ctx->pc = 0x2f786cu;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x2f7870: 0x0  nop
    ctx->pc = 0x2f7870u;
    // NOP
    // 0x2f7874: 0x0  nop
    ctx->pc = 0x2f7874u;
    // NOP
    // 0x2f7878: 0x8010  mfhi        $s0
    ctx->pc = 0x2f7878u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x2f787c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F787Cu;
    SET_GPR_U32(ctx, 31, 0x2F7884u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F787Cu, 0x2F7884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7884u;
label_2f7884:
    // 0x2f7884: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f7884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7888: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f7888u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f788c: 0x0  nop
    ctx->pc = 0x2f788cu;
    // NOP
    // 0x2f7890: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7890u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7894: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f7894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f7898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f789c: 0x0  nop
    ctx->pc = 0x2f789cu;
    // NOP
    // 0x2f78a0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f78a0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f78a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f78a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f78a8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f78a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f78ac: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f78acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f78b0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f78b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f78b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f78b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f78b8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f78bc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f78bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f78c0: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f78c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f78c4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2f78c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2f78c8: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2f78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f78cc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2f78ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f78d0: 0x8c6700c4  lw          $a3, 0xC4($v1)
    ctx->pc = 0x2f78d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f78d4: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2f78d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2f78d8: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f78d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f78dc: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f78dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f78e0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f78e0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f78e4: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F78E4u;
    SET_GPR_U32(ctx, 31, 0x2F78ECu);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F78E4u, 0x2F78ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F78ECu;
label_2f78ec:
    // 0x2f78ec: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2f78ecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f78f0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2f78f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f78f4: 0x8faa00f8  lw          $t2, 0xF8($sp)
    ctx->pc = 0x2f78f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f78f8: 0xa1490100  sb          $t1, 0x100($t2)
    ctx->pc = 0x2f78f8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 256), (uint8_t)GPR_U32(ctx, 9));
    // 0x2f78fc: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x2f78fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f7900: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x2f7900u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f7904: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7908: 0xa0700101  sb          $s0, 0x101($v1)
    ctx->pc = 0x2f7908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 16));
    // 0x2f790c: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x2F790Cu;
    {
        const bool branch_taken_0x2f790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f790c) {
            ctx->pc = 0x2F7CF0u;
            return;
        }
    }
    ctx->pc = 0x2F7914u;
}
