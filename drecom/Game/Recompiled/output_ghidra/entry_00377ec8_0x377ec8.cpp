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

// Function: entry_00377ec8
// Address: 0x377ec8 - 0x377ef0
void entry_00377ec8_0x377ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377ec8_0x377ec8");
#endif

    ctx->pc = 0x377ec8u;

    // 0x377ec8: 0x2e230060  sltiu       $v1, $s1, 0x60
    ctx->pc = 0x377ec8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x377ecc: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x377ECCu;
    {
        const bool branch_taken_0x377ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377ecc) {
            ctx->pc = 0x377E80u;
            return;
        }
    }
    ctx->pc = 0x377ED4u;
    // 0x377ed4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377ed8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x377ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377edc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x377edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377ee0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x377ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x377ee4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x377ee4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x377ee8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x377EE8u;
    {
        const bool branch_taken_0x377ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377ee8) {
            ctx->pc = 0x377FB8u;
            return;
        }
    }
    ctx->pc = 0x377EF0u;
}
