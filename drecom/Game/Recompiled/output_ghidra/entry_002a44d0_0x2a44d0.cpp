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

// Function: entry_002a44d0
// Address: 0x2a44d0 - 0x2a45ac
void entry_002a44d0_0x2a44d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a44d0_0x2a44d0");
#endif

    switch (ctx->pc) {
        case 0x2a44e4u: goto label_2a44e4;
        case 0x2a4510u: goto label_2a4510;
        case 0x2a4528u: goto label_2a4528;
        case 0x2a4534u: goto label_2a4534;
        case 0x2a45a0u: goto label_2a45a0;
        default: break;
    }

    ctx->pc = 0x2a44d0u;

    // 0x2a44d0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a44d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a44d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a44d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a44d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a44dc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A44DCu;
    SET_GPR_U32(ctx, 31, 0x2A44E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A44DCu, 0x2A44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A44E4u;
label_2a44e4:
    // 0x2a44e4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a44e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a44e8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a44ec: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a44f0: 0x24860120  addiu       $a2, $a0, 0x120
    ctx->pc = 0x2a44f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a44f4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a44f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a44f8: 0x24670120  addiu       $a3, $v1, 0x120
    ctx->pc = 0x2a44f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a44fc: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a44fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a4500: 0x24480180  addiu       $t0, $v0, 0x180
    ctx->pc = 0x2a4500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a4504: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a4504u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a4508: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A4508u;
    SET_GPR_U32(ctx, 31, 0x2A4510u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A4508u, 0x2A4510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4510u;
label_2a4510:
    // 0x2a4510: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a4510u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4514: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x2a4514u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4518: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a4518u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a451c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a451cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4520: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A4520u;
    SET_GPR_U32(ctx, 31, 0x2A4528u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A4520u, 0x2A4528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4528u;
label_2a4528:
    // 0x2a4528: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a452c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A452Cu;
    SET_GPR_U32(ctx, 31, 0x2A4534u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A452Cu, 0x2A4534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4534u;
label_2a4534:
    // 0x2a4534: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4538: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2a4538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x2a453c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a453cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4540: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x2a4540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4544: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a4544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4548: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2a4548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2a454c: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a454cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4550: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x2a4550u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x2a4554: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2a4554u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4558: 0xc4a00188  lwc1        $f0, 0x188($a1)
    ctx->pc = 0x2a4558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a455c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a455cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4560: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x2a4560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x2a4564: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a4564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4568: 0x90e809e7  lbu         $t0, 0x9E7($a3)
    ctx->pc = 0x2a4568u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2535)));
    // 0x2a456c: 0x11000080  beqz        $t0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2A456Cu;
    {
        const bool branch_taken_0x2a456c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a456c) {
            ctx->pc = 0x2A4770u;
            return;
        }
    }
    ctx->pc = 0x2A4574u;
    // 0x2a4574: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2a4574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a4578: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x2a4578u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a457c: 0xa1490002  sb          $t1, 0x2($t2)
    ctx->pc = 0x2a457cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x2a4580: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4584: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4588: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a4588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a458c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2a458cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a4590: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4594: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a4594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a4598: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A4598u;
    SET_GPR_U32(ctx, 31, 0x2A45A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A4598u, 0x2A45A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45A0u;
label_2a45a0:
    // 0x2a45a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a45a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a45a4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2A45A4u;
    {
        const bool branch_taken_0x2a45a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a45a4) {
            ctx->pc = 0x2A4770u;
            return;
        }
    }
    ctx->pc = 0x2A45ACu;
}
