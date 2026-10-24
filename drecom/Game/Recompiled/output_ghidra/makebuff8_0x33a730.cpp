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

// Function: makebuff8
// Address: 0x33a730 - 0x33a944
void makebuff8_0x33a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("makebuff8_0x33a730");
#endif

    switch (ctx->pc) {
        case 0x33a77cu: goto label_33a77c;
        case 0x33a7c0u: goto label_33a7c0;
        default: break;
    }

    ctx->pc = 0x33a730u;

    // 0x33a730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x33a730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x33a734: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x33a734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x33a738: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33a738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33a73c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33a740: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33a744: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x33a744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x33a748: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x33a748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x33a74c: 0xa3a60050  sb          $a2, 0x50($sp)
    ctx->pc = 0x33a74cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 6));
    // 0x33a750: 0xa3a70058  sb          $a3, 0x58($sp)
    ctx->pc = 0x33a750u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 7));
    // 0x33a754: 0xa3a80060  sb          $t0, 0x60($sp)
    ctx->pc = 0x33a754u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 8));
    // 0x33a758: 0xa3a90068  sb          $t1, 0x68($sp)
    ctx->pc = 0x33a758u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 9));
    // 0x33a75c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a760: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x33a760u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x33a764: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x33A764u;
    {
        const bool branch_taken_0x33a764 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a764) {
            ctx->pc = 0x33A788u;
            goto label_33a788;
        }
    }
    ctx->pc = 0x33A76Cu;
    // 0x33a76c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33a770: 0x24442850  addiu       $a0, $v0, 0x2850
    ctx->pc = 0x33a770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10320));
    // 0x33a774: 0xc046760  jal         func_119D80
    ctx->pc = 0x33A774u;
    SET_GPR_U32(ctx, 31, 0x33A77Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x33A77Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33A77Cu) { return; }
    ctx->pc = 0x33A77Cu;
label_33a77c:
    // 0x33a77c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a780: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x33A780u;
    {
        const bool branch_taken_0x33a780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a780) {
            ctx->pc = 0x33A928u;
            goto label_33a928;
        }
    }
    ctx->pc = 0x33A788u;
label_33a788:
    // 0x33a788: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a78c: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a790: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a794: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33a794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33a798: 0x28420200  slti        $v0, $v0, 0x200
    ctx->pc = 0x33a798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x33a79c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A79Cu;
    {
        const bool branch_taken_0x33a79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a79c) {
            ctx->pc = 0x33A7B0u;
            goto label_33a7b0;
        }
    }
    ctx->pc = 0x33A7A4u;
    // 0x33a7a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33a7a8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x33A7A8u;
    {
        const bool branch_taken_0x33a7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a7a8) {
            ctx->pc = 0x33A928u;
            goto label_33a928;
        }
    }
    ctx->pc = 0x33A7B0u;
label_33a7b0:
    // 0x33a7b0: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x33a7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33a7b4: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x33a7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33a7b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x33A7B8u;
    {
        const bool branch_taken_0x33a7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a7b8) {
            ctx->pc = 0x33A808u;
            goto label_33a808;
        }
    }
    ctx->pc = 0x33A7C0u;
label_33a7c0:
    // 0x33a7c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x33a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33a7c4: 0x2021006  srlv        $v0, $v0, $s0
    ctx->pc = 0x33a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x33a7c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a7cc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x33a7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a7d0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a7d4: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a7d8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a7dc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a7e0: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33a7e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a7e4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a7e8: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a7ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a7f0: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33a7f4: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x33a7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x33a7f8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x33a7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x33a7fc: 0x8fb20048  lw          $s2, 0x48($sp)
    ctx->pc = 0x33a7fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a800: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x33a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x33a804: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x33a804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_33a808:
    // 0x33a808: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33A808u;
    {
        const bool branch_taken_0x33a808 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x33a808) {
            ctx->pc = 0x33A820u;
            goto label_33a820;
        }
    }
    ctx->pc = 0x33A810u;
    // 0x33a810: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33a810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a814: 0x1c40ffea  bgtz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x33A814u;
    {
        const bool branch_taken_0x33a814 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x33a814) {
            ctx->pc = 0x33A7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a7c0;
        }
    }
    ctx->pc = 0x33A81Cu;
    // 0x33a81c: 0x0  nop
    ctx->pc = 0x33a81cu;
    // NOP
label_33a820:
    // 0x33a820: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33a820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a824: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x33a824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33a828: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x33a828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x33a82c: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33A82Cu;
    {
        const bool branch_taken_0x33a82c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33a82c) {
            ctx->pc = 0x33A85Cu;
            goto label_33a85c;
        }
    }
    ctx->pc = 0x33A834u;
    // 0x33a834: 0x93a40050  lbu         $a0, 0x50($sp)
    ctx->pc = 0x33a834u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33a838: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a83c: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a840: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a844: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a848: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33a848u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a84c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a850: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a858: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a858u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_33a85c:
    // 0x33a85c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a860: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x33a860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33a864: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x33a864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x33a868: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33A868u;
    {
        const bool branch_taken_0x33a868 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33a868) {
            ctx->pc = 0x33A898u;
            goto label_33a898;
        }
    }
    ctx->pc = 0x33A870u;
    // 0x33a870: 0x93a40058  lbu         $a0, 0x58($sp)
    ctx->pc = 0x33a870u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x33a874: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a878: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a87c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a880: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a884: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33a884u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a888: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a88c: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a894: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_33a898:
    // 0x33a898: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x33a898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a89c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x33a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33a8a0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x33a8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x33a8a4: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33A8A4u;
    {
        const bool branch_taken_0x33a8a4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x33a8a4) {
            ctx->pc = 0x33A8D4u;
            goto label_33a8d4;
        }
    }
    ctx->pc = 0x33A8ACu;
    // 0x33a8ac: 0x93a40060  lbu         $a0, 0x60($sp)
    ctx->pc = 0x33a8acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33a8b0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a8b4: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a8b8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a8bc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a8c0: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33a8c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a8c4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a8c8: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a8cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a8d0: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_33a8d4:
    // 0x33a8d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x33a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a8d8: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33A8D8u;
    {
        const bool branch_taken_0x33a8d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x33a8d8) {
            ctx->pc = 0x33A908u;
            goto label_33a908;
        }
    }
    ctx->pc = 0x33A8E0u;
    // 0x33a8e0: 0x93a40068  lbu         $a0, 0x68($sp)
    ctx->pc = 0x33a8e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33a8e4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a8e8: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a8ec: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a8f0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a8f4: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33a8f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a8f8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a8fc: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a904: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a904u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_33a908:
    // 0x33a908: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x33a908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33a90c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a910: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a914: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a918: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a91c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a920: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33a924: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33a924u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33a928:
    // 0x33a928: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x33a928u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a92c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33a92cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a938: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x33a938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33a93c: 0x3e00008  jr          $ra
    ctx->pc = 0x33A93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A944u;
}
