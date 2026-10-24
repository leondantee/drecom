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

// Function: entry_002296ec
// Address: 0x2296ec - 0x229760
void entry_002296ec_0x2296ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002296ec_0x2296ec");
#endif

    ctx->pc = 0x2296ecu;

    // 0x2296ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2296ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2296f0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2296f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2296f4: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x2296f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
    // 0x2296f8: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x2296f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2296fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2296fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229700: 0x0  nop
    ctx->pc = 0x229700u;
    // NOP
    // 0x229704: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229708: 0x0  nop
    ctx->pc = 0x229708u;
    // NOP
    // 0x22970c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x22970Cu;
    {
        const bool branch_taken_0x22970c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22970c) {
            ctx->pc = 0x229760u;
            return;
        }
    }
    ctx->pc = 0x229714u;
    // 0x229714: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x229714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x229718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22971c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229720: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229724: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x229724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x229728: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22972c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x22972cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x229730: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x229730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x229734: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x229734u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x229738: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x229738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22973c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x22973Cu;
    {
        const bool branch_taken_0x22973c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22973c) {
            ctx->pc = 0x2297C8u;
            return;
        }
    }
    ctx->pc = 0x229744u;
    // 0x229744: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x229744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x229748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22974c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229754: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x229754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x229758: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x229758u;
    {
        const bool branch_taken_0x229758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229758) {
            ctx->pc = 0x2297C8u;
            return;
        }
    }
    ctx->pc = 0x229760u;
}
