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

// Function: caseD_4
// Address: 0x318e40 - 0x318e9c
void caseD_4_0x318e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x318e40");
#endif

    ctx->pc = 0x318e40u;

    // 0x318e40: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x318e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x318e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318e48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318e4c: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x318e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x318e50: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x318e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x318e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318e58: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318e5c: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x318e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x318e60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x318e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x318e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318e68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318e6c: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x318e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x318e70: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x318e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x318e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318e78: 0x0  nop
    ctx->pc = 0x318e78u;
    // NOP
    // 0x318e7c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x318e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x318e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x318e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318e84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x318e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318e88: 0xac4312b0  sw          $v1, 0x12B0($v0)
    ctx->pc = 0x318e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4784), GPR_U32(ctx, 3));
    // 0x318e8c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x318e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318e90: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x318e90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x318e94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x318e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x318e98: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x318e98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x318e9cu;
}
