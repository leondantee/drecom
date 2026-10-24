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

// Function: _updateRefImage
// Address: 0x107f78 - 0x108354
void _updateRefImage_0x107f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_updateRefImage_0x107f78");
#endif

    ctx->pc = 0x107f78u;

    // 0x107f78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x107f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x107f7c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x107f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x107f80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x107f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x107f84: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x107f84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x107f88: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x107f88u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x107f8c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x107f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x107f90: 0x8e4a3dac  lw          $t2, 0x3DAC($s2)
    ctx->pc = 0x107f90u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x383DACu));
    // 0x107f94: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x107f94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x107f98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x107f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107f9c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x107f9cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107fa4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x107fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107fa8: 0x8c433bf4  lw          $v1, 0x3BF4($v0)
    ctx->pc = 0x107fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383BF4u));
    // 0x107fac: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x107facu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fb0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x107fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x107fb4: 0x39420003  xori        $v0, $t2, 0x3
    ctx->pc = 0x107fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)3);
    // 0x107fb8: 0x8e6d3d7c  lw          $t5, 0x3D7C($s3)
    ctx->pc = 0x107fb8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x383D7Cu));
    // 0x107fbc: 0x222580a  movz        $t3, $s1, $v0
    ctx->pc = 0x107fbcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 17));
    // 0x107fc0: 0x8c690040  lw          $t1, 0x40($v1)
    ctx->pc = 0x107fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x107fc4: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x107fc4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107fc8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x107fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107fcc: 0x15b0005b  bne         $t5, $s0, . + 4 + (0x5B << 2)
    ctx->pc = 0x107FCCu;
    {
        const bool branch_taken_0x107fcc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 16));
        ctx->pc = 0x107FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FCCu;
        // 0x107fd0: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fcc) {
            ctx->pc = 0x10813Cu;
            goto label_10813c;
        }
    }
    ctx->pc = 0x107FD4u;
    // 0x107fd4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x107fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x107fd8: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x107fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x107fdc: 0x8c873c08  lw          $a3, 0x3C08($a0)
    ctx->pc = 0x107fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x383C08u));
    // 0x107fe0: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x107fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x107fe4: 0x8d2200a0  lw          $v0, 0xA0($t1)
    ctx->pc = 0x107fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 160)));
    // 0x107fe8: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x107fe8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x107fec: 0x8d2300a4  lw          $v1, 0xA4($t1)
    ctx->pc = 0x107fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 164)));
    // 0x107ff0: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x107ff0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x107ff4: 0x8d043c20  lw          $a0, 0x3C20($t0)
    ctx->pc = 0x107ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C20u));
    // 0x107ff8: 0x8cc53c14  lw          $a1, 0x3C14($a2)
    ctx->pc = 0x107ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x383C14u));
    // 0x107ffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x107ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x108000: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x108000u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x108004: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x108004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x108008: 0xae873e44  sw          $a3, 0x3E44($s4)
    ctx->pc = 0x108008u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 15940), GPR_U32(ctx, 7));
    // 0x10800c: 0xad853e48  sw          $a1, 0x3E48($t4)
    ctx->pc = 0x10800cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 15944), GPR_U32(ctx, 5));
    // 0x108010: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x108010u;
    {
        const bool branch_taken_0x108010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108010u;
        // 0x108014: 0xad043e4c  sw          $a0, 0x3E4C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 15948), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108010) {
            ctx->pc = 0x108030u;
            goto label_108030;
        }
    }
    ctx->pc = 0x108018u;
    // 0x108018: 0xad2000e8  sw          $zero, 0xE8($t1)
    ctx->pc = 0x108018u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
    // 0x10801c: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x10801cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x108020: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x108024: 0xace03e34  sw          $zero, 0x3E34($a3)
    ctx->pc = 0x108024u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x383E34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383E34u, _value); } while (0);
    // 0x108028: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108028u;
    {
        const bool branch_taken_0x108028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108028u;
        // 0x10802c: 0xac403e30  sw          $zero, 0x3E30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15920), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108028) {
            ctx->pc = 0x108034u;
            goto label_108034;
        }
    }
    ctx->pc = 0x108030u;
label_108030:
    // 0x108030: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x108030u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
