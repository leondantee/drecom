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

// Function: Om84_R1_dm01
// Address: 0x359e70 - 0x35a214
void Om84_R1_dm01_0x359e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om84_R1_dm01_0x359e70");
#endif

    switch (ctx->pc) {
        case 0x359ed4u: goto label_359ed4;
        case 0x359ee0u: goto label_359ee0;
        case 0x359f5cu: goto label_359f5c;
        case 0x359f7cu: goto label_359f7c;
        case 0x359fecu: goto label_359fec;
        case 0x35a034u: goto label_35a034;
        case 0x35a04cu: goto label_35a04c;
        case 0x35a058u: goto label_35a058;
        case 0x35a06cu: goto label_35a06c;
        case 0x35a0a4u: goto label_35a0a4;
        case 0x35a0ecu: goto label_35a0ec;
        case 0x35a154u: goto label_35a154;
        case 0x35a160u: goto label_35a160;
        case 0x35a1b0u: goto label_35a1b0;
        case 0x35a1bcu: goto label_35a1bc;
        default: break;
    }

    ctx->pc = 0x359e70u;

    // 0x359e70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x359e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x359e74: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x359e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x359e78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x359e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x359e7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x359e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x359e84: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x359e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x359e88: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x359e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x359e8c: 0x2463a8a0  addiu       $v1, $v1, -0x5760
    ctx->pc = 0x359e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944928));
    // 0x359e90: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x359e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x359e94: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x359e94u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AA8A0u));
    // 0x359e98: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x359e98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x359e9c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359ea0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x359ea0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x359ea4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x359ea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x359ea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x359ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359eac: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x359EACu;
    {
        const bool branch_taken_0x359eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x359eac) {
            ctx->pc = 0x359FC8u;
            goto label_359fc8;
        }
    }
    ctx->pc = 0x359EB4u;
    // 0x359eb4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x359EB4u;
    {
        const bool branch_taken_0x359eb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x359eb4) {
            ctx->pc = 0x359EC4u;
            goto label_359ec4;
        }
    }
    ctx->pc = 0x359EBCu;
    // 0x359ebc: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x359EBCu;
    {
        const bool branch_taken_0x359ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359ebc) {
            ctx->pc = 0x35A1F8u;
            goto label_35a1f8;
        }
    }
    ctx->pc = 0x359EC4u;
label_359ec4:
    // 0x359ec4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x359ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359ec8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x359ec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x359ecc: 0xc0d85c4  jal         func_361710
    ctx->pc = 0x359ECCu;
    SET_GPR_U32(ctx, 31, 0x359ED4u);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x359ECCu, 0x359ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359ED4u;
label_359ed4:
    // 0x359ed4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x359ed4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359ed8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x359ED8u;
    {
        const bool branch_taken_0x359ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359ed8) {
            ctx->pc = 0x359F08u;
            goto label_359f08;
        }
    }
    ctx->pc = 0x359EE0u;
label_359ee0:
    // 0x359ee0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x359ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359ee4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x359ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x359ee8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x359ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x359eec: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x359eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x359ef0: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x359ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x359ef4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x359ef4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x359ef8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x359ef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x359efc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x359efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x359f00: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x359f00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x359f04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x359f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_359f08:
    // 0x359f08: 0x2e030017  sltiu       $v1, $s0, 0x17
    ctx->pc = 0x359f08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x359f0c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x359F0Cu;
    {
        const bool branch_taken_0x359f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x359f0c) {
            ctx->pc = 0x359EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359ee0;
        }
    }
    ctx->pc = 0x359F14u;
    // 0x359f14: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f18: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x359f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x359f1c: 0x24720cf0  addiu       $s2, $v1, 0xCF0
    ctx->pc = 0x359f1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3312));
    // 0x359f20: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x359f20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x359f24: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f28: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x359f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x359f2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x359f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x359f30: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x359F30u;
    {
        const bool branch_taken_0x359f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x359f30) {
            ctx->pc = 0x359F84u;
            goto label_359f84;
        }
    }
    ctx->pc = 0x359F38u;
    // 0x359f38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f3c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x359f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x359f40: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x359f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x359f44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x359f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x359f48: 0x24040428  addiu       $a0, $zero, 0x428
    ctx->pc = 0x359f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1064));
    // 0x359f4c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x359f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x359f50: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x359f50u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359f54: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x359F54u;
    SET_GPR_U32(ctx, 31, 0x359F5Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x359F54u, 0x359F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F5Cu;
label_359f5c:
    // 0x359f5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x359f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f60: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x359f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f64: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x359f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x359f68: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x359f68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359f6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x359f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359f70: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x359f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x359f74: 0xc0965d0  jal         func_259740
    ctx->pc = 0x359F74u;
    SET_GPR_U32(ctx, 31, 0x359F7Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x359F74u, 0x359F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359F7Cu;
label_359f7c:
    // 0x359f7c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x359F7Cu;
    {
        const bool branch_taken_0x359f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359f7c) {
            ctx->pc = 0x359FB8u;
            goto label_359fb8;
        }
    }
    ctx->pc = 0x359F84u;
label_359f84:
    // 0x359f84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x359f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x359f88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x359f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x359f90: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f94: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x359f94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x359f98: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359f9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x359f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x359fa0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359fa4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x359fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x359fa8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359fac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x359facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x359fb0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x359FB0u;
    {
        const bool branch_taken_0x359fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359fb0) {
            ctx->pc = 0x35A1F8u;
            goto label_35a1f8;
        }
    }
    ctx->pc = 0x359FB8u;
