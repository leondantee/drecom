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

// Function: entry_001b55e4
// Address: 0x1b55e4 - 0x1b5678
void entry_001b55e4_0x1b55e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b55e4_0x1b55e4");
#endif

    switch (ctx->pc) {
        case 0x1b55f0u: goto label_1b55f0;
        case 0x1b5600u: goto label_1b5600;
        case 0x1b5648u: goto label_1b5648;
        default: break;
    }

    ctx->pc = 0x1b55e4u;

label_1b55e4:
    // 0x1b55e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1b55e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b55e8:
    // 0x1b55e8: 0xc058aa4  jal         func_162A90
label_1b55ec:
    if (ctx->pc == 0x1B55ECu) {
        ctx->pc = 0x1B55F0u;
        goto label_1b55f0;
    }
    ctx->pc = 0x1B55E8u;
    SET_GPR_U32(ctx, 31, 0x1B55F0u);
    ctx->pc = 0x162A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162A90u, 0x1B55E8u, 0x1B55F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55F0u;
label_1b55f0:
    // 0x1b55f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1b55f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b55f4:
    // 0x1b55f4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b55f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1b55f8:
    // 0x1b55f8: 0xc057274  jal         func_15C9D0
label_1b55fc:
    if (ctx->pc == 0x1B55FCu) {
        ctx->pc = 0x1B5600u;
        goto label_1b5600;
    }
    ctx->pc = 0x1B55F8u;
    SET_GPR_U32(ctx, 31, 0x1B5600u);
    ctx->pc = 0x15C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C9D0u, 0x1B55F8u, 0x1B5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5600u;
label_1b5600:
    // 0x1b5600: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1b5600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5604:
    // 0x1b5604: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5608:
    // 0x1b5608: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1b5608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1b560c:
    // 0x1b560c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b560cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b5610:
    // 0x1b5610: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b5610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b5614:
    // 0x1b5614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b5618:
    // 0x1b5618: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b5618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b561c:
    // 0x1b561c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b561cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1b5620:
    // 0x1b5620: 0x24429040  addiu       $v0, $v0, -0x6FC0
    ctx->pc = 0x1b5620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938688));
label_1b5624:
    // 0x1b5624: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b5624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b5628:
    // 0x1b5628: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b562c:
    // 0x1b562c: 0x9042156d  lbu         $v0, 0x156D($v0)
    ctx->pc = 0x1b562cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5485)));
label_1b5630:
    // 0x1b5630: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b5630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b5634:
    // 0x1b5634: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b5634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b5638:
    // 0x1b5638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b563c:
    // 0x1b563c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5640:
    // 0x1b5640: 0x40f809  jalr        $v0
label_1b5644:
    if (ctx->pc == 0x1B5644u) {
        ctx->pc = 0x1B5648u;
        goto label_1b5648;
    }
    ctx->pc = 0x1B5640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5648u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5640u, 0x1B5648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5648u;
label_1b5648:
    // 0x1b5648: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b564c:
    // 0x1b564c: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1b564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5650:
    // 0x1b5650: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5654:
    // 0x1b5654: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1b5654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1b5658:
    // 0x1b5658: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b565c:
    // 0x1b565c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1b565cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_1b5660:
    // 0x1b5660: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1b5664:
    if (ctx->pc == 0x1B5664u) {
        ctx->pc = 0x1B5668u;
        goto label_1b5668;
    }
    ctx->pc = 0x1B5660u;
    {
        const bool branch_taken_0x1b5660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5660) {
            ctx->pc = 0x1B5678u;
            return;
        }
    }
    ctx->pc = 0x1B5668u;
label_1b5668:
    // 0x1b5668: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1b5668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b566c:
    // 0x1b566c: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x1b566cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_1b5670:
    // 0x1b5670: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b5670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b5674:
    // 0x1b5674: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1b5674u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1b5678u;
}
