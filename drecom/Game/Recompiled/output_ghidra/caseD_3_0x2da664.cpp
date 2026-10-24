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

// Function: caseD_3
// Address: 0x2da664 - 0x2da69c
void caseD_3_0x2da664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2da664");
#endif

    ctx->pc = 0x2da664u;

    // 0x2da664: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da668: 0x0  nop
    ctx->pc = 0x2da668u;
    // NOP
    // 0x2da66c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2da66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2da670: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2da670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2da674: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da678: 0x0  nop
    ctx->pc = 0x2da678u;
    // NOP
    // 0x2da67c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2da67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2da680: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x2da680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da684: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2da684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2da688: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2da688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2da68c: 0xa20300d8  sb          $v1, 0xD8($s0)
    ctx->pc = 0x2da68cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 3));
    // 0x2da690: 0x920300d9  lbu         $v1, 0xD9($s0)
    ctx->pc = 0x2da690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 217)));
    // 0x2da694: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2da694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2da698: 0xa20300d9  sb          $v1, 0xD9($s0)
    ctx->pc = 0x2da698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2da69cu;
}
