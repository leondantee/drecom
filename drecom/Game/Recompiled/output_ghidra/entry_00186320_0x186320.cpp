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

// Function: entry_00186320
// Address: 0x186320 - 0x1863d4
void entry_00186320_0x186320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186320_0x186320");
#endif

    switch (ctx->pc) {
        case 0x186364u: goto label_186364;
        case 0x18637cu: goto label_18637c;
        case 0x1863a0u: goto label_1863a0;
        case 0x1863b4u: goto label_1863b4;
        default: break;
    }

    ctx->pc = 0x186320u;

    // 0x186320: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x186320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186324: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x186324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x186328: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x186328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18632c: 0x0  nop
    ctx->pc = 0x18632cu;
    // NOP
    // 0x186330: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x186330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x186334: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x186334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186338: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x186338u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x18633c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x18633cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x186340: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x186340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x186344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186348: 0x0  nop
    ctx->pc = 0x186348u;
    // NOP
    // 0x18634c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x18634cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x186350: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x186350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x186354: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x186354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186358: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x186358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x18635c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x18635Cu;
    SET_GPR_U32(ctx, 31, 0x186364u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x18635Cu, 0x186364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186364u;
label_186364:
    // 0x186364: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x186364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x186368: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x186368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x18636c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x18636cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x186370: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x186370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x186374: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x186374u;
    SET_GPR_U32(ctx, 31, 0x18637Cu);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x186374u, 0x18637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18637Cu;
label_18637c:
    // 0x18637c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x18637cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x186380: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x186380u;
    {
        const bool branch_taken_0x186380 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x186380) {
            ctx->pc = 0x1863D4u;
            return;
        }
    }
    ctx->pc = 0x186388u;
    // 0x186388: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x186388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x18638c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18638cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x186390: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x186390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186394: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x186394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186398: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x186398u;
    SET_GPR_U32(ctx, 31, 0x1863A0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1863A0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1863A0u) { return; }
    ctx->pc = 0x1863A0u;
label_1863a0:
    // 0x1863a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1863a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1863a4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1863a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1863a8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1863a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1863ac: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1863ACu;
    SET_GPR_U32(ctx, 31, 0x1863B4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1863ACu, 0x1863B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1863B4u;
label_1863b4:
    // 0x1863b4: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1863b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1863b8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1863b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1863bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1863bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1863c0: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x1863c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1863c4: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x1863c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1863c8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1863c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1863cc: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x1863CCu;
    SET_GPR_U32(ctx, 31, 0x1863D4u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x1863D4u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1863D4u) { return; }
    ctx->pc = 0x1863D4u;
}
