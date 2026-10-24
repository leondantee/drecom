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

// Function: Om81_R1_dm01
// Address: 0x35b920 - 0x35bccc
void Om81_R1_dm01_0x35b920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om81_R1_dm01_0x35b920");
#endif

    switch (ctx->pc) {
        case 0x35b984u: goto label_35b984;
        case 0x35b990u: goto label_35b990;
        case 0x35ba0cu: goto label_35ba0c;
        case 0x35ba2cu: goto label_35ba2c;
        case 0x35baa4u: goto label_35baa4;
        case 0x35baecu: goto label_35baec;
        case 0x35bb04u: goto label_35bb04;
        case 0x35bb10u: goto label_35bb10;
        case 0x35bb24u: goto label_35bb24;
        case 0x35bb5cu: goto label_35bb5c;
        case 0x35bba4u: goto label_35bba4;
        case 0x35bc0cu: goto label_35bc0c;
        case 0x35bc18u: goto label_35bc18;
        case 0x35bc68u: goto label_35bc68;
        case 0x35bc74u: goto label_35bc74;
        default: break;
    }

    ctx->pc = 0x35b920u;

    // 0x35b920: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35b920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35b924: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x35b924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x35b928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35b928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35b92c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35b92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35b930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35b930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35b934: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x35b934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x35b938: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x35b938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x35b93c: 0x2463aa10  addiu       $v1, $v1, -0x55F0
    ctx->pc = 0x35b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945296));
    // 0x35b940: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35b940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35b944: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x35b944u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AAA10u));
    // 0x35b948: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x35b948u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x35b94c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35b94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35b950: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x35b950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35b954: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35b954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35b958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35b958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b95c: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x35B95Cu;
    {
        const bool branch_taken_0x35b95c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35b95c) {
            ctx->pc = 0x35BA80u;
            goto label_35ba80;
        }
    }
    ctx->pc = 0x35B964u;
    // 0x35b964: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35B964u;
    {
        const bool branch_taken_0x35b964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b964) {
            ctx->pc = 0x35B974u;
            goto label_35b974;
        }
    }
    ctx->pc = 0x35B96Cu;
    // 0x35b96c: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x35B96Cu;
    {
        const bool branch_taken_0x35b96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b96c) {
            ctx->pc = 0x35BCB0u;
            goto label_35bcb0;
        }
    }
    ctx->pc = 0x35B974u;
label_35b974:
    // 0x35b974: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35b974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35b978: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x35b978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35b97c: 0xc0d85c4  jal         func_361710
    ctx->pc = 0x35B97Cu;
    SET_GPR_U32(ctx, 31, 0x35B984u);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x35B97Cu, 0x35B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B984u;
label_35b984:
    // 0x35b984: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x35b984u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35b988: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x35B988u;
    {
        const bool branch_taken_0x35b988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b988) {
            ctx->pc = 0x35B9B8u;
            goto label_35b9b8;
        }
    }
    ctx->pc = 0x35B990u;
label_35b990:
    // 0x35b990: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x35b990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35b994: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x35b994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x35b998: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x35b998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x35b99c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x35b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35b9a0: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x35b9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x35b9a4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x35b9a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35b9a8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x35b9a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35b9ac: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x35b9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x35b9b0: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x35b9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35b9b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35b9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_35b9b8:
    // 0x35b9b8: 0x2e030019  sltiu       $v1, $s0, 0x19
    ctx->pc = 0x35b9b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x35b9bc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x35B9BCu;
    {
        const bool branch_taken_0x35b9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b9bc) {
            ctx->pc = 0x35B990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b990;
        }
    }
    ctx->pc = 0x35B9C4u;
    // 0x35b9c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35b9c8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x35b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x35b9cc: 0x24720e10  addiu       $s2, $v1, 0xE10
    ctx->pc = 0x35b9ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3600));
    // 0x35b9d0: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x35b9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b9d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35b9d8: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35b9dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35b9e0: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x35B9E0u;
    {
        const bool branch_taken_0x35b9e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35b9e0) {
            ctx->pc = 0x35BA34u;
            goto label_35ba34;
        }
    }
    ctx->pc = 0x35B9E8u;
    // 0x35b9e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35b9ec: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x35b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x35b9f0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35b9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35b9f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35b9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35b9f8: 0x24040427  addiu       $a0, $zero, 0x427
    ctx->pc = 0x35b9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1063));
    // 0x35b9fc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x35b9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x35ba00: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35ba00u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ba04: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x35BA04u;
    SET_GPR_U32(ctx, 31, 0x35BA0Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x35BA04u, 0x35BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA0Cu;
label_35ba0c:
    // 0x35ba0c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ba10: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ba14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x35ba14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x35ba18: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35ba18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ba1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35ba1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ba20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35ba20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35ba24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x35BA24u;
    SET_GPR_U32(ctx, 31, 0x35BA2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x35BA24u, 0x35BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA2Cu;
label_35ba2c:
    // 0x35ba2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x35BA2Cu;
    {
        const bool branch_taken_0x35ba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ba2c) {
            ctx->pc = 0x35BA68u;
            goto label_35ba68;
        }
    }
    ctx->pc = 0x35BA34u;
label_35ba34:
    // 0x35ba34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35ba38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ba3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35ba3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35ba40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ba44: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35ba44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ba48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ba4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35ba4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ba50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ba54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35ba54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ba58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ba5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35ba60: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x35BA60u;
    {
        const bool branch_taken_0x35ba60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ba60) {
            ctx->pc = 0x35BCB0u;
            goto label_35bcb0;
        }
    }
    ctx->pc = 0x35BA68u;
