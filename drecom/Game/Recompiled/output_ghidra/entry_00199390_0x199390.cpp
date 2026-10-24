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

// Function: entry_00199390
// Address: 0x199390 - 0x1993e8
void entry_00199390_0x199390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199390_0x199390");
#endif

    ctx->pc = 0x199390u;

    // 0x199390: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199394: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x199394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199398: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x199398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19939c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19939cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1993a0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1993a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1993a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1993a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1993a8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1993a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1993ac: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x1993acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x1993b0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1993b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1993b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1993b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1993b8: 0x0  nop
    ctx->pc = 0x1993b8u;
    // NOP
    // 0x1993bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1993bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1993c0: 0x0  nop
    ctx->pc = 0x1993c0u;
    // NOP
    // 0x1993c4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1993C4u;
    {
        const bool branch_taken_0x1993c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1993c4) {
            ctx->pc = 0x1993E8u;
            return;
        }
    }
    ctx->pc = 0x1993CCu;
    // 0x1993cc: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1993ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1993d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1993d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1993d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1993d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1993d8: 0x0  nop
    ctx->pc = 0x1993d8u;
    // NOP
    // 0x1993dc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1993dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1993e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1993E0u;
    {
        const bool branch_taken_0x1993e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1993e0) {
            ctx->pc = 0x1993FCu;
            return;
        }
    }
    ctx->pc = 0x1993E8u;
}
