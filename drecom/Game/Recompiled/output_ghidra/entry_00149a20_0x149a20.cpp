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

// Function: entry_00149a20
// Address: 0x149a20 - 0x149a68
void entry_00149a20_0x149a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149a20_0x149a20");
#endif

    ctx->pc = 0x149a20u;

    // 0x149a20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149a24: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x149a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149a28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149a2c: 0xc4401b30  lwc1        $f0, 0x1B30($v0)
    ctx->pc = 0x149a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149a30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x149a30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x149a34: 0x3c02429c  lui         $v0, 0x429C
    ctx->pc = 0x149a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17052 << 16));
    // 0x149a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149a3c: 0x0  nop
    ctx->pc = 0x149a3cu;
    // NOP
    // 0x149a40: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x149a40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x149a44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149a48: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x149a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x149a4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x149a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149a50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149a54: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x149a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x149a58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x149a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149a5c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x149a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x149a60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149a64: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x149a64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x149a68u;
}