label_35ba68:
    // 0x35ba68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ba6c: 0xac40128c  sw          $zero, 0x128C($v0)
    ctx->pc = 0x35ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 0));
    // 0x35ba70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ba74: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35ba74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35ba78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35ba7c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35ba7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_35ba80:
    // 0x35ba80: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35ba84: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35ba84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x35ba88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35ba88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35ba8c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x35ba8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x35ba90: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x35BA90u;
    {
        const bool branch_taken_0x35ba90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ba90) {
            ctx->pc = 0x35BB38u;
            goto label_35bb38;
        }
    }
    ctx->pc = 0x35BA98u;
    // 0x35ba98: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x35ba98u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ba9c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x35BA9Cu;
    {
        const bool branch_taken_0x35ba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ba9c) {
            ctx->pc = 0x35BB28u;
            goto label_35bb28;
        }
    }
    ctx->pc = 0x35BAA4u;
label_35baa4:
    // 0x35baa4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35baa8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x35baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35baac: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x35baacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35bab0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x35bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35bab4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35bab8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35babc: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x35babcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x35bac0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x35bac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35bac4: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x35bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x35bac8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x35bac8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35bacc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x35baccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35bad0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x35bad0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x35bad4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bad8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35badc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35badcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35bae0: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x35bae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35bae4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x35BAE4u;
    SET_GPR_U32(ctx, 31, 0x35BAECu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x35BAECu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35BAECu) { return; }
    ctx->pc = 0x35BAECu;
label_35baec:
    // 0x35baec: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x35baecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x35baf0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35baf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35baf4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35baf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35baf8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x35baf8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35bafc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35BAFCu;
    SET_GPR_U32(ctx, 31, 0x35BB04u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35BAFCu, 0x35BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB04u;
label_35bb04:
    // 0x35bb04: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35bb04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35bb08: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35BB08u;
    SET_GPR_U32(ctx, 31, 0x35BB10u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35BB08u, 0x35BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB10u;
label_35bb10:
    // 0x35bb10: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x35bb10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35bb14: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35bb18: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x35bb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35bb1c: 0xc0d8840  jal         func_362100
    ctx->pc = 0x35BB1Cu;
    SET_GPR_U32(ctx, 31, 0x35BB24u);
    ctx->pc = 0x362100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362100u, 0x35BB1Cu, 0x35BB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB24u;
label_35bb24:
    // 0x35bb24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35bb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_35bb28:
    // 0x35bb28: 0x2e020019  sltiu       $v0, $s0, 0x19
    ctx->pc = 0x35bb28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x35bb2c: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x35BB2Cu;
    {
        const bool branch_taken_0x35bb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bb2c) {
            ctx->pc = 0x35BAA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35baa4;
        }
    }
    ctx->pc = 0x35BB34u;
    // 0x35bb34: 0x0  nop
    ctx->pc = 0x35bb34u;
    // NOP
label_35bb38:
    // 0x35bb38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bb3c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35bb3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x35bb40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35bb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35bb44: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x35bb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x35bb48: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x35BB48u;
    {
        const bool branch_taken_0x35bb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bb48) {
            ctx->pc = 0x35BC30u;
            goto label_35bc30;
        }
    }
    ctx->pc = 0x35BB50u;
    // 0x35bb50: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x35bb50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35bb54: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x35BB54u;
    {
        const bool branch_taken_0x35bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bb54) {
            ctx->pc = 0x35BC20u;
            goto label_35bc20;
        }
    }
    ctx->pc = 0x35BB5Cu;
