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

// Function: entry_002f0d54
// Address: 0x2f0d54 - 0x2f0e50
void entry_002f0d54_0x2f0d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f0d54_0x2f0d54");
#endif

    ctx->pc = 0x2f0d54u;

    // 0x2f0d54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f0d54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0d58: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x2f0d58u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2f0d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0d60: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f0d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f0d64: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0d68: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0d68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0d6c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0d70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0d74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0d78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0d7c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f0d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f0d80: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0d84: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0d84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0d88: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0d8c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0d94: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f0d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f0d98: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f0d9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0da0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0da4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f0da4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0da8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f0da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0dac: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x2f0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2f0db0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f0db0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f0db4: 0x0  nop
    ctx->pc = 0x2f0db4u;
    // NOP
    // 0x2f0db8: 0x0  nop
    ctx->pc = 0x2f0db8u;
    // NOP
    // 0x2f0dbc: 0x2810  mfhi        $a1
    ctx->pc = 0x2f0dbcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2f0dc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0dc4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0dc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0dcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0dd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0dd8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f0dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f0ddc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0de0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0de0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0de4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0de8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0df0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f0df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f0df4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f0df8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0dfc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0e00: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f0e00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0e04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f0e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0e08: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2f0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2f0e0c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f0e0cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f0e10: 0x0  nop
    ctx->pc = 0x2f0e10u;
    // NOP
    // 0x2f0e14: 0x0  nop
    ctx->pc = 0x2f0e14u;
    // NOP
    // 0x2f0e18: 0x4010  mfhi        $t0
    ctx->pc = 0x2f0e18u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x2f0e1c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f0e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f0e20: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f0e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f0e24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0e28: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f0e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f0e2c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2f0e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f0e30: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0e34: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f0e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f0e38: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2f0e38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f0e3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f0e3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f0e40: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f0e40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f0e44: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f0e44u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f0e48: 0xc0bbdc4  jal         func_2EF710
    ctx->pc = 0x2F0E48u;
    SET_GPR_U32(ctx, 31, 0x2F0E50u);
    ctx->pc = 0x2EF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF710u, 0x2F0E48u, 0x2F0E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0E50u;
}
