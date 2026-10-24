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

// Function: entry_0019e9c8
// Address: 0x19e9c8 - 0x19ea80
void entry_0019e9c8_0x19e9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e9c8_0x19e9c8");
#endif

    ctx->pc = 0x19e9c8u;

    // 0x19e9c8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e9cc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e9d0: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e9d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e9d8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x19e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x19e9dc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x19e9dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19e9e0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x19e9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19e9e4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x19e9e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x19e9e8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x19e9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19e9ec: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x19e9ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x19e9f0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e9f4: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e9f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19e9fc: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x19e9fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19ea00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ea00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ea04: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19ea04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19ea08: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x19EA08u;
    {
        const bool branch_taken_0x19ea08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ea08) {
            ctx->pc = 0x19EA80u;
            return;
        }
    }
    ctx->pc = 0x19EA10u;
    // 0x19ea10: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ea10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ea14: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19ea18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19ea1c: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x19ea1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19ea20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ea24: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19ea28: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19ea2c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ea2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ea30: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19ea34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ea38: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x19ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x19ea3c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ea3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ea40: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19ea44: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x19ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19ea48: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x19ea48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19ea4c: 0x3042008f  andi        $v0, $v0, 0x8F
    ctx->pc = 0x19ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)143);
    // 0x19ea50: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x19ea50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19ea54: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ea54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ea58: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19ea5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19ea60: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19ea60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19ea64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ea64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ea68: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x19ea68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x19ea6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19EA6Cu;
    {
        const bool branch_taken_0x19ea6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ea6c) {
            ctx->pc = 0x19EA80u;
            return;
        }
    }
    ctx->pc = 0x19EA74u;
    // 0x19ea74: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x19ea74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19ea78: 0xc067c9c  jal         func_19F270
    ctx->pc = 0x19EA78u;
    SET_GPR_U32(ctx, 31, 0x19EA80u);
    ctx->pc = 0x19F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F270u, 0x19EA78u, 0x19EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA80u;
}
