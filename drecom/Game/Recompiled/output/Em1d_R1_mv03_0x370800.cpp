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

// Function: Em1d_R1_mv03
// Address: 0x370800 - 0x370cac
void Em1d_R1_mv03_0x370800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_R1_mv03_0x370800");
#endif

    switch (ctx->pc) {
        case 0x370888u: goto label_370888;
        case 0x370898u: goto label_370898;
        case 0x3708a4u: goto label_3708a4;
        case 0x3708b0u: goto label_3708b0;
        case 0x3708bcu: goto label_3708bc;
        case 0x370904u: goto label_370904;
        case 0x37091cu: goto label_37091c;
        case 0x370928u: goto label_370928;
        case 0x370934u: goto label_370934;
        case 0x370940u: goto label_370940;
        case 0x370984u: goto label_370984;
        case 0x3709e4u: goto label_3709e4;
        case 0x370a28u: goto label_370a28;
        case 0x370a6cu: goto label_370a6c;
        case 0x370ab0u: goto label_370ab0;
        case 0x370af4u: goto label_370af4;
        case 0x370b38u: goto label_370b38;
        case 0x370b7cu: goto label_370b7c;
        case 0x370b94u: goto label_370b94;
        case 0x370ba0u: goto label_370ba0;
        case 0x370bacu: goto label_370bac;
        case 0x370bb8u: goto label_370bb8;
        default: break;
    }

    ctx->pc = 0x370800u;

    // 0x370800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x370800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x370804: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x370804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x370808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x370808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37080c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37080cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x370810: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x370810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x370814: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370818: 0x8c7102d0  lw          $s1, 0x2D0($v1)
    ctx->pc = 0x370818u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x37081c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370820: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x370820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x370824: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x370824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x370828: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x370828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37082c: 0x108300d5  beq         $a0, $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x37082Cu;
    {
        const bool branch_taken_0x37082c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37082c) {
            ctx->pc = 0x370B84u;
            goto label_370b84;
        }
    }
    ctx->pc = 0x370834u;
    // 0x370834: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x370834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370838: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x370838u;
    {
        const bool branch_taken_0x370838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x370838) {
            ctx->pc = 0x37090Cu;
            goto label_37090c;
        }
    }
    ctx->pc = 0x370840u;
    // 0x370840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370844: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x370844u;
    {
        const bool branch_taken_0x370844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x370844) {
            ctx->pc = 0x370888u;
            goto label_370888;
        }
    }
    ctx->pc = 0x37084Cu;
    // 0x37084c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37084Cu;
    {
        const bool branch_taken_0x37084c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37084c) {
            ctx->pc = 0x37085Cu;
            goto label_37085c;
        }
    }
    ctx->pc = 0x370854u;
    // 0x370854: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x370854u;
    {
        const bool branch_taken_0x370854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370854) {
            ctx->pc = 0x370C60u;
            goto label_370c60;
        }
    }
    ctx->pc = 0x37085Cu;
