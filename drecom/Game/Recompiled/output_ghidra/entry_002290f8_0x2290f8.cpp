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

// Function: entry_002290f8
// Address: 0x2290f8 - 0x229144
void entry_002290f8_0x2290f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002290f8_0x2290f8");
#endif

    ctx->pc = 0x2290f8u;

    // 0x2290f8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2290f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2290fc: 0x3c02beb2  lui         $v0, 0xBEB2
    ctx->pc = 0x2290fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48818 << 16));
    // 0x229100: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x229100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x229104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229108: 0x0  nop
    ctx->pc = 0x229108u;
    // NOP
    // 0x22910c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22910cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229110: 0x0  nop
    ctx->pc = 0x229110u;
    // NOP
    // 0x229114: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x229114u;
    {
        const bool branch_taken_0x229114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229114) {
            ctx->pc = 0x229144u;
            return;
        }
    }
    ctx->pc = 0x22911Cu;
    // 0x22911c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x22911cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229120: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x229120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x229124: 0xc4a1006c  lwc1        $f1, 0x6C($a1)
    ctx->pc = 0x229124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229128: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x229128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x22912c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22912cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229130: 0x0  nop
    ctx->pc = 0x229130u;
    // NOP
    // 0x229134: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x229134u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229138: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22913c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229140: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x229140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x229144u;
}
