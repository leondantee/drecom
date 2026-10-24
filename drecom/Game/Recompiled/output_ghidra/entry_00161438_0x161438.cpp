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

// Function: entry_00161438
// Address: 0x161438 - 0x161470
void entry_00161438_0x161438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161438_0x161438");
#endif

    ctx->pc = 0x161438u;

    // 0x161438: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x161438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16143c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x16143cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x161440: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x161440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x161444: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x161444u;
    {
        const bool branch_taken_0x161444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161444) {
            ctx->pc = 0x161470u;
            return;
        }
    }
    ctx->pc = 0x16144Cu;
    // 0x16144c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16144cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161450: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161450u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x161454: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x161454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x161458: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161458u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x16145c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x16145cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x161460: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161460u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x161464: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x161468: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x161468u;
    {
        const bool branch_taken_0x161468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161468) {
            ctx->pc = 0x16148Cu;
            return;
        }
    }
    ctx->pc = 0x161470u;
}
