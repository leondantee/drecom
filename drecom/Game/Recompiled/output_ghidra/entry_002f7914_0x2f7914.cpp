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

// Function: entry_002f7914
// Address: 0x2f7914 - 0x2f7a08
void entry_002f7914_0x2f7914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7914_0x2f7914");
#endif

    switch (ctx->pc) {
        case 0x2f7924u: goto label_2f7924;
        case 0x2f79a0u: goto label_2f79a0;
        default: break;
    }

    ctx->pc = 0x2f7914u;

    // 0x2f7914: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f7914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7918: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x2f7918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f791c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F791Cu;
    SET_GPR_U32(ctx, 31, 0x2F7924u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F791Cu, 0x2F7924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7924u;
label_2f7924:
    // 0x2f7924: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f7924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2f7928: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f7928u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f792c: 0x0  nop
    ctx->pc = 0x2f792cu;
    // NOP
    // 0x2f7930: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7934: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f7934u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
    // 0x2f7938: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f7938u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f793c: 0x0  nop
    ctx->pc = 0x2f793cu;
    // NOP
    // 0x2f7940: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7940u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7944: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f7944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f7948: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2f7948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f794c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7950: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x2f7950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x2f7954: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2f7954u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7958: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x2f7958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f795c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f795cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7960: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2f7960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2f7964: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2f7964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f7968: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2f7968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f796c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2f796cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f7970: 0x8c6800c4  lw          $t0, 0xC4($v1)
    ctx->pc = 0x2f7970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f7974: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2f7974u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f7978: 0x24090015  addiu       $t1, $zero, 0x15
    ctx->pc = 0x2f7978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2f797c: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x2f797cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f7980: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f7980u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7984: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x2f7984u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f7988: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f7988u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f798c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2f798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f7990: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2f7990u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f7994: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f7994u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f7998: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F7998u;
    SET_GPR_U32(ctx, 31, 0x2F79A0u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F7998u, 0x2F79A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F79A0u;
label_2f79a0:
    // 0x2f79a0: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2f79a0u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f79a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f79a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f79a8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f79ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2f79acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f79b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f79b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f79b4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2f79b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f79b8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2f79b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f79bc: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x2f79bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f79c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f79c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f79c4: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2f79c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2f79c8: 0x3088ffff  andi        $t0, $a0, 0xFFFF
    ctx->pc = 0x2f79c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f79cc: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x2f79ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2f79d0: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x2f79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2f79d4: 0x3064ff00  andi        $a0, $v1, 0xFF00
    ctx->pc = 0x2f79d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2f79d8: 0x42a02  srl         $a1, $a0, 8
    ctx->pc = 0x2f79d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2f79dc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2f79dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f79e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f79e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f79e4: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x2f79e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f79e8: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x2f79e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2f79ec: 0x30e80003  andi        $t0, $a3, 0x3
    ctx->pc = 0x2f79ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2f79f0: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F79F0u;
    {
        const bool branch_taken_0x2f79f0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f79f0) {
            ctx->pc = 0x2F7A08u;
            return;
        }
    }
    ctx->pc = 0x2F79F8u;
    // 0x2f79f8: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2f79f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f79fc: 0x7120be28  paddub      $s7, $t1, $zero
    ctx->pc = 0x2f79fcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f7a00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7A00u;
    {
        const bool branch_taken_0x2f7a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7a00) {
            ctx->pc = 0x2F7A10u;
            return;
        }
    }
    ctx->pc = 0x2F7A08u;
}
