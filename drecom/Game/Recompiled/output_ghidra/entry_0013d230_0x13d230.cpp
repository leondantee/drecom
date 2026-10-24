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

// Function: entry_0013d230
// Address: 0x13d230 - 0x13d254
void entry_0013d230_0x13d230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d230_0x13d230");
#endif

    ctx->pc = 0x13d230u;

    // 0x13d230: 0x32220e00  andi        $v0, $s1, 0xE00
    ctx->pc = 0x13d230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3584);
    // 0x13d234: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x13d234u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x13d238: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D238u;
    {
        const bool branch_taken_0x13d238 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13d238) {
            ctx->pc = 0x13D254u;
            return;
        }
    }
    ctx->pc = 0x13D240u;
    // 0x13d240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d244: 0x0  nop
    ctx->pc = 0x13d244u;
    // NOP
    // 0x13d248: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x13d248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13d24c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13D24Cu;
    {
        const bool branch_taken_0x13d24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d24c) {
            ctx->pc = 0x13D270u;
            return;
        }
    }
    ctx->pc = 0x13D254u;
}
