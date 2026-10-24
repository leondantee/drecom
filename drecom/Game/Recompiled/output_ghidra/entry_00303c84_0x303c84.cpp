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

// Function: entry_00303c84
// Address: 0x303c84 - 0x303cd8
void entry_00303c84_0x303c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303c84_0x303c84");
#endif

    ctx->pc = 0x303c84u;

    // 0x303c84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303c88: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x303c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x303c8c: 0x24703390  addiu       $s0, $v1, 0x3390
    ctx->pc = 0x303c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13200));
    // 0x303c90: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303c94: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x303c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x303c98: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x303c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x303c9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303ca0: 0x0  nop
    ctx->pc = 0x303ca0u;
    // NOP
    // 0x303ca4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x303ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x303ca8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x303ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x303cac: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303cb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x303cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x303cb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303cb8: 0x0  nop
    ctx->pc = 0x303cb8u;
    // NOP
    // 0x303cbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303cbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303cc0: 0x0  nop
    ctx->pc = 0x303cc0u;
    // NOP
    // 0x303cc4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x303CC4u;
    {
        const bool branch_taken_0x303cc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303cc4) {
            ctx->pc = 0x303CD8u;
            return;
        }
    }
    ctx->pc = 0x303CCCu;
    // 0x303ccc: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x303cccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x303cd0: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x303cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x303cd4: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x303cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x303cd8u;
}
