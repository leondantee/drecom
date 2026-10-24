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

// Function: entry_00161978
// Address: 0x161978 - 0x1619b4
void entry_00161978_0x161978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161978_0x161978");
#endif

    ctx->pc = 0x161978u;

    // 0x161978: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x161978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16197c: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x16197cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x161980: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x161980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x161984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161988: 0x0  nop
    ctx->pc = 0x161988u;
    // NOP
    // 0x16198c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16198cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161990: 0x0  nop
    ctx->pc = 0x161990u;
    // NOP
    // 0x161994: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x161994u;
    {
        const bool branch_taken_0x161994 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161994) {
            ctx->pc = 0x1619B4u;
            return;
        }
    }
    ctx->pc = 0x16199Cu;
    // 0x16199c: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x16199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1619a0: 0xe60013b8  swc1        $f0, 0x13B8($s0)
    ctx->pc = 0x1619a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5048), bits); }
    // 0x1619a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1619a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1619a8: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x1619a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x1619ac: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1619ACu;
    {
        const bool branch_taken_0x1619ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1619ac) {
            ctx->pc = 0x161AA0u;
            return;
        }
    }
    ctx->pc = 0x1619B4u;
}
