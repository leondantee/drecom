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

// Function: entry_001ce630
// Address: 0x1ce630 - 0x1ce660
void entry_001ce630_0x1ce630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce630_0x1ce630");
#endif

    ctx->pc = 0x1ce630u;

    // 0x1ce630: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1ce630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce634: 0x3c034016  lui         $v1, 0x4016
    ctx->pc = 0x1ce634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16406 << 16));
    // 0x1ce638: 0x3463cbe4  ori         $v1, $v1, 0xCBE4
    ctx->pc = 0x1ce638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52196);
    // 0x1ce63c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce63cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce640: 0x0  nop
    ctx->pc = 0x1ce640u;
    // NOP
    // 0x1ce644: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ce644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce648: 0x0  nop
    ctx->pc = 0x1ce648u;
    // NOP
    // 0x1ce64c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE64Cu;
    {
        const bool branch_taken_0x1ce64c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce64c) {
            ctx->pc = 0x1CE660u;
            return;
        }
    }
    ctx->pc = 0x1CE654u;
    // 0x1ce654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce658: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce65c: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1ce65cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
    ctx->pc = 0x1ce660u;
}
