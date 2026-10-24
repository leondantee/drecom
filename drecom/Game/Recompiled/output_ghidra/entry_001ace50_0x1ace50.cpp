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

// Function: entry_001ace50
// Address: 0x1ace50 - 0x1ace98
void entry_001ace50_0x1ace50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ace50_0x1ace50");
#endif

    ctx->pc = 0x1ace50u;

    // 0x1ace50: 0x93c20000  lbu         $v0, 0x0($fp)
    ctx->pc = 0x1ace50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1ace54: 0x10400162  beqz        $v0, . + 4 + (0x162 << 2)
    ctx->pc = 0x1ACE54u;
    {
        const bool branch_taken_0x1ace54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ace54) {
            ctx->pc = 0x1AD3E0u;
            return;
        }
    }
    ctx->pc = 0x1ACE5Cu;
    // 0x1ace5c: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x1ace5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1ace60: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x1ace60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ace64: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x1ace64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1ace68: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ace68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ace6c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ace6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1ace70: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ace70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1ace74: 0x8422a4d0  lh          $v0, -0x5B30($at)
    ctx->pc = 0x1ace74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943952)));
    // 0x1ace78: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1ace78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ace7c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1ace7cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1ace80: 0x2e2103e8  sltiu       $at, $s1, 0x3E8
    ctx->pc = 0x1ace80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1ace84: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACE84u;
    {
        const bool branch_taken_0x1ace84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ace84) {
            ctx->pc = 0x1ACE98u;
            return;
        }
    }
    ctx->pc = 0x1ACE8Cu;
    // 0x1ace8c: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x1ace8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ace90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1ACE90u;
    {
        const bool branch_taken_0x1ace90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ace90) {
            ctx->pc = 0x1ACED0u;
            return;
        }
    }
    ctx->pc = 0x1ACE98u;
}
