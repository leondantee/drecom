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

// Function: entry_001e4570
// Address: 0x1e4570 - 0x1e45dc
void entry_001e4570_0x1e4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4570_0x1e4570");
#endif

    switch (ctx->pc) {
        case 0x1e45b0u: goto label_1e45b0;
        default: break;
    }

    ctx->pc = 0x1e4570u;

label_1e4570:
    // 0x1e4570: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e4570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1e4574: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e4574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e4578: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e4578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e457c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e4580: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e4580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1e4584: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x1e4584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e4588: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e4588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e458c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e458cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4590: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e4590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4594: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e4594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4598: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e4598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e459c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e459cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e45a0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1e45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1e45a4: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x1e45a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1e45a8: 0xc078130  jal         func_1E04C0
    ctx->pc = 0x1E45A8u;
    SET_GPR_U32(ctx, 31, 0x1E45B0u);
    ctx->pc = 0x1E04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E04C0u, 0x1E45A8u, 0x1E45B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E45B0u;
label_1e45b0:
    // 0x1e45b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e45b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e45b4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e45b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1e45b8: 0x1640ffed  bnez        $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1E45B8u;
    {
        const bool branch_taken_0x1e45b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e45b8) {
            ctx->pc = 0x1E4570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4570;
        }
    }
    ctx->pc = 0x1E45C0u;
    // 0x1e45c0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1e45c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e45c4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1e45c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1e45c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e45c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e45cc: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1e45ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x1e45d0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1e45d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e45d4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1e45d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1e45d8: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1e45d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x1e45dcu;
}
