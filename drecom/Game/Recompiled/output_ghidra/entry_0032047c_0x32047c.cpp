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

// Function: entry_0032047c
// Address: 0x32047c - 0x3204a0
void entry_0032047c_0x32047c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032047c_0x32047c");
#endif

    ctx->pc = 0x32047cu;

    // 0x32047c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x32047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320480: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x320480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x320484: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x320484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x320488: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x320488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x32048c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32048cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320494: 0xe4600ac8  swc1        $f0, 0xAC8($v1)
    ctx->pc = 0x320494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2760), bits); }
    // 0x320498: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x320498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32049c: 0x0  nop
    ctx->pc = 0x32049cu;
    // NOP
    ctx->pc = 0x3204a0u;
}
