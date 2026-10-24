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

// Function: entry_002801b8
// Address: 0x2801b8 - 0x280204
void entry_002801b8_0x2801b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002801b8_0x2801b8");
#endif

    ctx->pc = 0x2801b8u;

    // 0x2801b8: 0x2e220078  sltiu       $v0, $s1, 0x78
    ctx->pc = 0x2801b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
    // 0x2801bc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2801BCu;
    {
        const bool branch_taken_0x2801bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2801bc) {
            ctx->pc = 0x2801A4u;
            return;
        }
    }
    ctx->pc = 0x2801C4u;
    // 0x2801c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2801c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2801c8: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x2801c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x2801cc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2801ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2801d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2801d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2801d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2801d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2801d8: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x2801d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x2801dc: 0xc60001a4  lwc1        $f0, 0x1A4($s0)
    ctx->pc = 0x2801dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2801e0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2801e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2801e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2801e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2801e8: 0x0  nop
    ctx->pc = 0x2801e8u;
    // NOP
    // 0x2801ec: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2801ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2801f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2801f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2801f4: 0x0  nop
    ctx->pc = 0x2801f4u;
    // NOP
    // 0x2801f8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2801f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2801fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2801FCu;
    {
        const bool branch_taken_0x2801fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2801fc) {
            ctx->pc = 0x280258u;
            return;
        }
    }
    ctx->pc = 0x280204u;
}
