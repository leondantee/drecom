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

// Function: entry_001b7100
// Address: 0x1b7100 - 0x1b712c
void entry_001b7100_0x1b7100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7100_0x1b7100");
#endif

    ctx->pc = 0x1b7100u;

    // 0x1b7100: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1b7100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7104: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b7104u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7108: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b710c: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1b710cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
    // 0x1b7110: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b7110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b7114: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7118: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1b7118u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b711c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b711cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7120: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b7120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b7124: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b7124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b7128: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1b7128u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1b712cu;
}
