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

// Function: entry_00379280
// Address: 0x379280 - 0x3792b4
void entry_00379280_0x379280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379280_0x379280");
#endif

    switch (ctx->pc) {
        case 0x379288u: goto label_379288;
        default: break;
    }

    ctx->pc = 0x379280u;

    // 0x379280: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x379280u;
    SET_GPR_U32(ctx, 31, 0x379288u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x379280u, 0x379288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379288u;
label_379288:
    // 0x379288: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x379288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x37928c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x37928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x379290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x379290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x379294: 0x0  nop
    ctx->pc = 0x379294u;
    // NOP
    // 0x379298: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x379298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37929c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3792a0: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x3792a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x3792a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3792a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3792a8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3792a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3792ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3792acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3792b0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3792b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3792b4u;
}
