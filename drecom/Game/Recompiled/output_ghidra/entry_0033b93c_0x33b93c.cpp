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

// Function: entry_0033b93c
// Address: 0x33b93c - 0x33b9d8
void entry_0033b93c_0x33b93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b93c_0x33b93c");
#endif

    switch (ctx->pc) {
        case 0x33b954u: goto label_33b954;
        default: break;
    }

    ctx->pc = 0x33b93cu;

    // 0x33b93c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33b940: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x33b940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33b944: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x33b944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x33b948: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x33b948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33b94c: 0xc0cf414  jal         func_33D050
    ctx->pc = 0x33B94Cu;
    SET_GPR_U32(ctx, 31, 0x33B954u);
    ctx->pc = 0x33D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D050u, 0x33B94Cu, 0x33B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B954u;
label_33b954:
    // 0x33b954: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x33b954u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33b958: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33b958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33b95c: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x33b95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33b960: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x33b960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x33b964: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x33b964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33b968: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b96c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33b970: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33b970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x33b974: 0x24639a40  addiu       $v1, $v1, -0x65C0
    ctx->pc = 0x33b974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941248));
    // 0x33b978: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x33b978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b97c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x33b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x33b980: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x33b980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33b984: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x33b984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33b988: 0x94640018  lhu         $a0, 0x18($v1)
    ctx->pc = 0x33b988u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x33b98c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x33b98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x33b990: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x33b990u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33b994: 0x10200071  beqz        $at, . + 4 + (0x71 << 2)
    ctx->pc = 0x33B994u;
    {
        const bool branch_taken_0x33b994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b994) {
            ctx->pc = 0x33BB5Cu;
            return;
        }
    }
    ctx->pc = 0x33B99Cu;
    // 0x33b99c: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x33b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33b9a0: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x33b9a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33b9a4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x33b9a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x33b9a8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x33b9a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x33b9ac: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x33b9acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x33b9b0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x33b9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33b9b4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x33b9b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x33b9b8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x33B9B8u;
    {
        const bool branch_taken_0x33b9b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b9b8) {
            ctx->pc = 0x33BA78u;
            return;
        }
    }
    ctx->pc = 0x33B9C0u;
    // 0x33b9c0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x33B9C0u;
    {
        const bool branch_taken_0x33b9c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b9c0) {
            ctx->pc = 0x33B9D8u;
            return;
        }
    }
    ctx->pc = 0x33B9C8u;
    // 0x33b9c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x33b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33b9cc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x33b9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x33b9d0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x33b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x33b9d4: 0x0  nop
    ctx->pc = 0x33b9d4u;
    // NOP
    ctx->pc = 0x33b9d8u;
}
