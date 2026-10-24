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

// Function: entry_00256328
// Address: 0x256328 - 0x256374
void entry_00256328_0x256328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256328_0x256328");
#endif

    ctx->pc = 0x256328u;

    // 0x256328: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x256328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25632c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x25632cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x256330: 0x1440fdbc  bnez        $v0, . + 4 + (-0x244 << 2)
    ctx->pc = 0x256330u;
    {
        const bool branch_taken_0x256330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256330) {
            ctx->pc = 0x255A24u;
            return;
        }
    }
    ctx->pc = 0x256338u;
    // 0x256338: 0x8fb200f8  lw          $s2, 0xF8($sp)
    ctx->pc = 0x256338u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x25633c: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x25633cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x256340: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x256340u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x256344: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x256344u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x256348: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x256348u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25634c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25634cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256350: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x256350u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256354: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x256354u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256358: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x256358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25635c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25635cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256368: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x256368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x25636c: 0x3e00008  jr          $ra
    ctx->pc = 0x25636Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25636Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256374u;
}
