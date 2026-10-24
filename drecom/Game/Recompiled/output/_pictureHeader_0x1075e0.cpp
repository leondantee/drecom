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

// Function: _pictureHeader
// Address: 0x1075e0 - 0x1076ac
void _pictureHeader_0x1075e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureHeader_0x1075e0");
#endif

    switch (ctx->pc) {
        case 0x107604u: goto label_107604;
        case 0x107610u: goto label_107610;
        case 0x107620u: goto label_107620;
        case 0x107644u: goto label_107644;
        case 0x107654u: goto label_107654;
        case 0x107670u: goto label_107670;
        case 0x107680u: goto label_107680;
        case 0x10768cu: goto label_10768c;
        case 0x107694u: goto label_107694;
        default: break;
    }

    ctx->pc = 0x1075e0u;

    // 0x1075e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1075e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1075e4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1075e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1075e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1075e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1075ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1075ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1075f0: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x1075f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x1075f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1075f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1075f8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1075f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1075fc: 0xc041c9e  jal         func_107278
    ctx->pc = 0x1075FCu;
    SET_GPR_U32(ctx, 31, 0x107604u);
    ctx->pc = 0x107600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1075FCu;
    // 0x107600: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x1075FCu, 0x107604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107604u;
label_107604:
    // 0x107604: 0x0  nop
    ctx->pc = 0x107604u;
    // NOP
    // 0x107608: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107608u;
    SET_GPR_U32(ctx, 31, 0x107610u);
    ctx->pc = 0x10760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107608u;
    // 0x10760c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107608u, 0x107610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107610u;
label_107610:
    // 0x107610: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x107610u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107614: 0xae423d7c  sw          $v0, 0x3D7C($s2)
    ctx->pc = 0x107614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15740), GPR_U32(ctx, 2));
    // 0x107618: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107618u;
    SET_GPR_U32(ctx, 31, 0x107620u);
    ctx->pc = 0x10761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107618u;
    // 0x10761c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107618u, 0x107620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107620u;
label_107620:
    // 0x107620: 0x8e433d7c  lw          $v1, 0x3D7C($s2)
    ctx->pc = 0x107620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15740)));
    // 0x107624: 0xae023d80  sw          $v0, 0x3D80($s0)
    ctx->pc = 0x107624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15744), GPR_U32(ctx, 2));
    // 0x107628: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x107628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x10762c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x10762cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x107630: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x107630u;
    {
        const bool branch_taken_0x107630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107630u;
        // 0x107634: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107630) {
            ctx->pc = 0x107660u;
            goto label_107660;
        }
    }
    ctx->pc = 0x107638u;
    // 0x107638: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10763c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10763Cu;
    SET_GPR_U32(ctx, 31, 0x107644u);
    ctx->pc = 0x107640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10763Cu;
    // 0x107640: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10763Cu, 0x107644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107644u;
label_107644:
    // 0x107644: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x107644u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107648: 0x0  nop
    ctx->pc = 0x107648u;
    // NOP
    // 0x10764c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10764Cu;
    SET_GPR_U32(ctx, 31, 0x107654u);
    ctx->pc = 0x107650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10764Cu;
    // 0x107650: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10764Cu, 0x107654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107654u;
label_107654:
    // 0x107654: 0xae223d88  sw          $v0, 0x3D88($s1)
    ctx->pc = 0x107654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15752), GPR_U32(ctx, 2));
    // 0x107658: 0x8e433d7c  lw          $v1, 0x3D7C($s2)
    ctx->pc = 0x107658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15740)));
    // 0x10765c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10765cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_107660:
    // 0x107660: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107660u;
    {
        const bool branch_taken_0x107660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107660u;
        // 0x107664: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107660) {
            ctx->pc = 0x107684u;
            goto label_107684;
        }
    }
    ctx->pc = 0x107668u;
    // 0x107668: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107668u;
    SET_GPR_U32(ctx, 31, 0x107670u);
    ctx->pc = 0x10766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107668u;
    // 0x10766c: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107668u, 0x107670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107670u;
label_107670:
    // 0x107670: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x107670u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107674: 0x0  nop
    ctx->pc = 0x107674u;
    // NOP
    // 0x107678: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107678u;
    SET_GPR_U32(ctx, 31, 0x107680u);
    ctx->pc = 0x10767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107678u;
    // 0x10767c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107678u, 0x107680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107680u;
label_107680:
    // 0x107680: 0x0  nop
    ctx->pc = 0x107680u;
    // NOP
label_107684:
    // 0x107684: 0xc041e64  jal         func_107990
    ctx->pc = 0x107684u;
    SET_GPR_U32(ctx, 31, 0x10768Cu);
    ctx->pc = 0x107990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107990u, 0x107684u, 0x10768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10768Cu;
label_10768c:
    // 0x10768c: 0xc041dac  jal         func_1076B0
    ctx->pc = 0x10768Cu;
    SET_GPR_U32(ctx, 31, 0x107694u);
    ctx->pc = 0x1076B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076B0u, 0x10768Cu, 0x107694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107694u;
label_107694:
    // 0x107694: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x107694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107698: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10769c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10769cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1076a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1076a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1076a4: 0x8041e72  j           func_1079C8
    ctx->pc = 0x1076A4u;
    ctx->pc = 0x1076A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1076A4u;
    // 0x1076a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1079C8u;
    _updateTempTackData_0x1079c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1076ACu;
}
