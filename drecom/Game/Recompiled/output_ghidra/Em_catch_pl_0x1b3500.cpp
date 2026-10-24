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

// Function: Em_catch_pl
// Address: 0x1b3500 - 0x1b38e4
void Em_catch_pl_0x1b3500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_catch_pl_0x1b3500");
#endif

    switch (ctx->pc) {
        case 0x1b35c8u: goto label_1b35c8;
        case 0x1b35e8u: goto label_1b35e8;
        case 0x1b3600u: goto label_1b3600;
        case 0x1b3610u: goto label_1b3610;
        case 0x1b3628u: goto label_1b3628;
        case 0x1b363cu: goto label_1b363c;
        case 0x1b3720u: goto label_1b3720;
        case 0x1b3730u: goto label_1b3730;
        case 0x1b3744u: goto label_1b3744;
        case 0x1b386cu: goto label_1b386c;
        default: break;
    }

    ctx->pc = 0x1b3500u;

    // 0x1b3500: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b3500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b3504: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1b3504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1b3508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b350c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3510: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1b3510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1b3514: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x1b3514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x1b3518: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1b3518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1b351c: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x1b351cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1b3520: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x1b3520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x1b3524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3524u;
    {
        const bool branch_taken_0x1b3524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3524) {
            ctx->pc = 0x1B3538u;
            goto label_1b3538;
        }
    }
    ctx->pc = 0x1B352Cu;
    // 0x1b352c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b352cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3530: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x1B3530u;
    {
        const bool branch_taken_0x1b3530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3530) {
            ctx->pc = 0x1B38CCu;
            goto label_1b38cc;
        }
    }
    ctx->pc = 0x1B3538u;
label_1b3538:
    // 0x1b3538: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x1b3538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1b353c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b353cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b3540: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b3540u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b3544: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3544u;
    {
        const bool branch_taken_0x1b3544 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b3544) {
            ctx->pc = 0x1B3558u;
            goto label_1b3558;
        }
    }
    ctx->pc = 0x1B354Cu;
    // 0x1b354c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b354cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3550: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x1B3550u;
    {
        const bool branch_taken_0x1b3550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3550) {
            ctx->pc = 0x1B38CCu;
            goto label_1b38cc;
        }
    }
    ctx->pc = 0x1B3558u;
label_1b3558:
    // 0x1b3558: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b3558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b355c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1b355cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b3560: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b3560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1b3564: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3564u;
    {
        const bool branch_taken_0x1b3564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3564) {
            ctx->pc = 0x1B3578u;
            goto label_1b3578;
        }
    }
    ctx->pc = 0x1B356Cu;
    // 0x1b356c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b356cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3570: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x1B3570u;
    {
        const bool branch_taken_0x1b3570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3570) {
            ctx->pc = 0x1B38CCu;
            goto label_1b38cc;
        }
    }
    ctx->pc = 0x1B3578u;
label_1b3578:
    // 0x1b3578: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b3578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b357c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1b357cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1b3580: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b3580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b3584: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3584u;
    {
        const bool branch_taken_0x1b3584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3584) {
            ctx->pc = 0x1B3598u;
            goto label_1b3598;
        }
    }
    ctx->pc = 0x1B358Cu;
    // 0x1b358c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b358cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3590: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x1B3590u;
    {
        const bool branch_taken_0x1b3590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3590) {
            ctx->pc = 0x1B38CCu;
            goto label_1b38cc;
        }
    }
    ctx->pc = 0x1B3598u;
label_1b3598:
    // 0x1b3598: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b3598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b359c: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1b359cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b35a0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1b35a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1b35a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B35A4u;
    {
        const bool branch_taken_0x1b35a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b35a4) {
            ctx->pc = 0x1B35B8u;
            goto label_1b35b8;
        }
    }
    ctx->pc = 0x1B35ACu;
    // 0x1b35ac: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b35acu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b35b0: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x1B35B0u;
    {
        const bool branch_taken_0x1b35b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b35b0) {
            ctx->pc = 0x1B38CCu;
            goto label_1b38cc;
        }
    }
    ctx->pc = 0x1B35B8u;
