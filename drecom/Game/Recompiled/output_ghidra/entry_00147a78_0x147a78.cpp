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

// Function: entry_00147a78
// Address: 0x147a78 - 0x147ac8
void entry_00147a78_0x147a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147a78_0x147a78");
#endif

    ctx->pc = 0x147a78u;

    // 0x147a78: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x147a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x147a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147a80: 0x0  nop
    ctx->pc = 0x147a80u;
    // NOP
    // 0x147a84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x147a84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x147a88: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147a8c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x147a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x147a90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147a94: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x147a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147a98: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x147a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x147a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147aa0: 0x0  nop
    ctx->pc = 0x147aa0u;
    // NOP
    // 0x147aa4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147aa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147aa8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147aac: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x147aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x147ab0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147ab4: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x147ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
    // 0x147ab8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147abc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x147abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x147ac0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x147ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x147ac4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x147ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x147ac8u;
}
