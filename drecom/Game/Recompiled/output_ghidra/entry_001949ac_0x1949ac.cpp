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

// Function: entry_001949ac
// Address: 0x1949ac - 0x194a2c
void entry_001949ac_0x1949ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001949ac_0x1949ac");
#endif

    ctx->pc = 0x1949acu;

    // 0x1949ac: 0xa2710000  sb          $s1, 0x0($s3)
    ctx->pc = 0x1949acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1949b0: 0xa2710001  sb          $s1, 0x1($s3)
    ctx->pc = 0x1949b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x1949b4: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1949b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1949b8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1949b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1949bc: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1949bcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1949c0: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1949c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1949c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1949c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1949c8: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x1949c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1949cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1949ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1949d0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1949d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1949d4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1949d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1949d8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1949d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1949dc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1949dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1949e0: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1949e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1949e4: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1949e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1949e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1949e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1949ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1949ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1949f0: 0x0  nop
    ctx->pc = 0x1949f0u;
    // NOP
    // 0x1949f4: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x1949f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1949f8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1949f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1949fc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1949fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x194a00: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x194a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x194a04: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x194a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194a08: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x194a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x194a0c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x194a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x194a10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x194a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194a18: 0x0  nop
    ctx->pc = 0x194a18u;
    // NOP
    // 0x194a1c: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x194a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x194a20: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x194a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194a24: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x194A24u;
    {
        const bool branch_taken_0x194a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194a24) {
            ctx->pc = 0x194F10u;
            return;
        }
    }
    ctx->pc = 0x194A2Cu;
}
