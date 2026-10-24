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

// Function: caseD_7
// Address: 0x2e714c - 0x2e71e0
void caseD_7_0x2e714c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x2e714c");
#endif

    switch (ctx->pc) {
        case 0x2e715cu: goto label_2e715c;
        case 0x2e716cu: goto label_2e716c;
        case 0x2e7178u: goto label_2e7178;
        case 0x2e7184u: goto label_2e7184;
        case 0x2e718cu: goto label_2e718c;
        case 0x2e71b0u: goto label_2e71b0;
        default: break;
    }

    ctx->pc = 0x2e714cu;

    // 0x2e714c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e714cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7150: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e7150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e7154: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E7154u;
    SET_GPR_U32(ctx, 31, 0x2E715Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E7154u, 0x2E715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E715Cu;
label_2e715c:
    // 0x2e715c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7160: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e7160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e7164: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E7164u;
    SET_GPR_U32(ctx, 31, 0x2E716Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E7164u, 0x2E716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E716Cu;
label_2e716c:
    // 0x2e716c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e716cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e7170: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E7170u;
    SET_GPR_U32(ctx, 31, 0x2E7178u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E7170u, 0x2E7178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7178u;
label_2e7178:
    // 0x2e7178: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e7178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e717c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E717Cu;
    SET_GPR_U32(ctx, 31, 0x2E7184u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E717Cu, 0x2E7184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7184u;
label_2e7184:
    // 0x2e7184: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E7184u;
    SET_GPR_U32(ctx, 31, 0x2E718Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E7184u, 0x2E718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E718Cu;
label_2e718c:
    // 0x2e718c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e718cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e7190: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2e7190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e7194: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e7194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e7198: 0x24428d30  addiu       $v0, $v0, -0x72D0
    ctx->pc = 0x2e7198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937904));
    // 0x2e719c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e71a0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e71a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e71a4: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2e71a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e71a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E71A8u;
    SET_GPR_U32(ctx, 31, 0x2E71B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E71A8u, 0x2E71B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E71B0u;
label_2e71b0:
    // 0x2e71b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e71b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e71b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e71b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e71b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E71B8u;
    {
        const bool branch_taken_0x2e71b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e71b8) {
            ctx->pc = 0x2E71E0u;
            return;
        }
    }
    ctx->pc = 0x2E71C0u;
    // 0x2e71c0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2e71c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e71c4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e71c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e71c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e71cc: 0x0  nop
    ctx->pc = 0x2e71ccu;
    // NOP
    // 0x2e71d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e71d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e71d4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2e71d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e71d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E71D8u;
    {
        const bool branch_taken_0x2e71d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e71d8) {
            ctx->pc = 0x2E71F8u;
            return;
        }
    }
    ctx->pc = 0x2E71E0u;
}
