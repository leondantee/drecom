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

// Function: entry_001aa61c
// Address: 0x1aa61c - 0x1aa660
void entry_001aa61c_0x1aa61c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa61c_0x1aa61c");
#endif

    ctx->pc = 0x1aa61cu;

    // 0x1aa61c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa620: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x1aa620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa624: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa628: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1aa628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa62c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa62cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa630: 0x0  nop
    ctx->pc = 0x1aa630u;
    // NOP
    // 0x1aa634: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1AA634u;
    {
        const bool branch_taken_0x1aa634 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa634) {
            ctx->pc = 0x1AA660u;
            return;
        }
    }
    ctx->pc = 0x1AA63Cu;
    // 0x1aa63c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa640: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1aa640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa644: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa648: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1aa648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1aa64c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa650: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1aa650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa658: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa65c: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x1aa65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    ctx->pc = 0x1aa660u;
}