label_108034:
    // 0x108034: 0x8d2200e8  lw          $v0, 0xE8($t1)
    ctx->pc = 0x108034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 232)));
    // 0x108038: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108038u;
    {
        const bool branch_taken_0x108038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108038u;
        // 0x10803c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108038) {
            ctx->pc = 0x10804Cu;
            goto label_10804c;
        }
    }
    ctx->pc = 0x108040u;
    // 0x108040: 0x8ce23e34  lw          $v0, 0x3E34($a3)
    ctx->pc = 0x108040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 15924)));
    // 0x108044: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x108044u;
    {
        const bool branch_taken_0x108044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108044u;
        // 0x108048: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108044) {
            ctx->pc = 0x10807Cu;
            goto label_10807c;
        }
    }
    ctx->pc = 0x10804Cu;
label_10804c:
    // 0x10804c: 0x8c433e30  lw          $v1, 0x3E30($v0)
    ctx->pc = 0x10804cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
    // 0x108050: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x108050u;
    {
        const bool branch_taken_0x108050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x108050) {
            ctx->pc = 0x108054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108050u;
            // 0x108054: 0xad2000e8  sw          $zero, 0xE8($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108080u;
            goto label_108080;
        }
    }
    ctx->pc = 0x108058u;
    // 0x108058: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10805c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10805cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x108060: 0x8c443c00  lw          $a0, 0x3C00($v0)
    ctx->pc = 0x108060u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C00u));
    // 0x108064: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x108064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x108068: 0x8c663c0c  lw          $a2, 0x3C0C($v1)
    ctx->pc = 0x108068u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x383C0Cu));
    // 0x10806c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x10806cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x108070: 0x8ca23c18  lw          $v0, 0x3C18($a1)
    ctx->pc = 0x108070u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383C18u));
    // 0x108074: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x108074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x108078: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x108078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_10807c:
    // 0x10807c: 0xad2000e8  sw          $zero, 0xE8($t1)
    ctx->pc = 0x10807cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
label_108080:
    // 0x108080: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x108080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108084: 0x8e423dac  lw          $v0, 0x3DAC($s2)
    ctx->pc = 0x108084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
    // 0x108088: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x108088u;
    {
        const bool branch_taken_0x108088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108088u;
        // 0x10808c: 0xace03e34  sw          $zero, 0x3E34($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 15924), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108088) {
            ctx->pc = 0x1080D0u;
            goto label_1080d0;
        }
    }
    ctx->pc = 0x108090u;
    // 0x108090: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x108094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108098: 0x8c433c00  lw          $v1, 0x3C00($v0)
    ctx->pc = 0x108098u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383C00u));
    // 0x10809c: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x10809cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1080a0: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1080A0u;
    {
        const bool branch_taken_0x1080a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1080A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080A0u;
        // 0x1080a4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080a0) {
            ctx->pc = 0x1080B4u;
            goto label_1080b4;
        }
    }
    ctx->pc = 0x1080A8u;
    // 0x1080a8: 0x8c433e30  lw          $v1, 0x3E30($v0)
    ctx->pc = 0x1080a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
    // 0x1080ac: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x1080ACu;
    {
        const bool branch_taken_0x1080ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080ACu;
        // 0x1080b0: 0x8e433dac  lw          $v1, 0x3DAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080ac) {
            ctx->pc = 0x10823Cu;
            goto label_10823c;
        }
    }
    ctx->pc = 0x1080B4u;
label_1080b4:
    // 0x1080b4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1080b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1080b8: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x1080b8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080bc: 0x8c833c04  lw          $v1, 0x3C04($a0)
    ctx->pc = 0x1080bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383C04u));
    // 0x1080c0: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1080c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1080c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1080c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1080c8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1080C8u;
    {
        const bool branch_taken_0x1080c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1080CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080C8u;
        // 0x1080cc: 0x2c80b  movn        $t9, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080c8) {
            ctx->pc = 0x108238u;
            goto label_108238;
        }
    }
    ctx->pc = 0x1080D0u;
label_1080d0:
    // 0x1080d0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1080d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1080d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1080d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1080d8: 0x8c433c0c  lw          $v1, 0x3C0C($v0)
    ctx->pc = 0x1080d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383C0Cu));
    // 0x1080dc: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x1080dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1080e0: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1080E0u;
    {
        const bool branch_taken_0x1080e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1080E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080E0u;
        // 0x1080e4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080e0) {
            ctx->pc = 0x1080FCu;
            goto label_1080fc;
        }
    }
    ctx->pc = 0x1080E8u;
    // 0x1080e8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1080e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1080ec: 0x8c433c18  lw          $v1, 0x3C18($v0)
    ctx->pc = 0x1080ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383C18u));
    // 0x1080f0: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x1080f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1080f4: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1080F4u;
    {
        const bool branch_taken_0x1080f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1080F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080F4u;
        // 0x1080f8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080f4) {
            ctx->pc = 0x108108u;
            goto label_108108;
        }
    }
    ctx->pc = 0x1080FCu;
