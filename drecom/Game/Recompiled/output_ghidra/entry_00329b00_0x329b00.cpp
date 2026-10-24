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

// Function: entry_00329b00
// Address: 0x329b00 - 0x329b24
void entry_00329b00_0x329b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329b00_0x329b00");
#endif

    ctx->pc = 0x329b00u;

    // 0x329b00: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329b04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329b08: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x329B08u;
    {
        const bool branch_taken_0x329b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329b08) {
            ctx->pc = 0x329B24u;
            return;
        }
    }
    ctx->pc = 0x329B10u;
    // 0x329b10: 0x8603290a  lh          $v1, 0x290A($s0)
    ctx->pc = 0x329b10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10506)));
    // 0x329b14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329b18: 0x0  nop
    ctx->pc = 0x329b18u;
    // NOP
    // 0x329b1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x329b20: 0xe6002824  swc1        $f0, 0x2824($s0)
    ctx->pc = 0x329b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 10276), bits); }
    ctx->pc = 0x329b24u;
}
