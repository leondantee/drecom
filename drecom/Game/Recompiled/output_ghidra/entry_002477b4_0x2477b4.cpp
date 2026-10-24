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

// Function: entry_002477b4
// Address: 0x2477b4 - 0x24785c
void entry_002477b4_0x2477b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002477b4_0x2477b4");
#endif

    switch (ctx->pc) {
        case 0x247820u: goto label_247820;
        case 0x247854u: goto label_247854;
        default: break;
    }

    ctx->pc = 0x2477b4u;

    // 0x2477b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2477b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2477b8: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x2477b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x2477bc: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2477BCu;
    {
        const bool branch_taken_0x2477bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2477bc) {
            ctx->pc = 0x247954u;
            return;
        }
    }
    ctx->pc = 0x2477C4u;
    // 0x2477c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2477c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2477c8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2477c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2477cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2477ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2477d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2477d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2477d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2477d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2477d8: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2477D8u;
    {
        const bool branch_taken_0x2477d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2477d8) {
            ctx->pc = 0x247898u;
            return;
        }
    }
    ctx->pc = 0x2477E0u;
    // 0x2477e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2477e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2477e4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2477e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2477e8: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2477e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2477ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2477ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2477f0: 0x0  nop
    ctx->pc = 0x2477f0u;
    // NOP
    // 0x2477f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2477f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2477f8: 0x0  nop
    ctx->pc = 0x2477f8u;
    // NOP
    // 0x2477fc: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x2477FCu;
    {
        const bool branch_taken_0x2477fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2477fc) {
            ctx->pc = 0x247880u;
            return;
        }
    }
    ctx->pc = 0x247804u;
    // 0x247804: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x247804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
    // 0x247808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24780c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247810: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247814: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x247814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x247818: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247818u;
    SET_GPR_U32(ctx, 31, 0x247820u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247818u, 0x247820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247820u;
label_247820:
    // 0x247820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x247820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x247824: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x247824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x247828: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x247828u;
    {
        const bool branch_taken_0x247828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247828) {
            ctx->pc = 0x24785Cu;
            return;
        }
    }
    ctx->pc = 0x247830u;
    // 0x247830: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x247830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x247834: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x247834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x247838: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x247838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24783c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247840: 0x24040526  addiu       $a0, $zero, 0x526
    ctx->pc = 0x247840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1318));
    // 0x247844: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x247844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x247848: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x247848u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24784c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x24784Cu;
    SET_GPR_U32(ctx, 31, 0x247854u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24784Cu, 0x247854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247854u;
label_247854:
    // 0x247854: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x247854u;
    {
        const bool branch_taken_0x247854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247854) {
            ctx->pc = 0x247880u;
            return;
        }
    }
    ctx->pc = 0x24785Cu;
}