label_1080fc:
    // 0x1080fc: 0x8c433e30  lw          $v1, 0x3E30($v0)
    ctx->pc = 0x1080fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
    // 0x108100: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x108100u;
    {
        const bool branch_taken_0x108100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108100u;
        // 0x108104: 0x8e433dac  lw          $v1, 0x3DAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108100) {
            ctx->pc = 0x10823Cu;
            goto label_10823c;
        }
    }
    ctx->pc = 0x108108u;
label_108108:
    // 0x108108: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10810c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10810cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108110: 0x8c433c10  lw          $v1, 0x3C10($v0)
    ctx->pc = 0x108110u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383C10u));
    // 0x108114: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x108114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x108118: 0x14a40048  bne         $a1, $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x108118u;
    {
        const bool branch_taken_0x108118 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x10811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108118u;
        // 0x10811c: 0x8e433dac  lw          $v1, 0x3DAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108118) {
            ctx->pc = 0x10823Cu;
            goto label_10823c;
        }
    }
    ctx->pc = 0x108120u;
    // 0x108120: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x108124: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x108124u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108128: 0x8c443c1c  lw          $a0, 0x3C1C($v0)
    ctx->pc = 0x108128u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C1Cu));
    // 0x10812c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x10812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x108130: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x108130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x108134: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x108134u;
    {
        const bool branch_taken_0x108134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108134u;
        // 0x108138: 0x3c80b  movn        $t9, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108134) {
            ctx->pc = 0x108238u;
            goto label_108238;
        }
    }
    ctx->pc = 0x10813Cu;
label_10813c:
    // 0x10813c: 0x15c00013  bnez        $t6, . + 4 + (0x13 << 2)
    ctx->pc = 0x10813Cu;
    {
        const bool branch_taken_0x10813c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x108140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10813Cu;
        // 0x108140: 0x3c0c0038  lui         $t4, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10813c) {
            ctx->pc = 0x10818Cu;
            goto label_10818c;
        }
    }
    ctx->pc = 0x108144u;
    // 0x108144: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x108144u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x108148: 0x8cc83c00  lw          $t0, 0x3C00($a2)
    ctx->pc = 0x108148u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x383C00u));
    // 0x10814c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x10814cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x108150: 0x8d873c04  lw          $a3, 0x3C04($t4)
    ctx->pc = 0x108150u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 15364)));
    // 0x108154: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x108154u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x108158: 0xad883c04  sw          $t0, 0x3C04($t4)
    ctx->pc = 0x108158u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 15364), GPR_U32(ctx, 8));
    // 0x10815c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10815cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x108160: 0x8ca83c0c  lw          $t0, 0x3C0C($a1)
    ctx->pc = 0x108160u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x383C0Cu));
    // 0x108164: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x108164u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x108168: 0x8d633c10  lw          $v1, 0x3C10($t3)
    ctx->pc = 0x108168u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383C10u));
    // 0x10816c: 0xad683c10  sw          $t0, 0x3C10($t3)
    ctx->pc = 0x10816cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x383C10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383C10u, _value); } while (0);
    // 0x108170: 0x8c883c18  lw          $t0, 0x3C18($a0)
    ctx->pc = 0x108170u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x383C18u));
    // 0x108174: 0x8d223c1c  lw          $v0, 0x3C1C($t1)
    ctx->pc = 0x108174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383C1Cu));
    // 0x108178: 0xacc73c00  sw          $a3, 0x3C00($a2)
    ctx->pc = 0x108178u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x383C00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383C00u, _value); } while (0);
    // 0x10817c: 0xaca33c0c  sw          $v1, 0x3C0C($a1)
    ctx->pc = 0x10817cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x383C0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383C0Cu, _value); } while (0);
    // 0x108180: 0xac823c18  sw          $v0, 0x3C18($a0)
    ctx->pc = 0x108180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383C18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383C18u, _value); } while (0);
    // 0x108184: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108184u;
    {
        const bool branch_taken_0x108184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108184u;
        // 0x108188: 0xad283c1c  sw          $t0, 0x3C1C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 15388), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108184) {
            ctx->pc = 0x108194u;
            goto label_108194;
        }
    }
    ctx->pc = 0x10818Cu;
