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

// Function: entry_0014ec0c
// Address: 0x14ec0c - 0x14ec5c
void entry_0014ec0c_0x14ec0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ec0c_0x14ec0c");
#endif

    switch (ctx->pc) {
        case 0x14ec4cu: goto label_14ec4c;
        default: break;
    }

    ctx->pc = 0x14ec0cu;

    // 0x14ec0c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x14ec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14ec10: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x14ec10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14ec14: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14EC14u;
    {
        const bool branch_taken_0x14ec14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ec14) {
            ctx->pc = 0x14EC5Cu;
            return;
        }
    }
    ctx->pc = 0x14EC1Cu;
    // 0x14ec1c: 0x920313f8  lbu         $v1, 0x13F8($s0)
    ctx->pc = 0x14ec1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5112)));
    // 0x14ec20: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14ec20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14ec24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ec28: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14EC28u;
    {
        const bool branch_taken_0x14ec28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14ec28) {
            ctx->pc = 0x14EC5Cu;
            return;
        }
    }
    ctx->pc = 0x14EC30u;
    // 0x14ec30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14ec30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14ec34: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14ec38: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x14ec38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ec3c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14ec3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14ec40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ec40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ec44: 0xc096304  jal         func_258C10
    ctx->pc = 0x14EC44u;
    SET_GPR_U32(ctx, 31, 0x14EC4Cu);
    ctx->pc = 0x258C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258C10u, 0x14EC44u, 0x14EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC4Cu;
label_14ec4c:
    // 0x14ec4c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14ec4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14ec50: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x14ec50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14ec54: 0xc096348  jal         func_258D20
    ctx->pc = 0x14EC54u;
    SET_GPR_U32(ctx, 31, 0x14EC5Cu);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x14EC54u, 0x14EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC5Cu;
}
