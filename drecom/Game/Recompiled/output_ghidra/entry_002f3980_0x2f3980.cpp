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

// Function: entry_002f3980
// Address: 0x2f3980 - 0x2f3a58
void entry_002f3980_0x2f3980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f3980_0x2f3980");
#endif

    switch (ctx->pc) {
        case 0x2f39f4u: goto label_2f39f4;
        default: break;
    }

    ctx->pc = 0x2f3980u;

    // 0x2f3980: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3984: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3984u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3988: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f398c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f398cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3990: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3994: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3998: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f3998u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f399c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f399cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f39a0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f39a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f39a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f39a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f39a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f39ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f39acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f39b0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f39b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f39b4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f39b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f39bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f39bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f39c0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f39c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f39c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f39c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f39c8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f39c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f39cc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f39ccu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f39d0: 0x0  nop
    ctx->pc = 0x2f39d0u;
    // NOP
    // 0x2f39d4: 0x0  nop
    ctx->pc = 0x2f39d4u;
    // NOP
    // 0x2f39d8: 0x1010  mfhi        $v0
    ctx->pc = 0x2f39d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f39dc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F39DCu;
    {
        const bool branch_taken_0x2f39dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f39dc) {
            ctx->pc = 0x2F3A58u;
            return;
        }
    }
    ctx->pc = 0x2F39E4u;
    // 0x2f39e4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f39e8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2f39e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f39ec: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F39ECu;
    SET_GPR_U32(ctx, 31, 0x2F39F4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F39ECu, 0x2F39F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F39F4u;
label_2f39f4:
    // 0x2f39f4: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2f39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2f39f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f39f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f39fc: 0x0  nop
    ctx->pc = 0x2f39fcu;
    // NOP
    // 0x2f3a00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3a04: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2f3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2f3a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3a0c: 0x0  nop
    ctx->pc = 0x2f3a0cu;
    // NOP
    // 0x2f3a10: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f3a10u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f3a14: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f3a18: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f3a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f3a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3a20: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f3a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f3a24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3a28: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f3a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3a2c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2f3a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f3a30: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f3a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3a34: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3a38: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f3a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3a3c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2f3a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f3a40: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f3a40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3a44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f3a44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f3a48: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f3a48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3a4c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f3a4cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3a50: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2F3A50u;
    SET_GPR_U32(ctx, 31, 0x2F3A58u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2F3A50u, 0x2F3A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A58u;
}
