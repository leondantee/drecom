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

// Function: entry_001d44e0
// Address: 0x1d44e0 - 0x1d4518
void entry_001d44e0_0x1d44e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d44e0_0x1d44e0");
#endif

    ctx->pc = 0x1d44e0u;

    // 0x1d44e0: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x1d44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1d44e4: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1d44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1d44e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D44E8u;
    {
        const bool branch_taken_0x1d44e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d44e8) {
            ctx->pc = 0x1D4518u;
            return;
        }
    }
    ctx->pc = 0x1D44F0u;
    // 0x1d44f0: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x1d44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d44f4: 0xa7a2015a  sh          $v0, 0x15A($sp)
    ctx->pc = 0x1d44f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d44f8: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x1d44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d44fc: 0xa7a2015c  sh          $v0, 0x15C($sp)
    ctx->pc = 0x1d44fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d4500: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1d4500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x1d4504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4508: 0x0  nop
    ctx->pc = 0x1d4508u;
    // NOP
    // 0x1d450c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d450cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1d4510: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4510u;
    {
        const bool branch_taken_0x1d4510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4510) {
            ctx->pc = 0x1D452Cu;
            return;
        }
    }
    ctx->pc = 0x1D4518u;
}
