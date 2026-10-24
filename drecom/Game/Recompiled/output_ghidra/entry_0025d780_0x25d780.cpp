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

// Function: entry_0025d780
// Address: 0x25d780 - 0x25d7b4
void entry_0025d780_0x25d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d780_0x25d780");
#endif

    switch (ctx->pc) {
        case 0x25d794u: goto label_25d794;
        default: break;
    }

    ctx->pc = 0x25d780u;

    // 0x25d780: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x25d780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x25d784: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25d784u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d788: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x25d788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x25d78c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25D78Cu;
    SET_GPR_U32(ctx, 31, 0x25D794u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25D794u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D794u) { return; }
    ctx->pc = 0x25D794u;
label_25d794:
    // 0x25d794: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x25d794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d798: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x25d798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x25d79c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x25d79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d7a0: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x25d7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x25d7a4: 0x97a200d8  lhu         $v0, 0xD8($sp)
    ctx->pc = 0x25d7a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x25d7a8: 0xa7a20138  sh          $v0, 0x138($sp)
    ctx->pc = 0x25d7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 312), (uint16_t)GPR_U32(ctx, 2));
    // 0x25d7ac: 0x93a200f0  lbu         $v0, 0xF0($sp)
    ctx->pc = 0x25d7acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x25d7b0: 0xa3a20150  sb          $v0, 0x150($sp)
    ctx->pc = 0x25d7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x25d7b4u;
}
