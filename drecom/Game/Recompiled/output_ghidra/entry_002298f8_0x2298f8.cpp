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

// Function: entry_002298f8
// Address: 0x2298f8 - 0x229944
void entry_002298f8_0x2298f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002298f8_0x2298f8");
#endif

    ctx->pc = 0x2298f8u;

    // 0x2298f8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2298f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2298fc: 0x3c043eb2  lui         $a0, 0x3EB2
    ctx->pc = 0x2298fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16050 << 16));
    // 0x229900: 0x3482b8c2  ori         $v0, $a0, 0xB8C2
    ctx->pc = 0x229900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)47298);
    // 0x229904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229908: 0x0  nop
    ctx->pc = 0x229908u;
    // NOP
    // 0x22990c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22990cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229910: 0x0  nop
    ctx->pc = 0x229910u;
    // NOP
    // 0x229914: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x229914u;
    {
        const bool branch_taken_0x229914 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229914) {
            ctx->pc = 0x229944u;
            return;
        }
    }
    ctx->pc = 0x22991Cu;
    // 0x22991c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229920: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x229920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229924: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x229924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229928: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x229928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x22992c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22992cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229930: 0x0  nop
    ctx->pc = 0x229930u;
    // NOP
    // 0x229934: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x229934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x229938: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22993c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229940: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x229940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x229944u;
}
