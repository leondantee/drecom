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

// Function: entry_002dae98
// Address: 0x2dae98 - 0x2daed4
void entry_002dae98_0x2dae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dae98_0x2dae98");
#endif

    ctx->pc = 0x2dae98u;

    // 0x2dae98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2dae98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dae9c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2dae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2daea0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2daea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2daea4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2daea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2daea8: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2DAEA8u;
    {
        const bool branch_taken_0x2daea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daea8) {
            ctx->pc = 0x2DAFD8u;
            return;
        }
    }
    ctx->pc = 0x2DAEB0u;
    // 0x2daeb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2daeb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daeb4: 0x0  nop
    ctx->pc = 0x2daeb4u;
    // NOP
    // 0x2daeb8: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x2daeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x2daebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2daebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daec0: 0x0  nop
    ctx->pc = 0x2daec0u;
    // NOP
    // 0x2daec4: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2daec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2daec8: 0x920200da  lbu         $v0, 0xDA($s0)
    ctx->pc = 0x2daec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 218)));
    // 0x2daecc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2daeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2daed0: 0xa20200da  sb          $v0, 0xDA($s0)
    ctx->pc = 0x2daed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 218), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2daed4u;
}