label_1b35b8:
    // 0x1b35b8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1b35b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b35bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b35bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b35c0: 0xc05d2a0  jal         func_174A80
    ctx->pc = 0x1B35C0u;
    SET_GPR_U32(ctx, 31, 0x1B35C8u);
    ctx->pc = 0x174A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174A80u, 0x1B35C0u, 0x1B35C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B35C8u;
label_1b35c8:
    // 0x1b35c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B35C8u;
    {
        const bool branch_taken_0x1b35c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b35c8) {
            ctx->pc = 0x1B35DCu;
            goto label_1b35dc;
        }
    }
    ctx->pc = 0x1B35D0u;
    // 0x1b35d0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b35d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b35d4: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1B35D4u;
    {
        const bool branch_taken_0x1b35d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b35d4) {
            ctx->pc = 0x1B38CCu;
            goto label_1b38cc;
        }
    }
    ctx->pc = 0x1B35DCu;
label_1b35dc:
    // 0x1b35dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b35dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b35e0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1B35E0u;
    SET_GPR_U32(ctx, 31, 0x1B35E8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1B35E8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B35E8u) { return; }
    ctx->pc = 0x1B35E8u;
label_1b35e8:
    // 0x1b35e8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b35ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b35ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b35f0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b35f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b35f4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1b35f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b35f8: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1B35F8u;
    SET_GPR_U32(ctx, 31, 0x1B3600u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1B3600u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B3600u) { return; }
    ctx->pc = 0x1B3600u;
label_1b3600:
    // 0x1b3600: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b3600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3604: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b3604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3608: 0xc040c32  jal         func_1030C8
    ctx->pc = 0x1B3608u;
    SET_GPR_U32(ctx, 31, 0x1B3610u);
    ctx->pc = 0x1030C8u;
    {
        ctx->pc = 0x1B3610u;
        ps2_stubs::sceVu0TransposeMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B3610u) { return; }
    ctx->pc = 0x1B3610u;
label_1b3610:
    // 0x1b3610: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b3610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b3614: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b3614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b3618: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1b3618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1b361c: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x1b361cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1b3620: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3620u;
    SET_GPR_U32(ctx, 31, 0x1B3628u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3620u, 0x1B3628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3628u;
label_1b3628:
    // 0x1b3628: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b3628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b362c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b362cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3630: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1b3630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b3634: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B3634u;
    SET_GPR_U32(ctx, 31, 0x1B363Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B363Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B363Cu) { return; }
    ctx->pc = 0x1B363Cu;
label_1b363c:
    // 0x1b363c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1b363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3640: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b3640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b3644: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b3644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3648: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b3648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b364c: 0x0  nop
    ctx->pc = 0x1b364cu;
    // NOP
    // 0x1b3650: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3650u;
    {
        const bool branch_taken_0x1b3650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3650) {
            ctx->pc = 0x1B3674u;
            goto label_1b3674;
        }
    }
    ctx->pc = 0x1B3658u;
    // 0x1b3658: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b3658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b365c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1b365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3660: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1b3660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3664: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b3664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3668: 0x0  nop
    ctx->pc = 0x1b3668u;
    // NOP
    // 0x1b366c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B366Cu;
    {
        const bool branch_taken_0x1b366c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b366c) {
            ctx->pc = 0x1B3680u;
            goto label_1b3680;
        }
    }
    ctx->pc = 0x1B3674u;
label_1b3674:
    // 0x1b3674: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b3674u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3678: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x1B3678u;
    {
        const bool branch_taken_0x1b3678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3678) {
            ctx->pc = 0x1B38CCu;
            goto label_1b38cc;
        }
    }
    ctx->pc = 0x1B3680u;
