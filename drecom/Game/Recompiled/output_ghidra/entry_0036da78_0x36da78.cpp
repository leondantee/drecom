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

// Function: entry_0036da78
// Address: 0x36da78 - 0x36db40
void entry_0036da78_0x36da78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036da78_0x36da78");
#endif

    switch (ctx->pc) {
        case 0x36da84u: goto label_36da84;
        case 0x36daa8u: goto label_36daa8;
        case 0x36dabcu: goto label_36dabc;
        case 0x36dad0u: goto label_36dad0;
        case 0x36dadcu: goto label_36dadc;
        case 0x36db18u: goto label_36db18;
        case 0x36db38u: goto label_36db38;
        default: break;
    }

    ctx->pc = 0x36da78u;

    // 0x36da78: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36da78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36da7c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36DA7Cu;
    SET_GPR_U32(ctx, 31, 0x36DA84u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36DA7Cu, 0x36DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA84u;
label_36da84:
    // 0x36da84: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x36da84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x36da88: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x36da88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36da8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36da8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36da90: 0x0  nop
    ctx->pc = 0x36da90u;
    // NOP
    // 0x36da94: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x36da94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x36da98: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36da98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36da9c: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x36da9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36daa0: 0xc067844  jal         func_19E110
    ctx->pc = 0x36DAA0u;
    SET_GPR_U32(ctx, 31, 0x36DAA8u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x36DAA0u, 0x36DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DAA8u;
label_36daa8:
    // 0x36daa8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36daac: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x36daacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36dab0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x36dab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36dab4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36DAB4u;
    SET_GPR_U32(ctx, 31, 0x36DABCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x36DABCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36DABCu) { return; }
    ctx->pc = 0x36DABCu;
label_36dabc:
    // 0x36dabc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36dabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36dac0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x36dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36dac4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x36dac4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36dac8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x36DAC8u;
    SET_GPR_U32(ctx, 31, 0x36DAD0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x36DAC8u, 0x36DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DAD0u;
label_36dad0:
    // 0x36dad0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x36dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36dad4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36DAD4u;
    SET_GPR_U32(ctx, 31, 0x36DADCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36DAD4u, 0x36DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DADCu;
label_36dadc:
    // 0x36dadc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36dadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36dae0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x36dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x36dae4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36dae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36dae8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x36dae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x36daec: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x36daecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x36daf0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36daf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36daf4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36daf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36daf8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x36daf8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36dafc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36dafcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36db00: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x36db00u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36db04: 0x26090030  addiu       $t1, $s0, 0x30
    ctx->pc = 0x36db04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36db08: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x36db08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36db0c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x36db0cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36db10: 0xc0de66c  jal         func_3799B0
    ctx->pc = 0x36DB10u;
    SET_GPR_U32(ctx, 31, 0x36DB18u);
    ctx->pc = 0x3799B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3799B0u, 0x36DB10u, 0x36DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB18u;
label_36db18:
    // 0x36db18: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x36db18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x36db1c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x36db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36db20: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x36db20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x36db24: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x36db24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x36db28: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x36db28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x36db2c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x36db2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36db30: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x36DB30u;
    SET_GPR_U32(ctx, 31, 0x36DB38u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x36DB30u, 0x36DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB38u;
label_36db38:
    // 0x36db38: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x36DB38u;
    {
        const bool branch_taken_0x36db38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36db38) {
            ctx->pc = 0x36DC18u;
            return;
        }
    }
    ctx->pc = 0x36DB40u;
}
