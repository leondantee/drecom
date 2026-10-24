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

// Function: entry_0017e904
// Address: 0x17e904 - 0x17e928
void entry_0017e904_0x17e904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e904_0x17e904");
#endif

    ctx->pc = 0x17e904u;

    // 0x17e904: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17e904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17e908: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17e908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17e90c: 0x24420130  addiu       $v0, $v0, 0x130
    ctx->pc = 0x17e90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x17e910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e914: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x17e914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e918: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e91c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17e91cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17e920: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x17e920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x17e924: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17e924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x17e928u;
}
