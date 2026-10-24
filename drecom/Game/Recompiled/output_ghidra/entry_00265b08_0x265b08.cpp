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

// Function: entry_00265b08
// Address: 0x265b08 - 0x265b48
void entry_00265b08_0x265b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265b08_0x265b08");
#endif

    ctx->pc = 0x265b08u;

    // 0x265b08: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265b0c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265b10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265b14: 0x10830091  beq         $a0, $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x265B14u;
    {
        const bool branch_taken_0x265b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265b14) {
            ctx->pc = 0x265D5Cu;
            return;
        }
    }
    ctx->pc = 0x265B1Cu;
    // 0x265b1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265b20: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x265b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x265b24: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x265b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x265b28: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x265b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x265b2c: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x265B2Cu;
    {
        const bool branch_taken_0x265b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265b2c) {
            ctx->pc = 0x265BCCu;
            return;
        }
    }
    ctx->pc = 0x265B34u;
    // 0x265b34: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x265b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x265b38: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x265B38u;
    {
        const bool branch_taken_0x265b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265b38) {
            ctx->pc = 0x265B48u;
            return;
        }
    }
    ctx->pc = 0x265B40u;
    // 0x265b40: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x265B40u;
    {
        const bool branch_taken_0x265b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265b40) {
            ctx->pc = 0x265C18u;
            return;
        }
    }
    ctx->pc = 0x265B48u;
}