label_10818c:
    // 0x10818c: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x10818cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x108190: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x108190u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
label_108194:
    // 0x108194: 0x8d823c04  lw          $v0, 0x3C04($t4)
    ctx->pc = 0x108194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 15364)));
    // 0x108198: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x108198u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x10819c: 0x8d653c10  lw          $a1, 0x3C10($t3)
    ctx->pc = 0x10819cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 15376)));
    // 0x1081a0: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x1081a0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x1081a4: 0x8d243c1c  lw          $a0, 0x3C1C($t1)
    ctx->pc = 0x1081a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 15388)));
    // 0x1081a8: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x1081a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x1081ac: 0xae823e44  sw          $v0, 0x3E44($s4)
    ctx->pc = 0x1081acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x383E44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383E44u, _value); } while (0);
    // 0x1081b0: 0xad853e48  sw          $a1, 0x3E48($t4)
    ctx->pc = 0x1081b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x383E48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x383E48u, _value); } while (0);
    // 0x1081b4: 0x15f0000b  bne         $t7, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1081B4u;
    {
        const bool branch_taken_0x1081b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        ctx->pc = 0x1081B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081B4u;
        // 0x1081b8: 0xad043e4c  sw          $a0, 0x3E4C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 15948), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081b4) {
            ctx->pc = 0x1081E4u;
            goto label_1081e4;
        }
    }
    ctx->pc = 0x1081BCu;
    // 0x1081bc: 0x55b1001e  bnel        $t5, $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1081BCu;
    {
        const bool branch_taken_0x1081bc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 17));
        if (branch_taken_0x1081bc) {
            ctx->pc = 0x1081C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1081BCu;
            // 0x1081c0: 0x24190001  addiu       $t9, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108238u;
            goto label_108238;
        }
    }
    ctx->pc = 0x1081C4u;
    // 0x1081c4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1081c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1081c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1081c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1081cc: 0x8c823c00  lw          $v0, 0x3C00($a0)
    ctx->pc = 0x1081ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383C00u));
    // 0x1081d0: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1081d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1081d4: 0x14650019  bne         $v1, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1081D4u;
    {
        const bool branch_taken_0x1081d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1081D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081D4u;
        // 0x1081d8: 0x8e433dac  lw          $v1, 0x3DAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081d4) {
            ctx->pc = 0x10823Cu;
            goto label_10823c;
        }
    }
    ctx->pc = 0x1081DCu;
    // 0x1081dc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1081DCu;
    {
        const bool branch_taken_0x1081dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1081E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081DCu;
        // 0x1081e0: 0x24190001  addiu       $t9, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081dc) {
            ctx->pc = 0x10823Cu;
            goto label_10823c;
        }
    }
    ctx->pc = 0x1081E4u;
label_1081e4:
    // 0x1081e4: 0x39420001  xori        $v0, $t2, 0x1
    ctx->pc = 0x1081e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)1);
    // 0x1081e8: 0x8e633d7c  lw          $v1, 0x3D7C($s3)
    ctx->pc = 0x1081e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15740)));
    // 0x1081ec: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x1081ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x1081f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1081f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1081f4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1081F4u;
    {
        const bool branch_taken_0x1081f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1081F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081F4u;
        // 0x1081f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081f4) {
            ctx->pc = 0x108234u;
            goto label_108234;
        }
    }
    ctx->pc = 0x1081FCu;
    // 0x1081fc: 0x11c00004  beqz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1081FCu;
    {
        const bool branch_taken_0x1081fc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x108200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081FCu;
        // 0x108200: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081fc) {
            ctx->pc = 0x108210u;
            goto label_108210;
        }
    }
    ctx->pc = 0x108204u;
    // 0x108204: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x108204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x108208: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x108208u;
    {
        const bool branch_taken_0x108208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x10820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108208u;
        // 0x10820c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108208) {
            ctx->pc = 0x108234u;
            goto label_108234;
        }
    }
    ctx->pc = 0x108210u;
