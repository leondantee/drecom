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

// Function: entry_00272bf8
// Address: 0x272bf8 - 0x272c88
void entry_00272bf8_0x272bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272bf8_0x272bf8");
#endif

    ctx->pc = 0x272bf8u;

    // 0x272bf8: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272bfc: 0x2c41004c  sltiu       $at, $v0, 0x4C
    ctx->pc = 0x272bfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)76) ? 1 : 0);
    // 0x272c00: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x272C00u;
    {
        const bool branch_taken_0x272c00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x272c00) {
            ctx->pc = 0x272C88u;
            return;
        }
    }
    ctx->pc = 0x272C08u;
    // 0x272c08: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272c0c: 0x2c410078  sltiu       $at, $v0, 0x78
    ctx->pc = 0x272c0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
    // 0x272c10: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x272C10u;
    {
        const bool branch_taken_0x272c10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x272c10) {
            ctx->pc = 0x272C88u;
            return;
        }
    }
    ctx->pc = 0x272C18u;
    // 0x272c18: 0x8e021bf0  lw          $v0, 0x1BF0($s0)
    ctx->pc = 0x272c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272c1c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x272c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x272c20: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x272C20u;
    {
        const bool branch_taken_0x272c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272c20) {
            ctx->pc = 0x272C88u;
            return;
        }
    }
    ctx->pc = 0x272C28u;
    // 0x272c28: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x272c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x272c2c: 0x8c31bb4c  lw          $s1, -0x44B4($at)
    ctx->pc = 0x272c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x47BB4Cu));
    // 0x272c30: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x272c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x272c34: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x272c34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x272c38: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x272c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x272c3c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x272c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x272c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x272c44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x272c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x272c48: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x272c48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x272c4c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x272c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x272c50: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x272c50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x272c54: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x272c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x272c58: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x272c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x272c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x272c60: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x272c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x272c64: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x272c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x272c68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x272c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x272c6c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x272c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x272c70: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x272c70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x272c74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x272c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x272c78: 0x30450007  andi        $a1, $v0, 0x7
    ctx->pc = 0x272c78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x272c7c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x272c7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x272c80: 0xc0b3ef8  jal         func_2CFBE0
    ctx->pc = 0x272C80u;
    SET_GPR_U32(ctx, 31, 0x272C88u);
    ctx->pc = 0x2CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBE0u, 0x272C80u, 0x272C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272C88u;
}
