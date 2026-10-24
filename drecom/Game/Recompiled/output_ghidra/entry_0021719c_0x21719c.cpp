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

// Function: entry_0021719c
// Address: 0x21719c - 0x2171c4
void entry_0021719c_0x21719c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021719c_0x21719c");
#endif

    ctx->pc = 0x21719cu;

    // 0x21719c: 0x24e2cbc0  addiu       $v0, $a3, -0x3440
    ctx->pc = 0x21719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953920));
    // 0x2171a0: 0x2524cac0  addiu       $a0, $t1, -0x3540
    ctx->pc = 0x2171a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294953664));
    // 0x2171a4: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x2171a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x2171a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2171a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2171ac: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x2171acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x2171b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2171b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2171b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2171b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2171b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2171b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2171bc: 0x2609cb00  addiu       $t1, $s0, -0x3500
    ctx->pc = 0x2171bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953728));
    // 0x2171c0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2171c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2171c4u;
}
