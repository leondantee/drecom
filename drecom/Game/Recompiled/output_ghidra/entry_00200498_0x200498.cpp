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

// Function: entry_00200498
// Address: 0x200498 - 0x2004b8
void entry_00200498_0x200498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200498_0x200498");
#endif

    ctx->pc = 0x200498u;

    // 0x200498: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x200498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20049c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20049cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2004a0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2004a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2004a4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2004a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2004a8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2004a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2004ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2004acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2004b0: 0xe4600ac8  swc1        $f0, 0xAC8($v1)
    ctx->pc = 0x2004b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2760), bits); }
    // 0x2004b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2004b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2004b8u;
}
