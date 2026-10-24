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

// Function: entry_002024ec
// Address: 0x2024ec - 0x202524
void entry_002024ec_0x2024ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002024ec_0x2024ec");
#endif

    ctx->pc = 0x2024ecu;

    // 0x2024ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2024ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2024f0: 0xc460482c  lwc1        $f0, 0x482C($v1)
    ctx->pc = 0x2024f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2024f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2024f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2024f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2024f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2024fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2024fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202500: 0x0  nop
    ctx->pc = 0x202500u;
    // NOP
    // 0x202504: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x202504u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202508: 0x0  nop
    ctx->pc = 0x202508u;
    // NOP
    // 0x20250c: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x20250Cu;
    {
        const bool branch_taken_0x20250c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20250c) {
            ctx->pc = 0x202594u;
            return;
        }
    }
    ctx->pc = 0x202514u;
    // 0x202514: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202518: 0xac604848  sw          $zero, 0x4848($v1)
    ctx->pc = 0x202518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18504), GPR_U32(ctx, 0));
    // 0x20251c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x20251Cu;
    {
        const bool branch_taken_0x20251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20251c) {
            ctx->pc = 0x202594u;
            return;
        }
    }
    ctx->pc = 0x202524u;
}
