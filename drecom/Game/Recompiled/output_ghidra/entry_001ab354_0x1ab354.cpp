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

// Function: entry_001ab354
// Address: 0x1ab354 - 0x1ab384
void entry_001ab354_0x1ab354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab354_0x1ab354");
#endif

    ctx->pc = 0x1ab354u;

    // 0x1ab354: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ab354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1ab358: 0x2470a530  addiu       $s0, $v1, -0x5AD0
    ctx->pc = 0x1ab358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944048));
    // 0x1ab35c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ab35cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FA538u));
    // 0x1ab360: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ab360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ab364: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB364u;
    {
        const bool branch_taken_0x1ab364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab364) {
            ctx->pc = 0x1AB384u;
            return;
        }
    }
    ctx->pc = 0x1AB36Cu;
    // 0x1ab36c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ab36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ab370: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ab370u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1ab374: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1ab374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ab378: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1ab378u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ab37c: 0xc06ace8  jal         func_1AB3A0
    ctx->pc = 0x1AB37Cu;
    SET_GPR_U32(ctx, 31, 0x1AB384u);
    ctx->pc = 0x1AB3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB3A0u, 0x1AB37Cu, 0x1AB384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB384u;
}
