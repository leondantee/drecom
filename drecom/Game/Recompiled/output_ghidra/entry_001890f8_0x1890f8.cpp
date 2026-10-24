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

// Function: entry_001890f8
// Address: 0x1890f8 - 0x189154
void entry_001890f8_0x1890f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001890f8_0x1890f8");
#endif

    ctx->pc = 0x1890f8u;

    // 0x1890f8: 0xc6210180  lwc1        $f1, 0x180($s1)
    ctx->pc = 0x1890f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1890fc: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1890fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189100: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x189100u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189104: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x189104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
    // 0x189108: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x189108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x18910c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18910cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189110: 0x0  nop
    ctx->pc = 0x189110u;
    // NOP
    // 0x189114: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x189114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x189118: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x189118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x18911c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x18911cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189120: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x189120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x189124: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x189124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x189128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18912c: 0x0  nop
    ctx->pc = 0x18912cu;
    // NOP
    // 0x189130: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x189130u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189134: 0x0  nop
    ctx->pc = 0x189134u;
    // NOP
    // 0x189138: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x189138u;
    {
        const bool branch_taken_0x189138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189138) {
            ctx->pc = 0x189154u;
            return;
        }
    }
    ctx->pc = 0x189140u;
    // 0x189140: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x189140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x189144: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x189144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x189148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18914c: 0x0  nop
    ctx->pc = 0x18914cu;
    // NOP
    // 0x189150: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x189150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->pc = 0x189154u;
}