label_1b3680:
    // 0x1b3680: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b3680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b3684: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b3684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3688: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1b3688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b368c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b368cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3690: 0x0  nop
    ctx->pc = 0x1b3690u;
    // NOP
    // 0x1b3694: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3694u;
    {
        const bool branch_taken_0x1b3694 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3694) {
            ctx->pc = 0x1B36B8u;
            goto label_1b36b8;
        }
    }
    ctx->pc = 0x1B369Cu;
    // 0x1b369c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b36a0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1b36a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b36a4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1b36a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b36a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b36a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b36ac: 0x0  nop
    ctx->pc = 0x1b36acu;
    // NOP
    // 0x1b36b0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B36B0u;
    {
        const bool branch_taken_0x1b36b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b36b0) {
            ctx->pc = 0x1B36C4u;
            goto label_1b36c4;
        }
    }
    ctx->pc = 0x1B36B8u;
label_1b36b8:
    // 0x1b36b8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b36b8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b36bc: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1B36BCu;
    {
        const bool branch_taken_0x1b36bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b36bc) {
            ctx->pc = 0x1B38CCu;
            goto label_1b38cc;
        }
    }
    ctx->pc = 0x1B36C4u;
label_1b36c4:
    // 0x1b36c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b36c8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1b36c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b36cc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1b36ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b36d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b36d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b36d4: 0x0  nop
    ctx->pc = 0x1b36d4u;
    // NOP
    // 0x1b36d8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B36D8u;
    {
        const bool branch_taken_0x1b36d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b36d8) {
            ctx->pc = 0x1B36FCu;
            goto label_1b36fc;
        }
    }
    ctx->pc = 0x1B36E0u;
    // 0x1b36e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b36e4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1b36e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b36e8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1b36e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b36ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b36ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b36f0: 0x0  nop
    ctx->pc = 0x1b36f0u;
    // NOP
    // 0x1b36f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B36F4u;
    {
        const bool branch_taken_0x1b36f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b36f4) {
            ctx->pc = 0x1B3708u;
            goto label_1b3708;
        }
    }
    ctx->pc = 0x1B36FCu;
label_1b36fc:
    // 0x1b36fc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b36fcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3700: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1B3700u;
    {
        const bool branch_taken_0x1b3700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3700) {
            ctx->pc = 0x1B38CCu;
            goto label_1b38cc;
        }
    }
    ctx->pc = 0x1B3708u;
label_1b3708:
    // 0x1b3708: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b3708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b370c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b370cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b3710: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1b3710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1b3714: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x1b3714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1b3718: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3718u;
    SET_GPR_U32(ctx, 31, 0x1B3720u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3718u, 0x1B3720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3720u;
label_1b3720:
    // 0x1b3720: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1b3720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b3724: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x1b3724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b3728: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B3728u;
    SET_GPR_U32(ctx, 31, 0x1B3730u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B3728u, 0x1B3730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3730u;
label_1b3730:
    // 0x1b3730: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1b3730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1b3734: 0xc7ac0088  lwc1        $f12, 0x88($sp)
    ctx->pc = 0x1b3734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b3738: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x1b3738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b373c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B373Cu;
    SET_GPR_U32(ctx, 31, 0x1B3744u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B373Cu, 0x1B3744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3744u;
label_1b3744:
    // 0x1b3744: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1b3744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1b3748: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1b3748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b374c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b374cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3750: 0x0  nop
    ctx->pc = 0x1b3750u;
    // NOP
    // 0x1b3754: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b3754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3758: 0x0  nop
    ctx->pc = 0x1b3758u;
    // NOP
    // 0x1b375c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B375Cu;
    {
        const bool branch_taken_0x1b375c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b375c) {
            ctx->pc = 0x1B3778u;
            goto label_1b3778;
        }
    }
    ctx->pc = 0x1B3764u;
    // 0x1b3764: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b3764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1b3768: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b376c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1b376cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3770: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b3770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b3774: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1b3774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1b3778:
    // 0x1b3778: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1b3778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b377c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b377cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b3780: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b3780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b3784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3788: 0x0  nop
    ctx->pc = 0x1b3788u;
    // NOP
    // 0x1b378c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b378cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3790: 0x0  nop
    ctx->pc = 0x1b3790u;
    // NOP
    // 0x1b3794: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1B3794u;
    {
        const bool branch_taken_0x1b3794 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3794) {
            ctx->pc = 0x1B382Cu;
            goto label_1b382c;
        }
    }
    ctx->pc = 0x1B379Cu;
    // 0x1b379c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b37a0: 0x94420018  lhu         $v0, 0x18($v0)
    ctx->pc = 0x1b37a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1b37a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1b37a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b37a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b37a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b37ac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B37ACu;
    {
        const bool branch_taken_0x1b37ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b37ac) {
            ctx->pc = 0x1B37C0u;
            goto label_1b37c0;
        }
    }
    ctx->pc = 0x1B37B4u;
    // 0x1b37b4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b37b4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b37b8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1B37B8u;
    {
        const bool branch_taken_0x1b37b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b37b8) {
            ctx->pc = 0x1B38CCu;
            goto label_1b38cc;
        }
    }
    ctx->pc = 0x1B37C0u;
