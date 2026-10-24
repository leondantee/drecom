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

// Function: entry_001640c8
// Address: 0x1640c8 - 0x16412c
void entry_001640c8_0x1640c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001640c8_0x1640c8");
#endif

    ctx->pc = 0x1640c8u;

    // 0x1640c8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1640c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1640cc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1640ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1640d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1640d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1640d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1640d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1640d8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1640d8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1640dc: 0x0  nop
    ctx->pc = 0x1640dcu;
    // NOP
    // 0x1640e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1640e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1640e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1640e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1640e8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1640e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1640ec: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1640ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1640f0: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1640f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1640f4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1640f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1640f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1640f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1640fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1640fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164100: 0x0  nop
    ctx->pc = 0x164100u;
    // NOP
    // 0x164104: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164108: 0x0  nop
    ctx->pc = 0x164108u;
    // NOP
    // 0x16410c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16410Cu;
    {
        const bool branch_taken_0x16410c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16410c) {
            ctx->pc = 0x16412Cu;
            return;
        }
    }
    ctx->pc = 0x164114u;
    // 0x164114: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x164114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x164118: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x164118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16411c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16411cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164120: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x164120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164124: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x164124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x164128: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x164128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x16412cu;
}