label_359fb8:
    // 0x359fb8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x359fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359fbc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x359fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x359fc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x359fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x359fc4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x359fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_359fc8:
    // 0x359fc8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x359fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359fcc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x359fccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x359fd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x359fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x359fd4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x359fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x359fd8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x359FD8u;
    {
        const bool branch_taken_0x359fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x359fd8) {
            ctx->pc = 0x35A080u;
            goto label_35a080;
        }
    }
    ctx->pc = 0x359FE0u;
    // 0x359fe0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x359fe0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359fe4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x359FE4u;
    {
        const bool branch_taken_0x359fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359fe4) {
            ctx->pc = 0x35A070u;
            goto label_35a070;
        }
    }
    ctx->pc = 0x359FECu;
label_359fec:
    // 0x359fec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x359fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359ff0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x359ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x359ff4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x359ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x359ff8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x359ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x359ffc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x359ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35a000: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35a000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35a004: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x35a004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x35a008: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x35a008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35a00c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x35a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x35a010: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x35a010u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a014: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x35a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a018: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x35a018u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x35a01c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a020: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35a020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a024: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35a024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a028: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x35a028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35a02c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x35A02Cu;
    SET_GPR_U32(ctx, 31, 0x35A034u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x35A034u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35A034u) { return; }
    ctx->pc = 0x35A034u;
label_35a034:
    // 0x35a034: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x35a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x35a038: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35a038u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a03c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35a03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a040: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x35a040u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a044: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35A044u;
    SET_GPR_U32(ctx, 31, 0x35A04Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35A044u, 0x35A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A04Cu;
label_35a04c:
    // 0x35a04c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35a04cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35a050: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35A050u;
    SET_GPR_U32(ctx, 31, 0x35A058u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35A050u, 0x35A058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A058u;
label_35a058:
    // 0x35a058: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x35a058u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a05c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35a05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a060: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x35a060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35a064: 0xc0d8840  jal         func_362100
    ctx->pc = 0x35A064u;
    SET_GPR_U32(ctx, 31, 0x35A06Cu);
    ctx->pc = 0x362100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362100u, 0x35A064u, 0x35A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A06Cu;
label_35a06c:
    // 0x35a06c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35a06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_35a070:
    // 0x35a070: 0x2e020017  sltiu       $v0, $s0, 0x17
    ctx->pc = 0x35a070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x35a074: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x35A074u;
    {
        const bool branch_taken_0x35a074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a074) {
            ctx->pc = 0x359FECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359fec;
        }
    }
    ctx->pc = 0x35A07Cu;
    // 0x35a07c: 0x0  nop
    ctx->pc = 0x35a07cu;
    // NOP
label_35a080:
    // 0x35a080: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a084: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35a084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x35a088: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35a088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35a08c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x35a08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x35a090: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x35A090u;
    {
        const bool branch_taken_0x35a090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a090) {
            ctx->pc = 0x35A178u;
            goto label_35a178;
        }
    }
    ctx->pc = 0x35A098u;
    // 0x35a098: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x35a098u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a09c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x35A09Cu;
    {
        const bool branch_taken_0x35a09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a09c) {
            ctx->pc = 0x35A168u;
            goto label_35a168;
        }
    }
    ctx->pc = 0x35A0A4u;
