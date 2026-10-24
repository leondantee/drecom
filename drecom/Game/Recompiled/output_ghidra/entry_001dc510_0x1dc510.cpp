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

// Function: entry_001dc510
// Address: 0x1dc510 - 0x1dc590
void entry_001dc510_0x1dc510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc510_0x1dc510");
#endif

    ctx->pc = 0x1dc510u;

    // 0x1dc510: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc514: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x1dc514u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc518: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1dc518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1dc51c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc520: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1dc520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dc524: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1dc524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc528: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc52c: 0x8c630204  lw          $v1, 0x204($v1)
    ctx->pc = 0x1dc52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x1dc530: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DC530u;
    {
        const bool branch_taken_0x1dc530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc530) {
            ctx->pc = 0x1DC590u;
            return;
        }
    }
    ctx->pc = 0x1DC538u;
    // 0x1dc538: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc53c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc53cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc540: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc548: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc54c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc550: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1dc550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc554: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc558: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dc558u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc55c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc564: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc568: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1dc568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dc56c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc570: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dc570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dc574: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dc574u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dc578: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1dc578u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc57c: 0x8c84020c  lw          $a0, 0x20C($a0)
    ctx->pc = 0x1dc57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1dc580: 0x8c650204  lw          $a1, 0x204($v1)
    ctx->pc = 0x1dc580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x1dc584: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1dc584u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc588: 0xc06af78  jal         func_1ABDE0
    ctx->pc = 0x1DC588u;
    SET_GPR_U32(ctx, 31, 0x1DC590u);
    ctx->pc = 0x1ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABDE0u, 0x1DC588u, 0x1DC590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC590u;
}
