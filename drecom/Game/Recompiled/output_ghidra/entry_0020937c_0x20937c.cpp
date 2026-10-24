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

// Function: entry_0020937c
// Address: 0x20937c - 0x2093d4
void entry_0020937c_0x20937c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020937c_0x20937c");
#endif

    ctx->pc = 0x20937cu;

    // 0x20937c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20937cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209380: 0x0  nop
    ctx->pc = 0x209380u;
    // NOP
    // 0x209384: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x209384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x209388: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20938c: 0x0  nop
    ctx->pc = 0x20938cu;
    // NOP
    // 0x209390: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x209390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x209394: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x209394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209398: 0x0  nop
    ctx->pc = 0x209398u;
    // NOP
    // 0x20939c: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x20939cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x2093a0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2093a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2093a4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2093a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2093a8: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2093a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2093ac: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x2093acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2093b0: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2093b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2093b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2093b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2093b8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2093b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2093bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2093bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2093c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2093c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2093c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2093c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2093c8: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x2093c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2093cc: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x2093ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2093d0: 0xa0860002  sb          $a2, 0x2($a0)
    ctx->pc = 0x2093d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x2093d4u;
}
