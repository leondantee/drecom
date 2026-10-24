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

// Function: entry_0029c7b8
// Address: 0x29c7b8 - 0x29c818
void entry_0029c7b8_0x29c7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c7b8_0x29c7b8");
#endif

    switch (ctx->pc) {
        case 0x29c814u: goto label_29c814;
        default: break;
    }

    ctx->pc = 0x29c7b8u;

label_29c7b8:
    // 0x29c7b8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x29c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_29c7bc:
    // 0x29c7bc: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x29c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_29c7c0:
    // 0x29c7c0: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x29c7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_29c7c4:
    // 0x29c7c4: 0x3c030085  lui         $v1, 0x85
    ctx->pc = 0x29c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)133 << 16));
label_29c7c8:
    // 0x29c7c8: 0x24633590  addiu       $v1, $v1, 0x3590
    ctx->pc = 0x29c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13712));
label_29c7cc:
    // 0x29c7cc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x29c7ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29c7d0:
    // 0x29c7d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29c7d4:
    // 0x29c7d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_29c7d8:
    // 0x29c7d8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_29c7dc:
    if (ctx->pc == 0x29C7DCu) {
        ctx->pc = 0x29C7E0u;
        goto label_29c7e0;
    }
    ctx->pc = 0x29C7D8u;
    {
        const bool branch_taken_0x29c7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c7d8) {
            ctx->pc = 0x29C840u;
            return;
        }
    }
    ctx->pc = 0x29C7E0u;
label_29c7e0:
    // 0x29c7e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29c7e4:
    // 0x29c7e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_29c7e8:
    // 0x29c7e8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_29c7ec:
    if (ctx->pc == 0x29C7ECu) {
        ctx->pc = 0x29C7F0u;
        goto label_29c7f0;
    }
    ctx->pc = 0x29C7E8u;
    {
        const bool branch_taken_0x29c7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c7e8) {
            ctx->pc = 0x29C818u;
            return;
        }
    }
    ctx->pc = 0x29C7F0u;
label_29c7f0:
    // 0x29c7f0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29c7f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_29c7f4:
    // 0x29c7f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29c7f8:
    // 0x29c7f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29c7fc:
    // 0x29c7fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x29c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_29c800:
    // 0x29c800: 0x24426920  addiu       $v0, $v0, 0x6920
    ctx->pc = 0x29c800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26912));
label_29c804:
    // 0x29c804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29c804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29c808:
    // 0x29c808: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29c80c:
    // 0x29c80c: 0x40f809  jalr        $v0
label_29c810:
    if (ctx->pc == 0x29C810u) {
        ctx->pc = 0x29C814u;
        goto label_29c814;
    }
    ctx->pc = 0x29C80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C814u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C80Cu, 0x29C814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C814u;
label_29c814:
    // 0x29c814: 0x0  nop
    ctx->pc = 0x29c814u;
    // NOP
    ctx->pc = 0x29c818u;
}
