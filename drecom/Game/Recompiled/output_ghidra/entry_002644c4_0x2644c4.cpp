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

// Function: entry_002644c4
// Address: 0x2644c4 - 0x2644f4
void entry_002644c4_0x2644c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002644c4_0x2644c4");
#endif

    ctx->pc = 0x2644c4u;

    // 0x2644c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2644c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2644c8: 0x3c3b821  addu        $s7, $fp, $v1
    ctx->pc = 0x2644c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2644cc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2644ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2644d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2644d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2644d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2644d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2644d8: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2644D8u;
    {
        const bool branch_taken_0x2644d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2644d8) {
            ctx->pc = 0x2644F4u;
            return;
        }
    }
    ctx->pc = 0x2644E0u;
    // 0x2644e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2644e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2644e4: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x2644e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2644e8: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x2644e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x2644ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2644ECu;
    {
        const bool branch_taken_0x2644ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2644ec) {
            ctx->pc = 0x264500u;
            return;
        }
    }
    ctx->pc = 0x2644F4u;
}
