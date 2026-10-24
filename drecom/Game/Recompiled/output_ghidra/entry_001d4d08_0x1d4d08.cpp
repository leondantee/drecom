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

// Function: entry_001d4d08
// Address: 0x1d4d08 - 0x1d4d90
void entry_001d4d08_0x1d4d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4d08_0x1d4d08");
#endif

    switch (ctx->pc) {
        case 0x1d4d2cu: goto label_1d4d2c;
        default: break;
    }

    ctx->pc = 0x1d4d08u;

    // 0x1d4d08: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d4d0c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x1d4d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d4d10: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1d4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d4d14: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4d14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4d18: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d4d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4d1c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1d4d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d4d20: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1d4d20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4d24: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D4D24u;
    SET_GPR_U32(ctx, 31, 0x1D4D2Cu);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D4D24u, 0x1D4D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D2Cu;
label_1d4d2c:
    // 0x1d4d2c: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1d4d2cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4d30: 0x17b980  sll         $s7, $s7, 6
    ctx->pc = 0x1d4d30u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x1d4d34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4d38: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1d4d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d4d3c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1d4d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4d40: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d4d44: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4d48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d4d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d4d4c: 0x2c32821  addu        $a1, $s6, $v1
    ctx->pc = 0x1d4d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1d4d50: 0x24a30050  addiu       $v1, $a1, 0x50
    ctx->pc = 0x1d4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x1d4d54: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1d4d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1d4d58: 0x171bbc  dsll32      $v1, $s7, 14
    ctx->pc = 0x1d4d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 14));
    // 0x1d4d5c: 0x31bbe  dsrl32      $v1, $v1, 14
    ctx->pc = 0x1d4d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 14));
    // 0x1d4d60: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D4D60u;
    {
        const bool branch_taken_0x1d4d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d60) {
            ctx->pc = 0x1D4D90u;
            return;
        }
    }
    ctx->pc = 0x1D4D68u;
    // 0x1d4d68: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1d4d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d4d6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4d70: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1d4d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1d4d74: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1d4d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4d78: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d4d7c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d4d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4d80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d4d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d4d84: 0x2c32821  addu        $a1, $s6, $v1
    ctx->pc = 0x1d4d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1d4d88: 0x24a30050  addiu       $v1, $a1, 0x50
    ctx->pc = 0x1d4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x1d4d8c: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x1d4d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    ctx->pc = 0x1d4d90u;
}
