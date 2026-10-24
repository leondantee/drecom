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

// Function: entry_001d18f8
// Address: 0x1d18f8 - 0x1d1930
void entry_001d18f8_0x1d18f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d18f8_0x1d18f8");
#endif

    ctx->pc = 0x1d18f8u;

    // 0x1d18f8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1d18f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d18fc: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x1d18fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1d1900: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1d1900u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d1904: 0x1460ff1f  bnez        $v1, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x1D1904u;
    {
        const bool branch_taken_0x1d1904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1904) {
            ctx->pc = 0x1D1584u;
            return;
        }
    }
    ctx->pc = 0x1D190Cu;
    // 0x1d190c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D190Cu;
    {
        const bool branch_taken_0x1d190c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d190c) {
            ctx->pc = 0x1D1930u;
            return;
        }
    }
    ctx->pc = 0x1D1914u;
    // 0x1d1914: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d1914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1918: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x1d1918u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x1d191c: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1d191cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x1d1920: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1d1920u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x1d1924: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x1d1924u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x1d1928: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d1928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d192c: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x1d192cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    ctx->pc = 0x1d1930u;
}
