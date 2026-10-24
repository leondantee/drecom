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

// Function: entry_00238674
// Address: 0x238674 - 0x238700
void entry_00238674_0x238674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238674_0x238674");
#endif

    switch (ctx->pc) {
        case 0x2386a0u: goto label_2386a0;
        case 0x2386ccu: goto label_2386cc;
        case 0x2386d8u: goto label_2386d8;
        default: break;
    }

    ctx->pc = 0x238674u;

label_238674:
    // 0x238674: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x238674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_238678:
    // 0x238678: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_23867c:
    // 0x23867c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x23867cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_238680:
    // 0x238680: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x238680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_238684:
    // 0x238684: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x238684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_238688:
    // 0x238688: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x238688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_23868c:
    // 0x23868c: 0x2442b1e0  addiu       $v0, $v0, -0x4E20
    ctx->pc = 0x23868cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
label_238690:
    // 0x238690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x238690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_238694:
    // 0x238694: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x238694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_238698:
    // 0x238698: 0x40f809  jalr        $v0
label_23869c:
    if (ctx->pc == 0x23869Cu) {
        ctx->pc = 0x2386A0u;
        goto label_2386a0;
    }
    ctx->pc = 0x238698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2386A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238698u, 0x2386A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2386A0u;
label_2386a0:
    // 0x2386a0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2386a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2386a4:
    // 0x2386a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2386a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2386a8:
    // 0x2386a8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2386a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2386ac:
    // 0x2386ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2386acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2386b0:
    // 0x2386b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2386b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2386b4:
    // 0x2386b4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2386b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2386b8:
    // 0x2386b8: 0x2442b220  addiu       $v0, $v0, -0x4DE0
    ctx->pc = 0x2386b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947360));
label_2386bc:
    // 0x2386bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2386bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2386c0:
    // 0x2386c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2386c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2386c4:
    // 0x2386c4: 0x40f809  jalr        $v0
label_2386c8:
    if (ctx->pc == 0x2386C8u) {
        ctx->pc = 0x2386CCu;
        goto label_2386cc;
    }
    ctx->pc = 0x2386C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2386CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2386C4u, 0x2386CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2386CCu;
label_2386cc:
    // 0x2386cc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2386ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2386d0:
    // 0x2386d0: 0xc09044c  jal         func_241130
label_2386d4:
    if (ctx->pc == 0x2386D4u) {
        ctx->pc = 0x2386D8u;
        goto label_2386d8;
    }
    ctx->pc = 0x2386D0u;
    SET_GPR_U32(ctx, 31, 0x2386D8u);
    ctx->pc = 0x241130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241130u, 0x2386D0u, 0x2386D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2386D8u;
label_2386d8:
    // 0x2386d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2386d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2386dc:
    // 0x2386dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2386dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2386e0:
    // 0x2386e0: 0x8442005c  lh          $v0, 0x5C($v0)
    ctx->pc = 0x2386e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
label_2386e4:
    // 0x2386e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2386e8:
    if (ctx->pc == 0x2386E8u) {
        ctx->pc = 0x2386ECu;
        goto label_2386ec;
    }
    ctx->pc = 0x2386E4u;
    {
        const bool branch_taken_0x2386e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2386e4) {
            ctx->pc = 0x238700u;
            return;
        }
    }
    ctx->pc = 0x2386ECu;
label_2386ec:
    // 0x2386ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2386ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2386f0:
    // 0x2386f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2386f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2386f4:
    // 0x2386f4: 0x8462005c  lh          $v0, 0x5C($v1)
    ctx->pc = 0x2386f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
label_2386f8:
    // 0x2386f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2386f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2386fc:
    // 0x2386fc: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x2386fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x238700u;
}
