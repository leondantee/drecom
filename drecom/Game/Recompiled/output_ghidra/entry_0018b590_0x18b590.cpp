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

// Function: entry_0018b590
// Address: 0x18b590 - 0x18b5b4
void entry_0018b590_0x18b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b590_0x18b590");
#endif

    ctx->pc = 0x18b590u;

    // 0x18b590: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x18b590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x18b594: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x18B594u;
    {
        const bool branch_taken_0x18b594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b594) {
            ctx->pc = 0x18B56Cu;
            return;
        }
    }
    ctx->pc = 0x18B59Cu;
    // 0x18b59c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x18b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18b5a0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18b5a4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x18b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x18b5a8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18b5a8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18b5ac: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x18B5ACu;
    {
        const bool branch_taken_0x18b5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b5ac) {
            ctx->pc = 0x18B688u;
            return;
        }
    }
    ctx->pc = 0x18B5B4u;
}
