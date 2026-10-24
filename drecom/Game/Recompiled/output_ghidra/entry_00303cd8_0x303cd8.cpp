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

// Function: entry_00303cd8
// Address: 0x303cd8 - 0x303d2c
void entry_00303cd8_0x303cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303cd8_0x303cd8");
#endif

    ctx->pc = 0x303cd8u;

    // 0x303cd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303cdc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x303cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x303ce0: 0x24703520  addiu       $s0, $v1, 0x3520
    ctx->pc = 0x303ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
    // 0x303ce4: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303ce8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x303ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x303cec: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x303cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x303cf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303cf4: 0x0  nop
    ctx->pc = 0x303cf4u;
    // NOP
    // 0x303cf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x303cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x303cfc: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x303cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x303d00: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303d04: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x303d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x303d08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303d0c: 0x0  nop
    ctx->pc = 0x303d0cu;
    // NOP
    // 0x303d10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303d14: 0x0  nop
    ctx->pc = 0x303d14u;
    // NOP
    // 0x303d18: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x303D18u;
    {
        const bool branch_taken_0x303d18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303d18) {
            ctx->pc = 0x303D2Cu;
            return;
        }
    }
    ctx->pc = 0x303D20u;
    // 0x303d20: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x303d20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x303d24: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x303d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x303d28: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x303d28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x303d2cu;
}
