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

// Function: entry_001ff5dc
// Address: 0x1ff5dc - 0x1ff604
void entry_001ff5dc_0x1ff5dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff5dc_0x1ff5dc");
#endif

    ctx->pc = 0x1ff5dcu;

    // 0x1ff5dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff5e0: 0x70a0a628  paddub      $s4, $a1, $zero
    ctx->pc = 0x1ff5e0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ff5e4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff5e8: 0x8c63032c  lw          $v1, 0x32C($v1)
    ctx->pc = 0x1ff5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
    // 0x1ff5ec: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF5ECu;
    {
        const bool branch_taken_0x1ff5ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5ec) {
            ctx->pc = 0x1FF604u;
            return;
        }
    }
    ctx->pc = 0x1FF5F4u;
    // 0x1ff5f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ff5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff5f8: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x1ff5f8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ff5fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF5FCu;
    {
        const bool branch_taken_0x1ff5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5fc) {
            ctx->pc = 0x1FF618u;
            return;
        }
    }
    ctx->pc = 0x1FF604u;
}
