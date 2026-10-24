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

// Function: Em1e_move
// Address: 0x372030 - 0x3721ec
void Em1e_move_0x372030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1e_move_0x372030");
#endif

    switch (ctx->pc) {
        case 0x372030u: goto label_372030;
        case 0x372034u: goto label_372034;
        case 0x372038u: goto label_372038;
        case 0x37203cu: goto label_37203c;
        case 0x372040u: goto label_372040;
        case 0x372044u: goto label_372044;
        case 0x372048u: goto label_372048;
        case 0x37204cu: goto label_37204c;
        case 0x372050u: goto label_372050;
        case 0x372054u: goto label_372054;
        case 0x372058u: goto label_372058;
        case 0x37205cu: goto label_37205c;
        case 0x372060u: goto label_372060;
        case 0x372064u: goto label_372064;
        case 0x372068u: goto label_372068;
        case 0x37206cu: goto label_37206c;
        case 0x372070u: goto label_372070;
        case 0x372074u: goto label_372074;
        case 0x372078u: goto label_372078;
        case 0x37207cu: goto label_37207c;
        case 0x372080u: goto label_372080;
        case 0x372084u: goto label_372084;
        case 0x372088u: goto label_372088;
        case 0x37208cu: goto label_37208c;
        case 0x372090u: goto label_372090;
        case 0x372094u: goto label_372094;
        case 0x372098u: goto label_372098;
        case 0x37209cu: goto label_37209c;
        case 0x3720a0u: goto label_3720a0;
        case 0x3720a4u: goto label_3720a4;
        case 0x3720a8u: goto label_3720a8;
        case 0x3720acu: goto label_3720ac;
        case 0x3720b0u: goto label_3720b0;
        case 0x3720b4u: goto label_3720b4;
        case 0x3720b8u: goto label_3720b8;
        case 0x3720bcu: goto label_3720bc;
        case 0x3720c0u: goto label_3720c0;
        case 0x3720c4u: goto label_3720c4;
        case 0x3720c8u: goto label_3720c8;
        case 0x3720ccu: goto label_3720cc;
        case 0x3720d0u: goto label_3720d0;
        case 0x3720d4u: goto label_3720d4;
        case 0x3720d8u: goto label_3720d8;
        case 0x3720dcu: goto label_3720dc;
        case 0x3720e0u: goto label_3720e0;
        case 0x3720e4u: goto label_3720e4;
        case 0x3720e8u: goto label_3720e8;
        case 0x3720ecu: goto label_3720ec;
        case 0x3720f0u: goto label_3720f0;
        case 0x3720f4u: goto label_3720f4;
        case 0x3720f8u: goto label_3720f8;
        case 0x3720fcu: goto label_3720fc;
        case 0x372100u: goto label_372100;
        case 0x372104u: goto label_372104;
        case 0x372108u: goto label_372108;
        case 0x37210cu: goto label_37210c;
        case 0x372110u: goto label_372110;
        case 0x372114u: goto label_372114;
        case 0x372118u: goto label_372118;
        case 0x37211cu: goto label_37211c;
        case 0x372120u: goto label_372120;
        case 0x372124u: goto label_372124;
        case 0x372128u: goto label_372128;
        case 0x37212cu: goto label_37212c;
        case 0x372130u: goto label_372130;
        case 0x372134u: goto label_372134;
        case 0x372138u: goto label_372138;
        case 0x37213cu: goto label_37213c;
        case 0x372140u: goto label_372140;
        case 0x372144u: goto label_372144;
        case 0x372148u: goto label_372148;
        case 0x37214cu: goto label_37214c;
        case 0x372150u: goto label_372150;
        case 0x372154u: goto label_372154;
        case 0x372158u: goto label_372158;
        case 0x37215cu: goto label_37215c;
        case 0x372160u: goto label_372160;
        case 0x372164u: goto label_372164;
        case 0x372168u: goto label_372168;
        case 0x37216cu: goto label_37216c;
        case 0x372170u: goto label_372170;
        case 0x372174u: goto label_372174;
        case 0x372178u: goto label_372178;
        case 0x37217cu: goto label_37217c;
        case 0x372180u: goto label_372180;
        case 0x372184u: goto label_372184;
        case 0x372188u: goto label_372188;
        case 0x37218cu: goto label_37218c;
        case 0x372190u: goto label_372190;
        case 0x372194u: goto label_372194;
        case 0x372198u: goto label_372198;
        case 0x37219cu: goto label_37219c;
        case 0x3721a0u: goto label_3721a0;
        case 0x3721a4u: goto label_3721a4;
        case 0x3721a8u: goto label_3721a8;
        case 0x3721acu: goto label_3721ac;
        case 0x3721b0u: goto label_3721b0;
        case 0x3721b4u: goto label_3721b4;
        case 0x3721b8u: goto label_3721b8;
        case 0x3721bcu: goto label_3721bc;
        case 0x3721c0u: goto label_3721c0;
        case 0x3721c4u: goto label_3721c4;
        case 0x3721c8u: goto label_3721c8;
        case 0x3721ccu: goto label_3721cc;
        case 0x3721d0u: goto label_3721d0;
        case 0x3721d4u: goto label_3721d4;
        case 0x3721d8u: goto label_3721d8;
        case 0x3721dcu: goto label_3721dc;
        case 0x3721e0u: goto label_3721e0;
        case 0x3721e4u: goto label_3721e4;
        case 0x3721e8u: goto label_3721e8;
        default: break;
    }

    ctx->pc = 0x372030u;

