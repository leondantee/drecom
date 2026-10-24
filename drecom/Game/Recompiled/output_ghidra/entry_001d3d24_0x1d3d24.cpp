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

// Function: entry_001d3d24
// Address: 0x1d3d24 - 0x1d3d5c
void entry_001d3d24_0x1d3d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3d24_0x1d3d24");
#endif

    ctx->pc = 0x1d3d24u;

    // 0x1d3d24: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x1d3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d3d28: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1d3d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1d3d2c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D3D2Cu;
    {
        const bool branch_taken_0x1d3d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3d2c) {
            ctx->pc = 0x1D3D5Cu;
            return;
        }
    }
    ctx->pc = 0x1D3D34u;
    // 0x1d3d34: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x1d3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d3d38: 0xa7a2015a  sh          $v0, 0x15A($sp)
    ctx->pc = 0x1d3d38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d3d3c: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x1d3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d3d40: 0xa7a2015c  sh          $v0, 0x15C($sp)
    ctx->pc = 0x1d3d40u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d3d44: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1d3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x1d3d48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3d4c: 0x0  nop
    ctx->pc = 0x1d3d4cu;
    // NOP
    // 0x1d3d50: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d3d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1d3d54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3D54u;
    {
        const bool branch_taken_0x1d3d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3d54) {
            ctx->pc = 0x1D3D70u;
            return;
        }
    }
    ctx->pc = 0x1D3D5Cu;
}
