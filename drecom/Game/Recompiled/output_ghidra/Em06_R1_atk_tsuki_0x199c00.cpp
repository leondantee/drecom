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

// Function: Em06_R1_atk_tsuki
// Address: 0x199c00 - 0x199d94
void Em06_R1_atk_tsuki_0x199c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_atk_tsuki_0x199c00");
#endif

    switch (ctx->pc) {
        case 0x199c54u: goto label_199c54;
        case 0x199c98u: goto label_199c98;
        case 0x199cacu: goto label_199cac;
        case 0x199cecu: goto label_199cec;
        case 0x199cfcu: goto label_199cfc;
        case 0x199d1cu: goto label_199d1c;
        case 0x199d28u: goto label_199d28;
        case 0x199d38u: goto label_199d38;
        case 0x199d44u: goto label_199d44;
        default: break;
    }

    ctx->pc = 0x199c00u;

    // 0x199c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x199c04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x199c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x199c08: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x199c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x199c0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199c10: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x199c10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x199c14: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x199c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x199c18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199c1c: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x199C1Cu;
    {
        const bool branch_taken_0x199c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x199c1c) {
            ctx->pc = 0x199C6Cu;
            goto label_199c6c;
        }
    }
    ctx->pc = 0x199C24u;
    // 0x199c24: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199C24u;
    {
        const bool branch_taken_0x199c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x199c24) {
            ctx->pc = 0x199C34u;
            goto label_199c34;
        }
    }
    ctx->pc = 0x199C2Cu;
    // 0x199c2c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x199C2Cu;
    {
        const bool branch_taken_0x199c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199c2c) {
            ctx->pc = 0x199D84u;
            goto label_199d84;
        }
    }
    ctx->pc = 0x199C34u;
label_199c34:
    // 0x199c34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199c38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199c3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x199c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x199c40: 0x24061e19  addiu       $a2, $zero, 0x1E19
    ctx->pc = 0x199c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7705));
    // 0x199c44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x199c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199c48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x199c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x199c4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x199C4Cu;
    SET_GPR_U32(ctx, 31, 0x199C54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x199C4Cu, 0x199C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C54u;
label_199c54:
    // 0x199c54: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199c58: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x199c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x199c5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x199c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x199c60: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x199c60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x199c64: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x199C64u;
    {
        const bool branch_taken_0x199c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199c64) {
            ctx->pc = 0x199D84u;
            goto label_199d84;
        }
    }
    ctx->pc = 0x199C6Cu;
label_199c6c:
    // 0x199c6c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199c70: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x199c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199c74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199c78: 0x3c023bc4  lui         $v0, 0x3BC4
    ctx->pc = 0x199c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15300 << 16));
    // 0x199c7c: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x199c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x199c80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x199c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x199c84: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x199c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x199c88: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x199c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x199c8c: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x199c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x199c90: 0xc05c848  jal         func_172120
    ctx->pc = 0x199C90u;
    SET_GPR_U32(ctx, 31, 0x199C98u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x199C90u, 0x199C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C98u;
label_199c98:
    // 0x199c98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199c9c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x199c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199ca0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x199ca0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x199ca4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x199CA4u;
    SET_GPR_U32(ctx, 31, 0x199CACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x199CA4u, 0x199CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199CACu;
label_199cac:
    // 0x199cac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199cb0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x199cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x199cb4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x199cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x199cb8: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x199cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x199cbc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x199cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x199cc0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x199cc0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3873E0u));
    // 0x199cc4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x199cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x199cc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199ccc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x199cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x199cd0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199cd4: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x199cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x199cd8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x199cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x199cdc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x199cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x199ce0: 0x24478c90  addiu       $a3, $v0, -0x7370
    ctx->pc = 0x199ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937744));
    // 0x199ce4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x199CE4u;
    SET_GPR_U32(ctx, 31, 0x199CECu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x199CE4u, 0x199CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199CECu;
label_199cec:
    // 0x199cec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199cf0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x199cf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x199cf4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x199CF4u;
    SET_GPR_U32(ctx, 31, 0x199CFCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x199CF4u, 0x199CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199CFCu;
label_199cfc:
    // 0x199cfc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199d00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199d04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199d08: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x199d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x199d0c: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x199d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x199d10: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x199d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x199d14: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x199D14u;
    SET_GPR_U32(ctx, 31, 0x199D1Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x199D1Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x199D1Cu) { return; }
    ctx->pc = 0x199D1Cu;
label_199d1c:
    // 0x199d1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199d20: 0xc05cd10  jal         func_173440
    ctx->pc = 0x199D20u;
    SET_GPR_U32(ctx, 31, 0x199D28u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x199D20u, 0x199D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D28u;
label_199d28:
    // 0x199d28: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199d2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x199d2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x199d30: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x199D30u;
    SET_GPR_U32(ctx, 31, 0x199D38u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x199D30u, 0x199D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D38u;
label_199d38:
    // 0x199d38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199d3c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x199D3Cu;
    SET_GPR_U32(ctx, 31, 0x199D44u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x199D3Cu, 0x199D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199D44u;
label_199d44:
    // 0x199d44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199d48: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x199d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x199d4c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x199D4Cu;
    {
        const bool branch_taken_0x199d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x199d4c) {
            ctx->pc = 0x199D84u;
            goto label_199d84;
        }
    }
    ctx->pc = 0x199D54u;
    // 0x199d54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x199d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199d58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199d5c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x199d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x199d60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x199d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199d64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199d68: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x199d68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x199d6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199d70: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x199d70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x199d74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199d78: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x199d78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x199d7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199d80: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x199d80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_199d84:
    // 0x199d84: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x199d84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199d88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x199d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x199d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x199D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199D94u;
}
