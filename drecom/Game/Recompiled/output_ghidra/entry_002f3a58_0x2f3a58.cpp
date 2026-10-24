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

// Function: entry_002f3a58
// Address: 0x2f3a58 - 0x2f3b2c
void entry_002f3a58_0x2f3a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f3a58_0x2f3a58");
#endif

    switch (ctx->pc) {
        case 0x2f3ac4u: goto label_2f3ac4;
        default: break;
    }

    ctx->pc = 0x2f3a58u;

    // 0x2f3a58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3a5c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3a60: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3a64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3a68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3a6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3a70: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f3a70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f3a74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3a78: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3a7c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3a80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3a84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3a88: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3a8c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f3a90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3a94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3a98: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3a98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3a9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f3a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3aa0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f3aa4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f3aa4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f3aa8: 0x0  nop
    ctx->pc = 0x2f3aa8u;
    // NOP
    // 0x2f3aac: 0x0  nop
    ctx->pc = 0x2f3aacu;
    // NOP
    // 0x2f3ab0: 0x1010  mfhi        $v0
    ctx->pc = 0x2f3ab0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f3ab4: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F3AB4u;
    {
        const bool branch_taken_0x2f3ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3ab4) {
            ctx->pc = 0x2F3B2Cu;
            return;
        }
    }
    ctx->pc = 0x2F3ABCu;
    // 0x2f3abc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3ABCu;
    SET_GPR_U32(ctx, 31, 0x2F3AC4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3ABCu, 0x2F3AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3AC4u;
label_2f3ac4:
    // 0x2f3ac4: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2f3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2f3ac8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3acc: 0x0  nop
    ctx->pc = 0x2f3accu;
    // NOP
    // 0x2f3ad0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3ad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3ad4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f3ad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3adc: 0x0  nop
    ctx->pc = 0x2f3adcu;
    // NOP
    // 0x2f3ae0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f3ae0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f3ae4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3ae8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f3ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f3aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3af0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f3af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f3af4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3af8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f3af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f3afc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3b00: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f3b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3b04: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2f3b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f3b08: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f3b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3b0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3b10: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f3b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3b14: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2f3b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f3b18: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f3b18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3b1c: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f3b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3b20: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f3b20u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3b24: 0xc0bbf2c  jal         func_2EFCB0
    ctx->pc = 0x2F3B24u;
    SET_GPR_U32(ctx, 31, 0x2F3B2Cu);
    ctx->pc = 0x2EFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFCB0u, 0x2F3B24u, 0x2F3B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B2Cu;
}
