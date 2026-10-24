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

// Function: entry_00280330
// Address: 0x280330 - 0x2803a0
void entry_00280330_0x280330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00280330_0x280330");
#endif

    ctx->pc = 0x280330u;

    // 0x280330: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x280330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280334: 0x3c0245bb  lui         $v0, 0x45BB
    ctx->pc = 0x280334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17851 << 16));
    // 0x280338: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x280338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x28033c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28033cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280340: 0x0  nop
    ctx->pc = 0x280340u;
    // NOP
    // 0x280344: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x280344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280348: 0x0  nop
    ctx->pc = 0x280348u;
    // NOP
    // 0x28034c: 0x4501ffcd  bc1t        . + 4 + (-0x33 << 2)
    ctx->pc = 0x28034Cu;
    {
        const bool branch_taken_0x28034c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28034c) {
            ctx->pc = 0x280284u;
            return;
        }
    }
    ctx->pc = 0x280354u;
    // 0x280354: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x280354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x280358: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x280358u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x28035c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28035cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x280360: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x280360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x280364: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x280364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x280368: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x280368u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x28036c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x28036cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280370: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x280370u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x280374: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x280374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x280378: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x280378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28037c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x28037cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280380: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x280380u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x280384: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280388: 0x8c22dbc8  lw          $v0, -0x2438($at)
    ctx->pc = 0x280388u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x28038c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x28038cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x280390: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x280390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x280394: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x280394u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC8u, _value); } while (0);
    // 0x280398: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x280398u;
    {
        const bool branch_taken_0x280398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280398) {
            ctx->pc = 0x2803B0u;
            return;
        }
    }
    ctx->pc = 0x2803A0u;
}
