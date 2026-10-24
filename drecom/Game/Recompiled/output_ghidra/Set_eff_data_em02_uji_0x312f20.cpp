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

// Function: Set_eff_data_em02_uji
// Address: 0x312f20 - 0x313040
void Set_eff_data_em02_uji_0x312f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_eff_data_em02_uji_0x312f20");
#endif

    switch (ctx->pc) {
        case 0x312f40u: goto label_312f40;
        case 0x313018u: goto label_313018;
        default: break;
    }

    ctx->pc = 0x312f20u;

    // 0x312f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x312f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x312f24: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x312f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x312f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x312f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x312f2c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x312f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x312f30: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x312f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x312f34: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x312f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x312f38: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x312F38u;
    {
        const bool branch_taken_0x312f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312f38) {
            ctx->pc = 0x313000u;
            goto label_313000;
        }
    }
    ctx->pc = 0x312F40u;
label_312f40:
    // 0x312f40: 0xa200011c  sb          $zero, 0x11C($s0)
    ctx->pc = 0x312f40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x312f44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x312f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312f48: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x312f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
    // 0x312f4c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312f50: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x312f50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x312f54: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x312f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x312f58: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x312f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x312f5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312f60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x312f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312f64: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x312f64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x312f68: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312f6c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x312f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x312f70: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x312f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x312f74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x312f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x312f78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312f7c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x312f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x312f80: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x312f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x312f84: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x312f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x312f88: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312f8c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x312f8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x312f90: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x312f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312f94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312f98: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x312f98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x312f9c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x312f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x312fa0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x312fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x312fa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312fa8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x312fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312fac: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x312facu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x312fb0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312fb4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x312fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x312fb8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x312fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x312fbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x312fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x312fc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312fc4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x312fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x312fc8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x312fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x312fcc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x312fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x312fd0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x312fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x312fd4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x312fd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x312fd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x312fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x312fdc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x312fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x312fe0: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x312fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x312fe4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x312fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x312fe8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x312fe8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x312fec: 0x0  nop
    ctx->pc = 0x312fecu;
    // NOP
    // 0x312ff0: 0x0  nop
    ctx->pc = 0x312ff0u;
    // NOP
    // 0x312ff4: 0x1010  mfhi        $v0
    ctx->pc = 0x312ff4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x312ff8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x312ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x312ffc: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x312ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
label_313000:
    // 0x313000: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x313000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313004: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x313004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x313008: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x313008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31300c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x31300cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x313010: 0xc06553c  jal         func_1954F0
    ctx->pc = 0x313010u;
    SET_GPR_U32(ctx, 31, 0x313018u);
    ctx->pc = 0x1954F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1954F0u, 0x313010u, 0x313018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313018u;
label_313018:
    // 0x313018: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x313018u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31301c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x31301cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x313020: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x313020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x313024: 0x1443ffc6  bne         $v0, $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x313024u;
    {
        const bool branch_taken_0x313024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x313024) {
            ctx->pc = 0x312F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312f40;
        }
    }
    ctx->pc = 0x31302Cu;
    // 0x31302c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x31302cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x313030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313034: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x313034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x313038: 0x3e00008  jr          $ra
    ctx->pc = 0x313038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313040u;
}
