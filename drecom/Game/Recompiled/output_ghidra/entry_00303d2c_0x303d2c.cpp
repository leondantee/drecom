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

// Function: entry_00303d2c
// Address: 0x303d2c - 0x303d80
void entry_00303d2c_0x303d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303d2c_0x303d2c");
#endif

    ctx->pc = 0x303d2cu;

    // 0x303d2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303d30: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x303d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x303d34: 0x24703070  addiu       $s0, $v1, 0x3070
    ctx->pc = 0x303d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12400));
    // 0x303d38: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303d3c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x303d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x303d40: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x303d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x303d44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303d44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303d48: 0x0  nop
    ctx->pc = 0x303d48u;
    // NOP
    // 0x303d4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x303d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x303d50: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x303d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x303d54: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303d58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x303d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x303d5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303d60: 0x0  nop
    ctx->pc = 0x303d60u;
    // NOP
    // 0x303d64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303d68: 0x0  nop
    ctx->pc = 0x303d68u;
    // NOP
    // 0x303d6c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x303D6Cu;
    {
        const bool branch_taken_0x303d6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303d6c) {
            ctx->pc = 0x303D80u;
            return;
        }
    }
    ctx->pc = 0x303D74u;
    // 0x303d74: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x303d74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x303d78: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x303d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x303d7c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x303d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x303d80u;
}
