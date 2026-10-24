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

// Function: Em09_R1_mv0d
// Address: 0x34a4b0 - 0x34a668
void Em09_R1_mv0d_0x34a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv0d_0x34a4b0");
#endif

    switch (ctx->pc) {
        case 0x34a530u: goto label_34a530;
        case 0x34a56cu: goto label_34a56c;
        case 0x34a5b4u: goto label_34a5b4;
        case 0x34a5e8u: goto label_34a5e8;
        case 0x34a614u: goto label_34a614;
        case 0x34a62cu: goto label_34a62c;
        case 0x34a638u: goto label_34a638;
        case 0x34a648u: goto label_34a648;
        case 0x34a654u: goto label_34a654;
        default: break;
    }

    ctx->pc = 0x34a4b0u;

    // 0x34a4b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34a4b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x34a4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x34a4b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34a4bc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x34a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x34a4c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a4c4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x34a4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34a4c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a4cc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a4d0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x34a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x34a4d4: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x34a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x34a4d8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x34a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x34a4dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a4e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x34a4e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34a4e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34a4e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34a4e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a4ec: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x34A4ECu;
    {
        const bool branch_taken_0x34a4ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a4ec) {
            ctx->pc = 0x34A594u;
            goto label_34a594;
        }
    }
    ctx->pc = 0x34A4F4u;
    // 0x34a4f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A4F4u;
    {
        const bool branch_taken_0x34a4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a4f4) {
            ctx->pc = 0x34A504u;
            goto label_34a504;
        }
    }
    ctx->pc = 0x34A4FCu;
    // 0x34a4fc: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x34A4FCu;
    {
        const bool branch_taken_0x34a4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a4fc) {
            ctx->pc = 0x34A654u;
            goto label_34a654;
        }
    }
    ctx->pc = 0x34A504u;
label_34a504:
    // 0x34a504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a508: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a50c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34a50cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a510: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a514: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34a514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a518: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34a518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34a51c: 0x24063c00  addiu       $a2, $zero, 0x3C00
    ctx->pc = 0x34a51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15360));
    // 0x34a520: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34a520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a524: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34a524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34a528: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34A528u;
    SET_GPR_U32(ctx, 31, 0x34A530u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34A528u, 0x34A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A530u;
label_34a530:
    // 0x34a530: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a534: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34a534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34a538: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34a538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34a53c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34a540: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34a540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34a544: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34a544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34a548: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34a548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34a54c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x34a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x34a550: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34a550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34a554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34a554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a558: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a55c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a560: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34a560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x34a564: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34A564u;
    SET_GPR_U32(ctx, 31, 0x34A56Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34A564u, 0x34A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A56Cu;
label_34a56c:
    // 0x34a56c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34a56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a570: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34a570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34a574: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34A574u;
    {
        const bool branch_taken_0x34a574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a574) {
            ctx->pc = 0x34A594u;
            goto label_34a594;
        }
    }
    ctx->pc = 0x34A57Cu;
    // 0x34a57c: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x34a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x34a580: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34a580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34a584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34a584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a588: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a58c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a590: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34a590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_34a594:
    // 0x34a594: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a598: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34a598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a59c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34a59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a5a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a5a4: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x34a5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a5a8: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x34a5a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34a5ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34A5ACu;
    SET_GPR_U32(ctx, 31, 0x34A5B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34A5ACu, 0x34A5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A5B4u;
label_34a5b4:
    // 0x34a5b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a5b8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34a5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34a5bc: 0x3c023c48  lui         $v0, 0x3C48
    ctx->pc = 0x34a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15432 << 16));
    // 0x34a5c0: 0x34422b17  ori         $v0, $v0, 0x2B17
    ctx->pc = 0x34a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11031);
    // 0x34a5c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34a5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34a5c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a5cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a5d0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x34a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x34a5d4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x34a5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34a5d8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34a5dc: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34a5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34a5e0: 0xc05c848  jal         func_172120
    ctx->pc = 0x34A5E0u;
    SET_GPR_U32(ctx, 31, 0x34A5E8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34A5E0u, 0x34A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A5E8u;
label_34a5e8:
    // 0x34a5e8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x34a5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34a5ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a5f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34a5f4: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x34a5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a5f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a5fc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34a5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a600: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x34a600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a604: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34a604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34a608: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x34a608u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34a60c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34A60Cu;
    SET_GPR_U32(ctx, 31, 0x34A614u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34A60Cu, 0x34A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A614u;
label_34a614:
    // 0x34a614: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a618: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34a618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34a61c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a620: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34a620u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34a624: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34A624u;
    SET_GPR_U32(ctx, 31, 0x34A62Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34A624u, 0x34A62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A62Cu;
label_34a62c:
    // 0x34a62c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34a62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a630: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34A630u;
    SET_GPR_U32(ctx, 31, 0x34A638u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34A630u, 0x34A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A638u;
label_34a638:
    // 0x34a638: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34a638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a63c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34a63cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34a640: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34A640u;
    SET_GPR_U32(ctx, 31, 0x34A648u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34A640u, 0x34A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A648u;
label_34a648:
    // 0x34a648: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34a648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a64c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34A64Cu;
    SET_GPR_U32(ctx, 31, 0x34A654u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34A64Cu, 0x34A654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A654u;
label_34a654:
    // 0x34a654: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x34a654u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a65c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x34a65cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34a660: 0x3e00008  jr          $ra
    ctx->pc = 0x34A660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A668u;
}