label_108210:
    // 0x108210: 0x8c433c0c  lw          $v1, 0x3C0C($v0)
    ctx->pc = 0x108210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15372)));
    // 0x108214: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x108214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x108218: 0x14a60008  bne         $a1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x108218u;
    {
        const bool branch_taken_0x108218 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x10821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108218u;
        // 0x10821c: 0x8e433dac  lw          $v1, 0x3DAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108218) {
            ctx->pc = 0x10823Cu;
            goto label_10823c;
        }
    }
    ctx->pc = 0x108220u;
    // 0x108220: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x108224: 0x8c433c18  lw          $v1, 0x3C18($v0)
    ctx->pc = 0x108224u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383C18u));
    // 0x108228: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x108228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x10822c: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10822Cu;
    {
        const bool branch_taken_0x10822c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x108230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10822Cu;
        // 0x108230: 0x8e433dac  lw          $v1, 0x3DAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10822c) {
            ctx->pc = 0x10823Cu;
            goto label_10823c;
        }
    }
    ctx->pc = 0x108234u;
label_108234:
    // 0x108234: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x108234u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108238:
    // 0x108238: 0x8e433dac  lw          $v1, 0x3DAC($s2)
    ctx->pc = 0x108238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
label_10823c:
    // 0x10823c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108240: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x108240u;
    {
        const bool branch_taken_0x108240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108240u;
        // 0x108244: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108240) {
            ctx->pc = 0x10827Cu;
            goto label_10827c;
        }
    }
    ctx->pc = 0x108248u;
    // 0x108248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108248u;
    {
        const bool branch_taken_0x108248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108248u;
        // 0x10824c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108248) {
            ctx->pc = 0x108260u;
            goto label_108260;
        }
    }
    ctx->pc = 0x108250u;
    // 0x108250: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x108250u;
    {
        const bool branch_taken_0x108250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108250u;
        // 0x108254: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108250) {
            ctx->pc = 0x108274u;
            goto label_108274;
        }
    }
    ctx->pc = 0x108258u;
    // 0x108258: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x108258u;
    {
        const bool branch_taken_0x108258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108258u;
        // 0x10825c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108258) {
            ctx->pc = 0x108288u;
            goto label_108288;
        }
    }
    ctx->pc = 0x108260u;
label_108260:
    // 0x108260: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x108260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108264: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108264u;
    {
        const bool branch_taken_0x108264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x108264) {
            ctx->pc = 0x108268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108264u;
            // 0x108268: 0x8e983e44  lw          $t8, 0x3E44($s4) (Delay Slot)
            SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108280u;
            goto label_108280;
        }
    }
    ctx->pc = 0x10826Cu;
    // 0x10826c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10826Cu;
    {
        const bool branch_taken_0x10826c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10826Cu;
        // 0x108270: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10826c) {
            ctx->pc = 0x108284u;
            goto label_108284;
        }
    }
    ctx->pc = 0x108274u;
label_108274:
    // 0x108274: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108274u;
    {
        const bool branch_taken_0x108274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108274u;
        // 0x108278: 0x8d983e48  lw          $t8, 0x3E48($t4) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 15944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108274) {
            ctx->pc = 0x108280u;
            goto label_108280;
        }
    }
    ctx->pc = 0x10827Cu;
label_10827c:
    // 0x10827c: 0x8d183e4c  lw          $t8, 0x3E4C($t0)
    ctx->pc = 0x10827cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 15948)));
