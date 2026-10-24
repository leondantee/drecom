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

// Function: entry_00162764
// Address: 0x162764 - 0x162794
void entry_00162764_0x162764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162764_0x162764");
#endif

    ctx->pc = 0x162764u;

    // 0x162764: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162768: 0x3c02c03c  lui         $v0, 0xC03C
    ctx->pc = 0x162768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49212 << 16));
    // 0x16276c: 0x34427edd  ori         $v0, $v0, 0x7EDD
    ctx->pc = 0x16276cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32477);
    // 0x162770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162774: 0x0  nop
    ctx->pc = 0x162774u;
    // NOP
    // 0x162778: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16277c: 0x0  nop
    ctx->pc = 0x16277cu;
    // NOP
    // 0x162780: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x162780u;
    {
        const bool branch_taken_0x162780 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162780) {
            ctx->pc = 0x1627F4u;
            return;
        }
    }
    ctx->pc = 0x162788u;
    // 0x162788: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x162788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16278c: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x16278Cu;
    {
        const bool branch_taken_0x16278c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16278c) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x162794u;
}
