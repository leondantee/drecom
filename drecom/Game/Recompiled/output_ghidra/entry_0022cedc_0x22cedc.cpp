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

// Function: entry_0022cedc
// Address: 0x22cedc - 0x22cf08
void entry_0022cedc_0x22cedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022cedc_0x22cedc");
#endif

    ctx->pc = 0x22cedcu;

    // 0x22cedc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cee0: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x22cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22cee4: 0x3c02bf06  lui         $v0, 0xBF06
    ctx->pc = 0x22cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48902 << 16));
    // 0x22cee8: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x22cee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x22ceec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ceecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cef0: 0x0  nop
    ctx->pc = 0x22cef0u;
    // NOP
    // 0x22cef4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22cef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cefc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22CEFCu;
    {
        const bool branch_taken_0x22cefc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cefc) {
            ctx->pc = 0x22CF08u;
            return;
        }
    }
    ctx->pc = 0x22CF04u;
    // 0x22cf04: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x22cf04u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x22cf08u;
}
