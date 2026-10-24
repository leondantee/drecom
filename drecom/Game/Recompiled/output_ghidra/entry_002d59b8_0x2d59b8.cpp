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

// Function: entry_002d59b8
// Address: 0x2d59b8 - 0x2d5a1c
void entry_002d59b8_0x2d59b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d59b8_0x2d59b8");
#endif

    ctx->pc = 0x2d59b8u;

    // 0x2d59b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d59b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d59bc: 0x8c631340  lw          $v1, 0x1340($v1)
    ctx->pc = 0x2d59bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4928)));
    // 0x2d59c0: 0x30710003  andi        $s1, $v1, 0x3
    ctx->pc = 0x2d59c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2d59c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d59c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d59c8: 0x8c631340  lw          $v1, 0x1340($v1)
    ctx->pc = 0x2d59c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4928)));
    // 0x2d59cc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2d59ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2d59d0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D59D0u;
    {
        const bool branch_taken_0x2d59d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d59d0) {
            ctx->pc = 0x2D5A1Cu;
            return;
        }
    }
    ctx->pc = 0x2D59D8u;
    // 0x2d59d8: 0x16200033  bnez        $s1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2D59D8u;
    {
        const bool branch_taken_0x2d59d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d59d8) {
            ctx->pc = 0x2D5AA8u;
            return;
        }
    }
    ctx->pc = 0x2D59E0u;
    // 0x2d59e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d59e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d59e4: 0x2464133c  addiu       $a0, $v1, 0x133C
    ctx->pc = 0x2d59e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d59e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d59e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d59ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d59ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d59f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d59f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d59f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d59f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d59f8: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d59f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d59fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d59fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5a00: 0x2861fffe  slti        $at, $v1, -0x2
    ctx->pc = 0x2d5a00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967294) ? 1 : 0);
    // 0x2d5a04: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D5A04u;
    {
        const bool branch_taken_0x2d5a04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a04) {
            ctx->pc = 0x2D5AA8u;
            return;
        }
    }
    ctx->pc = 0x2D5A0Cu;
    // 0x2d5a0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5a10: 0xac601340  sw          $zero, 0x1340($v1)
    ctx->pc = 0x2d5a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4928), GPR_U32(ctx, 0));
    // 0x2d5a14: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2D5A14u;
    {
        const bool branch_taken_0x2d5a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5a14) {
            ctx->pc = 0x2D5AA8u;
            return;
        }
    }
    ctx->pc = 0x2D5A1Cu;
}
