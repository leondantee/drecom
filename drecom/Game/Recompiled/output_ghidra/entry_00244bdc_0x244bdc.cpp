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

// Function: entry_00244bdc
// Address: 0x244bdc - 0x244c30
void entry_00244bdc_0x244bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244bdc_0x244bdc");
#endif

    ctx->pc = 0x244bdcu;

    // 0x244bdc: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x244bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x244be0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244be4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244be8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244bec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244bf0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x244bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x244bf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244bf8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x244bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244bfc: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x244bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x244c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244c04: 0x0  nop
    ctx->pc = 0x244c04u;
    // NOP
    // 0x244c08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244c0c: 0x0  nop
    ctx->pc = 0x244c0cu;
    // NOP
    // 0x244c10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x244C10u;
    {
        const bool branch_taken_0x244c10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244c10) {
            ctx->pc = 0x244C30u;
            return;
        }
    }
    ctx->pc = 0x244C18u;
    // 0x244c18: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x244c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x244c1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244c20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244c24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244c28: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244c2c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x244c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    ctx->pc = 0x244c30u;
}
