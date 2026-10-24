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

// Function: entry_001fde94
// Address: 0x1fde94 - 0x1fdeb8
void entry_001fde94_0x1fde94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fde94_0x1fde94");
#endif

    ctx->pc = 0x1fde94u;

    // 0x1fde94: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1fde94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fde98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fde98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fde9c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fde9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fdea0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1fdea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fdea4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1fdea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1fdea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fdea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdeac: 0xe4600ac8  swc1        $f0, 0xAC8($v1)
    ctx->pc = 0x1fdeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2760), bits); }
    // 0x1fdeb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fdeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fdeb4: 0x0  nop
    ctx->pc = 0x1fdeb4u;
    // NOP
    ctx->pc = 0x1fdeb8u;
}
