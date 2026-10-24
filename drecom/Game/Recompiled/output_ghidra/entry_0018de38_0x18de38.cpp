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

// Function: entry_0018de38
// Address: 0x18de38 - 0x18de64
void entry_0018de38_0x18de38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018de38_0x18de38");
#endif

    ctx->pc = 0x18de38u;

    // 0x18de38: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x18de38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18de3c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18de3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18de40: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x18de40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x18de44: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18de44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18de48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18de48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18de4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18de4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18de50: 0x0  nop
    ctx->pc = 0x18de50u;
    // NOP
    // 0x18de54: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x18de54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x18de58: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x18de58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18de5c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x18de5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18de60: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x18de60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    ctx->pc = 0x18de64u;
}
