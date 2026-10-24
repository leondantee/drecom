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

// Function: entry_002d7814
// Address: 0x2d7814 - 0x2d7834
void entry_002d7814_0x2d7814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d7814_0x2d7814");
#endif

    ctx->pc = 0x2d7814u;

    // 0x2d7814: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7818: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d7818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d781c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7820: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7824: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d7828: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d782c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d782cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d7830: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->pc = 0x2d7834u;
}