label_1b37c0:
    // 0x1b37c0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1b37c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b37c4: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b37c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b37c8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b37cc: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b37ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b37d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b37d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b37d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b37d8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b37dc: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x1b37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x1b37e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b37e4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1b37e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b37e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b37ec: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b37ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b37f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b37f4: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b37f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b37f8: 0xa60011f4  sh          $zero, 0x11F4($s0)
    ctx->pc = 0x1b37f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b37fc: 0xa60011f2  sh          $zero, 0x11F2($s0)
    ctx->pc = 0x1b37fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b3800: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b3800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b3804: 0x94420018  lhu         $v0, 0x18($v0)
    ctx->pc = 0x1b3804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1b3808: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b3808u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b380c: 0xa20011f0  sb          $zero, 0x11F0($s0)
    ctx->pc = 0x1b380cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3810: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b3810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b3814: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b3814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b3818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b381c: 0xa20210a8  sb          $v0, 0x10A8($s0)
    ctx->pc = 0x1b381cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3824: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1B3824u;
    {
        const bool branch_taken_0x1b3824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3824) {
            ctx->pc = 0x1B38CCu;
            goto label_1b38cc;
        }
    }
    ctx->pc = 0x1B382Cu;
label_1b382c:
    // 0x1b382c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b382cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b3830: 0x9442001a  lhu         $v0, 0x1A($v0)
    ctx->pc = 0x1b3830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x1b3834: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1b3834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1b3838: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b3838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b383c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B383Cu;
    {
        const bool branch_taken_0x1b383c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b383c) {
            ctx->pc = 0x1B3850u;
            goto label_1b3850;
        }
    }
    ctx->pc = 0x1B3844u;
    // 0x1b3844: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b3844u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3848: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B3848u;
    {
        const bool branch_taken_0x1b3848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3848) {
            ctx->pc = 0x1B38CCu;
            goto label_1b38cc;
        }
    }
    ctx->pc = 0x1B3850u;
label_1b3850:
    // 0x1b3850: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b3850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b3854: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b3854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b3858: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b385c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1b385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3860: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1b3860u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b3864: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B3864u;
    SET_GPR_U32(ctx, 31, 0x1B386Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B3864u, 0x1B386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B386Cu;
label_1b386c:
    // 0x1b386c: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b386cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b3870: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b3870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b3874: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1b3874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1b3878: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b387c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b387cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3880: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b3880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b3884: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x1b3884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x1b3888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b388c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1b388cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3890: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b3890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b3894: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b3894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b389c: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b389cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b38a0: 0xa60011f4  sh          $zero, 0x11F4($s0)
    ctx->pc = 0x1b38a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b38a4: 0xa60011f2  sh          $zero, 0x11F2($s0)
    ctx->pc = 0x1b38a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b38a8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b38a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b38ac: 0x9442001a  lhu         $v0, 0x1A($v0)
    ctx->pc = 0x1b38acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x1b38b0: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b38b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b38b4: 0xa20011f0  sb          $zero, 0x11F0($s0)
    ctx->pc = 0x1b38b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b38b8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b38bc: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b38bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b38c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b38c4: 0xa20210a8  sb          $v0, 0x10A8($s0)
    ctx->pc = 0x1b38c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b38c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b38cc:
    // 0x1b38cc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1b38ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b38d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b38d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b38d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b38d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b38d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1b38d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b38dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B38DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B38DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B38E4u;
}
