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

// Function: entry_002397d4
// Address: 0x2397d4 - 0x239858
void entry_002397d4_0x2397d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002397d4_0x2397d4");
#endif

    switch (ctx->pc) {
        case 0x2397e8u: goto label_2397e8;
        default: break;
    }

    ctx->pc = 0x2397d4u;

    // 0x2397d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2397d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2397d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2397d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2397dc: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x2397dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x2397e0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2397E0u;
    SET_GPR_U32(ctx, 31, 0x2397E8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2397E0u, 0x2397E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397E8u;
label_2397e8:
    // 0x2397e8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2397e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2397ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2397ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2397f0: 0x0  nop
    ctx->pc = 0x2397f0u;
    // NOP
    // 0x2397f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2397f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2397f8: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2397f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2397fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2397fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239800: 0x0  nop
    ctx->pc = 0x239800u;
    // NOP
    // 0x239804: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x239804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x239808: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23980c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23980cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239810: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x239810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x239814: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x239814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x239818: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x239818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x23981c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23981cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239820: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239824: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239828: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x239828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x23982c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x23982cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x239830: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x239830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x239834: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x239834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239838: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23983c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239840: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x239840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x239844: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x239844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x239848: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23984c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x23984cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x239850: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x239850u;
    {
        const bool branch_taken_0x239850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239850) {
            ctx->pc = 0x239B50u;
            return;
        }
    }
    ctx->pc = 0x239858u;
}
