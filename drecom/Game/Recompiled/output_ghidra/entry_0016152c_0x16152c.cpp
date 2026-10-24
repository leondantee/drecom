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

// Function: entry_0016152c
// Address: 0x16152c - 0x161564
void entry_0016152c_0x16152c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016152c_0x16152c");
#endif

    ctx->pc = 0x16152cu;

    // 0x16152c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16152cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x161530: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x161530u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x161534: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x161534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x161538: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x161538u;
    {
        const bool branch_taken_0x161538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161538) {
            ctx->pc = 0x161564u;
            return;
        }
    }
    ctx->pc = 0x161540u;
    // 0x161540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161544: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x161548: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x161548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x16154c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x16154cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x161550: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x161550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x161554: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x161558: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x16155c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16155Cu;
    {
        const bool branch_taken_0x16155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16155c) {
            ctx->pc = 0x161588u;
            return;
        }
    }
    ctx->pc = 0x161564u;
}
