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

// Function: entry_0023e13c
// Address: 0x23e13c - 0x23e194
void entry_0023e13c_0x23e13c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023e13c_0x23e13c");
#endif

    ctx->pc = 0x23e13cu;

    // 0x23e13c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e140: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23e140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e144: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23e144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e148: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23e148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23e14c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23e14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23e150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23e150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e154: 0x0  nop
    ctx->pc = 0x23e154u;
    // NOP
    // 0x23e158: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23e158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23e15c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23e15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23e160: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e164: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e168: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23e168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23e16c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e16cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e170: 0x0  nop
    ctx->pc = 0x23e170u;
    // NOP
    // 0x23e174: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23e174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23e178: 0x0  nop
    ctx->pc = 0x23e178u;
    // NOP
    // 0x23e17c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23E17Cu;
    {
        const bool branch_taken_0x23e17c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e17c) {
            ctx->pc = 0x23E194u;
            return;
        }
    }
    ctx->pc = 0x23E184u;
    // 0x23e184: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23e184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e188: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23e188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23e18c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23e18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23e190: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23e190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x23e194u;
}
