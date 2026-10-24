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

// Function: entry_0028fee0
// Address: 0x28fee0 - 0x28ff30
void entry_0028fee0_0x28fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028fee0_0x28fee0");
#endif

    switch (ctx->pc) {
        case 0x28ff2cu: goto label_28ff2c;
        default: break;
    }

    ctx->pc = 0x28fee0u;

    // 0x28fee0: 0x92035e04  lbu         $v1, 0x5E04($s0)
    ctx->pc = 0x28fee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24068)));
    // 0x28fee4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28fee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28fee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28feec: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28FEECu;
    {
        const bool branch_taken_0x28feec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28feec) {
            ctx->pc = 0x28FF30u;
            return;
        }
    }
    ctx->pc = 0x28FEF4u;
    // 0x28fef4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x28fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x28fef8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28fef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fefc: 0xc6005e00  lwc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28fefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ff00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28ff00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28ff04: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28ff08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ff08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ff0c: 0x0  nop
    ctx->pc = 0x28ff0cu;
    // NOP
    // 0x28ff10: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x28ff10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28ff14: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x28ff14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x28ff18: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x28ff18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ff1c: 0x0  nop
    ctx->pc = 0x28ff1cu;
    // NOP
    // 0x28ff20: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x28ff20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28ff24: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x28FF24u;
    SET_GPR_U32(ctx, 31, 0x28FF2Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x28FF24u, 0x28FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF2Cu;
label_28ff2c:
    // 0x28ff2c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28ff2cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x28ff30u;
}
