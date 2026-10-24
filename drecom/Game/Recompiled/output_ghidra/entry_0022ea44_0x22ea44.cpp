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

// Function: entry_0022ea44
// Address: 0x22ea44 - 0x22eaa0
void entry_0022ea44_0x22ea44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ea44_0x22ea44");
#endif

    ctx->pc = 0x22ea44u;

    // 0x22ea44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ea48: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ea4c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x22ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x22ea50: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x22ea50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x22ea54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22ea54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ea58: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x22ea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ea5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22ea5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ea60: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x22ea60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x22ea64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ea68: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ea6c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22ea6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ea70: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x22ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x22ea74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22ea74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ea78: 0x0  nop
    ctx->pc = 0x22ea78u;
    // NOP
    // 0x22ea7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ea7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ea80: 0x0  nop
    ctx->pc = 0x22ea80u;
    // NOP
    // 0x22ea84: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22EA84u;
    {
        const bool branch_taken_0x22ea84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ea84) {
            ctx->pc = 0x22EAA0u;
            return;
        }
    }
    ctx->pc = 0x22EA8Cu;
    // 0x22ea8c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x22ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x22ea90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22ea90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ea94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ea98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ea9c: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22ea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    ctx->pc = 0x22eaa0u;
}
