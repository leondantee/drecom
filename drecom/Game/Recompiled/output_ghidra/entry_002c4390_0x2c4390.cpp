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

// Function: entry_002c4390
// Address: 0x2c4390 - 0x2c43a4
void entry_002c4390_0x2c4390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c4390_0x2c4390");
#endif

    ctx->pc = 0x2c4390u;

    // 0x2c4390: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c4390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c4394: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2c4394u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4398: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2c4398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c439c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c439cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c43a0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2c43a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    ctx->pc = 0x2c43a4u;
}
