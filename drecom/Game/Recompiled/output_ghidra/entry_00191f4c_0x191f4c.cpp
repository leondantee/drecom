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

// Function: entry_00191f4c
// Address: 0x191f4c - 0x191fcc
void entry_00191f4c_0x191f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191f4c_0x191f4c");
#endif

    ctx->pc = 0x191f4cu;

    // 0x191f4c: 0xa2710000  sb          $s1, 0x0($s3)
    ctx->pc = 0x191f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x191f50: 0xa2710001  sb          $s1, 0x1($s3)
    ctx->pc = 0x191f50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x191f54: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x191f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191f58: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x191f58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191f5c: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x191f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x191f60: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x191f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191f64: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x191f64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191f68: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x191f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x191f6c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x191f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x191f70: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x191f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191f74: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x191f74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x191f78: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x191f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x191f7c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x191f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191f80: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x191f80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x191f84: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x191f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x191f88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191f90: 0x0  nop
    ctx->pc = 0x191f90u;
    // NOP
    // 0x191f94: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x191f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x191f98: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x191f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191f9c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x191f9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x191fa0: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x191fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x191fa4: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x191fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191fa8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x191fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x191fac: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x191facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x191fb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x191fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x191fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191fb8: 0x0  nop
    ctx->pc = 0x191fb8u;
    // NOP
    // 0x191fbc: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x191fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x191fc0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x191fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191fc4: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x191FC4u;
    {
        const bool branch_taken_0x191fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191fc4) {
            ctx->pc = 0x1924B0u;
            return;
        }
    }
    ctx->pc = 0x191FCCu;
}
