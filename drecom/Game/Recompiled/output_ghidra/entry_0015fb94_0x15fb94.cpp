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

// Function: entry_0015fb94
// Address: 0x15fb94 - 0x15fbc4
void entry_0015fb94_0x15fb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fb94_0x15fb94");
#endif

    ctx->pc = 0x15fb94u;

    // 0x15fb94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fb98: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15fb98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15fb9c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15fba0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15fba0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15fba4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15fba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15fba8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15fba8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15fbac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15fbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15fbb0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15fbb4: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x15fbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x15fbb8: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x15fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fbbc: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15fbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15fbc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15fbc4u;
}
