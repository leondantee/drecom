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

// Function: entry_0019ba44
// Address: 0x19ba44 - 0x19ba8c
void entry_0019ba44_0x19ba44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ba44_0x19ba44");
#endif

    ctx->pc = 0x19ba44u;

    // 0x19ba44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ba44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ba48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba4c: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x19ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x19ba50: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19ba50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x19ba54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19ba54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ba58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba5c: 0xa4640096  sh          $a0, 0x96($v1)
    ctx->pc = 0x19ba5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 4));
    // 0x19ba60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ba60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ba64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba68: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x19ba68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x19ba6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba70: 0xa4600094  sh          $zero, 0x94($v1)
    ctx->pc = 0x19ba70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ba74: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba78: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19ba78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19ba7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ba80: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19ba80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19ba84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba88: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x19ba88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x19ba8cu;
}