label_372030:
    // 0x372030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x372030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_372034:
    // 0x372034: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x372034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_372038:
    // 0x372038: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x372038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37203c:
    // 0x37203c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37203cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_372040:
    // 0x372040: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x372040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_372044:
    // 0x372044: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x372044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_372048:
    // 0x372048: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x372048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_37204c:
    // 0x37204c: 0x24520080  addiu       $s2, $v0, 0x80
    ctx->pc = 0x37204cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_372050:
    // 0x372050: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x372050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_372054:
    // 0x372054: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x372054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_372058:
    // 0x372058: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x372058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_37205c:
    // 0x37205c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37205cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_372060:
    // 0x372060: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x372060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_372064:
    // 0x372064: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x372064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_372068:
    // 0x372068: 0x2442b590  addiu       $v0, $v0, -0x4A70
    ctx->pc = 0x372068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948240));
label_37206c:
    // 0x37206c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_372070:
    // 0x372070: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x372070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_372074:
    // 0x372074: 0x40f809  jalr        $v0
label_372078:
    if (ctx->pc == 0x372078u) {
        ctx->pc = 0x37207Cu;
        goto label_37207c;
    }
    ctx->pc = 0x372074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37207Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372074u, 0x37207Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37207Cu;
label_37207c:
    // 0x37207c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x37207cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_372080:
    // 0x372080: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x372080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_372084:
    // 0x372084: 0x24710090  addiu       $s1, $v1, 0x90
    ctx->pc = 0x372084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_372088:
    // 0x372088: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x372088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_37208c:
    // 0x37208c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x37208cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_372090:
    // 0x372090: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x372090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_372094:
    // 0x372094: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x372094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_372098:
    // 0x372098: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x372098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_37209c:
    // 0x37209c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x37209cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3720a0:
    // 0x3720a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3720a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3720a4:
    // 0x3720a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3720a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3720a8:
    // 0x3720a8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x3720a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3720ac:
    // 0x3720ac: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x3720acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3720b0:
    // 0x3720b0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x3720b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_3720b4:
    // 0x3720b4: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x3720b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3720b8:
    // 0x3720b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3720b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3720bc:
    // 0x3720bc: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3720bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
label_3720c0:
    // 0x3720c0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3720c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3720c4:
    // 0x3720c4: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x3720c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3720c8:
    // 0x3720c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3720c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3720cc:
    // 0x3720cc: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3720ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
