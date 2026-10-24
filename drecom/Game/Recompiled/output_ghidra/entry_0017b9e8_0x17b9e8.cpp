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

// Function: entry_0017b9e8
// Address: 0x17b9e8 - 0x17ba0c
void entry_0017b9e8_0x17b9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b9e8_0x17b9e8");
#endif

    ctx->pc = 0x17b9e8u;

    // 0x17b9e8: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x17b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x17b9ec: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x17b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17b9f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B9F0u;
    {
        const bool branch_taken_0x17b9f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17b9f0) {
            ctx->pc = 0x17BA0Cu;
            return;
        }
    }
    ctx->pc = 0x17B9F8u;
    // 0x17b9f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b9fc: 0x0  nop
    ctx->pc = 0x17b9fcu;
    // NOP
    // 0x17ba00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17ba00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17ba04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17BA04u;
    {
        const bool branch_taken_0x17ba04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ba04) {
            ctx->pc = 0x17BA28u;
            return;
        }
    }
    ctx->pc = 0x17BA0Cu;
}
