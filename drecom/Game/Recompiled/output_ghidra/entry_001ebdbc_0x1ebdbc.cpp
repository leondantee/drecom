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

// Function: entry_001ebdbc
// Address: 0x1ebdbc - 0x1ebdd8
void entry_001ebdbc_0x1ebdbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebdbc_0x1ebdbc");
#endif

    ctx->pc = 0x1ebdbcu;

    // 0x1ebdbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebdc0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ebdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ebdc4: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x1ebdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebdc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebdcc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ebdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebdd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ebdd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ebdd4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1ebdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x1ebdd8u;
}
