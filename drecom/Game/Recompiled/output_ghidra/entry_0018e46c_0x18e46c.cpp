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

// Function: entry_0018e46c
// Address: 0x18e46c - 0x18e4b0
void entry_0018e46c_0x18e46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e46c_0x18e46c");
#endif

    switch (ctx->pc) {
        case 0x18e490u: goto label_18e490;
        case 0x18e4acu: goto label_18e4ac;
        default: break;
    }

    ctx->pc = 0x18e46cu;

label_18e46c:
    // 0x18e46c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x18e46cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_18e470:
    // 0x18e470: 0x8e620350  lw          $v0, 0x350($s3)
    ctx->pc = 0x18e470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 848)));
label_18e474:
    // 0x18e474: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e478:
    // 0x18e478: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e47c:
    // 0x18e47c: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x18e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_18e480:
    // 0x18e480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e484:
    // 0x18e484: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e488:
    // 0x18e488: 0x40f809  jalr        $v0
label_18e48c:
    if (ctx->pc == 0x18E48Cu) {
        ctx->pc = 0x18E490u;
        goto label_18e490;
    }
    ctx->pc = 0x18E488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E490u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E488u, 0x18E490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E490u;
label_18e490:
    // 0x18e490: 0x8e620b18  lw          $v0, 0xB18($s3)
    ctx->pc = 0x18e490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2840)));
label_18e494:
    // 0x18e494: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x18e494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_18e498:
    // 0x18e498: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18e49c:
    if (ctx->pc == 0x18E49Cu) {
        ctx->pc = 0x18E4A0u;
        goto label_18e4a0;
    }
    ctx->pc = 0x18E498u;
    {
        const bool branch_taken_0x18e498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e498) {
            ctx->pc = 0x18E4B0u;
            return;
        }
    }
    ctx->pc = 0x18E4A0u;
label_18e4a0:
    // 0x18e4a0: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x18e4a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_18e4a4:
    // 0x18e4a4: 0xc0c9970  jal         func_3265C0
label_18e4a8:
    if (ctx->pc == 0x18E4A8u) {
        ctx->pc = 0x18E4ACu;
        goto label_18e4ac;
    }
    ctx->pc = 0x18E4A4u;
    SET_GPR_U32(ctx, 31, 0x18E4ACu);
    ctx->pc = 0x3265C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265C0u, 0x18E4A4u, 0x18E4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4ACu;
label_18e4ac:
    // 0x18e4ac: 0x0  nop
    ctx->pc = 0x18e4acu;
    // NOP
    ctx->pc = 0x18e4b0u;
}
