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

// Function: entry_00210cd0
// Address: 0x210cd0 - 0x210d04
void entry_00210cd0_0x210cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00210cd0_0x210cd0");
#endif

    ctx->pc = 0x210cd0u;

    // 0x210cd0: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x210cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210cd4: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x210cd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x210cd8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x210cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x210cdc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x210cdcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x210ce0: 0x2881021d  slti        $at, $a0, 0x21D
    ctx->pc = 0x210ce0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)541) ? 1 : 0);
    // 0x210ce4: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x210CE4u;
    {
        const bool branch_taken_0x210ce4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x210ce4) {
            ctx->pc = 0x210D04u;
            return;
        }
    }
    ctx->pc = 0x210CECu;
    // 0x210cec: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x210cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x210cf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x210cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210cf4: 0x0  nop
    ctx->pc = 0x210cf4u;
    // NOP
    // 0x210cf8: 0xe7a00514  swc1        $f0, 0x514($sp)
    ctx->pc = 0x210cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1300), bits); }
    // 0x210cfc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x210CFCu;
    {
        const bool branch_taken_0x210cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210cfc) {
            ctx->pc = 0x210D3Cu;
            return;
        }
    }
    ctx->pc = 0x210D04u;
}
