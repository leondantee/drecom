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

// Function: entry_001b4168
// Address: 0x1b4168 - 0x1b4194
void entry_001b4168_0x1b4168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4168_0x1b4168");
#endif

    ctx->pc = 0x1b4168u;

    // 0x1b4168: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x1b4168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1b416c: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1b416cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1b4170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b4170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b4174: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b4174u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4178: 0x3c168000  lui         $s6, 0x8000
    ctx->pc = 0x1b4178u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32768 << 16));
    // 0x1b417c: 0x8e021228  lw          $v0, 0x1228($s0)
    ctx->pc = 0x1b417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4648)));
    // 0x1b4180: 0x2451ffe0  addiu       $s1, $v0, -0x20
    ctx->pc = 0x1b4180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1b4184: 0x8e13121c  lw          $s3, 0x121C($s0)
    ctx->pc = 0x1b4184u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x1b4188: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1b4188u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b418c: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x1B418Cu;
    {
        const bool branch_taken_0x1b418c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b418c) {
            ctx->pc = 0x1B46F0u;
            return;
        }
    }
    ctx->pc = 0x1B4194u;
}
