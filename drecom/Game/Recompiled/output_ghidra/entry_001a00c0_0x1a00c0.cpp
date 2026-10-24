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

// Function: entry_001a00c0
// Address: 0x1a00c0 - 0x1a0120
void entry_001a00c0_0x1a00c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a00c0_0x1a00c0");
#endif

    ctx->pc = 0x1a00c0u;

    // 0x1a00c0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1a00c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a00c4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1a00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1a00c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a00c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1a00cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a00ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a00d0: 0x0  nop
    ctx->pc = 0x1a00d0u;
    // NOP
    // 0x1a00d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a00d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a00d8: 0x0  nop
    ctx->pc = 0x1a00d8u;
    // NOP
    // 0x1a00dc: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1A00DCu;
    {
        const bool branch_taken_0x1a00dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a00dc) {
            ctx->pc = 0x1A0148u;
            return;
        }
    }
    ctx->pc = 0x1A00E4u;
    // 0x1a00e4: 0x26e2fffb  addiu       $v0, $s7, -0x5
    ctx->pc = 0x1a00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967291));
    // 0x1a00e8: 0x2be3c  dsll32      $s7, $v0, 24
    ctx->pc = 0x1a00e8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a00ec: 0x17be3f  dsra32      $s7, $s7, 24
    ctx->pc = 0x1a00ecu;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
    // 0x1a00f0: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1a00f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a00f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a00f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a00f8: 0x0  nop
    ctx->pc = 0x1a00f8u;
    // NOP
    // 0x1a00fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a00fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0100: 0x0  nop
    ctx->pc = 0x1a0100u;
    // NOP
    // 0x1a0104: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0104u;
    {
        const bool branch_taken_0x1a0104 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0104) {
            ctx->pc = 0x1A0120u;
            return;
        }
    }
    ctx->pc = 0x1A010Cu;
    // 0x1a010c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a010cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0110: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a0110u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a0114: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1a0114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1a0118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0118u;
    {
        const bool branch_taken_0x1a0118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0118) {
            ctx->pc = 0x1A0128u;
            return;
        }
    }
    ctx->pc = 0x1A0120u;
}
