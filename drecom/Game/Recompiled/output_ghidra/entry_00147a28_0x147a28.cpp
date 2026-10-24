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

// Function: entry_00147a28
// Address: 0x147a28 - 0x147a5c
void entry_00147a28_0x147a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147a28_0x147a28");
#endif

    ctx->pc = 0x147a28u;

    // 0x147a28: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x147a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x147a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147a30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147a34: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x147a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x147a38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147a3c: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x147a3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
    // 0x147a40: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x147A40u;
    {
        const bool branch_taken_0x147a40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x147a40) {
            ctx->pc = 0x147A5Cu;
            return;
        }
    }
    ctx->pc = 0x147A48u;
    // 0x147a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147a4c: 0x0  nop
    ctx->pc = 0x147a4cu;
    // NOP
    // 0x147a50: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x147a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x147a54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x147A54u;
    {
        const bool branch_taken_0x147a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147a54) {
            ctx->pc = 0x147A78u;
            return;
        }
    }
    ctx->pc = 0x147A5Cu;
}
