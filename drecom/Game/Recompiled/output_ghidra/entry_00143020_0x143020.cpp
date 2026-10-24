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

// Function: entry_00143020
// Address: 0x143020 - 0x143068
void entry_00143020_0x143020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143020_0x143020");
#endif

    switch (ctx->pc) {
        case 0x14305cu: goto label_14305c;
        default: break;
    }

    ctx->pc = 0x143020u;

    // 0x143020: 0x72801e28  paddub      $v1, $s4, $zero
    ctx->pc = 0x143020u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x143024: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x143024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x143028: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x143028u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x14302c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14302Cu;
    {
        const bool branch_taken_0x14302c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14302c) {
            ctx->pc = 0x143068u;
            return;
        }
    }
    ctx->pc = 0x143034u;
    // 0x143034: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x143034u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x143038: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x143038u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14303c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14303cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143040: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x143040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143044: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x143044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x143048: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x143048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x14304c: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x14304cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x143050: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x143050u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x143054: 0xc059190  jal         func_164640
    ctx->pc = 0x143054u;
    SET_GPR_U32(ctx, 31, 0x14305Cu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x143054u, 0x14305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14305Cu;
label_14305c:
    // 0x14305c: 0x92450008  lbu         $a1, 0x8($s2)
    ctx->pc = 0x14305cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x143060: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x143060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x143064: 0xa2440008  sb          $a0, 0x8($s2)
    ctx->pc = 0x143064u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x143068u;
}
