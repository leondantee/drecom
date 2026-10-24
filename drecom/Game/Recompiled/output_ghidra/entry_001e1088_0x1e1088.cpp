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

// Function: entry_001e1088
// Address: 0x1e1088 - 0x1e1100
void entry_001e1088_0x1e1088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1088_0x1e1088");
#endif

    switch (ctx->pc) {
        case 0x1e109cu: goto label_1e109c;
        case 0x1e10b4u: goto label_1e10b4;
        case 0x1e10ccu: goto label_1e10cc;
        default: break;
    }

    ctx->pc = 0x1e1088u;

    // 0x1e1088: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e1088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e108c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e108cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e1090: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1e1090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1e1094: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E1094u;
    SET_GPR_U32(ctx, 31, 0x1E109Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E1094u, 0x1E109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E109Cu;
label_1e109c:
    // 0x1e109c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e109cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e10a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e10a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e10a4: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e10a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e10a8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1e10a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e10ac: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E10ACu;
    SET_GPR_U32(ctx, 31, 0x1E10B4u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E10ACu, 0x1E10B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E10B4u;
label_1e10b4:
    // 0x1e10b4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e10b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e10b8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1e10b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e10bc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e10bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e10c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e10c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e10c4: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E10C4u;
    SET_GPR_U32(ctx, 31, 0x1E10CCu);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E10CCu;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E10CCu) { return; }
    ctx->pc = 0x1E10CCu;
label_1e10cc:
    // 0x1e10cc: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1e10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e10d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e10d4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e10d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e10d8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e10d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e10dc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E10DCu;
    {
        const bool branch_taken_0x1e10dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e10dc) {
            ctx->pc = 0x1E1100u;
            return;
        }
    }
    ctx->pc = 0x1E10E4u;
    // 0x1e10e4: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1e10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1e10e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e10ec: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e10ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e10f0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e10f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e10f4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E10F4u;
    {
        const bool branch_taken_0x1e10f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e10f4) {
            ctx->pc = 0x1E1108u;
            return;
        }
    }
    ctx->pc = 0x1E10FCu;
    // 0x1e10fc: 0x0  nop
    ctx->pc = 0x1e10fcu;
    // NOP
    ctx->pc = 0x1e1100u;
}
