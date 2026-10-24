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

// Function: Em00_R1_atk_double
// Address: 0x2d4880 - 0x2d4b80
void Em00_R1_atk_double_0x2d4880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_atk_double_0x2d4880");
#endif

    switch (ctx->pc) {
        case 0x2d48d4u: goto label_2d48d4;
        case 0x2d4954u: goto label_2d4954;
        case 0x2d4988u: goto label_2d4988;
        case 0x2d49bcu: goto label_2d49bc;
        case 0x2d49f0u: goto label_2d49f0;
        case 0x2d4a00u: goto label_2d4a00;
        case 0x2d4a40u: goto label_2d4a40;
        case 0x2d4a74u: goto label_2d4a74;
        case 0x2d4aa8u: goto label_2d4aa8;
        case 0x2d4adcu: goto label_2d4adc;
        case 0x2d4aecu: goto label_2d4aec;
        case 0x2d4b0cu: goto label_2d4b0c;
        case 0x2d4b18u: goto label_2d4b18;
        case 0x2d4b28u: goto label_2d4b28;
        case 0x2d4b34u: goto label_2d4b34;
        default: break;
    }

    ctx->pc = 0x2d4880u;

    // 0x2d4880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d4880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d4884: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d4884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d4888: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2d4888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2d488c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d488cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4890: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d4890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d4894: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d4894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d4898: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d4898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d489c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D489Cu;
    {
        const bool branch_taken_0x2d489c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d489c) {
            ctx->pc = 0x2D48ECu;
            goto label_2d48ec;
        }
    }
    ctx->pc = 0x2D48A4u;
    // 0x2d48a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D48A4u;
    {
        const bool branch_taken_0x2d48a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d48a4) {
            ctx->pc = 0x2D48B4u;
            goto label_2d48b4;
        }
    }
    ctx->pc = 0x2D48ACu;
    // 0x2d48ac: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2D48ACu;
    {
        const bool branch_taken_0x2d48ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d48ac) {
            ctx->pc = 0x2D4B70u;
            goto label_2d4b70;
        }
    }
    ctx->pc = 0x2D48B4u;
label_2d48b4:
    // 0x2d48b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d48b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d48b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d48bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d48bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d48c0: 0x24061409  addiu       $a2, $zero, 0x1409
    ctx->pc = 0x2d48c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x2d48c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d48c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d48c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d48c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d48cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D48CCu;
    SET_GPR_U32(ctx, 31, 0x2D48D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D48CCu, 0x2D48D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48D4u;
label_2d48d4:
    // 0x2d48d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d48d8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d48d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d48dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d48dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d48e0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d48e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d48e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d48e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d48e8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d48e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d48ec:
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
            goto label_2d4aec;
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
            goto label_2d4a08;
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
            goto label_2d4aec;
        }
    }
    ctx->pc = 0x2D4A08u;
label_2d4a08:
    // 0x2d4a08: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d4a0c: 0x244287a0  addiu       $v0, $v0, -0x7860
    ctx->pc = 0x2d4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936480));
    // 0x2d4a10: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4a14: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d4a14u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3987A0u));
    // 0x2d4a18: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d4a18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d4a1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4a20: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4a24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4a28: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d4a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d4a2c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d4a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4a30: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4a34: 0x24478be0  addiu       $a3, $v0, -0x7420
    ctx->pc = 0x2d4a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937568));
    // 0x2d4a38: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4A38u;
    SET_GPR_U32(ctx, 31, 0x2D4A40u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4A38u, 0x2D4A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A40u;
label_2d4a40:
    // 0x2d4a40: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2d4a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2d4a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4a48: 0x0  nop
    ctx->pc = 0x2d4a48u;
    // NOP
    // 0x2d4a4c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d4a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d4a50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4a54: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4a58: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4a5c: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d4a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d4a60: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d4a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4a64: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4a68: 0x24478be0  addiu       $a3, $v0, -0x7420
    ctx->pc = 0x2d4a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937568));
    // 0x2d4a6c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4A6Cu;
    SET_GPR_U32(ctx, 31, 0x2D4A74u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4A6Cu, 0x2D4A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4A74u;
label_2d4a74:
    // 0x2d4a74: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2d4a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2d4a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4a7c: 0x0  nop
    ctx->pc = 0x2d4a7cu;
    // NOP
    // 0x2d4a80: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d4a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d4a84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4a88: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4a8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4a90: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d4a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d4a94: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d4a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4a98: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4a9c: 0x24478be0  addiu       $a3, $v0, -0x7420
    ctx->pc = 0x2d4a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937568));
    // 0x2d4aa0: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4AA0u;
    SET_GPR_U32(ctx, 31, 0x2D4AA8u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4AA0u, 0x2D4AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4AA8u;
label_2d4aa8:
    // 0x2d4aa8: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2d4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2d4aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4ab0: 0x0  nop
    ctx->pc = 0x2d4ab0u;
    // NOP
    // 0x2d4ab4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d4ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d4ab8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4abc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4ac0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4ac4: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d4ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d4ac8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d4ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4acc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4ad0: 0x24478be0  addiu       $a3, $v0, -0x7420
    ctx->pc = 0x2d4ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937568));
    // 0x2d4ad4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4AD4u;
    SET_GPR_U32(ctx, 31, 0x2D4ADCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4AD4u, 0x2D4ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4ADCu;
label_2d4adc:
    // 0x2d4adc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4ae0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d4ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4ae4: 0xc0b402c  jal         func_2D00B0
    ctx->pc = 0x2D4AE4u;
    SET_GPR_U32(ctx, 31, 0x2D4AECu);
    ctx->pc = 0x2D00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D00B0u, 0x2D4AE4u, 0x2D4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4AECu;
label_2d4aec:
    // 0x2d4aec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4af0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d4af0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d4af4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4af8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d4af8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d4afc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4b00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4b04: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D4B04u;
    SET_GPR_U32(ctx, 31, 0x2D4B0Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D4B04u, 0x2D4B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B0Cu;
label_2d4b0c:
    // 0x2d4b0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b10: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D4B10u;
    SET_GPR_U32(ctx, 31, 0x2D4B18u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D4B10u, 0x2D4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B18u;
label_2d4b18:
    // 0x2d4b18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4b1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4b20: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D4B20u;
    SET_GPR_U32(ctx, 31, 0x2D4B28u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D4B20u, 0x2D4B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B28u;
label_2d4b28:
    // 0x2d4b28: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b2c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D4B2Cu;
    SET_GPR_U32(ctx, 31, 0x2D4B34u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D4B2Cu, 0x2D4B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B34u;
label_2d4b34:
    // 0x2d4b34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b38: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d4b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d4b3c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D4B3Cu;
    {
        const bool branch_taken_0x2d4b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4b3c) {
            ctx->pc = 0x2D4B70u;
            goto label_2d4b70;
        }
    }
    ctx->pc = 0x2D4B44u;
    // 0x2d4b44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d4b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4b48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b4c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d4b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4b50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b54: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d4b54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4b58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d4b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4b60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d4b64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4b68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d4b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d4b70:
    // 0x2d4b70: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d4b70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4b74: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d4b74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d4b78: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4B80u;
}
