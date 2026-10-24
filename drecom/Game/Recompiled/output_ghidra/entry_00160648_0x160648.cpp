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

// Function: entry_00160648
// Address: 0x160648 - 0x160678
void entry_00160648_0x160648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160648_0x160648");
#endif

    ctx->pc = 0x160648u;

    // 0x160648: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x160648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16064c: 0xe6001b30  swc1        $f0, 0x1B30($s0)
    ctx->pc = 0x16064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6960), bits); }
    // 0x160650: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x160650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160654: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x160654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x160658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16065c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x16065cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160660: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x160660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x160664: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160668: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x16066c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x16066cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160670: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x160678u;
}
