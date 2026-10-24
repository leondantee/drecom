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

// Function: entry_0028f868
// Address: 0x28f868 - 0x28f8b8
void entry_0028f868_0x28f868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f868_0x28f868");
#endif

    switch (ctx->pc) {
        case 0x28f8b4u: goto label_28f8b4;
        default: break;
    }

    ctx->pc = 0x28f868u;

    // 0x28f868: 0x92065e04  lbu         $a2, 0x5E04($s0)
    ctx->pc = 0x28f868u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24068)));
    // 0x28f86c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28f86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28f870: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28f870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f874: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28F874u;
    {
        const bool branch_taken_0x28f874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f874) {
            ctx->pc = 0x28F8B8u;
            return;
        }
    }
    ctx->pc = 0x28F87Cu;
    // 0x28f87c: 0x3c123f00  lui         $s2, 0x3F00
    ctx->pc = 0x28f87cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16128 << 16));
    // 0x28f880: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x28f880u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28f884: 0xc6005e00  lwc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28f884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f888: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28f888u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28f88c: 0x3c153f00  lui         $s5, 0x3F00
    ctx->pc = 0x28f88cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16128 << 16));
    // 0x28f890: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28f890u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f894: 0x0  nop
    ctx->pc = 0x28f894u;
    // NOP
    // 0x28f898: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x28f898u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28f89c: 0x3c1e4300  lui         $fp, 0x4300
    ctx->pc = 0x28f89cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)17152 << 16));
    // 0x28f8a0: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x28f8a0u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f8a4: 0x0  nop
    ctx->pc = 0x28f8a4u;
    // NOP
    // 0x28f8a8: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x28f8a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28f8ac: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x28F8ACu;
    SET_GPR_U32(ctx, 31, 0x28F8B4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x28F8ACu, 0x28F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F8B4u;
label_28f8b4:
    // 0x28f8b4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28f8b4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x28f8b8u;
}
