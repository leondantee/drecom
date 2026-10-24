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

// Function: entry_0031b200
// Address: 0x31b200 - 0x31b248
void entry_0031b200_0x31b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b200_0x31b200");
#endif

    ctx->pc = 0x31b200u;

    // 0x31b200: 0x2e210003  sltiu       $at, $s1, 0x3
    ctx->pc = 0x31b200u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x31b204: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x31B204u;
    {
        const bool branch_taken_0x31b204 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b204) {
            ctx->pc = 0x31B248u;
            return;
        }
    }
    ctx->pc = 0x31B20Cu;
    // 0x31b20c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x31b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b210: 0xae0312a4  sw          $v1, 0x12A4($s0)
    ctx->pc = 0x31b210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4772), GPR_U32(ctx, 3));
    // 0x31b214: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b218: 0xae031298  sw          $v1, 0x1298($s0)
    ctx->pc = 0x31b218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4760), GPR_U32(ctx, 3));
    // 0x31b21c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b220: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31b220u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31b224: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x31b224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x31b228: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31b228u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31b22c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b230: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x31b230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31b234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b238: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x31b238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b23c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x31b23cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b240: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x31b240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b244: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31b244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x31b248u;
}
