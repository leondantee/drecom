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

// Function: entry_002290ac
// Address: 0x2290ac - 0x2290f8
void entry_002290ac_0x2290ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002290ac_0x2290ac");
#endif

    ctx->pc = 0x2290acu;

    // 0x2290ac: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2290acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2290b0: 0x3c033eb2  lui         $v1, 0x3EB2
    ctx->pc = 0x2290b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16050 << 16));
    // 0x2290b4: 0x3462b8c2  ori         $v0, $v1, 0xB8C2
    ctx->pc = 0x2290b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
    // 0x2290b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2290b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2290bc: 0x0  nop
    ctx->pc = 0x2290bcu;
    // NOP
    // 0x2290c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2290c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2290c4: 0x0  nop
    ctx->pc = 0x2290c4u;
    // NOP
    // 0x2290c8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2290C8u;
    {
        const bool branch_taken_0x2290c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2290c8) {
            ctx->pc = 0x2290F8u;
            return;
        }
    }
    ctx->pc = 0x2290D0u;
    // 0x2290d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2290d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2290d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2290d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2290d8: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x2290d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2290dc: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x2290dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x2290e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2290e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2290e4: 0x0  nop
    ctx->pc = 0x2290e4u;
    // NOP
    // 0x2290e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2290e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2290ec: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2290ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2290f0: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x2290f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2290f4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2290f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x2290f8u;
}