label_37085c:
    // 0x37085c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370860: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370864: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x370864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x370868: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37086c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37086cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370870: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x370870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x370874: 0x24061e07  addiu       $a2, $zero, 0x1E07
    ctx->pc = 0x370874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7687));
    // 0x370878: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x370878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37087c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x37087cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x370880: 0xc0965d0  jal         func_259740
    ctx->pc = 0x370880u;
    SET_GPR_U32(ctx, 31, 0x370888u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x370880u, 0x370888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370888u;
label_370888:
    // 0x370888: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37088c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37088cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370890: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370890u;
    SET_GPR_U32(ctx, 31, 0x370898u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370890u, 0x370898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370898u;
label_370898:
    // 0x370898: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37089c: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x37089Cu;
    SET_GPR_U32(ctx, 31, 0x3708A4u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x37089Cu, 0x3708A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3708A4u;
label_3708a4:
    // 0x3708a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3708a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3708a8: 0xc0dd008  jal         func_374020
    ctx->pc = 0x3708A8u;
    SET_GPR_U32(ctx, 31, 0x3708B0u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x3708A8u, 0x3708B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3708B0u;
label_3708b0:
    // 0x3708b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3708b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3708b4: 0xc0dd150  jal         func_374540
    ctx->pc = 0x3708B4u;
    SET_GPR_U32(ctx, 31, 0x3708BCu);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x3708B4u, 0x3708BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3708BCu;
label_3708bc:
    // 0x3708bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3708bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3708c0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3708c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3708c4: 0x106000e6  beqz        $v1, . + 4 + (0xE6 << 2)
    ctx->pc = 0x3708C4u;
    {
        const bool branch_taken_0x3708c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3708c4) {
            ctx->pc = 0x370C60u;
            goto label_370c60;
        }
    }
    ctx->pc = 0x3708CCu;
    // 0x3708cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3708ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3708d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3708d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3708d4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3708d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3708d8: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x3708d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x3708dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3708dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3708e0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x3708e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3708e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3708e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3708e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3708e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3708ec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3708ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3708f0: 0x24061e08  addiu       $a2, $zero, 0x1E08
    ctx->pc = 0x3708f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7688));
    // 0x3708f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3708f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3708f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3708f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3708fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3708FCu;
    SET_GPR_U32(ctx, 31, 0x370904u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3708FCu, 0x370904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370904u;
label_370904:
    // 0x370904: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x370904u;
    {
        const bool branch_taken_0x370904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370904) {
            ctx->pc = 0x370C60u;
            goto label_370c60;
        }
    }
    ctx->pc = 0x37090Cu;
label_37090c:
    // 0x37090c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37090cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370910: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370910u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370914: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370914u;
    SET_GPR_U32(ctx, 31, 0x37091Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370914u, 0x37091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37091Cu;
label_37091c:
    // 0x37091c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37091cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370920: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x370920u;
    SET_GPR_U32(ctx, 31, 0x370928u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x370920u, 0x370928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370928u;
label_370928:
    // 0x370928: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37092c: 0xc0dd008  jal         func_374020
    ctx->pc = 0x37092Cu;
    SET_GPR_U32(ctx, 31, 0x370934u);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x37092Cu, 0x370934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370934u;
label_370934:
    // 0x370934: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370938: 0xc0dd150  jal         func_374540
    ctx->pc = 0x370938u;
    SET_GPR_U32(ctx, 31, 0x370940u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x370938u, 0x370940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370940u;
label_370940:
    // 0x370940: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x370940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370944: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x370944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x370948: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x370948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x37094c: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x37094cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x370950: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x370950u;
    {
        const bool branch_taken_0x370950 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x370950) {
            ctx->pc = 0x370984u;
            goto label_370984;
        }
    }
    ctx->pc = 0x370958u;
    // 0x370958: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x370958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37095c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370960: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x370960u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x370964: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370968: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37096c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x37096cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x370970: 0x24061e09  addiu       $a2, $zero, 0x1E09
    ctx->pc = 0x370970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7689));
    // 0x370974: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x370974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370978: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x370978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x37097c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x37097Cu;
    SET_GPR_U32(ctx, 31, 0x370984u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x37097Cu, 0x370984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370984u;
label_370984:
    // 0x370984: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370988: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x370988u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x37098c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x37098cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x370990: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x370990u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x370994: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x370994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x370998: 0x148300b1  bne         $a0, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x370998u;
    {
        const bool branch_taken_0x370998 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x370998) {
            ctx->pc = 0x370C60u;
            goto label_370c60;
        }
    }
    ctx->pc = 0x3709A0u;
    // 0x3709a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3709a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3709a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3709a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3709a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3709a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3709ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3709acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3709b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3709b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3709b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3709b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3709b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3709b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3709bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3709bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3709c0: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x3709c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x3709c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3709c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3709c8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3709c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3709cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3709ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3709d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3709d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3709d4: 0x24470780  addiu       $a3, $v0, 0x780
    ctx->pc = 0x3709d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    // 0x3709d8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3709d8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3709dc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3709DCu;
    SET_GPR_U32(ctx, 31, 0x3709E4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3709DCu, 0x3709E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3709E4u;
label_3709e4:
    // 0x3709e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3709e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3709e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3709e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3709ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3709ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3709f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3709f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3709f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3709f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3709f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3709f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3709fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3709fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370a00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370a04: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x370a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x370a08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370a0c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370a10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370a10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370a14: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x370a14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370a18: 0x244707c0  addiu       $a3, $v0, 0x7C0
    ctx->pc = 0x370a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    // 0x370a1c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x370a1cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370a20: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x370A20u;
    SET_GPR_U32(ctx, 31, 0x370A28u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x370A20u, 0x370A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A28u;
label_370a28:
    // 0x370a28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370a2c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x370a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370a30: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x370a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x370a34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x370a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x370a38: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x370a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x370a3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x370a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370a40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x370a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370a44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370a48: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x370a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x370a4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370a50: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370a54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370a54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370a58: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x370a58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370a5c: 0x24470700  addiu       $a3, $v0, 0x700
    ctx->pc = 0x370a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x370a60: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x370a60u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370a64: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x370A64u;
    SET_GPR_U32(ctx, 31, 0x370A6Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x370A64u, 0x370A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370A6Cu;
label_370a6c:
    // 0x370a6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370a70: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x370a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370a74: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x370a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x370a78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x370a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x370a7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x370a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x370a80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x370a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370a84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x370a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370a88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370a8c: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x370a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x370a90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370a94: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370a98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370a98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370a9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x370a9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370aa0: 0x24470740  addiu       $a3, $v0, 0x740
    ctx->pc = 0x370aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
    // 0x370aa4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x370aa4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370aa8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x370AA8u;
    SET_GPR_U32(ctx, 31, 0x370AB0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x370AA8u, 0x370AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370AB0u;
label_370ab0:
    // 0x370ab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ab4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x370ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370ab8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x370ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x370abc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x370abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x370ac0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x370ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x370ac4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x370ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370ac8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x370ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370acc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370ad0: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x370ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x370ad4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ad8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370adc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370adcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370ae0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x370ae0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370ae4: 0x24470680  addiu       $a3, $v0, 0x680
    ctx->pc = 0x370ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x370ae8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x370ae8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370aec: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x370AECu;
    SET_GPR_U32(ctx, 31, 0x370AF4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x370AECu, 0x370AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370AF4u;
label_370af4:
    // 0x370af4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370af8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x370af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370afc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x370afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x370b00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x370b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x370b04: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x370b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x370b08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x370b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370b0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x370b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370b10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370b14: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x370b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x370b18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370b1c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370b20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370b20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370b24: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x370b24u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370b28: 0x244706c0  addiu       $a3, $v0, 0x6C0
    ctx->pc = 0x370b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x370b2c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x370b2cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370b30: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x370B30u;
    SET_GPR_U32(ctx, 31, 0x370B38u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x370B30u, 0x370B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B38u;
label_370b38:
    // 0x370b38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370b3c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x370b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370b40: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x370b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x370b44: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x370b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x370b48: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x370b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x370b4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x370b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x370b50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x370b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x370b54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x370b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x370b58: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x370b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x370b5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x370b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370b60: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x370b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x370b64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370b64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370b68: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x370b68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370b6c: 0x24470180  addiu       $a3, $v0, 0x180
    ctx->pc = 0x370b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x370b70: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x370b70u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370b74: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x370B74u;
    SET_GPR_U32(ctx, 31, 0x370B7Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x370B74u, 0x370B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B7Cu;
label_370b7c:
    // 0x370b7c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x370B7Cu;
    {
        const bool branch_taken_0x370b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370b7c) {
            ctx->pc = 0x370C60u;
            goto label_370c60;
        }
    }
    ctx->pc = 0x370B84u;
label_370b84:
    // 0x370b84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370b88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x370b88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x370b8c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x370B8Cu;
    SET_GPR_U32(ctx, 31, 0x370B94u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x370B8Cu, 0x370B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B94u;
label_370b94:
    // 0x370b94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370b98: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x370B98u;
    SET_GPR_U32(ctx, 31, 0x370BA0u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x370B98u, 0x370BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370BA0u;
label_370ba0:
    // 0x370ba0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370ba4: 0xc0dd008  jal         func_374020
    ctx->pc = 0x370BA4u;
    SET_GPR_U32(ctx, 31, 0x370BACu);
    ctx->pc = 0x374020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374020u, 0x370BA4u, 0x370BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370BACu;
label_370bac:
    // 0x370bac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x370bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370bb0: 0xc0dd150  jal         func_374540
    ctx->pc = 0x370BB0u;
    SET_GPR_U32(ctx, 31, 0x370BB8u);
    ctx->pc = 0x374540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374540u, 0x370BB0u, 0x370BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370BB8u;
label_370bb8:
    // 0x370bb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370bbc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x370bbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x370bc0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x370BC0u;
    {
        const bool branch_taken_0x370bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x370bc0) {
            ctx->pc = 0x370C60u;
            goto label_370c60;
        }
    }
    ctx->pc = 0x370BC8u;
    // 0x370bc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x370bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370bcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370bd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x370bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x370bd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370bd8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x370bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x370bdc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370be0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x370be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x370be4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370be8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x370be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x370bec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370bf0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x370bf4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370bf8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370bfc: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x370bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370c00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c04: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x370C04u;
    {
        const bool branch_taken_0x370c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x370c04) {
            ctx->pc = 0x370C60u;
            goto label_370c60;
        }
    }
    ctx->pc = 0x370C0Cu;
    // 0x370c0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x370c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370c10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370c18: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370c1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x370c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x370c20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370c28: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370c2c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x370c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x370c30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370c38: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370c3c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x370c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x370c40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c44: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370c48: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370c4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x370c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x370c50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x370c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x370c58: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x370c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x370c5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x370c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_370c60:
    // 0x370c60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c64: 0x8c7001ac  lw          $s0, 0x1AC($v1)
    ctx->pc = 0x370c64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
    // 0x370c68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c6c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x370c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x370c70: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x370c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x370c74: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x370c74u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370c78: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x370c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x370c7c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x370c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x370c80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x370c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x370c84: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x370c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x370c88: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x370c88u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370c8c: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x370c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x370c90: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x370c90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x370c94: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x370c94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370c98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x370c98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370c9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x370c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370ca0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x370ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x370ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x370CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370CACu;
}
