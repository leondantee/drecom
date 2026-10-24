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

// Function: entry_00142768
// Address: 0x142768 - 0x1427c8
void entry_00142768_0x142768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142768_0x142768");
#endif

    switch (ctx->pc) {
        case 0x14278cu: goto label_14278c;
        case 0x1427b4u: goto label_1427b4;
        default: break;
    }

    ctx->pc = 0x142768u;

    // 0x142768: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14276c: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x14276cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x142770: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x142770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x142774: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x142774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x142778: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x142778u;
    {
        const bool branch_taken_0x142778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142778) {
            ctx->pc = 0x1427F8u;
            return;
        }
    }
    ctx->pc = 0x142780u;
    // 0x142780: 0x240401e0  addiu       $a0, $zero, 0x1E0
    ctx->pc = 0x142780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x142784: 0xc067e5c  jal         func_19F970
    ctx->pc = 0x142784u;
    SET_GPR_U32(ctx, 31, 0x14278Cu);
    ctx->pc = 0x19F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F970u, 0x142784u, 0x14278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14278Cu;
label_14278c:
    // 0x14278c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14278cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142790: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x142790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142794: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x142794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142798: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x142798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14279c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x14279cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1427a0: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x1427a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x1427a4: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x1427a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1427a8: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x1427a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1427ac: 0xc059190  jal         func_164640
    ctx->pc = 0x1427ACu;
    SET_GPR_U32(ctx, 31, 0x1427B4u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1427ACu, 0x1427B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427B4u;
label_1427b4:
    // 0x1427b4: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1427b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1427b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1427b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1427bc: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x1427bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1427c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1427C0u;
    {
        const bool branch_taken_0x1427c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1427c0) {
            ctx->pc = 0x1427F8u;
            return;
        }
    }
    ctx->pc = 0x1427C8u;
}
