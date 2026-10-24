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

// Function: entry_00162794
// Address: 0x162794 - 0x1627c4
void entry_00162794_0x162794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162794_0x162794");
#endif

    ctx->pc = 0x162794u;

    // 0x162794: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162798: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x162798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x16279c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16279cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1627a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1627a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1627a4: 0x0  nop
    ctx->pc = 0x1627a4u;
    // NOP
    // 0x1627a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1627a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1627ac: 0x0  nop
    ctx->pc = 0x1627acu;
    // NOP
    // 0x1627b0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1627B0u;
    {
        const bool branch_taken_0x1627b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1627b0) {
            ctx->pc = 0x1627C4u;
            return;
        }
    }
    ctx->pc = 0x1627B8u;
    // 0x1627b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1627b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1627bc: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1627BCu;
    {
        const bool branch_taken_0x1627bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1627bc) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x1627C4u;
}
