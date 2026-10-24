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

// Function: entry_001d4c8c
// Address: 0x1d4c8c - 0x1d4d08
void entry_001d4c8c_0x1d4c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4c8c_0x1d4c8c");
#endif

    switch (ctx->pc) {
        case 0x1d4ca4u: goto label_1d4ca4;
        default: break;
    }

    ctx->pc = 0x1d4c8cu;

    // 0x1d4c8c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d4c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d4c90: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x1d4c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4c94: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d4c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d4c98: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d4c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4c9c: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D4C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D4CA4u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D4C9Cu, 0x1D4CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4CA4u;
label_1d4ca4:
    // 0x1d4ca4: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1d4ca4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4ca8: 0x17b980  sll         $s7, $s7, 6
    ctx->pc = 0x1d4ca8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x1d4cac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4cb0: 0x122842  srl         $a1, $s2, 1
    ctx->pc = 0x1d4cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d4cb4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1d4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d4cb8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d4cbc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4cc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4cc4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1d4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d4cc8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1d4cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d4ccc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1d4cccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1d4cd0: 0x1713bc  dsll32      $v0, $s7, 14
    ctx->pc = 0x1d4cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 14));
    // 0x1d4cd4: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x1d4cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
    // 0x1d4cd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D4CD8u;
    {
        const bool branch_taken_0x1d4cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4cd8) {
            ctx->pc = 0x1D4D08u;
            return;
        }
    }
    ctx->pc = 0x1D4CE0u;
    // 0x1d4ce0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d4ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d4ce4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4ce8: 0x122842  srl         $a1, $s2, 1
    ctx->pc = 0x1d4ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d4cec: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1d4cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d4cf0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d4cf4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4cf8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4cfc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1d4cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d4d00: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1d4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d4d04: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1d4d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x1d4d08u;
}
