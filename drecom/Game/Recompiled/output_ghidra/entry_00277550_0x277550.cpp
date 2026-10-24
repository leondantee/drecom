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

// Function: entry_00277550
// Address: 0x277550 - 0x277580
void entry_00277550_0x277550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277550_0x277550");
#endif

    switch (ctx->pc) {
        case 0x27757cu: goto label_27757c;
        default: break;
    }

    ctx->pc = 0x277550u;

    // 0x277550: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x277550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x277554: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x277554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x277558: 0x2442dac0  addiu       $v0, $v0, -0x2540
    ctx->pc = 0x277558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957760));
    // 0x27755c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x27755cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277560: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x277560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x277564: 0x2442db10  addiu       $v0, $v0, -0x24F0
    ctx->pc = 0x277564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957840));
    // 0x277568: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x277568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27756c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27756cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277570: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x277570u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x277574: 0xc0c7a48  jal         func_31E920
    ctx->pc = 0x277574u;
    SET_GPR_U32(ctx, 31, 0x27757Cu);
    ctx->pc = 0x31E920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E920u, 0x277574u, 0x27757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27757Cu;
label_27757c:
    // 0x27757c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27757cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x277580u;
}
