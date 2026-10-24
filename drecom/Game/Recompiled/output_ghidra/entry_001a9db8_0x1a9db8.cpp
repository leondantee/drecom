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

// Function: entry_001a9db8
// Address: 0x1a9db8 - 0x1a9e10
void entry_001a9db8_0x1a9db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9db8_0x1a9db8");
#endif

    ctx->pc = 0x1a9db8u;

    // 0x1a9db8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a9db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a9dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9dc0: 0x0  nop
    ctx->pc = 0x1a9dc0u;
    // NOP
    // 0x1a9dc4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a9dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a9dc8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a9dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9dd0: 0x0  nop
    ctx->pc = 0x1a9dd0u;
    // NOP
    // 0x1a9dd4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1a9dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1a9dd8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a9ddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9de0: 0x0  nop
    ctx->pc = 0x1a9de0u;
    // NOP
    // 0x1a9de4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1a9de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1a9de8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a9de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9df0: 0x0  nop
    ctx->pc = 0x1a9df0u;
    // NOP
    // 0x1a9df4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1a9df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1a9df8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9dfc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9e00: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x1a9e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1a9e04: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x1a9e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1a9e08: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1a9e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a9e0c: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1a9e0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1a9e10u;
}
