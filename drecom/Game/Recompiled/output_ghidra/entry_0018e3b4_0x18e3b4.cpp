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

// Function: entry_0018e3b4
// Address: 0x18e3b4 - 0x18e3f8
void entry_0018e3b4_0x18e3b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e3b4_0x18e3b4");
#endif

    switch (ctx->pc) {
        case 0x18e3d8u: goto label_18e3d8;
        case 0x18e3f4u: goto label_18e3f4;
        default: break;
    }

    ctx->pc = 0x18e3b4u;

label_18e3b4:
    // 0x18e3b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e3b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e3b8:
    // 0x18e3b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18e3bc:
    // 0x18e3bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e3c0:
    // 0x18e3c0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e3c4:
    // 0x18e3c4: 0x24427288  addiu       $v0, $v0, 0x7288
    ctx->pc = 0x18e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29320));
label_18e3c8:
    // 0x18e3c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e3cc:
    // 0x18e3cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e3d0:
    // 0x18e3d0: 0x40f809  jalr        $v0
label_18e3d4:
    if (ctx->pc == 0x18E3D4u) {
        ctx->pc = 0x18E3D8u;
        goto label_18e3d8;
    }
    ctx->pc = 0x18E3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E3D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E3D0u, 0x18E3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E3D8u;
label_18e3d8:
    // 0x18e3d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e3dc:
    // 0x18e3dc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x18e3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_18e3e0:
    // 0x18e3e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_18e3e4:
    if (ctx->pc == 0x18E3E4u) {
        ctx->pc = 0x18E3E8u;
        goto label_18e3e8;
    }
    ctx->pc = 0x18E3E0u;
    {
        const bool branch_taken_0x18e3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e3e0) {
            ctx->pc = 0x18E3F8u;
            return;
        }
    }
    ctx->pc = 0x18E3E8u;
label_18e3e8:
    // 0x18e3e8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e3e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18e3ec:
    // 0x18e3ec: 0xc0c9ce0  jal         func_327380
label_18e3f0:
    if (ctx->pc == 0x18E3F0u) {
        ctx->pc = 0x18E3F4u;
        goto label_18e3f4;
    }
    ctx->pc = 0x18E3ECu;
    SET_GPR_U32(ctx, 31, 0x18E3F4u);
    ctx->pc = 0x327380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327380u, 0x18E3ECu, 0x18E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3F4u;
label_18e3f4:
    // 0x18e3f4: 0x0  nop
    ctx->pc = 0x18e3f4u;
    // NOP
    ctx->pc = 0x18e3f8u;
}
