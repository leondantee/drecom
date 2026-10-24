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

// Function: entry_001a0234
// Address: 0x1a0234 - 0x1a0278
void entry_001a0234_0x1a0234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0234_0x1a0234");
#endif

    switch (ctx->pc) {
        case 0x1a026cu: goto label_1a026c;
        default: break;
    }

    ctx->pc = 0x1a0234u;

    // 0x1a0234: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x1a0234u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0238: 0x0  nop
    ctx->pc = 0x1a0238u;
    // NOP
    // 0x1a023c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1a023cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a0240: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x1a0240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0244: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1a0244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0248: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a0248u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a024c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1a024cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a0250: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1a0250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0254: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1a0254u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a0258: 0x0  nop
    ctx->pc = 0x1a0258u;
    // NOP
    // 0x1a025c: 0x0  nop
    ctx->pc = 0x1a025cu;
    // NOP
    // 0x1a0260: 0x0  nop
    ctx->pc = 0x1a0260u;
    // NOP
    // 0x1a0264: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x1A0264u;
    SET_GPR_U32(ctx, 31, 0x1A026Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x1A0264u, 0x1A026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A026Cu;
label_1a026c:
    // 0x1a026c: 0x29e3c  dsll32      $s3, $v0, 24
    ctx->pc = 0x1a026cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a0270: 0x139e3f  dsra32      $s3, $s3, 24
    ctx->pc = 0x1a0270u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 24));
    // 0x1a0274: 0x0  nop
    ctx->pc = 0x1a0274u;
    // NOP
    ctx->pc = 0x1a0278u;
}
