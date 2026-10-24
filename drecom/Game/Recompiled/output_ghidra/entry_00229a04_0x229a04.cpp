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

// Function: entry_00229a04
// Address: 0x229a04 - 0x229a50
void entry_00229a04_0x229a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229a04_0x229a04");
#endif

    ctx->pc = 0x229a04u;

    // 0x229a04: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x229a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229a08: 0x3c03bf86  lui         $v1, 0xBF86
    ctx->pc = 0x229a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49030 << 16));
    // 0x229a0c: 0x34620a92  ori         $v0, $v1, 0xA92
    ctx->pc = 0x229a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x229a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229a14: 0x0  nop
    ctx->pc = 0x229a14u;
    // NOP
    // 0x229a18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229a1c: 0x0  nop
    ctx->pc = 0x229a1cu;
    // NOP
    // 0x229a20: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x229A20u;
    {
        const bool branch_taken_0x229a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229a20) {
            ctx->pc = 0x229A50u;
            return;
        }
    }
    ctx->pc = 0x229A28u;
    // 0x229a28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229a2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229a30: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x229a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229a34: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x229a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x229a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229a3c: 0x0  nop
    ctx->pc = 0x229a3cu;
    // NOP
    // 0x229a40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x229a40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229a44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229a48: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229a4c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x229a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x229a50u;
}
