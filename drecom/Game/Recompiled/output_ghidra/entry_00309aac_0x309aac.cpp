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

// Function: entry_00309aac
// Address: 0x309aac - 0x309b00
void entry_00309aac_0x309aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00309aac_0x309aac");
#endif

    ctx->pc = 0x309aacu;

    // 0x309aac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x309aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x309ab0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x309ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x309ab4: 0x24703070  addiu       $s0, $v1, 0x3070
    ctx->pc = 0x309ab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12400));
    // 0x309ab8: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x309ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309abc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x309abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x309ac0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x309ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x309ac4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309ac8: 0x0  nop
    ctx->pc = 0x309ac8u;
    // NOP
    // 0x309acc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x309accu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x309ad0: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x309ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x309ad4: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x309ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309ad8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x309ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x309adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309ae0: 0x0  nop
    ctx->pc = 0x309ae0u;
    // NOP
    // 0x309ae4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x309ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309ae8: 0x0  nop
    ctx->pc = 0x309ae8u;
    // NOP
    // 0x309aec: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x309AECu;
    {
        const bool branch_taken_0x309aec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309aec) {
            ctx->pc = 0x309B00u;
            return;
        }
    }
    ctx->pc = 0x309AF4u;
    // 0x309af4: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x309af4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x309af8: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x309af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x309afc: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x309afcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x309b00u;
}
