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

// Function: entry_00368b44
// Address: 0x368b44 - 0x368ba0
void entry_00368b44_0x368b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00368b44_0x368b44");
#endif

    ctx->pc = 0x368b44u;

    // 0x368b44: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x368b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368b48: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x368b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x368b4c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x368b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x368b50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x368b50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368b54: 0x0  nop
    ctx->pc = 0x368b54u;
    // NOP
    // 0x368b58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x368b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x368b5c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x368b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x368b60: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x368b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x368b64: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x368b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x368b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x368b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368b6c: 0x0  nop
    ctx->pc = 0x368b6cu;
    // NOP
    // 0x368b70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x368b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368b74: 0x0  nop
    ctx->pc = 0x368b74u;
    // NOP
    // 0x368b78: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x368B78u;
    {
        const bool branch_taken_0x368b78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x368b78) {
            ctx->pc = 0x368BA0u;
            return;
        }
    }
    ctx->pc = 0x368B80u;
    // 0x368b80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x368b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x368b84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x368b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368b88: 0x0  nop
    ctx->pc = 0x368b88u;
    // NOP
    // 0x368b8c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x368b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x368b90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x368b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368b94: 0xa0600011  sb          $zero, 0x11($v1)
    ctx->pc = 0x368b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x368b98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x368b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368b9c: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x368b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x368ba0u;
}
