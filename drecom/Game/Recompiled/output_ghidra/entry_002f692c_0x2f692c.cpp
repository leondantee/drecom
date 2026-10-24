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

// Function: entry_002f692c
// Address: 0x2f692c - 0x2f6a08
void entry_002f692c_0x2f692c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f692c_0x2f692c");
#endif

    switch (ctx->pc) {
        case 0x2f6934u: goto label_2f6934;
        case 0x2f69a4u: goto label_2f69a4;
        default: break;
    }

    ctx->pc = 0x2f692cu;

    // 0x2f692c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F692Cu;
    SET_GPR_U32(ctx, 31, 0x2F6934u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F692Cu, 0x2F6934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6934u;
label_2f6934:
    // 0x2f6934: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f6934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6938: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f6938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f693c: 0x0  nop
    ctx->pc = 0x2f693cu;
    // NOP
    // 0x2f6940: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6944: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f6944u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6948: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f6948u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f694c: 0x0  nop
    ctx->pc = 0x2f694cu;
    // NOP
    // 0x2f6950: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6950u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6954: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6958: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f695c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f695cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6960: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f6960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6964: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x2f6964u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6968: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x2f6968u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f696c: 0x8c8700c4  lw          $a3, 0xC4($a0)
    ctx->pc = 0x2f696cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f6970: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2f6970u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f6974: 0x24080021  addiu       $t0, $zero, 0x21
    ctx->pc = 0x2f6974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2f6978: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2f6978u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f697c: 0x27ab00c0  addiu       $t3, $sp, 0xC0
    ctx->pc = 0x2f697cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6980: 0x71603628  paddub      $a2, $t3, $zero
    ctx->pc = 0x2f6980u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x2f6984: 0x8c6a00c4  lw          $t2, 0xC4($v1)
    ctx->pc = 0x2f6984u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f6988: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x2f6988u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f698c: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x2f698cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f6990: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6994: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6998: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6998u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f699c: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F699Cu;
    SET_GPR_U32(ctx, 31, 0x2F69A4u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F699Cu, 0x2F69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F69A4u;
label_2f69a4:
    // 0x2f69a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f69a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f69a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f69a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f69ac: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f69acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f69b0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f69b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f69b4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2f69b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f69b8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2f69b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2f69bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f69bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f69c0: 0x34a00  sll         $t1, $v1, 8
    ctx->pc = 0x2f69c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2f69c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f69c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f69c8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f69cc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2f69ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f69d0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2f69d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f69d4: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2f69d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f69d8: 0x30c7ff00  andi        $a3, $a2, 0xFF00
    ctx->pc = 0x2f69d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x2f69dc: 0x74202  srl         $t0, $a3, 8
    ctx->pc = 0x2f69dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x2f69e0: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x2f69e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2f69e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f69e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f69e8: 0xac297508  sw          $t1, 0x7508($at)
    ctx->pc = 0x2f69e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f69ec: 0x312a00ff  andi        $t2, $t1, 0xFF
    ctx->pc = 0x2f69ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2f69f0: 0x31430003  andi        $v1, $t2, 0x3
    ctx->pc = 0x2f69f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x2f69f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F69F4u;
    {
        const bool branch_taken_0x2f69f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f69f4) {
            ctx->pc = 0x2F6A08u;
            return;
        }
    }
    ctx->pc = 0x2F69FCu;
    // 0x2f69fc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f69fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6a00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6A00u;
    {
        const bool branch_taken_0x2f6a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6a00) {
            ctx->pc = 0x2F6A0Cu;
            return;
        }
    }
    ctx->pc = 0x2F6A08u;
}
