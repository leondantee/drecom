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

// Function: entry_001e4310
// Address: 0x1e4310 - 0x1e4388
void entry_001e4310_0x1e4310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4310_0x1e4310");
#endif

    switch (ctx->pc) {
        case 0x1e4324u: goto label_1e4324;
        case 0x1e433cu: goto label_1e433c;
        case 0x1e4354u: goto label_1e4354;
        default: break;
    }

    ctx->pc = 0x1e4310u;

    // 0x1e4310: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e4310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e4314: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e4314u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e4318: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1e4318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1e431c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E431Cu;
    SET_GPR_U32(ctx, 31, 0x1E4324u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E431Cu, 0x1E4324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4324u;
label_1e4324:
    // 0x1e4324: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e4324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e4328: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e4328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e432c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e432cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e4330: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1e4330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e4334: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E4334u;
    SET_GPR_U32(ctx, 31, 0x1E433Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E4334u, 0x1E433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E433Cu;
label_1e433c:
    // 0x1e433c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e4340: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1e4340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e4344: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e4344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e4348: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e4348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e434c: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E434Cu;
    SET_GPR_U32(ctx, 31, 0x1E4354u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E4354u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E4354u) { return; }
    ctx->pc = 0x1E4354u;
label_1e4354:
    // 0x1e4354: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1e4354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e4358: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e435c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e435cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e4360: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e4360u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e4364: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E4364u;
    {
        const bool branch_taken_0x1e4364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4364) {
            ctx->pc = 0x1E4388u;
            return;
        }
    }
    ctx->pc = 0x1E436Cu;
    // 0x1e436c: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1e436cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1e4370: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4374: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e4374u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e4378: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e4378u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e437c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E437Cu;
    {
        const bool branch_taken_0x1e437c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e437c) {
            ctx->pc = 0x1E4390u;
            return;
        }
    }
    ctx->pc = 0x1E4384u;
    // 0x1e4384: 0x0  nop
    ctx->pc = 0x1e4384u;
    // NOP
    ctx->pc = 0x1e4388u;
}
