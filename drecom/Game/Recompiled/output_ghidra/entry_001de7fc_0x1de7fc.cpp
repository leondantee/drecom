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

// Function: entry_001de7fc
// Address: 0x1de7fc - 0x1de84c
void entry_001de7fc_0x1de7fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de7fc_0x1de7fc");
#endif

    switch (ctx->pc) {
        case 0x1de814u: goto label_1de814;
        default: break;
    }

    ctx->pc = 0x1de7fcu;

label_1de7fc:
    // 0x1de7fc: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x1de7fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1de800: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1de800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1de804: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1de804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1de808: 0x97a50040  lhu         $a1, 0x40($sp)
    ctx->pc = 0x1de808u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de80c: 0xc077a14  jal         func_1DE850
    ctx->pc = 0x1DE80Cu;
    SET_GPR_U32(ctx, 31, 0x1DE814u);
    ctx->pc = 0x1DE850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE850u, 0x1DE80Cu, 0x1DE814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE814u;
label_1de814:
    // 0x1de814: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x1de814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1de818: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1de818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1de81c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1de81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1de820: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x1de820u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x1de824: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1de824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1de828: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1de828u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1de82c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DE82Cu;
    {
        const bool branch_taken_0x1de82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de82c) {
            ctx->pc = 0x1DE7FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de7fc;
        }
    }
    ctx->pc = 0x1DE834u;
    // 0x1de834: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1de834u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de83c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de840: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1de840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1de844: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE84Cu;
}
