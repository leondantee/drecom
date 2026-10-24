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

// Function: caseD_3
// Address: 0x162800 - 0x16284c
void caseD_3_0x162800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x162800");
#endif

    ctx->pc = 0x162800u;

    // 0x162800: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162808: 0x0  nop
    ctx->pc = 0x162808u;
    // NOP
    // 0x16280c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16280cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162810: 0x0  nop
    ctx->pc = 0x162810u;
    // NOP
    // 0x162814: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x162814u;
    {
        const bool branch_taken_0x162814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162814) {
            ctx->pc = 0x16287Cu;
            return;
        }
    }
    ctx->pc = 0x16281Cu;
    // 0x16281c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x16281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162820: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x162820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x162824: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16282c: 0x0  nop
    ctx->pc = 0x16282cu;
    // NOP
    // 0x162830: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162830u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162834: 0x0  nop
    ctx->pc = 0x162834u;
    // NOP
    // 0x162838: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x162838u;
    {
        const bool branch_taken_0x162838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162838) {
            ctx->pc = 0x16284Cu;
            return;
        }
    }
    ctx->pc = 0x162840u;
    // 0x162840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162844: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x162844u;
    {
        const bool branch_taken_0x162844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162844) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x16284Cu;
}
