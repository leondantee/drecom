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

// Function: entry_00372dcc
// Address: 0x372dcc - 0x372df4
void entry_00372dcc_0x372dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00372dcc_0x372dcc");
#endif

    ctx->pc = 0x372dccu;

    // 0x372dcc: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372dd0: 0x8c6209f8  lw          $v0, 0x9F8($v1)
    ctx->pc = 0x372dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2552)));
    // 0x372dd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372dd8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x372DD8u;
    {
        const bool branch_taken_0x372dd8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x372dd8) {
            ctx->pc = 0x372DF4u;
            return;
        }
    }
    ctx->pc = 0x372DE0u;
    // 0x372de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372de4: 0x0  nop
    ctx->pc = 0x372de4u;
    // NOP
    // 0x372de8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x372de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x372dec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x372DECu;
    {
        const bool branch_taken_0x372dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372dec) {
            ctx->pc = 0x372E10u;
            return;
        }
    }
    ctx->pc = 0x372DF4u;
}
