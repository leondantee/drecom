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

// Function: entry_002380ec
// Address: 0x2380ec - 0x238160
void entry_002380ec_0x2380ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002380ec_0x2380ec");
#endif

    ctx->pc = 0x2380ecu;

    // 0x2380ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2380ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2380f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2380f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2380f4: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x2380f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2380f8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2380f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2380fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2380fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x238100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238104: 0x0  nop
    ctx->pc = 0x238104u;
    // NOP
    // 0x238108: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x238108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23810c: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x23810cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x238110: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238114: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238118: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x238118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23811c: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x23811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
    // 0x238120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238124: 0x0  nop
    ctx->pc = 0x238124u;
    // NOP
    // 0x238128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23812c: 0x0  nop
    ctx->pc = 0x23812cu;
    // NOP
    // 0x238130: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x238130u;
    {
        const bool branch_taken_0x238130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238130) {
            ctx->pc = 0x238160u;
            return;
        }
    }
    ctx->pc = 0x238138u;
    // 0x238138: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23813c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23813cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238140: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x238140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x238144: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x238144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x238148: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x238148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x23814c: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x23814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
    // 0x238150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238154: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238158: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23815c: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x23815cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    ctx->pc = 0x238160u;
}
