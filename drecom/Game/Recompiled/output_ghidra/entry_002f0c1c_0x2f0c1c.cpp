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

// Function: entry_002f0c1c
// Address: 0x2f0c1c - 0x2f0cdc
void entry_002f0c1c_0x2f0c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f0c1c_0x2f0c1c");
#endif

    switch (ctx->pc) {
        case 0x2f0cd4u: goto label_2f0cd4;
        default: break;
    }

    ctx->pc = 0x2f0c1cu;

    // 0x2f0c1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f0c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0c20: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x2f0c20u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2f0c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0c28: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f0c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f0c2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0c30: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0c34: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0c38: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0c3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0c40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f0c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0c44: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f0c44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f0c48: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0c4c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f0c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f0c50: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f0c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f0c54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f0c58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0c5c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f0c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f0c60: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f0c64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f0c68: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f0c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f0c6c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f0c6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f0c70: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f0c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0c74: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f0c78: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f0c78u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f0c7c: 0x0  nop
    ctx->pc = 0x2f0c7cu;
    // NOP
    // 0x2f0c80: 0x0  nop
    ctx->pc = 0x2f0c80u;
    // NOP
    // 0x2f0c84: 0x1810  mfhi        $v1
    ctx->pc = 0x2f0c84u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f0c88: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f0c8c: 0x24428dd0  addiu       $v0, $v0, -0x7230
    ctx->pc = 0x2f0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938064));
    // 0x2f0c90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0c94: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f0c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f0c98: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f0c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f0c9c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f0ca0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f0ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f0ca4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0ca8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f0ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f0cac: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f0cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f0cb0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f0cb4: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f0cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f0cb8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2f0cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f0cbc: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f0cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f0cc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f0cc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f0cc4: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f0cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f0cc8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f0cc8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f0ccc: 0xc0bbe74  jal         func_2EF9D0
    ctx->pc = 0x2F0CCCu;
    SET_GPR_U32(ctx, 31, 0x2F0CD4u);
    ctx->pc = 0x2EF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF9D0u, 0x2F0CCCu, 0x2F0CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0CD4u;
label_2f0cd4:
    // 0x2f0cd4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2F0CD4u;
    {
        const bool branch_taken_0x2f0cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0cd4) {
            ctx->pc = 0x2F0E50u;
            return;
        }
    }
    ctx->pc = 0x2F0CDCu;
}
