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

// Function: entry_0015b4c8
// Address: 0x15b4c8 - 0x15b55c
void entry_0015b4c8_0x15b4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b4c8_0x15b4c8");
#endif

    switch (ctx->pc) {
        case 0x15b540u: goto label_15b540;
        default: break;
    }

    ctx->pc = 0x15b4c8u;

    // 0x15b4c8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x15b4cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x15b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x15b4d0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x15b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x15b4d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b4d8: 0x8c511390  lw          $s1, 0x1390($v0)
    ctx->pc = 0x15b4d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x15b4dc: 0x862210a6  lh          $v0, 0x10A6($s1)
    ctx->pc = 0x15b4dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
    // 0x15b4e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15b4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15b4e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15b4e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15b4e8: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15B4E8u;
    {
        const bool branch_taken_0x15b4e8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15b4e8) {
            ctx->pc = 0x15B55Cu;
            return;
        }
    }
    ctx->pc = 0x15B4F0u;
    // 0x15b4f0: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x15b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15b4f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b4f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b4fc: 0xa0400014  sb          $zero, 0x14($v0)
    ctx->pc = 0x15b4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b500: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x15b500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15b504: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15b504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b50c: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x15b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x15b510: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x15b510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15b514: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15b514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b518: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x15b518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b51c: 0x922210a9  lbu         $v0, 0x10A9($s1)
    ctx->pc = 0x15b51cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4265)));
    // 0x15b520: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b524: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15b524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15b528: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x15b528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x15b52c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b530: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x15b530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15b534: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x15b534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15b538: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15B538u;
    SET_GPR_U32(ctx, 31, 0x15B540u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15B538u, 0x15B540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B540u;
label_15b540:
    // 0x15b540: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15b540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15b544: 0x2e020028  sltiu       $v0, $s0, 0x28
    ctx->pc = 0x15b544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x15b548: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B548u;
    {
        const bool branch_taken_0x15b548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b548) {
            ctx->pc = 0x15B55Cu;
            return;
        }
    }
    ctx->pc = 0x15B550u;
    // 0x15b550: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x15b550u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b554: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15B554u;
    {
        const bool branch_taken_0x15b554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b554) {
            ctx->pc = 0x15B57Cu;
            return;
        }
    }
    ctx->pc = 0x15B55Cu;
}
