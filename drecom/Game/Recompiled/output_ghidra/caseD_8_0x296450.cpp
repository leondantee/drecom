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

// Function: caseD_8
// Address: 0x296450 - 0x296478
void caseD_8_0x296450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x296450");
#endif

    ctx->pc = 0x296450u;

    // 0x296450: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x296454: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x296454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x296458: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x296458u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29645c: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x29645cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x296460: 0x162140  sll         $a0, $s6, 5
    ctx->pc = 0x296460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
    // 0x296464: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x296464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x296468: 0x24636330  addiu       $v1, $v1, 0x6330
    ctx->pc = 0x296468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25392));
    // 0x29646c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x29646cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x296470: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x296470u;
    {
        const bool branch_taken_0x296470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296470) {
            ctx->pc = 0x296530u;
            return;
        }
    }
    ctx->pc = 0x296478u;
}
