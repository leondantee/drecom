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

// Function: entry_0018e914
// Address: 0x18e914 - 0x18e998
void entry_0018e914_0x18e914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e914_0x18e914");
#endif

    switch (ctx->pc) {
        case 0x18e950u: goto label_18e950;
        case 0x18e994u: goto label_18e994;
        default: break;
    }

    ctx->pc = 0x18e914u;

label_18e914:
    // 0x18e914: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x18e914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
label_18e918:
    // 0x18e918: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x18e918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_18e91c:
    // 0x18e91c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_18e920:
    if (ctx->pc == 0x18E920u) {
        ctx->pc = 0x18E924u;
        goto label_18e924;
    }
    ctx->pc = 0x18E91Cu;
    {
        const bool branch_taken_0x18e91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e91c) {
            ctx->pc = 0x18E998u;
            return;
        }
    }
    ctx->pc = 0x18E924u;
label_18e924:
    // 0x18e924: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e924u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e928:
    // 0x18e928: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18e928u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_18e92c:
    // 0x18e92c: 0x9222034e  lbu         $v0, 0x34E($s1)
    ctx->pc = 0x18e92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 846)));
label_18e930:
    // 0x18e930: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18e934:
    // 0x18e934: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e938:
    // 0x18e938: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e93c:
    // 0x18e93c: 0x24427310  addiu       $v0, $v0, 0x7310
    ctx->pc = 0x18e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29456));
label_18e940:
    // 0x18e940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e944:
    // 0x18e944: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e948:
    // 0x18e948: 0x40f809  jalr        $v0
label_18e94c:
    if (ctx->pc == 0x18E94Cu) {
        ctx->pc = 0x18E950u;
        goto label_18e950;
    }
    ctx->pc = 0x18E948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E950u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E948u, 0x18E950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E950u;
label_18e950:
    // 0x18e950: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18e950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_18e954:
    // 0x18e954: 0x90230e04  lbu         $v1, 0xE04($at)
    ctx->pc = 0x18e954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 3588)));
label_18e958:
    // 0x18e958: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18e958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18e95c:
    // 0x18e95c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x18e95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_18e960:
    // 0x18e960: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_18e964:
    if (ctx->pc == 0x18E964u) {
        ctx->pc = 0x18E968u;
        goto label_18e968;
    }
    ctx->pc = 0x18E960u;
    {
        const bool branch_taken_0x18e960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e960) {
            ctx->pc = 0x18E998u;
            return;
        }
    }
    ctx->pc = 0x18E968u;
label_18e968:
    // 0x18e968: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e968u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e96c:
    // 0x18e96c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18e96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e970:
    // 0x18e970: 0x9222034e  lbu         $v0, 0x34E($s1)
    ctx->pc = 0x18e970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 846)));
label_18e974:
    // 0x18e974: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18e978:
    // 0x18e978: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e97c:
    // 0x18e97c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e980:
    // 0x18e980: 0x24427310  addiu       $v0, $v0, 0x7310
    ctx->pc = 0x18e980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29456));
label_18e984:
    // 0x18e984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e988:
    // 0x18e988: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e98c:
    // 0x18e98c: 0x40f809  jalr        $v0
label_18e990:
    if (ctx->pc == 0x18E990u) {
        ctx->pc = 0x18E994u;
        goto label_18e994;
    }
    ctx->pc = 0x18E98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E994u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E98Cu, 0x18E994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E994u;
label_18e994:
    // 0x18e994: 0x0  nop
    ctx->pc = 0x18e994u;
    // NOP
    ctx->pc = 0x18e998u;
}
