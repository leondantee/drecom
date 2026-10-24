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

// Function: entry_001848f8
// Address: 0x1848f8 - 0x184918
void entry_001848f8_0x1848f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001848f8_0x1848f8");
#endif

    ctx->pc = 0x1848f8u;

    // 0x1848f8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1848f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1848fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1848fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x184900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184904: 0x0  nop
    ctx->pc = 0x184904u;
    // NOP
    // 0x184908: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x184908u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18490c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x18490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184910: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x184910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x184914: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x184914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    ctx->pc = 0x184918u;
}
