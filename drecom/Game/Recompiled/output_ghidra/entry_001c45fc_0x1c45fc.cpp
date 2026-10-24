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

// Function: entry_001c45fc
// Address: 0x1c45fc - 0x1c4690
void entry_001c45fc_0x1c45fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c45fc_0x1c45fc");
#endif

    switch (ctx->pc) {
        case 0x1c4608u: goto label_1c4608;
        case 0x1c4618u: goto label_1c4618;
        case 0x1c4660u: goto label_1c4660;
        default: break;
    }

    ctx->pc = 0x1c45fcu;

label_1c45fc:
    // 0x1c45fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c45fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4600:
    // 0x1c4600: 0xc058aa4  jal         func_162A90
label_1c4604:
    if (ctx->pc == 0x1C4604u) {
        ctx->pc = 0x1C4608u;
        goto label_1c4608;
    }
    ctx->pc = 0x1C4600u;
    SET_GPR_U32(ctx, 31, 0x1C4608u);
    ctx->pc = 0x162A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162A90u, 0x1C4600u, 0x1C4608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4608u;
label_1c4608:
    // 0x1c4608: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c460c:
    // 0x1c460c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1c460cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1c4610:
    // 0x1c4610: 0xc0572a4  jal         func_15CA90
label_1c4614:
    if (ctx->pc == 0x1C4614u) {
        ctx->pc = 0x1C4618u;
        goto label_1c4618;
    }
    ctx->pc = 0x1C4610u;
    SET_GPR_U32(ctx, 31, 0x1C4618u);
    ctx->pc = 0x15CA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CA90u, 0x1C4610u, 0x1C4618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4618u;
label_1c4618:
    // 0x1c4618: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c461c:
    // 0x1c461c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4620:
    // 0x1c4620: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1c4620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1c4624:
    // 0x1c4624: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c4624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c4628:
    // 0x1c4628: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c4628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1c462c:
    // 0x1c462c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c462cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c4630:
    // 0x1c4630: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c4630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c4634:
    // 0x1c4634: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1c4634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1c4638:
    // 0x1c4638: 0x24429140  addiu       $v0, $v0, -0x6EC0
    ctx->pc = 0x1c4638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938944));
label_1c463c:
    // 0x1c463c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c463cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c4640:
    // 0x1c4640: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c4640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4644:
    // 0x1c4644: 0x9042156d  lbu         $v0, 0x156D($v0)
    ctx->pc = 0x1c4644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5485)));
label_1c4648:
    // 0x1c4648: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c4648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c464c:
    // 0x1c464c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c464cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c4650:
    // 0x1c4650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c4654:
    // 0x1c4654: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c4654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4658:
    // 0x1c4658: 0x40f809  jalr        $v0
label_1c465c:
    if (ctx->pc == 0x1C465Cu) {
        ctx->pc = 0x1C4660u;
        goto label_1c4660;
    }
    ctx->pc = 0x1C4658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C4660u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4658u, 0x1C4660u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4660u;
label_1c4660:
    // 0x1c4660: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4664:
    // 0x1c4664: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1c4664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4668:
    // 0x1c4668: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c466c:
    // 0x1c466c: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1c466cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1c4670:
    // 0x1c4670: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c4670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4674:
    // 0x1c4674: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1c4674u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_1c4678:
    // 0x1c4678: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1c467c:
    if (ctx->pc == 0x1C467Cu) {
        ctx->pc = 0x1C4680u;
        goto label_1c4680;
    }
    ctx->pc = 0x1C4678u;
    {
        const bool branch_taken_0x1c4678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4678) {
            ctx->pc = 0x1C4690u;
            return;
        }
    }
    ctx->pc = 0x1C4680u;
label_1c4680:
    // 0x1c4680: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c4680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1c4684:
    // 0x1c4684: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x1c4684u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_1c4688:
    // 0x1c4688: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c4688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1c468c:
    // 0x1c468c: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1c468cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c4690u;
}
