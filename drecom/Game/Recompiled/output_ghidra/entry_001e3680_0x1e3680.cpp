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

// Function: entry_001e3680
// Address: 0x1e3680 - 0x1e36f8
void entry_001e3680_0x1e3680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3680_0x1e3680");
#endif

    switch (ctx->pc) {
        case 0x1e3694u: goto label_1e3694;
        case 0x1e36acu: goto label_1e36ac;
        case 0x1e36c4u: goto label_1e36c4;
        default: break;
    }

    ctx->pc = 0x1e3680u;

    // 0x1e3680: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1e3680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e3684: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e3684u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e3688: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1e3688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1e368c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E368Cu;
    SET_GPR_U32(ctx, 31, 0x1E3694u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E368Cu, 0x1E3694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3694u;
label_1e3694:
    // 0x1e3694: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e3694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e3698: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e3698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e369c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e369cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e36a0: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1e36a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e36a4: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E36A4u;
    SET_GPR_U32(ctx, 31, 0x1E36ACu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E36A4u, 0x1E36ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E36ACu;
label_1e36ac:
    // 0x1e36ac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e36acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e36b0: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1e36b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e36b4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e36b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e36b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e36b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e36bc: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E36BCu;
    SET_GPR_U32(ctx, 31, 0x1E36C4u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E36C4u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E36C4u) { return; }
    ctx->pc = 0x1E36C4u;
label_1e36c4:
    // 0x1e36c4: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1e36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e36c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e36cc: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e36ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e36d0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e36d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e36d4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E36D4u;
    {
        const bool branch_taken_0x1e36d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e36d4) {
            ctx->pc = 0x1E36F8u;
            return;
        }
    }
    ctx->pc = 0x1E36DCu;
    // 0x1e36dc: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x1e36dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1e36e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e36e4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e36e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e36e8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e36e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e36ec: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E36ECu;
    {
        const bool branch_taken_0x1e36ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e36ec) {
            ctx->pc = 0x1E3700u;
            return;
        }
    }
    ctx->pc = 0x1E36F4u;
    // 0x1e36f4: 0x0  nop
    ctx->pc = 0x1e36f4u;
    // NOP
    ctx->pc = 0x1e36f8u;
}
