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

// Function: entry_001ec498
// Address: 0x1ec498 - 0x1ec518
void entry_001ec498_0x1ec498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec498_0x1ec498");
#endif

    switch (ctx->pc) {
        case 0x1ec4c4u: goto label_1ec4c4;
        case 0x1ec4f0u: goto label_1ec4f0;
        default: break;
    }

    ctx->pc = 0x1ec498u;

label_1ec498:
    // 0x1ec498: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ec498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec49c:
    // 0x1ec49c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec4a0:
    // 0x1ec4a0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1ec4a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1ec4a4:
    // 0x1ec4a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ec4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec4a8:
    // 0x1ec4a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ec4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ec4ac:
    // 0x1ec4ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ec4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1ec4b0:
    // 0x1ec4b0: 0x24429df0  addiu       $v0, $v0, -0x6210
    ctx->pc = 0x1ec4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942192));
label_1ec4b4:
    // 0x1ec4b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ec4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ec4b8:
    // 0x1ec4b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ec4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ec4bc:
    // 0x1ec4bc: 0x40f809  jalr        $v0
label_1ec4c0:
    if (ctx->pc == 0x1EC4C0u) {
        ctx->pc = 0x1EC4C4u;
        goto label_1ec4c4;
    }
    ctx->pc = 0x1EC4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC4C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC4BCu, 0x1EC4C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC4C4u;
label_1ec4c4:
    // 0x1ec4c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ec4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec4c8:
    // 0x1ec4c8: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1ec4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec4cc:
    // 0x1ec4cc: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1ec4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1ec4d0:
    // 0x1ec4d0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1ec4d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec4d4:
    // 0x1ec4d4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ec4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ec4d8:
    // 0x1ec4d8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ec4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1ec4dc:
    // 0x1ec4dc: 0x24429e50  addiu       $v0, $v0, -0x61B0
    ctx->pc = 0x1ec4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942288));
label_1ec4e0:
    // 0x1ec4e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ec4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ec4e4:
    // 0x1ec4e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ec4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ec4e8:
    // 0x1ec4e8: 0x40f809  jalr        $v0
label_1ec4ec:
    if (ctx->pc == 0x1EC4ECu) {
        ctx->pc = 0x1EC4F0u;
        goto label_1ec4f0;
    }
    ctx->pc = 0x1EC4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC4F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC4E8u, 0x1EC4F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC4F0u;
label_1ec4f0:
    // 0x1ec4f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec4f4:
    // 0x1ec4f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_1ec4f8:
    // 0x1ec4f8: 0x8442005c  lh          $v0, 0x5C($v0)
    ctx->pc = 0x1ec4f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
label_1ec4fc:
    // 0x1ec4fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ec500:
    if (ctx->pc == 0x1EC500u) {
        ctx->pc = 0x1EC504u;
        goto label_1ec504;
    }
    ctx->pc = 0x1EC4FCu;
    {
        const bool branch_taken_0x1ec4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec4fc) {
            ctx->pc = 0x1EC518u;
            return;
        }
    }
    ctx->pc = 0x1EC504u;
label_1ec504:
    // 0x1ec504: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ec504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1ec508:
    // 0x1ec508: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1ec508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_1ec50c:
    // 0x1ec50c: 0x8462005c  lh          $v0, 0x5C($v1)
    ctx->pc = 0x1ec50cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
label_1ec510:
    // 0x1ec510: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ec510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ec514:
    // 0x1ec514: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x1ec514u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ec518u;
}
