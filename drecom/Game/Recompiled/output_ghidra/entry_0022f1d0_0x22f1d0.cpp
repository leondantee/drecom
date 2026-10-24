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

// Function: entry_0022f1d0
// Address: 0x22f1d0 - 0x22f1f0
void entry_0022f1d0_0x22f1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f1d0_0x22f1d0");
#endif

    ctx->pc = 0x22f1d0u;

    // 0x22f1d0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f1d4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f1d8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x22f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x22f1dc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x22f1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x22f1e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f1e4: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x22f1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f1e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22f1e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22f1ec: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x22f1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    ctx->pc = 0x22f1f0u;
}