label_35bb5c:
    // 0x35bb5c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bb60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x35bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35bb64: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x35bb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35bb68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x35bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35bb6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35bb70: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35bb74: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x35bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x35bb78: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x35bb78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35bb7c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x35bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x35bb80: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x35bb80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35bb84: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x35bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35bb88: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x35bb88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x35bb8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bb90: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35bb94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35bb98: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x35bb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35bb9c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x35BB9Cu;
    SET_GPR_U32(ctx, 31, 0x35BBA4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x35BBA4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35BBA4u) { return; }
    ctx->pc = 0x35BBA4u;
label_35bba4:
    // 0x35bba4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bba8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x35bba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35bbac: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x35bbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35bbb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35bbb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35bbb4: 0x0  nop
    ctx->pc = 0x35bbb4u;
    // NOP
    // 0x35bbb8: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x35BBB8u;
    {
        const bool branch_taken_0x35bbb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35bbb8) {
            ctx->pc = 0x35BC18u;
            goto label_35bc18;
        }
    }
    ctx->pc = 0x35BBC0u;
    // 0x35bbc0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35bbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bbc4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35bbc8: 0x2021806  srlv        $v1, $v0, $s0
    ctx->pc = 0x35bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x35bbcc: 0x8c82128c  lw          $v0, 0x128C($a0)
    ctx->pc = 0x35bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x35bbd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x35bbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x35bbd4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35BBD4u;
    {
        const bool branch_taken_0x35bbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bbd4) {
            ctx->pc = 0x35BC18u;
            goto label_35bc18;
        }
    }
    ctx->pc = 0x35BBDCu;
    // 0x35bbdc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35bbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bbe0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35bbe4: 0x2021806  srlv        $v1, $v0, $s0
    ctx->pc = 0x35bbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x35bbe8: 0x8c82128c  lw          $v0, 0x128C($a0)
    ctx->pc = 0x35bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x35bbec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35bbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35bbf0: 0xac82128c  sw          $v0, 0x128C($a0)
    ctx->pc = 0x35bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4748), GPR_U32(ctx, 2));
    // 0x35bbf4: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x35bbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x35bbf8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35bbf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35bbfc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x35bbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35bc00: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x35bc00u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35bc04: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35BC04u;
    SET_GPR_U32(ctx, 31, 0x35BC0Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35BC04u, 0x35BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC0Cu;
label_35bc0c:
    // 0x35bc0c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x35bc0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35bc10: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35BC10u;
    SET_GPR_U32(ctx, 31, 0x35BC18u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35BC10u, 0x35BC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC18u;
label_35bc18:
    // 0x35bc18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35bc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35bc1c: 0x0  nop
    ctx->pc = 0x35bc1cu;
    // NOP
label_35bc20:
    // 0x35bc20: 0x2e020019  sltiu       $v0, $s0, 0x19
    ctx->pc = 0x35bc20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x35bc24: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x35BC24u;
    {
        const bool branch_taken_0x35bc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bc24) {
            ctx->pc = 0x35BB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bb5c;
        }
    }
    ctx->pc = 0x35BC2Cu;
    // 0x35bc2c: 0x0  nop
    ctx->pc = 0x35bc2cu;
    // NOP
label_35bc30:
    // 0x35bc30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc34: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35bc34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x35bc38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35bc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35bc3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35bc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35bc40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35BC40u;
    {
        const bool branch_taken_0x35bc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bc40) {
            ctx->pc = 0x35BC5Cu;
            goto label_35bc5c;
        }
    }
    ctx->pc = 0x35BC48u;
    // 0x35bc48: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35bc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc4c: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35bc50: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x35bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x35bc54: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35bc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35bc58: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
label_35bc5c:
    // 0x35bc5c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35bc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc60: 0xc05cd10  jal         func_173440
    ctx->pc = 0x35BC60u;
    SET_GPR_U32(ctx, 31, 0x35BC68u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x35BC60u, 0x35BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC68u;
label_35bc68:
    // 0x35bc68: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35bc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc6c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x35BC6Cu;
    SET_GPR_U32(ctx, 31, 0x35BC74u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x35BC6Cu, 0x35BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC74u;
label_35bc74:
    // 0x35bc74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc78: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x35bc78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x35bc7c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x35BC7Cu;
    {
        const bool branch_taken_0x35bc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bc7c) {
            ctx->pc = 0x35BCB0u;
            goto label_35bcb0;
        }
    }
    ctx->pc = 0x35BC84u;
    // 0x35bc84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x35bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35bc88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35bc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35bc90: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc94: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35bc94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bc98: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35bc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bca0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bca4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35bca4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bca8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bcac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_35bcb0:
    // 0x35bcb0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x35bcb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35bcb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35bcb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35bcb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35bcb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bcbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35bcbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bcc0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x35bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35bcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x35BCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BCCCu;
}
