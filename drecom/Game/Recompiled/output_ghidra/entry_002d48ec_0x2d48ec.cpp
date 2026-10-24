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

// Function: entry_002d48ec
// Address: 0x2d48ec - 0x2d4a08
void entry_002d48ec_0x2d48ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d48ec_0x2d48ec");
#endif

    switch (ctx->pc) {
        case 0x2d4954u: goto label_2d4954;
        case 0x2d4988u: goto label_2d4988;
        case 0x2d49bcu: goto label_2d49bc;
        case 0x2d49f0u: goto label_2d49f0;
        case 0x2d4a00u: goto label_2d4a00;
        default: break;
    }

    ctx->pc = 0x2d48ecu;

    // 0x2d48ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d48f0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d48f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d48f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d48f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d48f8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d48f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d48fc: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x2D48FCu;
    {
        const bool branch_taken_0x2d48fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d48fc) {
            ctx->pc = 0x2D4AECu;
            return;
        }
    }
    ctx->pc = 0x2D4904u;
    // 0x2d4904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4908: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d4908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d490c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d490cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d4910: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2d4910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2d4914: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2D4914u;
    {
        const bool branch_taken_0x2d4914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4914) {
            ctx->pc = 0x2D4A08u;
            return;
        }
    }
    ctx->pc = 0x2D491Cu;
    // 0x2d491c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d491cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d4920: 0x24428790  addiu       $v0, $v0, -0x7870
    ctx->pc = 0x2d4920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936464));
    // 0x2d4924: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2d4924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d4928: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d4928u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398790u));
    // 0x2d492c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d492cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d4930: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4934: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4938: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d493c: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x2d493cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x2d4940: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d4940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d4944: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4948: 0x24478bec  addiu       $a3, $v0, -0x7414
    ctx->pc = 0x2d4948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937580));
    // 0x2d494c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D494Cu;
    SET_GPR_U32(ctx, 31, 0x2D4954u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D494Cu, 0x2D4954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4954u;
label_2d4954:
    // 0x2d4954: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2d4954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2d4958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d495c: 0x0  nop
    ctx->pc = 0x2d495cu;
    // NOP
    // 0x2d4960: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d4960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d4964: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4968: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d496c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d496cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4970: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x2d4970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x2d4974: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d4974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d4978: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d497c: 0x24478bec  addiu       $a3, $v0, -0x7414
    ctx->pc = 0x2d497cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937580));
    // 0x2d4980: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4980u;
    SET_GPR_U32(ctx, 31, 0x2D4988u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4980u, 0x2D4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4988u;
label_2d4988:
    // 0x2d4988: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2d4988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2d498c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d498cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4990: 0x0  nop
    ctx->pc = 0x2d4990u;
    // NOP
    // 0x2d4994: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d4994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d4998: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d499c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d49a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d49a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d49a4: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x2d49a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x2d49a8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d49a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d49ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d49acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d49b0: 0x24478bec  addiu       $a3, $v0, -0x7414
    ctx->pc = 0x2d49b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937580));
    // 0x2d49b4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D49B4u;
    SET_GPR_U32(ctx, 31, 0x2D49BCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D49B4u, 0x2D49BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D49BCu;
label_2d49bc:
    // 0x2d49bc: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2d49bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2d49c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d49c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d49c4: 0x0  nop
    ctx->pc = 0x2d49c4u;
    // NOP
    // 0x2d49c8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d49c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d49cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d49d0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d49d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d49d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d49d8: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x2d49d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x2d49dc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d49dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d49e0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d49e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d49e4: 0x24478bec  addiu       $a3, $v0, -0x7414
    ctx->pc = 0x2d49e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937580));
    // 0x2d49e8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D49E8u;
    SET_GPR_U32(ctx, 31, 0x2D49F0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D49E8u, 0x2D49F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D49F0u;
label_2d49f0:
    // 0x2d49f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d49f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d49f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d49f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d49f8: 0xc0b402c  jal         func_2D00B0
    ctx->pc = 0x2D49F8u;
    SET_GPR_U32(ctx, 31, 0x2D4A00u);
    ctx->pc = 0x2D00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D00B0u, 0x2D49F8u, 0x2D4A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A00u;
label_2d4a00:
    // 0x2d4a00: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2D4A00u;
    {
        const bool branch_taken_0x2d4a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4a00) {
            ctx->pc = 0x2D4AECu;
            return;
        }
    }
    ctx->pc = 0x2D4A08u;
}
