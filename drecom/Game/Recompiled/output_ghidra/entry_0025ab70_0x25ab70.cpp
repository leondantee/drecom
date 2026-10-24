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

// Function: entry_0025ab70
// Address: 0x25ab70 - 0x25ab90
void entry_0025ab70_0x25ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ab70_0x25ab70");
#endif

    ctx->pc = 0x25ab70u;

    // 0x25ab70: 0x141202  srl         $v0, $s4, 8
    ctx->pc = 0x25ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 8));
    // 0x25ab74: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AB74u;
    {
        const bool branch_taken_0x25ab74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25ab74) {
            ctx->pc = 0x25AB90u;
            return;
        }
    }
    ctx->pc = 0x25AB7Cu;
    // 0x25ab7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ab7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ab80: 0x0  nop
    ctx->pc = 0x25ab80u;
    // NOP
    // 0x25ab84: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25ab84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25ab88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25AB88u;
    {
        const bool branch_taken_0x25ab88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab88) {
            ctx->pc = 0x25ABACu;
            return;
        }
    }
    ctx->pc = 0x25AB90u;
}
