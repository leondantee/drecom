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

// Function: entry_0023cb64
// Address: 0x23cb64 - 0x23cbc8
void entry_0023cb64_0x23cb64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cb64_0x23cb64");
#endif

    ctx->pc = 0x23cb64u;

    // 0x23cb64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cb68: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x23cb68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x23cb6c: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x23CB6Cu;
    {
        const bool branch_taken_0x23cb6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cb6c) {
            ctx->pc = 0x23CC34u;
            return;
        }
    }
    ctx->pc = 0x23CB74u;
    // 0x23cb74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cb78: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x23cb78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x23cb7c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23cb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23cb80: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23cb80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23cb84: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x23cb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x23cb88: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x23CB88u;
    {
        const bool branch_taken_0x23cb88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cb88) {
            ctx->pc = 0x23CBE0u;
            return;
        }
    }
    ctx->pc = 0x23CB90u;
    // 0x23cb90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cb94: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x23cb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cb98: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x23cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x23cb9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cb9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cba0: 0x0  nop
    ctx->pc = 0x23cba0u;
    // NOP
    // 0x23cba4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23cba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cba8: 0x0  nop
    ctx->pc = 0x23cba8u;
    // NOP
    // 0x23cbac: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23CBACu;
    {
        const bool branch_taken_0x23cbac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cbac) {
            ctx->pc = 0x23CBC8u;
            return;
        }
    }
    ctx->pc = 0x23CBB4u;
    // 0x23cbb4: 0x3c03c20c  lui         $v1, 0xC20C
    ctx->pc = 0x23cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49676 << 16));
    // 0x23cbb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cbbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cbc0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cbc4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x23cbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    ctx->pc = 0x23cbc8u;
}
