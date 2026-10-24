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

// Function: entry_00267298
// Address: 0x267298 - 0x2672b4
void entry_00267298_0x267298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267298_0x267298");
#endif

    ctx->pc = 0x267298u;

    // 0x267298: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x267298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x26729c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x26729cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2672a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2672A0u;
    {
        const bool branch_taken_0x2672a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2672a0) {
            ctx->pc = 0x2672B4u;
            return;
        }
    }
    ctx->pc = 0x2672A8u;
    // 0x2672a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2672a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2672ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2672ACu;
    {
        const bool branch_taken_0x2672ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2672ac) {
            ctx->pc = 0x2672B8u;
            return;
        }
    }
    ctx->pc = 0x2672B4u;
}