label_3720d0:
    // 0x3720d0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3720d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_3720d4:
    // 0x3720d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3720d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3720d8:
    // 0x3720d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3720d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3720dc:
    // 0x3720dc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3720dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3720e0:
    // 0x3720e0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3720e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3720e4:
    // 0x3720e4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3720e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3720e8:
    // 0x3720e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3720e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3720ec:
    // 0x3720ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3720ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3720f0:
    // 0x3720f0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x3720f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3720f4:
    // 0x3720f4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3720f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3720f8:
    // 0x3720f8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x3720f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_3720fc:
    // 0x3720fc: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x3720fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_372100:
    // 0x372100: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x372100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_372104:
    // 0x372104: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x372104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
label_372108:
    // 0x372108: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x372108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_37210c:
    // 0x37210c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x37210cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_372110:
    // 0x372110: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x372110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_372114:
    // 0x372114: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x372114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
label_372118:
    // 0x372118: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x372118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_37211c:
    // 0x37211c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x37211cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_372120:
    // 0x372120: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x372120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_372124:
    // 0x372124: 0x24710120  addiu       $s1, $v1, 0x120
    ctx->pc = 0x372124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
label_372128:
    // 0x372128: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x372128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_37212c:
    // 0x37212c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x37212cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_372130:
    // 0x372130: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x372130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_372134:
    // 0x372134: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x372134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_372138:
    // 0x372138: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x372138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_37213c:
    // 0x37213c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x37213cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_372140:
    // 0x372140: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x372140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_372144:
    // 0x372144: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x372144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_372148:
    // 0x372148: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x372148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_37214c:
    // 0x37214c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x37214cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_372150:
    // 0x372150: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x372150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_372154:
    // 0x372154: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x372154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_372158:
    // 0x372158: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x372158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37215c:
    // 0x37215c: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x37215cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
label_372160:
    // 0x372160: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x372160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_372164:
    // 0x372164: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x372164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_372168:
    // 0x372168: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x372168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_37216c:
    // 0x37216c: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x37216cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
label_372170:
    // 0x372170: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x372170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_372174:
    // 0x372174: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x372174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_372178:
    // 0x372178: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x372178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_37217c:
    // 0x37217c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x37217cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_372180:
    // 0x372180: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x372180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_372184:
    // 0x372184: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x372184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_372188:
    // 0x372188: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x372188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_37218c:
    // 0x37218c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x37218cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_372190:
    // 0x372190: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x372190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_372194:
    // 0x372194: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x372194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_372198:
    // 0x372198: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x372198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_37219c:
    // 0x37219c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x37219cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3721a0:
    // 0x3721a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3721a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3721a4:
    // 0x3721a4: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3721a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
label_3721a8:
    // 0x3721a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3721a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3721ac:
    // 0x3721ac: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x3721acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_3721b0:
    // 0x3721b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3721b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3721b4:
    // 0x3721b4: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3721b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
label_3721b8:
    // 0x3721b8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3721b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_3721bc:
    // 0x3721bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3721bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3721c0:
    // 0x3721c0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3721c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_3721c4:
    // 0x3721c4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3721c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3721c8:
    // 0x3721c8: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x3721c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
label_3721cc:
    // 0x3721cc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3721ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_3721d0:
    // 0x3721d0: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x3721d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3721d4:
    // 0x3721d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3721d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3721d8:
    // 0x3721d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3721d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3721dc:
    // 0x3721dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3721dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3721e0:
    // 0x3721e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3721e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3721e4:
    // 0x3721e4: 0x3e00008  jr          $ra
label_3721e8:
    if (ctx->pc == 0x3721E8u) {
        ctx->pc = 0x3721ECu;
        goto label_fallthrough_0x3721e4;
    }
    ctx->pc = 0x3721E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3721E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3721e4:
    ctx->pc = 0x3721ECu;
}
