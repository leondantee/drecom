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

// Function: entry_00333be0
// Address: 0x333be0 - 0x333c30
void entry_00333be0_0x333be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333be0_0x333be0");
#endif

    switch (ctx->pc) {
        case 0x333c18u: goto label_333c18;
        default: break;
    }

    ctx->pc = 0x333be0u;

    // 0x333be0: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x333be0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x333be4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x333be4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x333be8: 0xc6405e00  lwc1        $f0, 0x5E00($s2)
    ctx->pc = 0x333be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x333bec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x333becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x333bf0: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x333bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x333bf4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x333bf4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333bf8: 0x0  nop
    ctx->pc = 0x333bf8u;
    // NOP
    // 0x333bfc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x333bfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x333c00: 0x3c084300  lui         $t0, 0x4300
    ctx->pc = 0x333c00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17152 << 16));
    // 0x333c04: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x333c04u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333c08: 0x0  nop
    ctx->pc = 0x333c08u;
    // NOP
    // 0x333c0c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x333c0cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x333c10: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x333C10u;
    SET_GPR_U32(ctx, 31, 0x333C18u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x333C10u, 0x333C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C18u;
label_333c18:
    // 0x333c18: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x333c18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333c1c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x333c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x333c20: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x333c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x333c24: 0xac4700a0  sw          $a3, 0xA0($v0)
    ctx->pc = 0x333c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 7));
    // 0x333c28: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x333c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x333c2c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x333c2cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x333c30u;
}
