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

// Function: entry_002f6d1c
// Address: 0x2f6d1c - 0x2f6e04
void entry_002f6d1c_0x2f6d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6d1c_0x2f6d1c");
#endif

    switch (ctx->pc) {
        case 0x2f6d28u: goto label_2f6d28;
        case 0x2f6da0u: goto label_2f6da0;
        default: break;
    }

    ctx->pc = 0x2f6d1cu;

    // 0x2f6d1c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f6d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f6d20: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6D20u;
    SET_GPR_U32(ctx, 31, 0x2F6D28u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6D20u, 0x2F6D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6D28u;
label_2f6d28:
    // 0x2f6d28: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2f6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6d2c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2f6d2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6d30: 0x0  nop
    ctx->pc = 0x2f6d30u;
    // NOP
    // 0x2f6d34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6d34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6d38: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f6d38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6d3c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f6d3cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6d40: 0x0  nop
    ctx->pc = 0x2f6d40u;
    // NOP
    // 0x2f6d44: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6d44u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6d48: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6d4c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6d50: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2f6d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6d54: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x2f6d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6d58: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2f6d58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6d5c: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x2f6d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2f6d60: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2f6d60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2f6d64: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2f6d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2f6d68: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2f6d68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2f6d6c: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2f6d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6d70: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2f6d70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2f6d74: 0x8c4800c4  lw          $t0, 0xC4($v0)
    ctx->pc = 0x2f6d74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2f6d78: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2f6d78u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f6d7c: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x2f6d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f6d80: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x2f6d80u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f6d84: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6d84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6d88: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x2f6d88u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f6d8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f6d8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f6d90: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6d90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6d94: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6d94u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6d98: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6D98u;
    SET_GPR_U32(ctx, 31, 0x2F6DA0u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6D98u, 0x2F6DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DA0u;
label_2f6da0:
    // 0x2f6da0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f6da0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6da4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f6da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f6da8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2f6da8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2f6dac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2f6dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f6db0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f6db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f6db4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f6db8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x2f6db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f6dbc: 0x64200  sll         $t0, $a2, 8
    ctx->pc = 0x2f6dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2f6dc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f6dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f6dc4: 0x8c277508  lw          $a3, 0x7508($at)
    ctx->pc = 0x2f6dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x387508u));
    // 0x2f6dc8: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x2f6dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2f6dcc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f6dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f6dd0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2f6dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f6dd4: 0x3085ff00  andi        $a1, $a0, 0xFF00
    ctx->pc = 0x2f6dd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x2f6dd8: 0x53202  srl         $a2, $a1, 8
    ctx->pc = 0x2f6dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x2f6ddc: 0x1063821  addu        $a3, $t0, $a2
    ctx->pc = 0x2f6ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2f6de0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f6de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f6de4: 0xac277508  sw          $a3, 0x7508($at)
    ctx->pc = 0x2f6de4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f6de8: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x2f6de8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2f6dec: 0x31090003  andi        $t1, $t0, 0x3
    ctx->pc = 0x2f6decu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x2f6df0: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6DF0u;
    {
        const bool branch_taken_0x2f6df0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6df0) {
            ctx->pc = 0x2F6E04u;
            return;
        }
    }
    ctx->pc = 0x2F6DF8u;
    // 0x2f6df8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f6df8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6dfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6DFCu;
    {
        const bool branch_taken_0x2f6dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6dfc) {
            ctx->pc = 0x2F6E08u;
            return;
        }
    }
    ctx->pc = 0x2F6E04u;
}
