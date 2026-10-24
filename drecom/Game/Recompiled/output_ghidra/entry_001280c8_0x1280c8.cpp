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

// Function: entry_001280c8
// Address: 0x1280c8 - 0x128138
void entry_001280c8_0x1280c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001280c8_0x1280c8");
#endif

    ctx->pc = 0x1280c8u;

    // 0x1280c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1280c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1280cc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1280ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1280d0: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1280d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x1280d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1280d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1280d8: 0x0  nop
    ctx->pc = 0x1280d8u;
    // NOP
    // 0x1280dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1280dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1280e0: 0x0  nop
    ctx->pc = 0x1280e0u;
    // NOP
    // 0x1280e4: 0x45000056  bc1f        . + 4 + (0x56 << 2)
    ctx->pc = 0x1280E4u;
    {
        const bool branch_taken_0x1280e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1280e4) {
            ctx->pc = 0x128240u;
            return;
        }
    }
    ctx->pc = 0x1280ECu;
    // 0x1280ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1280ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1280f0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1280f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1280f4: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1280f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1280f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1280f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1280fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1280fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128100: 0x0  nop
    ctx->pc = 0x128100u;
    // NOP
    // 0x128104: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x128104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128108: 0x0  nop
    ctx->pc = 0x128108u;
    // NOP
    // 0x12810c: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x12810Cu;
    {
        const bool branch_taken_0x12810c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12810c) {
            ctx->pc = 0x128188u;
            return;
        }
    }
    ctx->pc = 0x128114u;
    // 0x128114: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x128114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x128118: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x128118u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x12811c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x12811cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x128120: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128120u;
    {
        const bool branch_taken_0x128120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128120) {
            ctx->pc = 0x128138u;
            return;
        }
    }
    ctx->pc = 0x128128u;
    // 0x128128: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x128128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12812c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x12812cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x128130: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x128130u;
    {
        const bool branch_taken_0x128130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128130) {
            ctx->pc = 0x128188u;
            return;
        }
    }
    ctx->pc = 0x128138u;
}
