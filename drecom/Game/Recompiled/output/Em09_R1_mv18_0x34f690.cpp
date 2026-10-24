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

// Function: Em09_R1_mv18
// Address: 0x34f690 - 0x34faf0
void Em09_R1_mv18_0x34f690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv18_0x34f690");
#endif

    switch (ctx->pc) {
        case 0x34f740u: goto label_34f740;
        case 0x34f7e4u: goto label_34f7e4;
        case 0x34f7f0u: goto label_34f7f0;
        case 0x34f854u: goto label_34f854;
        case 0x34f860u: goto label_34f860;
        case 0x34f89cu: goto label_34f89c;
        case 0x34f8b0u: goto label_34f8b0;
        case 0x34f8fcu: goto label_34f8fc;
        case 0x34f908u: goto label_34f908;
        case 0x34f95cu: goto label_34f95c;
        case 0x34f970u: goto label_34f970;
        case 0x34f9bcu: goto label_34f9bc;
        case 0x34f9c8u: goto label_34f9c8;
        case 0x34fa30u: goto label_34fa30;
        case 0x34fa3cu: goto label_34fa3c;
        case 0x34fa4cu: goto label_34fa4c;
        case 0x34fa58u: goto label_34fa58;
        default: break;
    }

    ctx->pc = 0x34f690u;

    // 0x34f690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34f690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34f694: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x34f694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x34f698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34f698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34f69c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34f69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34f6a0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x34f6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x34f6a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f6a8: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x34f6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34f6ac: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34f6b0: 0x2471dbc0  addiu       $s1, $v1, -0x2440
    ctx->pc = 0x34f6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x34f6b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f6b8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f6bc: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x34f6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x34f6c0: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x34f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x34f6c4: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x34f6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x34f6c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f6cc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x34f6ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34f6d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34f6d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34f6d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34f6d8: 0x108300d1  beq         $a0, $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x34F6D8u;
    {
        const bool branch_taken_0x34f6d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f6d8) {
            ctx->pc = 0x34FA20u;
            goto label_34fa20;
        }
    }
    ctx->pc = 0x34F6E0u;
    // 0x34f6e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34f6e4: 0x1083009f  beq         $a0, $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x34F6E4u;
    {
        const bool branch_taken_0x34f6e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f6e4) {
            ctx->pc = 0x34F964u;
            goto label_34f964;
        }
    }
    ctx->pc = 0x34F6ECu;
    // 0x34f6ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34f6f0: 0x1083006c  beq         $a0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x34F6F0u;
    {
        const bool branch_taken_0x34f6f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f6f0) {
            ctx->pc = 0x34F8A4u;
            goto label_34f8a4;
        }
    }
    ctx->pc = 0x34F6F8u;
    // 0x34f6f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f6fc: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x34F6FCu;
    {
        const bool branch_taken_0x34f6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f6fc) {
            ctx->pc = 0x34F7B8u;
            goto label_34f7b8;
        }
    }
    ctx->pc = 0x34F704u;
    // 0x34f704: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F704u;
    {
        const bool branch_taken_0x34f704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f704) {
            ctx->pc = 0x34F714u;
            goto label_34f714;
        }
    }
    ctx->pc = 0x34F70Cu;
    // 0x34f70c: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x34F70Cu;
    {
        const bool branch_taken_0x34f70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f70c) {
            ctx->pc = 0x34FAD8u;
            goto label_34fad8;
        }
    }
    ctx->pc = 0x34F714u;
