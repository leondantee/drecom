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

// Function: caseD_2
// Address: 0x1626e8 - 0x162734
void caseD_2_0x1626e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1626e8");
#endif

    ctx->pc = 0x1626e8u;

    // 0x1626e8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1626e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1626ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1626ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1626f0: 0x0  nop
    ctx->pc = 0x1626f0u;
    // NOP
    // 0x1626f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1626f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1626f8: 0x0  nop
    ctx->pc = 0x1626f8u;
    // NOP
    // 0x1626fc: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1626FCu;
    {
        const bool branch_taken_0x1626fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1626fc) {
            ctx->pc = 0x162794u;
            return;
        }
    }
    ctx->pc = 0x162704u;
    // 0x162704: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162708: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x162708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x16270c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16270cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162714: 0x0  nop
    ctx->pc = 0x162714u;
    // NOP
    // 0x162718: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16271c: 0x0  nop
    ctx->pc = 0x16271cu;
    // NOP
    // 0x162720: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x162720u;
    {
        const bool branch_taken_0x162720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162720) {
            ctx->pc = 0x162734u;
            return;
        }
    }
    ctx->pc = 0x162728u;
    // 0x162728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16272c: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x16272Cu;
    {
        const bool branch_taken_0x16272c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16272c) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x162734u;
}