label_35a0a4:
    // 0x35a0a4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a0a8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x35a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35a0ac: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x35a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35a0b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x35a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35a0b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35a0b8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35a0bc: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x35a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x35a0c0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x35a0c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35a0c4: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x35a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x35a0c8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x35a0c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a0cc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x35a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a0d0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x35a0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x35a0d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a0d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a0dc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35a0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a0e0: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x35a0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35a0e4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x35A0E4u;
    SET_GPR_U32(ctx, 31, 0x35A0ECu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x35A0ECu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35A0ECu) { return; }
    ctx->pc = 0x35A0ECu;
label_35a0ec:
    // 0x35a0ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a0f0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x35a0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a0f4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x35a0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a0f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35a0f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35a0fc: 0x0  nop
    ctx->pc = 0x35a0fcu;
    // NOP
    // 0x35a100: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x35A100u;
    {
        const bool branch_taken_0x35a100 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35a100) {
            ctx->pc = 0x35A160u;
            goto label_35a160;
        }
    }
    ctx->pc = 0x35A108u;
    // 0x35a108: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35a108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a10c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35a110: 0x2021806  srlv        $v1, $v0, $s0
    ctx->pc = 0x35a110u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x35a114: 0x8c82128c  lw          $v0, 0x128C($a0)
    ctx->pc = 0x35a114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x35a118: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x35a118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x35a11c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35A11Cu;
    {
        const bool branch_taken_0x35a11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a11c) {
            ctx->pc = 0x35A160u;
            goto label_35a160;
        }
    }
    ctx->pc = 0x35A124u;
    // 0x35a124: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35a124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a128: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35a128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35a12c: 0x2021806  srlv        $v1, $v0, $s0
    ctx->pc = 0x35a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x35a130: 0x8c82128c  lw          $v0, 0x128C($a0)
    ctx->pc = 0x35a130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x35a134: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35a134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35a138: 0xac82128c  sw          $v0, 0x128C($a0)
    ctx->pc = 0x35a138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 2));
    // 0x35a13c: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x35a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x35a140: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35a140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a144: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35a144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a148: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x35a148u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a14c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35A14Cu;
    SET_GPR_U32(ctx, 31, 0x35A154u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35A14Cu, 0x35A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A154u;
label_35a154:
    // 0x35a154: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35a154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35a158: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35A158u;
    SET_GPR_U32(ctx, 31, 0x35A160u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35A158u, 0x35A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A160u;
label_35a160:
    // 0x35a160: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35a160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35a164: 0x0  nop
    ctx->pc = 0x35a164u;
    // NOP
label_35a168:
    // 0x35a168: 0x2e020017  sltiu       $v0, $s0, 0x17
    ctx->pc = 0x35a168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x35a16c: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x35A16Cu;
    {
        const bool branch_taken_0x35a16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a16c) {
            ctx->pc = 0x35A0A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a0a4;
        }
    }
    ctx->pc = 0x35A174u;
    // 0x35a174: 0x0  nop
    ctx->pc = 0x35a174u;
    // NOP
label_35a178:
    // 0x35a178: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a17c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35a17cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x35a180: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35a180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35a184: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35a184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35a188: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35A188u;
    {
        const bool branch_taken_0x35a188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a188) {
            ctx->pc = 0x35A1A4u;
            goto label_35a1a4;
        }
    }
    ctx->pc = 0x35A190u;
    // 0x35a190: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35a190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a194: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35a194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35a198: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x35a198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x35a19c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35a19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35a1a0: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
label_35a1a4:
    // 0x35a1a4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x35A1A8u;
    SET_GPR_U32(ctx, 31, 0x35A1B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x35A1A8u, 0x35A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A1B0u;
label_35a1b0:
    // 0x35a1b0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1b4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x35A1B4u;
    SET_GPR_U32(ctx, 31, 0x35A1BCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x35A1B4u, 0x35A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A1BCu;
label_35a1bc:
    // 0x35a1bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1c0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x35a1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x35a1c4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x35A1C4u;
    {
        const bool branch_taken_0x35a1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a1c4) {
            ctx->pc = 0x35A1F8u;
            goto label_35a1f8;
        }
    }
    ctx->pc = 0x35A1CCu;
    // 0x35a1cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35a1d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35a1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35a1d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1dc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35a1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a1e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35a1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a1e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35a1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35a1f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a1f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_35a1f8:
    // 0x35a1f8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x35a1f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35a1fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35a1fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35a200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35a200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35a204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a208: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x35a208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35a20c: 0x3e00008  jr          $ra
    ctx->pc = 0x35A20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A214u;
}
