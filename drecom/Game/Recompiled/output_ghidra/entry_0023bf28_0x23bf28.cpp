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

// Function: entry_0023bf28
// Address: 0x23bf28 - 0x23bf80
void entry_0023bf28_0x23bf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023bf28_0x23bf28");
#endif

    ctx->pc = 0x23bf28u;

    // 0x23bf28: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bf2c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23bf30: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23bf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bf34: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23bf38: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23bf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23bf3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23bf3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bf40: 0x0  nop
    ctx->pc = 0x23bf40u;
    // NOP
    // 0x23bf44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23bf44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23bf48: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23bf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23bf4c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bf50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23bf54: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23bf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bf58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bf58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bf5c: 0x0  nop
    ctx->pc = 0x23bf5cu;
    // NOP
    // 0x23bf60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23bf60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bf64: 0x0  nop
    ctx->pc = 0x23bf64u;
    // NOP
    // 0x23bf68: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23BF68u;
    {
        const bool branch_taken_0x23bf68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bf68) {
            ctx->pc = 0x23BF80u;
            return;
        }
    }
    ctx->pc = 0x23BF70u;
    // 0x23bf70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bf70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bf74: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bf78: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23bf7c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23bf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x23bf80u;
}
