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

// Function: entry_002f9df8
// Address: 0x2f9df8 - 0x2f9ec8
void entry_002f9df8_0x2f9df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f9df8_0x2f9df8");
#endif

    switch (ctx->pc) {
        case 0x2f9eb4u: goto label_2f9eb4;
        case 0x2f9ec0u: goto label_2f9ec0;
        default: break;
    }

    ctx->pc = 0x2f9df8u;

    // 0x2f9df8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f9df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f9dfc: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x2f9dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x387508u));
    // 0x2f9e00: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x2f9e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f9e04: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x2f9e04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2f9e08: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x2f9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2f9e0c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2f9e0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f9e10: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x2f9e10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x2f9e14: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f9e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f9e18: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f9e1c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2f9e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f9e20: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2f9e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2f9e24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f9e28: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f9e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f9e2c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f9e30: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2f9e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2f9e34: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f9e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f9e38: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x2f9e38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f9e3c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2f9e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2f9e40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f9e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f9e44: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F9E44u;
    {
        const bool branch_taken_0x2f9e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9e44) {
            ctx->pc = 0x2F9EC8u;
            return;
        }
    }
    ctx->pc = 0x2F9E4Cu;
    // 0x2f9e4c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2f9e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9e50: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2f9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2f9e54: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2f9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2f9e58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9e5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f9e60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f9e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f9e64: 0x34490300  ori         $t1, $v0, 0x300
    ctx->pc = 0x2f9e64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2f9e68: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x2f9e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2f9e6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f9e6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f9e70: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2f9e70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f9e74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9e78: 0x8c27dcf0  lw          $a3, -0x2310($at)
    ctx->pc = 0x2f9e78u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9e7c: 0x24e201c0  addiu       $v0, $a3, 0x1C0
    ctx->pc = 0x2f9e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 448));
    // 0x2f9e80: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2f9e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9e84: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2f9e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2f9e88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9e8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9e90: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x2f9e90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9e94: 0xa71024  and         $v0, $a1, $a3
    ctx->pc = 0x2f9e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x2f9e98: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2f9e98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f9e9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f9e9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9ea0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2f9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2f9ea4: 0x24668ff0  addiu       $a2, $v1, -0x7010
    ctx->pc = 0x2f9ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938608));
    // 0x2f9ea8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2f9ea8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9eac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F9EACu;
    SET_GPR_U32(ctx, 31, 0x2F9EB4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F9EACu, 0x2F9EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9EB4u;
label_2f9eb4:
    // 0x2f9eb4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9eb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9eb8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F9EB8u;
    SET_GPR_U32(ctx, 31, 0x2F9EC0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F9EB8u, 0x2F9EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9EC0u;
label_2f9ec0:
    // 0x2f9ec0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F9EC0u;
    {
        const bool branch_taken_0x2f9ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9ec0) {
            ctx->pc = 0x2F9F34u;
            return;
        }
    }
    ctx->pc = 0x2F9EC8u;
}