label_108280:
    // 0x108280: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x108280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_108284:
    // 0x108284: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x108284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_108288:
    // 0x108288: 0x8c6a3dc8  lw          $t2, 0x3DC8($v1)
    ctx->pc = 0x108288u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15816)));
    // 0x10828c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10828cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x108290: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x108290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x108294: 0x8e6c3d7c  lw          $t4, 0x3D7C($s3)
    ctx->pc = 0x108294u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 15740)));
    // 0x108298: 0x8ca33dc0  lw          $v1, 0x3DC0($a1)
    ctx->pc = 0x108298u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DC0u));
    // 0x10829c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x10829cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1082a0: 0x8e4d3dac  lw          $t5, 0x3DAC($s2)
    ctx->pc = 0x1082a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
    // 0x1082a4: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1082a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x1082a8: 0x8c4b3d48  lw          $t3, 0x3D48($v0)
    ctx->pc = 0x1082a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15688)));
    // 0x1082ac: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1082acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1082b0: 0x8c883db0  lw          $t0, 0x3DB0($a0)
    ctx->pc = 0x1082b0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x383DB0u));
    // 0x1082b4: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1082b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1082b8: 0xdcce4488  ld          $t6, 0x4488($a2)
    ctx->pc = 0x1082b8u;
    SET_GPR_U64(ctx, 14, FAST_READ64(0x384488u));
    // 0x1082bc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1082bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1082c0: 0xdcef4490  ld          $t7, 0x4490($a3)
    ctx->pc = 0x1082c0u;
    SET_GPR_U64(ctx, 15, FAST_READ64(0x384490u));
    // 0x1082c4: 0x25303de8  addiu       $s0, $t1, 0x3DE8
    ctx->pc = 0x1082c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 15848));
    // 0x1082c8: 0xaf0c002c  sw          $t4, 0x2C($t8)
    ctx->pc = 0x1082c8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 44), GPR_U32(ctx, 12));
    // 0x1082cc: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x1082ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x1082d0: 0xaf0d0030  sw          $t5, 0x30($t8)
    ctx->pc = 0x1082d0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 48), GPR_U32(ctx, 13));
    // 0x1082d4: 0x26323df8  addiu       $s2, $s1, 0x3DF8
    ctx->pc = 0x1082d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 15864));
    // 0x1082d8: 0xaf0b0034  sw          $t3, 0x34($t8)
    ctx->pc = 0x1082d8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 52), GPR_U32(ctx, 11));
    // 0x1082dc: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x1082dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1082e0: 0xaf0a0038  sw          $t2, 0x38($t8)
    ctx->pc = 0x1082e0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 56), GPR_U32(ctx, 10));
    // 0x1082e4: 0xaf08003c  sw          $t0, 0x3C($t8)
    ctx->pc = 0x1082e4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 60), GPR_U32(ctx, 8));
    // 0x1082e8: 0xaf030040  sw          $v1, 0x40($t8)
    ctx->pc = 0x1082e8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 64), GPR_U32(ctx, 3));
    // 0x1082ec: 0xaf000028  sw          $zero, 0x28($t8)
    ctx->pc = 0x1082ecu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 40), GPR_U32(ctx, 0));
    // 0x1082f0: 0x8c873d70  lw          $a3, 0x3D70($a0)
    ctx->pc = 0x1082f0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x383D70u));
    // 0x1082f4: 0x8d233de8  lw          $v1, 0x3DE8($t1)
    ctx->pc = 0x1082f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DE8u));
    // 0x1082f8: 0x8ca63d74  lw          $a2, 0x3D74($a1)
    ctx->pc = 0x1082f8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x383D74u));
    // 0x1082fc: 0xaf030044  sw          $v1, 0x44($t8)
    ctx->pc = 0x1082fcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 68), GPR_U32(ctx, 3));
    // 0x108300: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x108300u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108304: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x108304u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383DECu));
    // 0x108308: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x108308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10830c: 0xaf040048  sw          $a0, 0x48($t8)
    ctx->pc = 0x10830cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 72), GPR_U32(ctx, 4));
    // 0x108310: 0xff0e0018  sd          $t6, 0x18($t8)
    ctx->pc = 0x108310u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 14));
    // 0x108314: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x108314u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DF0u));
    // 0x108318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10831c: 0xaf03004c  sw          $v1, 0x4C($t8)
    ctx->pc = 0x10831cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 76), GPR_U32(ctx, 3));
    // 0x108320: 0xff0f0020  sd          $t7, 0x20($t8)
    ctx->pc = 0x108320u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 15));
    // 0x108324: 0x8e243df8  lw          $a0, 0x3DF8($s1)
    ctx->pc = 0x108324u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383DF8u));
    // 0x108328: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10832c: 0xaf040050  sw          $a0, 0x50($t8)
    ctx->pc = 0x10832cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 80), GPR_U32(ctx, 4));
    // 0x108330: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x108330u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DFCu));
    // 0x108334: 0xaf030054  sw          $v1, 0x54($t8)
    ctx->pc = 0x108334u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 84), GPR_U32(ctx, 3));
    // 0x108338: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x108338u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383E00u));
    // 0x10833c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10833cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108340: 0xaf060060  sw          $a2, 0x60($t8)
    ctx->pc = 0x108340u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 96), GPR_U32(ctx, 6));
    // 0x108344: 0xaf040058  sw          $a0, 0x58($t8)
    ctx->pc = 0x108344u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 88), GPR_U32(ctx, 4));
    // 0x108348: 0xaf07005c  sw          $a3, 0x5C($t8)
    ctx->pc = 0x108348u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 92), GPR_U32(ctx, 7));
    // 0x10834c: 0x3e00008  jr          $ra
    ctx->pc = 0x10834Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10834Cu;
        // 0x108350: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10834Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108354u;
}
