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

// Function: entry_00208f90
// Address: 0x208f90 - 0x209004
void entry_00208f90_0x208f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208f90_0x208f90");
#endif

    ctx->pc = 0x208f90u;

    // 0x208f90: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x208f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208f94: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x208f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x208f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208f9c: 0x0  nop
    ctx->pc = 0x208f9cu;
    // NOP
    // 0x208fa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x208fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208fa4: 0x0  nop
    ctx->pc = 0x208fa4u;
    // NOP
    // 0x208fa8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x208FA8u;
    {
        const bool branch_taken_0x208fa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208fa8) {
            ctx->pc = 0x209004u;
            return;
        }
    }
    ctx->pc = 0x208FB0u;
    // 0x208fb0: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x208fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208fb4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x208fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x208fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208fbc: 0x0  nop
    ctx->pc = 0x208fbcu;
    // NOP
    // 0x208fc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x208fc4: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x208fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x208fc8: 0xc60101a4  lwc1        $f1, 0x1A4($s0)
    ctx->pc = 0x208fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208fcc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x208fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x208fd0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x208fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x208fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208fd8: 0x0  nop
    ctx->pc = 0x208fd8u;
    // NOP
    // 0x208fdc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x208fe0: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x208fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x208fe4: 0xc60101a8  lwc1        $f1, 0x1A8($s0)
    ctx->pc = 0x208fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208fe8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x208fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x208fec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208ff0: 0x0  nop
    ctx->pc = 0x208ff0u;
    // NOP
    // 0x208ff4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x208ff8: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x208ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x208ffc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x208FFCu;
    {
        const bool branch_taken_0x208ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208ffc) {
            ctx->pc = 0x209030u;
            return;
        }
    }
    ctx->pc = 0x209004u;
}
