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

// Function: Em09_R1_mv08
// Address: 0x347c10 - 0x348508
void Em09_R1_mv08_0x347c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv08_0x347c10");
#endif

    switch (ctx->pc) {
        case 0x347ca8u: goto label_347ca8;
        case 0x347d74u: goto label_347d74;
        case 0x347d90u: goto label_347d90;
        case 0x347da8u: goto label_347da8;
        case 0x347db8u: goto label_347db8;
        case 0x347dd0u: goto label_347dd0;
        case 0x347ddcu: goto label_347ddc;
        case 0x347f20u: goto label_347f20;
        case 0x347f48u: goto label_347f48;
        case 0x347f74u: goto label_347f74;
        case 0x347f80u: goto label_347f80;
        case 0x347fd4u: goto label_347fd4;
        case 0x347ff8u: goto label_347ff8;
        case 0x348018u: goto label_348018;
        case 0x34803cu: goto label_34803c;
        case 0x3481d8u: goto label_3481d8;
        case 0x3481fcu: goto label_3481fc;
        case 0x34821cu: goto label_34821c;
        case 0x348240u: goto label_348240;
        case 0x348408u: goto label_348408;
        default: break;
    }

    ctx->pc = 0x347c10u;

    // 0x347c10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x347c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x347c14: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x347c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x347c18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x347c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x347c1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347c20: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x347c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x347c24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347c28: 0x8c9002d0  lw          $s0, 0x2D0($a0)
    ctx->pc = 0x347c28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x347c2c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x347c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x347c30: 0x2471dbc0  addiu       $s1, $v1, -0x2440
    ctx->pc = 0x347c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x347c34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347c38: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x347c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347c3c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x347c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x347c40: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x347c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x347c44: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x347c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x347c48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347c4c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x347c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x347c50: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x347c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x347c54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x347c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347c58: 0x108300b7  beq         $a0, $v1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x347C58u;
    {
        const bool branch_taken_0x347c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x347c58) {
            ctx->pc = 0x347F38u;
            goto label_347f38;
        }
    }
    ctx->pc = 0x347C60u;
    // 0x347c60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x347c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347c64: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x347C64u;
    {
        const bool branch_taken_0x347c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x347c64) {
            ctx->pc = 0x347D30u;
            goto label_347d30;
        }
    }
    ctx->pc = 0x347C6Cu;
    // 0x347c6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x347C6Cu;
    {
        const bool branch_taken_0x347c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x347c6c) {
            ctx->pc = 0x347C7Cu;
            goto label_347c7c;
        }
    }
    ctx->pc = 0x347C74u;
    // 0x347c74: 0x1000021e  b           . + 4 + (0x21E << 2)
    ctx->pc = 0x347C74u;
    {
        const bool branch_taken_0x347c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347c74) {
            ctx->pc = 0x3484F0u;
            goto label_3484f0;
        }
    }
    ctx->pc = 0x347C7Cu;
label_347c7c:
    // 0x347c7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x347c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347c80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347c84: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x347c84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x347c88: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x347c88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347c8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347c90: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x347c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x347c94: 0x24061e27  addiu       $a2, $zero, 0x1E27
    ctx->pc = 0x347c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7719));
    // 0x347c98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x347c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347c9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x347c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x347ca0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x347CA0u;
    SET_GPR_U32(ctx, 31, 0x347CA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x347CA0u, 0x347CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347CA8u;
label_347ca8:
    // 0x347ca8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347cac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x347cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x347cb0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x347cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x347cb4: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x347cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x347cb8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x347cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x347cbc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347cc0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x347cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x347cc4: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x347cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x347cc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x347cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347ccc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347cd0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347cd4: 0xa062006f  sb          $v0, 0x6F($v1)
    ctx->pc = 0x347cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 2));
    // 0x347cd8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x347cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x347cdc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347ce0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x347ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x347ce4: 0xa0650072  sb          $a1, 0x72($v1)
    ctx->pc = 0x347ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 5));
    // 0x347ce8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347cec: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x347cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347cf0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x347cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x347cf4: 0x34700010  ori         $s0, $v1, 0x10
    ctx->pc = 0x347cf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x347cf8: 0xac90000c  sw          $s0, 0xC($a0)
    ctx->pc = 0x347cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 16));
    // 0x347cfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d00: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x347d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x347d04: 0x24630960  addiu       $v1, $v1, 0x960
    ctx->pc = 0x347d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x347d08: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x347d08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x347d0c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x347d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347d10: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x347d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347d14: 0x34a30004  ori         $v1, $a1, 0x4
    ctx->pc = 0x347d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x347d18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x347d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x347d1c: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x347d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x347d20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d24: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x347d24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x347d28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d2c: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x347d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
