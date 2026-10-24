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

// Function: entry_00264cd0
// Address: 0x264cd0 - 0x264d20
void entry_00264cd0_0x264cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264cd0_0x264cd0");
#endif

    ctx->pc = 0x264cd0u;

    // 0x264cd0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264cd4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264cd8: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264cdc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264ce0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264ce4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264ce8: 0x1083008b  beq         $a0, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x264CE8u;
    {
        const bool branch_taken_0x264ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264ce8) {
            ctx->pc = 0x264F18u;
            return;
        }
    }
    ctx->pc = 0x264CF0u;
    // 0x264cf0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264cf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264cf8: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x264cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x264cfc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x264cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x264d00: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x264d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x264d04: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x264D04u;
    {
        const bool branch_taken_0x264d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264d04) {
            ctx->pc = 0x264DA4u;
            return;
        }
    }
    ctx->pc = 0x264D0Cu;
    // 0x264d0c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x264d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x264d10: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264D10u;
    {
        const bool branch_taken_0x264d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264d10) {
            ctx->pc = 0x264D20u;
            return;
        }
    }
    ctx->pc = 0x264D18u;
    // 0x264d18: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x264D18u;
    {
        const bool branch_taken_0x264d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264d18) {
            ctx->pc = 0x264DFCu;
            return;
        }
    }
    ctx->pc = 0x264D20u;
}
