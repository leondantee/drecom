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

// Function: entry_001da710
// Address: 0x1da710 - 0x1da734
void entry_001da710_0x1da710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da710_0x1da710");
#endif

    ctx->pc = 0x1da710u;

    // 0x1da710: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x1da710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x1da714: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x1da714u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x1da718: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA718u;
    {
        const bool branch_taken_0x1da718 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1da718) {
            ctx->pc = 0x1DA734u;
            return;
        }
    }
    ctx->pc = 0x1DA720u;
    // 0x1da720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da724: 0x0  nop
    ctx->pc = 0x1da724u;
    // NOP
    // 0x1da728: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1da728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1da72c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA72Cu;
    {
        const bool branch_taken_0x1da72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da72c) {
            ctx->pc = 0x1DA750u;
            return;
        }
    }
    ctx->pc = 0x1DA734u;
}
