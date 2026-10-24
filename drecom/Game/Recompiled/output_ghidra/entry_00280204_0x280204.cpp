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

// Function: entry_00280204
// Address: 0x280204 - 0x280258
void entry_00280204_0x280204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00280204_0x280204");
#endif

    switch (ctx->pc) {
        case 0x28024cu: goto label_28024c;
        default: break;
    }

    ctx->pc = 0x280204u;

    // 0x280204: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x280204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280208: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x280208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28020c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28020cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x280210: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x280210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x280214: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x280214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280218: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x280218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
    // 0x28021c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28021cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x280220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x280220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280224: 0x0  nop
    ctx->pc = 0x280224u;
    // NOP
    // 0x280228: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x280228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28022c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x28022cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x280230: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x280230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280234: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x280234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280238: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x280238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28023c: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x28023cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x280240: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x280240u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x280244: 0xc056518  jal         func_159460
    ctx->pc = 0x280244u;
    SET_GPR_U32(ctx, 31, 0x28024Cu);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x280244u, 0x28024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28024Cu;
label_28024c:
    // 0x28024c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280250: 0xc084964  jal         func_212590
    ctx->pc = 0x280250u;
    SET_GPR_U32(ctx, 31, 0x280258u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x280250u, 0x280258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280258u;
}
