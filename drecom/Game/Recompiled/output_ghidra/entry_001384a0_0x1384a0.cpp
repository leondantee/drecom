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

// Function: entry_001384a0
// Address: 0x1384a0 - 0x138504
void entry_001384a0_0x1384a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001384a0_0x1384a0");
#endif

    switch (ctx->pc) {
        case 0x1384d4u: goto label_1384d4;
        case 0x1384ecu: goto label_1384ec;
        default: break;
    }

    ctx->pc = 0x1384a0u;

    // 0x1384a0: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x1384a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1384a4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1384a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1384a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1384a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1384ac: 0x0  nop
    ctx->pc = 0x1384acu;
    // NOP
    // 0x1384b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1384b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1384b4: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x1384b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x1384b8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1384b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1384bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1384bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1384c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1384c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1384c4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1384c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1384c8: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x1384c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x1384cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1384CCu;
    SET_GPR_U32(ctx, 31, 0x1384D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1384CCu, 0x1384D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1384D4u;
label_1384d4:
    // 0x1384d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1384d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1384d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1384d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1384dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1384dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1384e0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1384e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1384e4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1384E4u;
    SET_GPR_U32(ctx, 31, 0x1384ECu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1384ECu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1384ECu) { return; }
    ctx->pc = 0x1384ECu;
label_1384ec:
    // 0x1384ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1384ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1384f0: 0x0  nop
    ctx->pc = 0x1384f0u;
    // NOP
    // 0x1384f4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1384f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1384f8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1384f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1384fc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1384FCu;
    {
        const bool branch_taken_0x1384fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1384fc) {
            ctx->pc = 0x138600u;
            return;
        }
    }
    ctx->pc = 0x138504u;
}
