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

// Function: entry_0025d654
// Address: 0x25d654 - 0x25d69c
void entry_0025d654_0x25d654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d654_0x25d654");
#endif

    switch (ctx->pc) {
        case 0x25d67cu: goto label_25d67c;
        default: break;
    }

    ctx->pc = 0x25d654u;

    // 0x25d654: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x25d654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x25d658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d65c: 0x0  nop
    ctx->pc = 0x25d65cu;
    // NOP
    // 0x25d660: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25d660u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25d664: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25d664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25d668: 0xe6001070  swc1        $f0, 0x1070($s0)
    ctx->pc = 0x25d668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4208), bits); }
    // 0x25d66c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x25d66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x25d670: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x25d670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x25d674: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25D674u;
    SET_GPR_U32(ctx, 31, 0x25D67Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25D67Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D67Cu) { return; }
    ctx->pc = 0x25D67Cu;
label_25d67c:
    // 0x25d67c: 0xc6001070  lwc1        $f0, 0x1070($s0)
    ctx->pc = 0x25d67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d680: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x25d680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x25d684: 0xc6001074  lwc1        $f0, 0x1074($s0)
    ctx->pc = 0x25d684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d688: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x25d688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x25d68c: 0x96051080  lhu         $a1, 0x1080($s0)
    ctx->pc = 0x25d68cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4224)));
    // 0x25d690: 0xa7a50108  sh          $a1, 0x108($sp)
    ctx->pc = 0x25d690u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 264), (uint16_t)GPR_U32(ctx, 5));
    // 0x25d694: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x25d694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x25d698: 0xa3a20120  sb          $v0, 0x120($sp)
    ctx->pc = 0x25d698u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x25d69cu;
}
