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

// Function: entry_00205b88
// Address: 0x205b88 - 0x205be4
void entry_00205b88_0x205b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205b88_0x205b88");
#endif

    switch (ctx->pc) {
        case 0x205bb0u: goto label_205bb0;
        default: break;
    }

    ctx->pc = 0x205b88u;

    // 0x205b88: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x205b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x205b8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205b90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b94: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x205b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x205b98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205ba0: 0xc46c0188  lwc1        $f12, 0x188($v1)
    ctx->pc = 0x205ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205ba4: 0xc44d0184  lwc1        $f13, 0x184($v0)
    ctx->pc = 0x205ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x205ba8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x205BA8u;
    SET_GPR_U32(ctx, 31, 0x205BB0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x205BA8u, 0x205BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BB0u;
label_205bb0:
    // 0x205bb0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x205bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x205bb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205bb8: 0x0  nop
    ctx->pc = 0x205bb8u;
    // NOP
    // 0x205bbc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x205bbcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x205bc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205bc4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x205bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x205bc8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x205bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x205bcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205bd0: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x205bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x205bd4: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x205bd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x205bd8: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x205bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x205bdc: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x205bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x205be0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x205be4u;
}
