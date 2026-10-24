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

// Function: entry_00366a14
// Address: 0x366a14 - 0x366a78
void entry_00366a14_0x366a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366a14_0x366a14");
#endif

    switch (ctx->pc) {
        case 0x366a34u: goto label_366a34;
        default: break;
    }

    ctx->pc = 0x366a14u;

    // 0x366a14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x366a20: 0x2406051c  addiu       $a2, $zero, 0x51C
    ctx->pc = 0x366a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1308));
    // 0x366a24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x366a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366a28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x366a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366a2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x366A2Cu;
    SET_GPR_U32(ctx, 31, 0x366A34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366A2Cu, 0x366A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366A34u;
label_366a34:
    // 0x366a34: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x366a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x366a38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a3c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x366a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x366a40: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x366a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x366a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x366a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366a48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a4c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x366a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x366a50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366a50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366a54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a58: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x366a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x366a5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366a60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a64: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x366a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x366a68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366a6c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x366a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366a70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x366a74: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x366a74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x366a78u;
}
