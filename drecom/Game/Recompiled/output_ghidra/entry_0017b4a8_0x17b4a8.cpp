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

// Function: entry_0017b4a8
// Address: 0x17b4a8 - 0x17b4c4
void entry_0017b4a8_0x17b4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b4a8_0x17b4a8");
#endif

    ctx->pc = 0x17b4a8u;

    // 0x17b4a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b4a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b4ac: 0x0  nop
    ctx->pc = 0x17b4acu;
    // NOP
    // 0x17b4b0: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x17b4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x17b4b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17b4b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17b4b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b4bc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b4c0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x17b4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x17b4c4u;
}
