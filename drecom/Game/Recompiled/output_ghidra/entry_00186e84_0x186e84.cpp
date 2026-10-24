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

// Function: entry_00186e84
// Address: 0x186e84 - 0x186ed4
void entry_00186e84_0x186e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186e84_0x186e84");
#endif

    ctx->pc = 0x186e84u;

    // 0x186e84: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x186e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186e88: 0x3c024505  lui         $v0, 0x4505
    ctx->pc = 0x186e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17669 << 16));
    // 0x186e8c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x186e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x186e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186e94: 0x0  nop
    ctx->pc = 0x186e94u;
    // NOP
    // 0x186e98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x186e98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186e9c: 0x0  nop
    ctx->pc = 0x186e9cu;
    // NOP
    // 0x186ea0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x186EA0u;
    {
        const bool branch_taken_0x186ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186ea0) {
            ctx->pc = 0x186EE0u;
            return;
        }
    }
    ctx->pc = 0x186EA8u;
    // 0x186ea8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x186ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186eac: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x186eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x186eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186eb4: 0x0  nop
    ctx->pc = 0x186eb4u;
    // NOP
    // 0x186eb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x186eb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186ebc: 0x0  nop
    ctx->pc = 0x186ebcu;
    // NOP
    // 0x186ec0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x186EC0u;
    {
        const bool branch_taken_0x186ec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186ec0) {
            ctx->pc = 0x186ED4u;
            return;
        }
    }
    ctx->pc = 0x186EC8u;
    // 0x186ec8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186ecc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x186ECCu;
    {
        const bool branch_taken_0x186ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ecc) {
            ctx->pc = 0x186EE4u;
            return;
        }
    }
    ctx->pc = 0x186ED4u;
}
