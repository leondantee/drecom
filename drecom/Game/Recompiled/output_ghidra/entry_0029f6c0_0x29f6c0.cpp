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

// Function: entry_0029f6c0
// Address: 0x29f6c0 - 0x29f750
void entry_0029f6c0_0x29f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f6c0_0x29f6c0");
#endif

    switch (ctx->pc) {
        case 0x29f6d0u: goto label_29f6d0;
        case 0x29f6dcu: goto label_29f6dc;
        case 0x29f6ecu: goto label_29f6ec;
        case 0x29f6f8u: goto label_29f6f8;
        case 0x29f704u: goto label_29f704;
        case 0x29f71cu: goto label_29f71c;
        default: break;
    }

    ctx->pc = 0x29f6c0u;

    // 0x29f6c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f6c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29f6c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29f6c8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x29F6C8u;
    SET_GPR_U32(ctx, 31, 0x29F6D0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x29F6C8u, 0x29F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6D0u;
label_29f6d0:
    // 0x29f6d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f6d4: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x29F6D4u;
    SET_GPR_U32(ctx, 31, 0x29F6DCu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x29F6D4u, 0x29F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6DCu;
label_29f6dc:
    // 0x29f6dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29f6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f6e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29f6e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29f6e4: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x29F6E4u;
    SET_GPR_U32(ctx, 31, 0x29F6ECu);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x29F6E4u, 0x29F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6ECu;
label_29f6ec:
    // 0x29f6ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f6f0: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x29F6F0u;
    SET_GPR_U32(ctx, 31, 0x29F6F8u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x29F6F0u, 0x29F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6F8u;
label_29f6f8:
    // 0x29f6f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f6fc: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x29F6FCu;
    SET_GPR_U32(ctx, 31, 0x29F704u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x29F6FCu, 0x29F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F704u;
label_29f704:
    // 0x29f704: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f708: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x29f708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x29f70c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x29F70Cu;
    {
        const bool branch_taken_0x29f70c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f70c) {
            ctx->pc = 0x29F750u;
            return;
        }
    }
    ctx->pc = 0x29F714u;
    // 0x29f714: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F714u;
    SET_GPR_U32(ctx, 31, 0x29F71Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F714u, 0x29F71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F71Cu;
label_29f71c:
    // 0x29f71c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f720: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29f720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29f724: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29f724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29f728: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x29f728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x29f72c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f730: 0x34460400  ori         $a2, $v0, 0x400
    ctx->pc = 0x29f730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x29f734: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f738: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29f738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f73c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29f740: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29f740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f744: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29f744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29f748: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29F748u;
    SET_GPR_U32(ctx, 31, 0x29F750u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29F748u, 0x29F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F750u;
}
