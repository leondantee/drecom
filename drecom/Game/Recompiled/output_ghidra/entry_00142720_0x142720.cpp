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

// Function: entry_00142720
// Address: 0x142720 - 0x142768
void entry_00142720_0x142720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142720_0x142720");
#endif

    switch (ctx->pc) {
        case 0x142758u: goto label_142758;
        default: break;
    }

    ctx->pc = 0x142720u;

    // 0x142720: 0x72c01628  paddub      $v0, $s6, $zero
    ctx->pc = 0x142720u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x142724: 0x2456ffff  addiu       $s6, $v0, -0x1
    ctx->pc = 0x142724u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x142728: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x142728u;
    {
        const bool branch_taken_0x142728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142728) {
            ctx->pc = 0x142768u;
            return;
        }
    }
    ctx->pc = 0x142730u;
    // 0x142730: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x142730u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142734: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x142734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142738: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x142738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14273c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14273cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142740: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x142740u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x142744: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x142744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x142748: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x142748u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14274c: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x14274cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x142750: 0xc059190  jal         func_164640
    ctx->pc = 0x142750u;
    SET_GPR_U32(ctx, 31, 0x142758u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x142750u, 0x142758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142758u;
label_142758:
    // 0x142758: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14275c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x142760: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x142760u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x142764: 0x0  nop
    ctx->pc = 0x142764u;
    // NOP
    ctx->pc = 0x142768u;
}
