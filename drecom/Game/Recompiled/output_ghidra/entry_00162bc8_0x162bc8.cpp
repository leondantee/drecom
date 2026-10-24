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

// Function: entry_00162bc8
// Address: 0x162bc8 - 0x162c00
void entry_00162bc8_0x162bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162bc8_0x162bc8");
#endif

    ctx->pc = 0x162bc8u;

    // 0x162bc8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162bcc: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x162bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x162bd0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162bd8: 0x0  nop
    ctx->pc = 0x162bd8u;
    // NOP
    // 0x162bdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162be0: 0x0  nop
    ctx->pc = 0x162be0u;
    // NOP
    // 0x162be4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x162BE4u;
    {
        const bool branch_taken_0x162be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162be4) {
            ctx->pc = 0x162C00u;
            return;
        }
    }
    ctx->pc = 0x162BECu;
    // 0x162bec: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x162becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x162bf0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162bf8: 0x0  nop
    ctx->pc = 0x162bf8u;
    // NOP
    // 0x162bfc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x162bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x162c00u;
}
