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

// Function: entry_0015efa0
// Address: 0x15efa0 - 0x15f040
void entry_0015efa0_0x15efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015efa0_0x15efa0");
#endif

    switch (ctx->pc) {
        case 0x15eff0u: goto label_15eff0;
        case 0x15f010u: goto label_15f010;
        case 0x15f028u: goto label_15f028;
        default: break;
    }

    ctx->pc = 0x15efa0u;

    // 0x15efa0: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x15efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x15efa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15efa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15efa8: 0x0  nop
    ctx->pc = 0x15efa8u;
    // NOP
    // 0x15efac: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x15efacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x15efb0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15efb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15efb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15efb8: 0x0  nop
    ctx->pc = 0x15efb8u;
    // NOP
    // 0x15efbc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x15efbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x15efc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15efc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15efc4: 0x0  nop
    ctx->pc = 0x15efc4u;
    // NOP
    // 0x15efc8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x15efc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x15efcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15efccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15efd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15efd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15efd4: 0x0  nop
    ctx->pc = 0x15efd4u;
    // NOP
    // 0x15efd8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15efd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15efdc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15efdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15efe0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15efe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15efe4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15efe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15efe8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15EFE8u;
    SET_GPR_U32(ctx, 31, 0x15EFF0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15EFF0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15EFF0u) { return; }
    ctx->pc = 0x15EFF0u;
label_15eff0:
    // 0x15eff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15eff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eff4: 0x0  nop
    ctx->pc = 0x15eff4u;
    // NOP
    // 0x15eff8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x15eff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x15effc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15effcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f000: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15f000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15f004: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15f004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f008: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15F008u;
    SET_GPR_U32(ctx, 31, 0x15F010u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15F010u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15F010u) { return; }
    ctx->pc = 0x15F010u;
label_15f010:
    // 0x15f010: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15f010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15f014: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15f014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f018: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15f018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f01c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x15f01cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15f020: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15F020u;
    SET_GPR_U32(ctx, 31, 0x15F028u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15F020u, 0x15F028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F028u;
label_15f028:
    // 0x15f028: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x15f028u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15f02c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F02Cu;
    {
        const bool branch_taken_0x15f02c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f02c) {
            ctx->pc = 0x15F040u;
            return;
        }
    }
    ctx->pc = 0x15F034u;
    // 0x15f034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f038: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x15F038u;
    {
        const bool branch_taken_0x15f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f038) {
            ctx->pc = 0x15F0E8u;
            return;
        }
    }
    ctx->pc = 0x15F040u;
}
