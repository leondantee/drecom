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

// Function: entry_00241048
// Address: 0x241048 - 0x241060
void entry_00241048_0x241048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241048_0x241048");
#endif

    ctx->pc = 0x241048u;

    // 0x241048: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x241048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24104c: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x24104cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x241050: 0xa1070001  sb          $a3, 0x1($t0)
    ctx->pc = 0x241050u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x241054: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x241054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241058: 0x26090150  addiu       $t1, $s0, 0x150
    ctx->pc = 0x241058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24105c: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x24105cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    ctx->pc = 0x241060u;
}
