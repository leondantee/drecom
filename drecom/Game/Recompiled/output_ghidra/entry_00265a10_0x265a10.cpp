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

// Function: entry_00265a10
// Address: 0x265a10 - 0x265a40
void entry_00265a10_0x265a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265a10_0x265a10");
#endif

    ctx->pc = 0x265a10u;

    // 0x265a10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x265a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265a14: 0x2e3b021  addu        $s6, $s7, $v1
    ctx->pc = 0x265a14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265a18: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265a1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265a20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265a24: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x265A24u;
    {
        const bool branch_taken_0x265a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265a24) {
            ctx->pc = 0x265A40u;
            return;
        }
    }
    ctx->pc = 0x265A2Cu;
    // 0x265a2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x265a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265a30: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x265a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265a34: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x265a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x265a38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265A38u;
    {
        const bool branch_taken_0x265a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265a38) {
            ctx->pc = 0x265A48u;
            return;
        }
    }
    ctx->pc = 0x265A40u;
}
