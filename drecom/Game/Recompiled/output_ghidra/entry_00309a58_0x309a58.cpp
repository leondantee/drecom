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

// Function: entry_00309a58
// Address: 0x309a58 - 0x309aac
void entry_00309a58_0x309a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00309a58_0x309a58");
#endif

    ctx->pc = 0x309a58u;

    // 0x309a58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309a5c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x309a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x309a60: 0x24703520  addiu       $s0, $v1, 0x3520
    ctx->pc = 0x309a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
    // 0x309a64: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x309a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309a68: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x309a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x309a6c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x309a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x309a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309a74: 0x0  nop
    ctx->pc = 0x309a74u;
    // NOP
    // 0x309a78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x309a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x309a7c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x309a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x309a80: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x309a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309a84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x309a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x309a88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309a88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309a8c: 0x0  nop
    ctx->pc = 0x309a8cu;
    // NOP
    // 0x309a90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x309a90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309a94: 0x0  nop
    ctx->pc = 0x309a94u;
    // NOP
    // 0x309a98: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x309A98u;
    {
        const bool branch_taken_0x309a98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309a98) {
            ctx->pc = 0x309AACu;
            return;
        }
    }
    ctx->pc = 0x309AA0u;
    // 0x309aa0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x309aa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x309aa4: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x309aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x309aa8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x309aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x309aacu;
}
