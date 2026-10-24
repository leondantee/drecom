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

// Function: entry_0036867c
// Address: 0x36867c - 0x3686a4
void entry_0036867c_0x36867c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036867c_0x36867c");
#endif

    ctx->pc = 0x36867cu;

    // 0x36867c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368680: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x368680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368684: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x368684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368688: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x368688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x36868c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368690: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x368690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368694: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x368694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368698: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x368698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x36869c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x36869Cu;
    {
        const bool branch_taken_0x36869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36869c) {
            ctx->pc = 0x36871Cu;
            return;
        }
    }
    ctx->pc = 0x3686A4u;
}
