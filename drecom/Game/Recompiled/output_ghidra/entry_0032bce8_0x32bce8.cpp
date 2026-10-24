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

// Function: entry_0032bce8
// Address: 0x32bce8 - 0x32bd1c
void entry_0032bce8_0x32bce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032bce8_0x32bce8");
#endif

    ctx->pc = 0x32bce8u;

    // 0x32bce8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x32bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32bcec: 0xc4415e00  lwc1        $f1, 0x5E00($v0)
    ctx->pc = 0x32bcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32bcf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32bcf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bcf4: 0x0  nop
    ctx->pc = 0x32bcf4u;
    // NOP
    // 0x32bcf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32bcf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32bcfc: 0x0  nop
    ctx->pc = 0x32bcfcu;
    // NOP
    // 0x32bd00: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x32BD00u;
    {
        const bool branch_taken_0x32bd00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32bd00) {
            ctx->pc = 0x32BD1Cu;
            return;
        }
    }
    ctx->pc = 0x32BD08u;
    // 0x32bd08: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x32bd08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x32bd0c: 0xc4c05e00  lwc1        $f0, 0x5E00($a2)
    ctx->pc = 0x32bd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bd10: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x32bd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x32bd14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32BD14u;
    {
        const bool branch_taken_0x32bd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bd14) {
            ctx->pc = 0x32BD28u;
            return;
        }
    }
    ctx->pc = 0x32BD1Cu;
}
