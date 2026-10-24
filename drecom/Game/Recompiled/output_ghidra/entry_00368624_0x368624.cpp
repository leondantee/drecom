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

// Function: entry_00368624
// Address: 0x368624 - 0x36867c
void entry_00368624_0x368624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00368624_0x368624");
#endif

    ctx->pc = 0x368624u;

    // 0x368624: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x368624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368628: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x368628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36862c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x36862cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x368630: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x368630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x368634: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x368634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368638: 0x0  nop
    ctx->pc = 0x368638u;
    // NOP
    // 0x36863c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36863cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x368640: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x368640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x368644: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x368644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368648: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x368648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36864c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x36864cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x368650: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x368650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368654: 0x0  nop
    ctx->pc = 0x368654u;
    // NOP
    // 0x368658: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x368658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36865c: 0x0  nop
    ctx->pc = 0x36865cu;
    // NOP
    // 0x368660: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x368660u;
    {
        const bool branch_taken_0x368660 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x368660) {
            ctx->pc = 0x36867Cu;
            return;
        }
    }
    ctx->pc = 0x368668u;
    // 0x368668: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x368668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x36866c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36866cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368670: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x368670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368674: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x368674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x368678: 0xa200006e  sb          $zero, 0x6E($s0)
    ctx->pc = 0x368678u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x36867cu;
}
