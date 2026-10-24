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

// Function: entry_0018e3f8
// Address: 0x18e3f8 - 0x18e418
void entry_0018e3f8_0x18e3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e3f8_0x18e3f8");
#endif

    ctx->pc = 0x18e3f8u;

    // 0x18e3f8: 0xc601018c  lwc1        $f1, 0x18C($s0)
    ctx->pc = 0x18e3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18e3fc: 0xc6000188  lwc1        $f0, 0x188($s0)
    ctx->pc = 0x18e3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e400: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18e400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18e404: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x18e404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x18e408: 0x8e030294  lw          $v1, 0x294($s0)
    ctx->pc = 0x18e408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x18e40c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e410: 0xae030294  sw          $v1, 0x294($s0)
    ctx->pc = 0x18e410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 3));
    // 0x18e414: 0x0  nop
    ctx->pc = 0x18e414u;
    // NOP
    ctx->pc = 0x18e418u;
}
