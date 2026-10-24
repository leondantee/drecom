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

// Function: entry_002023d4
// Address: 0x2023d4 - 0x20240c
void entry_002023d4_0x2023d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002023d4_0x2023d4");
#endif

    ctx->pc = 0x2023d4u;

    // 0x2023d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2023d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2023d8: 0xc4604830  lwc1        $f0, 0x4830($v1)
    ctx->pc = 0x2023d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2023dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2023dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2023e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2023e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2023e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2023e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2023e8: 0x0  nop
    ctx->pc = 0x2023e8u;
    // NOP
    // 0x2023ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2023ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2023f0: 0x0  nop
    ctx->pc = 0x2023f0u;
    // NOP
    // 0x2023f4: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x2023F4u;
    {
        const bool branch_taken_0x2023f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2023f4) {
            ctx->pc = 0x20247Cu;
            return;
        }
    }
    ctx->pc = 0x2023FCu;
    // 0x2023fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2023fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202400: 0xac604844  sw          $zero, 0x4844($v1)
    ctx->pc = 0x202400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18500), GPR_U32(ctx, 0));
    // 0x202404: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x202404u;
    {
        const bool branch_taken_0x202404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202404) {
            ctx->pc = 0x20247Cu;
            return;
        }
    }
    ctx->pc = 0x20240Cu;
}