label_34f714:
    // 0x34f714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34f714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f718: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f71c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34f71cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f720: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f724: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f728: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34f728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34f72c: 0x24060433  addiu       $a2, $zero, 0x433
    ctx->pc = 0x34f72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1075));
    // 0x34f730: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34f730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f734: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34f734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34f738: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34F738u;
    SET_GPR_U32(ctx, 31, 0x34F740u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34F738u, 0x34F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F740u;
label_34f740:
    // 0x34f740: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f744: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f748: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34f748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34f74c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34f74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34f750: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34f750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34f754: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x34f754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34f758: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f75c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x34f75cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f760: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f764: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34f764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34f768: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34f768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34f76c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34f770: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34f770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34f774: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34f774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34f778: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34f778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34f77c: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x34f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x34f780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f784: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f788: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f78c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34f78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x34f790: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x34f790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x34f794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f798: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f79c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f7a0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x34f7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x34f7a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f7a8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f7ac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34f7b0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x34f7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x34f7b4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_34f7b8:
    // 0x34f7b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f7bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f7c0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f7c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f7c8: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x34f7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f7cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34f7ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34f7d0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34f7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34f7d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f7d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34f7d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34f7dc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34F7DCu;
    SET_GPR_U32(ctx, 31, 0x34F7E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34F7DCu, 0x34F7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F7E4u;
label_34f7e4:
    // 0x34f7e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f7e8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34F7E8u;
    SET_GPR_U32(ctx, 31, 0x34F7F0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34F7E8u, 0x34F7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F7F0u;
label_34f7f0:
    // 0x34f7f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f7f4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x34f7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x34f7f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34f7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34f7fc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x34f7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x34f800: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x34F800u;
    {
        const bool branch_taken_0x34f800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f800) {
            ctx->pc = 0x34F844u;
            goto label_34f844;
        }
    }
    ctx->pc = 0x34F808u;
    // 0x34f808: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f80c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f810: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34f810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f814: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f818: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34f818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f81c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34f81cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34f820: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34f820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34f824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f828: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f82c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34f82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f830: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x34f830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34f834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f838: 0x0  nop
    ctx->pc = 0x34f838u;
    // NOP
    // 0x34f83c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34f83cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34f840: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34f840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_34f844:
    // 0x34f844: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f848: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34f848u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34f84c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34F84Cu;
    SET_GPR_U32(ctx, 31, 0x34F854u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34F84Cu, 0x34F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F854u;
label_34f854:
    // 0x34f854: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f858: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34F858u;
    SET_GPR_U32(ctx, 31, 0x34F860u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34F858u, 0x34F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F860u;
label_34f860:
    // 0x34f860: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f864: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34f864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34f868: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x34F868u;
    {
        const bool branch_taken_0x34f868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f868) {
            ctx->pc = 0x34FAD8u;
            goto label_34fad8;
        }
    }
    ctx->pc = 0x34F870u;
    // 0x34f870: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34f870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34f874: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f878: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34f878u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f87c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f880: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f884: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34f884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34f888: 0x24061e34  addiu       $a2, $zero, 0x1E34
    ctx->pc = 0x34f888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7732));
    // 0x34f88c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34f88cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f890: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34f890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34f894: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34F894u;
    SET_GPR_U32(ctx, 31, 0x34F89Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34F894u, 0x34F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F89Cu;
label_34f89c:
    // 0x34f89c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x34F89Cu;
    {
        const bool branch_taken_0x34f89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f89c) {
            ctx->pc = 0x34FAD8u;
            goto label_34fad8;
        }
    }
    ctx->pc = 0x34F8A4u;
label_34f8a4:
    // 0x34f8a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f8a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34F8A8u;
    SET_GPR_U32(ctx, 31, 0x34F8B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34F8A8u, 0x34F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F8B0u;
label_34f8b0:
    // 0x34f8b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f8b4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f8b8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f8bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f8c0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34f8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f8c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34f8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34f8c8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34f8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34f8cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f8d0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f8d4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34f8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f8d8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x34f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34f8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f8e0: 0x0  nop
    ctx->pc = 0x34f8e0u;
    // NOP
    // 0x34f8e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34f8e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34f8e8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34f8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34f8ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f8f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34f8f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34f8f4: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34F8F4u;
    SET_GPR_U32(ctx, 31, 0x34F8FCu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34F8F4u, 0x34F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F8FCu;
label_34f8fc:
    // 0x34f8fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f900: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34F900u;
    SET_GPR_U32(ctx, 31, 0x34F908u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34F900u, 0x34F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F908u;
label_34f908:
    // 0x34f908: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f90c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34f90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f910: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34f910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f914: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x34f914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x34f918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f91c: 0x0  nop
    ctx->pc = 0x34f91cu;
    // NOP
    // 0x34f920: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f924: 0x0  nop
    ctx->pc = 0x34f924u;
    // NOP
    // 0x34f928: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
    ctx->pc = 0x34F928u;
    {
        const bool branch_taken_0x34f928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f928) {
            ctx->pc = 0x34FAD8u;
            goto label_34fad8;
        }
    }
    ctx->pc = 0x34F930u;
    // 0x34f930: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34f930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34f934: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f938: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34f938u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f93c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f940: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f944: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34f944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34f948: 0x24061035  addiu       $a2, $zero, 0x1035
    ctx->pc = 0x34f948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4149));
    // 0x34f94c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34f94cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f950: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34f950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34f954: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34F954u;
    SET_GPR_U32(ctx, 31, 0x34F95Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34F954u, 0x34F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F95Cu;
label_34f95c:
    // 0x34f95c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x34F95Cu;
    {
        const bool branch_taken_0x34f95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f95c) {
            ctx->pc = 0x34FAD8u;
            goto label_34fad8;
        }
    }
    ctx->pc = 0x34F964u;
label_34f964:
    // 0x34f964: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f968: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34F968u;
    SET_GPR_U32(ctx, 31, 0x34F970u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34F968u, 0x34F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F970u;
label_34f970:
    // 0x34f970: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f974: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f978: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34f978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f97c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f980: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f984: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34f984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34f988: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34f988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34f98c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f990: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f994: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34f994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f998: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x34f998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34f99c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f9a0: 0x0  nop
    ctx->pc = 0x34f9a0u;
    // NOP
    // 0x34f9a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34f9a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34f9a8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34f9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34f9ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f9b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34f9b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34f9b4: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34F9B4u;
    SET_GPR_U32(ctx, 31, 0x34F9BCu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34F9B4u, 0x34F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F9BCu;
label_34f9bc:
    // 0x34f9bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f9c0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34F9C0u;
    SET_GPR_U32(ctx, 31, 0x34F9C8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34F9C0u, 0x34F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F9C8u;
label_34f9c8:
    // 0x34f9c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f9cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f9d0: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x34f9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f9d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f9d8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x34f9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f9dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f9dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34f9e0: 0x0  nop
    ctx->pc = 0x34f9e0u;
    // NOP
    // 0x34f9e4: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
    ctx->pc = 0x34F9E4u;
    {
        const bool branch_taken_0x34f9e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f9e4) {
            ctx->pc = 0x34FAD8u;
            goto label_34fad8;
        }
    }
    ctx->pc = 0x34F9ECu;
    // 0x34f9ec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34f9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34f9f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f9f4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x34f9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34f9f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f9fc: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x34f9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x34fa00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa04: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34fa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34fa08: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34fa0c: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x34fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x34fa10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34fa10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34fa14: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34fa14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34fa18: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x34FA18u;
    {
        const bool branch_taken_0x34fa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fa18) {
            ctx->pc = 0x34FAD8u;
            goto label_34fad8;
        }
    }
    ctx->pc = 0x34FA20u;
label_34fa20:
    // 0x34fa20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa24: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34fa24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34fa28: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34FA28u;
    SET_GPR_U32(ctx, 31, 0x34FA30u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34FA28u, 0x34FA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA30u;
label_34fa30:
    // 0x34fa30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34fa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa34: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34FA34u;
    SET_GPR_U32(ctx, 31, 0x34FA3Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34FA34u, 0x34FA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA3Cu;
label_34fa3c:
    // 0x34fa3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34fa40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34fa44: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34FA44u;
    SET_GPR_U32(ctx, 31, 0x34FA4Cu);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34FA44u, 0x34FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA4Cu;
label_34fa4c:
    // 0x34fa4c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa50: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34FA50u;
    SET_GPR_U32(ctx, 31, 0x34FA58u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34FA50u, 0x34FA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA58u;
label_34fa58:
    // 0x34fa58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa5c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34fa5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34fa60: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x34FA60u;
    {
        const bool branch_taken_0x34fa60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fa60) {
            ctx->pc = 0x34FAD8u;
            goto label_34fad8;
        }
    }
    ctx->pc = 0x34FA68u;
    // 0x34fa68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fa6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa70: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34fa70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34fa74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fa78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa7c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34fa7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34fa80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa84: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34fa84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34fa88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa8c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34fa8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34fa90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fa94: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34fa98: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34fa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34fa9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34faa0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34faa4: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34faa4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34faa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34faac: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34faacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34fab0: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34fab4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x34fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34fab8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34fab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34fabc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34fac0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fac4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34fac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34fac8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x34fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x34facc: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x34faccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x34fad0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34fad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34fad4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x34fad4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_34fad8:
    // 0x34fad8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x34fad8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34fadc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34fadcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34fae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34fae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fae4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34fae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34fae8: 0x3e00008  jr          $ra
    ctx->pc = 0x34FAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FAF0u;
}
