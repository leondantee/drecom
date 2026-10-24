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

// Function: entry_00160b9c
// Address: 0x160b9c - 0x160bc0
void entry_00160b9c_0x160b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160b9c_0x160b9c");
#endif

    ctx->pc = 0x160b9cu;

    // 0x160b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160ba0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160ba4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x160ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x160ba8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160bac: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160bacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160bb0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160bb4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160bb8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x160bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160bbc: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x160bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    ctx->pc = 0x160bc0u;
}
