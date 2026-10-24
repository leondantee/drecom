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

// Function: entry_0017b354
// Address: 0x17b354 - 0x17b380
void entry_0017b354_0x17b354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b354_0x17b354");
#endif

    ctx->pc = 0x17b354u;

    // 0x17b354: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x17b354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x17b358: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x17b358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x17b35c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x17b35cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b360: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17b360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b364: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x17b364u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x17b368: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17b368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17b36c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b36cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b370: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17b370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b374: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x17b374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x17b378: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x17B378u;
    {
        const bool branch_taken_0x17b378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b378) {
            ctx->pc = 0x17B4C4u;
            return;
        }
    }
    ctx->pc = 0x17B380u;
}
