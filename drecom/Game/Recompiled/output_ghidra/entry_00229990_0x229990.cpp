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

// Function: entry_00229990
// Address: 0x229990 - 0x229a04
void entry_00229990_0x229990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229990_0x229990");
#endif

    ctx->pc = 0x229990u;

    // 0x229990: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x229990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229994: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x229994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x229998: 0xc4a1006c  lwc1        $f1, 0x6C($a1)
    ctx->pc = 0x229998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22999c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x22999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2299a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2299a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2299a4: 0x0  nop
    ctx->pc = 0x2299a4u;
    // NOP
    // 0x2299a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2299a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2299ac: 0x0  nop
    ctx->pc = 0x2299acu;
    // NOP
    // 0x2299b0: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x2299B0u;
    {
        const bool branch_taken_0x2299b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2299b0) {
            ctx->pc = 0x229A50u;
            return;
        }
    }
    ctx->pc = 0x2299B8u;
    // 0x2299b8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2299b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2299bc: 0x3c053f86  lui         $a1, 0x3F86
    ctx->pc = 0x2299bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16262 << 16));
    // 0x2299c0: 0x34a30a92  ori         $v1, $a1, 0xA92
    ctx->pc = 0x2299c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2706);
    // 0x2299c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2299c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2299c8: 0x0  nop
    ctx->pc = 0x2299c8u;
    // NOP
    // 0x2299cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2299ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2299d0: 0x0  nop
    ctx->pc = 0x2299d0u;
    // NOP
    // 0x2299d4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2299D4u;
    {
        const bool branch_taken_0x2299d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2299d4) {
            ctx->pc = 0x229A04u;
            return;
        }
    }
    ctx->pc = 0x2299DCu;
    // 0x2299dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2299dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2299e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2299e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2299e4: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x2299e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2299e8: 0x3c054248  lui         $a1, 0x4248
    ctx->pc = 0x2299e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16968 << 16));
    // 0x2299ec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2299ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2299f0: 0x0  nop
    ctx->pc = 0x2299f0u;
    // NOP
    // 0x2299f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2299f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2299f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2299f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2299fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2299fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229a00: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x229a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x229a04u;
}