label_347d30:
    // 0x347d30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d34: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x347d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x347d38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x347d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x347d3c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x347d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x347d40: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x347D40u;
    {
        const bool branch_taken_0x347d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x347d40) {
            ctx->pc = 0x347D98u;
            goto label_347d98;
        }
    }
    ctx->pc = 0x347D48u;
    // 0x347d48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d4c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x347d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d50: 0x3c033dd6  lui         $v1, 0x3DD6
    ctx->pc = 0x347d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15830 << 16));
    // 0x347d54: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x347d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x347d58: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x347d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x347d5c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x347d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x347d60: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x347d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x347d64: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x347d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x347d68: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x347d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x347d6c: 0xc05c848  jal         func_172120
    ctx->pc = 0x347D6Cu;
    SET_GPR_U32(ctx, 31, 0x347D74u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x347D6Cu, 0x347D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D74u;
label_347d74:
    // 0x347d74: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x347d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x347d78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d7c: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x347d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347d80: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x347d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347d84: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x347d84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x347d88: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x347D88u;
    SET_GPR_U32(ctx, 31, 0x347D90u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x347D88u, 0x347D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D90u;
label_347d90:
    // 0x347d90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d94: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x347d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_347d98:
    // 0x347d98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x347d9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x347da0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x347DA0u;
    SET_GPR_U32(ctx, 31, 0x347DA8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x347DA0u, 0x347DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347DA8u;
label_347da8:
    // 0x347da8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x347da8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x347dac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347db0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x347DB0u;
    SET_GPR_U32(ctx, 31, 0x347DB8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x347DB0u, 0x347DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347DB8u;
label_347db8:
    // 0x347db8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x347db8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x347dbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347dc0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x347dc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x347dc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x347dc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x347dc8: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x347DC8u;
    SET_GPR_U32(ctx, 31, 0x347DD0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x347DC8u, 0x347DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347DD0u;
label_347dd0:
    // 0x347dd0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347dd4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x347DD4u;
    SET_GPR_U32(ctx, 31, 0x347DDCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x347DD4u, 0x347DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347DDCu;
label_347ddc:
    // 0x347ddc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347de0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x347de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x347de4: 0x106001c2  beqz        $v1, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x347DE4u;
    {
        const bool branch_taken_0x347de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x347de4) {
            ctx->pc = 0x3484F0u;
            goto label_3484f0;
        }
    }
    ctx->pc = 0x347DECu;
    // 0x347dec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347df0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x347df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x347df4: 0x245036b0  addiu       $s0, $v0, 0x36B0
    ctx->pc = 0x347df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14000));
    // 0x347df8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x347df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x347dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e00: 0x0  nop
    ctx->pc = 0x347e00u;
    // NOP
    // 0x347e04: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x347e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x347e08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x347e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x347e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e10: 0x0  nop
    ctx->pc = 0x347e10u;
    // NOP
    // 0x347e14: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x347e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x347e18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x347e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x347e1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e20: 0x0  nop
    ctx->pc = 0x347e20u;
    // NOP
    // 0x347e24: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x347e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x347e28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x347e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e2c: 0x0  nop
    ctx->pc = 0x347e2cu;
    // NOP
    // 0x347e30: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x347e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x347e34: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x347e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x347e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e3c: 0x0  nop
    ctx->pc = 0x347e3cu;
    // NOP
    // 0x347e40: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x347e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x347e44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x347e44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e48: 0x0  nop
    ctx->pc = 0x347e48u;
    // NOP
    // 0x347e4c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x347e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x347e50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x347e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x347e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e58: 0x0  nop
    ctx->pc = 0x347e58u;
    // NOP
    // 0x347e5c: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x347e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x347e60: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x347e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x347e64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x347e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x347e68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e6c: 0x0  nop
    ctx->pc = 0x347e6cu;
    // NOP
    // 0x347e70: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x347e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x347e74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x347e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e78: 0x0  nop
    ctx->pc = 0x347e78u;
    // NOP
    // 0x347e7c: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x347e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x347e80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x347e80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347e84: 0x0  nop
    ctx->pc = 0x347e84u;
    // NOP
    // 0x347e88: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x347e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x347e8c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x347e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347e90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x347e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347e94: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x347e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x347e98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x347e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x347e9c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x347e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x347ea0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x347ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347ea4: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x347ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x347ea8: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x347ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
    // 0x347eac: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x347eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x347eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347eb4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x347eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347eb8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x347eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x347ebc: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x347ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x347ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347ec4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x347ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347ec8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x347ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x347ecc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x347eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x347ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347ed4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x347ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347ed8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x347ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x347edc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x347edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x347ee0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x347ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347ee4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x347ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x347ee8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x347ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x347eec: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x347eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347ef0: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x347ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x347ef4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x347ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x347ef8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347efc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x347efcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x347f00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f04: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f08: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x347f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x347f0c: 0x24060a29  addiu       $a2, $zero, 0xA29
    ctx->pc = 0x347f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2601));
    // 0x347f10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x347f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347f14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x347f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x347f18: 0xc0965d0  jal         func_259740
    ctx->pc = 0x347F18u;
    SET_GPR_U32(ctx, 31, 0x347F20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x347F18u, 0x347F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F20u;
label_347f20:
    // 0x347f20: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x347f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x347f24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347f28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f2c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x347f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x347f30: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x347F30u;
    {
        const bool branch_taken_0x347f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347f30) {
            ctx->pc = 0x3484F0u;
            goto label_3484f0;
        }
    }
    ctx->pc = 0x347F38u;
label_347f38:
    // 0x347f38: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f3c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x347f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x347f40: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x347F40u;
    SET_GPR_U32(ctx, 31, 0x347F48u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x347F40u, 0x347F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F48u;
label_347f48:
    // 0x347f48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f4c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x347f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x347f50: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x347f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x347f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x347f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x347f58: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x347f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347f5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x347f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x347f60: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x347f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x347f64: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x347f68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x347f6c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x347F6Cu;
    SET_GPR_U32(ctx, 31, 0x347F74u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x347F6Cu, 0x347F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F74u;
label_347f74:
    // 0x347f74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f78: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x347F78u;
    SET_GPR_U32(ctx, 31, 0x347F80u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x347F78u, 0x347F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347F80u;
label_347f80:
    // 0x347f80: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f84: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x347f84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x347f88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x347f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x347f8c: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x347f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x347f90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347f94: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x347f94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x347f98: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x347f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x347f9c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x347f9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x347fa0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x347fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x347fa4: 0x1483006d  bne         $a0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x347FA4u;
    {
        const bool branch_taken_0x347fa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x347fa4) {
            ctx->pc = 0x34815Cu;
            goto label_34815c;
        }
    }
    ctx->pc = 0x347FACu;
    // 0x347fac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347fb0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x347fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x347fb4: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x347fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x347fb8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347fbc: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x347fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x347fc0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x347fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347fc4: 0x246401b0  addiu       $a0, $v1, 0x1B0
    ctx->pc = 0x347fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x347fc8: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x347fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x347fcc: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x347FCCu;
    SET_GPR_U32(ctx, 31, 0x347FD4u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x347FCCu, 0x347FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347FD4u;
label_347fd4:
    // 0x347fd4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x347fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x347fd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347fdc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x347fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347fe0: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x347fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347fe4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x347fe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x347fe8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x347fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347fec: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x347fecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x347ff0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x347FF0u;
    SET_GPR_U32(ctx, 31, 0x347FF8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x347FF0u, 0x347FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347FF8u;
label_347ff8:
    // 0x347ff8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x347ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x347ffc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x347ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348000: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x348000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x348004: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x348004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348008: 0x246401b0  addiu       $a0, $v1, 0x1B0
    ctx->pc = 0x348008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x34800c: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x34800cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x348010: 0xc0d492c  jal         func_3524B0
    ctx->pc = 0x348010u;
    SET_GPR_U32(ctx, 31, 0x348018u);
    ctx->pc = 0x3524B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3524B0u, 0x348010u, 0x348018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348018u;
label_348018:
    // 0x348018: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x348018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x34801c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x34801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348020: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x348020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348024: 0xc600011c  lwc1        $f0, 0x11C($s0)
    ctx->pc = 0x348024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348028: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x348028u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34802c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x34802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348030: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x348030u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x348034: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x348034u;
    SET_GPR_U32(ctx, 31, 0x34803Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x348034u, 0x34803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34803Cu;
label_34803c:
    // 0x34803c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x34803cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x348040: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348044: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x348044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x348048: 0x247039d0  addiu       $s0, $v1, 0x39D0
    ctx->pc = 0x348048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14800));
    // 0x34804c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34804cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348054: 0x0  nop
    ctx->pc = 0x348054u;
    // NOP
    // 0x348058: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x348058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34805c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34805cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348064: 0x0  nop
    ctx->pc = 0x348064u;
    // NOP
    // 0x348068: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x348068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x34806c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34806cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348074: 0x0  nop
    ctx->pc = 0x348074u;
    // NOP
    // 0x348078: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x348078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34807c: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x34807cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
    // 0x348080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348084: 0x0  nop
    ctx->pc = 0x348084u;
    // NOP
    // 0x348088: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x348088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x34808c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x34808cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x348090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348094: 0x0  nop
    ctx->pc = 0x348094u;
    // NOP
    // 0x348098: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x348098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x34809c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34809cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3480a0: 0x0  nop
    ctx->pc = 0x3480a0u;
    // NOP
    // 0x3480a4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3480a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3480a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3480a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3480ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3480acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3480b0: 0x0  nop
    ctx->pc = 0x3480b0u;
    // NOP
    // 0x3480b4: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x3480b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x3480b8: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x3480b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x3480bc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3480bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3480c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3480c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3480c4: 0x0  nop
    ctx->pc = 0x3480c4u;
    // NOP
    // 0x3480c8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3480c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3480cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3480ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3480d0: 0x0  nop
    ctx->pc = 0x3480d0u;
    // NOP
    // 0x3480d4: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x3480d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x3480d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3480d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3480dc: 0x0  nop
    ctx->pc = 0x3480dcu;
    // NOP
    // 0x3480e0: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x3480e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x3480e4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3480e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3480e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3480e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3480ec: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3480ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3480f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3480f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3480f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3480f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3480f8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3480f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3480fc: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x3480fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x348100: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x348100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x348104: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x348104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x348108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34810c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348110: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x348110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x348114: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x348114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x348118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34811c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34811cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348120: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x348120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x348124: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x348124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x348128: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34812c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34812cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348130: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x348130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x348134: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x348134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x348138: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x348138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34813c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x34813cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x348140: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x348140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x348144: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x348144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348148: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x348148u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x34814c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x34814cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x348150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348154: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348158: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x348158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_34815c:
    // 0x34815c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34815cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348160: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x348160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x348164: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x348164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x348168: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x348168u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x34816c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x34816cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x348170: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x348170u;
    {
        const bool branch_taken_0x348170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x348170) {
            ctx->pc = 0x348194u;
            goto label_348194;
        }
    }
    ctx->pc = 0x348178u;
    // 0x348178: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34817c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x348180: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x348180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x348184: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x348184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348188: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x348188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34818c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x34818cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x348190: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x348190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_348194:
    // 0x348194: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348198: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x348198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x34819c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x34819cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3481a0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3481a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3481a4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3481a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3481a8: 0x1483006d  bne         $a0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x3481A8u;
    {
        const bool branch_taken_0x3481a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3481a8) {
            ctx->pc = 0x348360u;
            goto label_348360;
        }
    }
    ctx->pc = 0x3481B0u;
    // 0x3481b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3481b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3481b4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3481b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3481b8: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x3481b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x3481bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3481bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3481c0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x3481c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3481c4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3481c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3481c8: 0x246401b0  addiu       $a0, $v1, 0x1B0
    ctx->pc = 0x3481c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x3481cc: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x3481ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3481d0: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x3481D0u;
    SET_GPR_U32(ctx, 31, 0x3481D8u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x3481D0u, 0x3481D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3481D8u;
label_3481d8:
    // 0x3481d8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3481d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3481dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3481dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3481e0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3481e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3481e4: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x3481e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3481e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3481e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3481ec: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x3481ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3481f0: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x3481f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3481f4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3481F4u;
    SET_GPR_U32(ctx, 31, 0x3481FCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3481F4u, 0x3481FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3481FCu;
label_3481fc:
    // 0x3481fc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3481fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x348200: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x348200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348204: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x348204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x348208: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x348208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34820c: 0x246401b0  addiu       $a0, $v1, 0x1B0
    ctx->pc = 0x34820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x348210: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x348210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x348214: 0xc0d492c  jal         func_3524B0
    ctx->pc = 0x348214u;
    SET_GPR_U32(ctx, 31, 0x34821Cu);
    ctx->pc = 0x3524B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3524B0u, 0x348214u, 0x34821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34821Cu;
label_34821c:
    // 0x34821c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x34821cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x348220: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x348220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348224: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x348224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348228: 0xc600011c  lwc1        $f0, 0x11C($s0)
    ctx->pc = 0x348228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34822c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34822cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x348230: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x348230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348234: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x348234u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x348238: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x348238u;
    SET_GPR_U32(ctx, 31, 0x348240u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x348238u, 0x348240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348240u;
label_348240:
    // 0x348240: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x348240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x348244: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348248: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x348248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34824c: 0x24703b60  addiu       $s0, $v1, 0x3B60
    ctx->pc = 0x34824cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x348250: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348254: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348258: 0x0  nop
    ctx->pc = 0x348258u;
    // NOP
    // 0x34825c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34825cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x348260: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348268: 0x0  nop
    ctx->pc = 0x348268u;
    // NOP
    // 0x34826c: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34826cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x348270: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348274: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348278: 0x0  nop
    ctx->pc = 0x348278u;
    // NOP
    // 0x34827c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34827cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x348280: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x348280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x348284: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348288: 0x0  nop
    ctx->pc = 0x348288u;
    // NOP
    // 0x34828c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x34828cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x348290: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x348290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x348294: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348298: 0x0  nop
    ctx->pc = 0x348298u;
    // NOP
    // 0x34829c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x34829cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x3482a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3482a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3482a4: 0x0  nop
    ctx->pc = 0x3482a4u;
    // NOP
    // 0x3482a8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3482a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3482ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3482acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3482b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3482b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3482b4: 0x0  nop
    ctx->pc = 0x3482b4u;
    // NOP
    // 0x3482b8: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x3482b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x3482bc: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x3482bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x3482c0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3482c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3482c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3482c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3482c8: 0x0  nop
    ctx->pc = 0x3482c8u;
    // NOP
    // 0x3482cc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3482ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3482d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3482d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3482d4: 0x0  nop
    ctx->pc = 0x3482d4u;
    // NOP
    // 0x3482d8: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x3482d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x3482dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3482dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3482e0: 0x0  nop
    ctx->pc = 0x3482e0u;
    // NOP
    // 0x3482e4: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x3482e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x3482e8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3482e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3482ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3482ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3482f0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3482f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3482f4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3482f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3482f8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3482f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3482fc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3482fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348300: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x348300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x348304: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x348304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x348308: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x348308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x34830c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34830cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348310: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x348310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348314: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x348314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x348318: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x348318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x34831c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34831cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348320: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x348320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348324: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x348324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x348328: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x348328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x34832c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34832cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348330: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x348330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348334: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x348334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x348338: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x348338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34833c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348340: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x348340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x348344: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x348344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x348348: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x348348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34834c: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x34834cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x348350: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x348350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x348354: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348354u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348358: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34835c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x34835cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_348360:
    // 0x348360: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x348360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348364: 0x84901278  lh          $s0, 0x1278($a0)
    ctx->pc = 0x348364u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x348368: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x348368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x34836c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x34836cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x348370: 0x1600005f  bnez        $s0, . + 4 + (0x5F << 2)
    ctx->pc = 0x348370u;
    {
        const bool branch_taken_0x348370 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x348370) {
            ctx->pc = 0x3484F0u;
            goto label_3484f0;
        }
    }
    ctx->pc = 0x348378u;
    // 0x348378: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x348378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34837c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348380: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x348380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x348384: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x348384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348388: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34838c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34838cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x348390: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348394: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x348394u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x348398: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34839c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34839cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3483a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3483a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3483a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3483a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3483a8: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x3483a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3483ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3483acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3483b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3483b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3483b4: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x3483b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x3483b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3483b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3483bc: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x3483bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3483c0: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x3483c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x3483c4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3483c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3483c8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3483c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3483cc: 0x34a60001  ori         $a2, $a1, 0x1
    ctx->pc = 0x3483ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x3483d0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x3483d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x3483d4: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x3483d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3483d8: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x3483d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3483dc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3483dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3483e0: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x3483e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x3483e4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3483e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x3483e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3483e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3483ec: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x3483ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3483f0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3483f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3483f4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3483f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3483f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3483f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3483fc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3483fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x348400: 0xc067694  jal         func_19DA50
    ctx->pc = 0x348400u;
    SET_GPR_U32(ctx, 31, 0x348408u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x348400u, 0x348408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348408u;
label_348408:
    // 0x348408: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x348408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34840c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x34840cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x348410: 0x24650078  addiu       $a1, $v1, 0x78
    ctx->pc = 0x348410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x348414: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x348414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x348418: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x348418u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x34841c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34841cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348420: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348424: 0xa4640034  sh          $a0, 0x34($v1)
    ctx->pc = 0x348424u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x348428: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x348428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34842c: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x34842cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x348430: 0x247036b0  addiu       $s0, $v1, 0x36B0
    ctx->pc = 0x348430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14000));
    // 0x348434: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34843c: 0x0  nop
    ctx->pc = 0x34843cu;
    // NOP
    // 0x348440: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x348440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x348444: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34844c: 0x0  nop
    ctx->pc = 0x34844cu;
    // NOP
    // 0x348450: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x348450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x348454: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348458: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34845c: 0x0  nop
    ctx->pc = 0x34845cu;
    // NOP
    // 0x348460: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x348460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x348464: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x348464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348468: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x348468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34846c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x34846cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x348470: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x348470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x348474: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x348474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x348478: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x348478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34847c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34847cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348480: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348484: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x348484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x348488: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x348488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x34848c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34848Cu;
    {
        const bool branch_taken_0x34848c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34848c) {
            ctx->pc = 0x3484C8u;
            goto label_3484c8;
        }
    }
    ctx->pc = 0x348494u;
    // 0x348494: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348498: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x348498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34849c: 0xa080006e  sb          $zero, 0x6E($a0)
    ctx->pc = 0x34849cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3484a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3484a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3484a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3484a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3484a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3484a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3484ac: 0xa065006f  sb          $a1, 0x6F($v1)
    ctx->pc = 0x3484acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 5));
    // 0x3484b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3484b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3484b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3484b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3484b8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3484b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3484bc: 0xa0a40072  sb          $a0, 0x72($a1)
    ctx->pc = 0x3484bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x3484c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3484C0u;
    {
        const bool branch_taken_0x3484c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3484c0) {
            ctx->pc = 0x3484F0u;
            goto label_3484f0;
        }
    }
    ctx->pc = 0x3484C8u;
label_3484c8:
    // 0x3484c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3484c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3484cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3484ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3484d0: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x3484d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3484d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3484d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3484d8: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x3484d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3484dc: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x3484dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x3484e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3484e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3484e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3484e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3484e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3484e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3484ec: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x3484ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
label_3484f0:
    // 0x3484f0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3484f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3484f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3484f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3484f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3484f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3484fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3484fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x348500: 0x3e00008  jr          $ra
    ctx->pc = 0x348500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348508u;
}
