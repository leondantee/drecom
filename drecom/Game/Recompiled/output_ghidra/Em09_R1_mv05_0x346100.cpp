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

// Function: Em09_R1_mv05
// Address: 0x346100 - 0x346a48
void Em09_R1_mv05_0x346100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv05_0x346100");
#endif

    switch (ctx->pc) {
        case 0x34619cu: goto label_34619c;
        case 0x346258u: goto label_346258;
        case 0x346274u: goto label_346274;
        case 0x34628cu: goto label_34628c;
        case 0x34629cu: goto label_34629c;
        case 0x3462b0u: goto label_3462b0;
        case 0x3462c0u: goto label_3462c0;
        case 0x346300u: goto label_346300;
        case 0x346344u: goto label_346344;
        case 0x346368u: goto label_346368;
        case 0x3463b8u: goto label_3463b8;
        case 0x3463c8u: goto label_3463c8;
        case 0x3463e0u: goto label_3463e0;
        case 0x3463f4u: goto label_3463f4;
        case 0x34644cu: goto label_34644c;
        case 0x346508u: goto label_346508;
        case 0x346548u: goto label_346548;
        case 0x346554u: goto label_346554;
        case 0x346560u: goto label_346560;
        case 0x34656cu: goto label_34656c;
        case 0x34659cu: goto label_34659c;
        case 0x3465ccu: goto label_3465cc;
        case 0x3465fcu: goto label_3465fc;
        case 0x34662cu: goto label_34662c;
        case 0x34669cu: goto label_34669c;
        case 0x34671cu: goto label_34671c;
        case 0x346724u: goto label_346724;
        case 0x3467a8u: goto label_3467a8;
        case 0x3467bcu: goto label_3467bc;
        case 0x3467d4u: goto label_3467d4;
        case 0x3467e8u: goto label_3467e8;
        case 0x34681cu: goto label_34681c;
        case 0x346840u: goto label_346840;
        case 0x346858u: goto label_346858;
        case 0x346864u: goto label_346864;
        case 0x346908u: goto label_346908;
        default: break;
    }

    ctx->pc = 0x346100u;

    // 0x346100: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x346100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x346104: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x346104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x346108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x346108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34610c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34610cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x346110: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x346110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x346114: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346118: 0x8c9002d0  lw          $s0, 0x2D0($a0)
    ctx->pc = 0x346118u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x34611c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x34611cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346120: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x346120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346124: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x346124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x346128: 0x24a30014  addiu       $v1, $a1, 0x14
    ctx->pc = 0x346128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x34612c: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x34612cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x346130: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346134: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x346134u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x346138: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x346138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34613c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34613cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346140: 0x10a301b2  beq         $a1, $v1, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x346140u;
    {
        const bool branch_taken_0x346140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x346140) {
            ctx->pc = 0x34680Cu;
            goto label_34680c;
        }
    }
    ctx->pc = 0x346148u;
    // 0x346148: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x346148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34614c: 0x10a40079  beq         $a1, $a0, . + 4 + (0x79 << 2)
    ctx->pc = 0x34614Cu;
    {
        const bool branch_taken_0x34614c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x34614c) {
            ctx->pc = 0x346334u;
            goto label_346334;
        }
    }
    ctx->pc = 0x346154u;
    // 0x346154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x346154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346158: 0x10a30034  beq         $a1, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x346158u;
    {
        const bool branch_taken_0x346158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x346158) {
            ctx->pc = 0x34622Cu;
            goto label_34622c;
        }
    }
    ctx->pc = 0x346160u;
    // 0x346160: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x346160u;
    {
        const bool branch_taken_0x346160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x346160) {
            ctx->pc = 0x346170u;
            goto label_346170;
        }
    }
    ctx->pc = 0x346168u;
    // 0x346168: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x346168u;
    {
        const bool branch_taken_0x346168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346168) {
            ctx->pc = 0x34699Cu;
            goto label_34699c;
        }
    }
    ctx->pc = 0x346170u;
label_346170:
    // 0x346170: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x346170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346174: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346178: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x346178u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x34617c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x34617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346180: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346184: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x346184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x346188: 0x24060a0a  addiu       $a2, $zero, 0xA0A
    ctx->pc = 0x346188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2570));
    // 0x34618c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34618cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346190: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x346190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x346194: 0xc0965d0  jal         func_259740
    ctx->pc = 0x346194u;
    SET_GPR_U32(ctx, 31, 0x34619Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x346194u, 0x34619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34619Cu;
label_34619c:
    // 0x34619c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x34619cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3461a0: 0xa4801278  sh          $zero, 0x1278($a0)
    ctx->pc = 0x3461a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x3461a4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3461a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3461a8: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x3461a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3461ac: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x3461acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x3461b0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3461b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3461b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3461b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3461b8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3461b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3461bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3461bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3461c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3461c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3461c4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3461c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3461c8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x3461c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3461cc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3461ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3461d0: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x3461d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3461d4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3461d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x3461d8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3461d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3461dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3461dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3461e0: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x3461e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3461e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3461e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3461e8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3461e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3461ec: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x3461ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3461f0: 0xa203006f  sb          $v1, 0x6F($s0)
    ctx->pc = 0x3461f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x3461f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3461f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3461f8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3461f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3461fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3461fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346200: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x346200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x346204: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346208: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x346208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34620c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34620cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x346210: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x346210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x346214: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x346214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x346218: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34621c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34621cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346220: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x346220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x346224: 0x34620020  ori         $v0, $v1, 0x20
    ctx->pc = 0x346224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x346228: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x346228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_34622c:
    // 0x34622c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x34622cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346230: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x346230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346234: 0x3c033dd6  lui         $v1, 0x3DD6
    ctx->pc = 0x346234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15830 << 16));
    // 0x346238: 0x34627750  ori         $v0, $v1, 0x7750
    ctx->pc = 0x346238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x34623c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34623cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x346240: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x346240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x346244: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x346244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x346248: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x346248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34624c: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x34624cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x346250: 0xc05c848  jal         func_172120
    ctx->pc = 0x346250u;
    SET_GPR_U32(ctx, 31, 0x346258u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x346250u, 0x346258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346258u;
label_346258:
    // 0x346258: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x346258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x34625c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x34625cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346260: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x346260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346264: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x346264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346268: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x346268u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34626c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34626Cu;
    SET_GPR_U32(ctx, 31, 0x346274u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34626Cu, 0x346274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346274u;
label_346274:
    // 0x346274: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346278: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x346278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x34627c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x34627cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346280: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x346280u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346284: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x346284u;
    SET_GPR_U32(ctx, 31, 0x34628Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x346284u, 0x34628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34628Cu;
label_34628c:
    // 0x34628c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34628cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x346290: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346294: 0xc05cd10  jal         func_173440
    ctx->pc = 0x346294u;
    SET_GPR_U32(ctx, 31, 0x34629Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x346294u, 0x34629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34629Cu;
label_34629c:
    // 0x34629c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34629cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3462a0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3462a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3462a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3462a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3462a8: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3462A8u;
    SET_GPR_U32(ctx, 31, 0x3462B0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3462A8u, 0x3462B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3462B0u;
label_3462b0:
    // 0x3462b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3462b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3462b4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3462b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3462b8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3462B8u;
    SET_GPR_U32(ctx, 31, 0x3462C0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3462B8u, 0x3462C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3462C0u;
label_3462c0:
    // 0x3462c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3462c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3462c4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3462c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3462c8: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x3462c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3462cc: 0x10a001b3  beqz        $a1, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x3462CCu;
    {
        const bool branch_taken_0x3462cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3462cc) {
            ctx->pc = 0x34699Cu;
            goto label_34699c;
        }
    }
    ctx->pc = 0x3462D4u;
    // 0x3462d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3462d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3462d8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3462d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3462dc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x3462dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3462e0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3462e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3462e4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3462e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3462e8: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3462e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3462ec: 0x24060a0b  addiu       $a2, $zero, 0xA0B
    ctx->pc = 0x3462ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2571));
    // 0x3462f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3462f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3462f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3462f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3462f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3462F8u;
    SET_GPR_U32(ctx, 31, 0x346300u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3462F8u, 0x346300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346300u;
label_346300:
    // 0x346300: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x346300u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x346304: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x346304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x346308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34630c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x34630cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346310: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346314: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x346314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x346318: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x346318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x34631c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34631cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346320: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346324: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346328: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x346328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x34632c: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x34632Cu;
    {
        const bool branch_taken_0x34632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34632c) {
            ctx->pc = 0x34699Cu;
            goto label_34699c;
        }
    }
    ctx->pc = 0x346334u;
label_346334:
    // 0x346334: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346338: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x346338u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34633c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34633Cu;
    SET_GPR_U32(ctx, 31, 0x346344u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34633Cu, 0x346344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346344u;
label_346344:
    // 0x346344: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x346344u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x346348: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34634c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34634cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346350: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x346350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346354: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346358: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x346358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x34635c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x34635cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346360: 0xc05cd10  jal         func_173440
    ctx->pc = 0x346360u;
    SET_GPR_U32(ctx, 31, 0x346368u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x346360u, 0x346368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346368u;
label_346368:
    // 0x346368: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x346368u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34636c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x34636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346370: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346374: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x346374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346378: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34637c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x34637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346380: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x346380u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x346384: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x346384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x346388: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34638c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34638cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346390: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x346390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346394: 0x3c034128  lui         $v1, 0x4128
    ctx->pc = 0x346394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16680 << 16));
    // 0x346398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x346398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34639c: 0x0  nop
    ctx->pc = 0x34639cu;
    // NOP
    // 0x3463a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3463a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3463a4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x3463a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x3463a8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3463a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3463ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3463acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3463b0: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3463B0u;
    SET_GPR_U32(ctx, 31, 0x3463B8u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3463B0u, 0x3463B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463B8u;
label_3463b8:
    // 0x3463b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3463b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3463bc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3463bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3463c0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3463C0u;
    SET_GPR_U32(ctx, 31, 0x3463C8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3463C0u, 0x3463C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3463C8u;
label_3463c8:
    // 0x3463c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3463c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3463cc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3463ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3463d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3463d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3463d4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x3463d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x3463d8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3463D8u;
    SET_GPR_U32(ctx, 31, 0x3463E0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3463E0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3463E0u) { return; }
    ctx->pc = 0x3463E0u;
label_3463e0:
    // 0x3463e0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3463e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3463e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3463e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3463e8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x3463e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3463ec: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3463ECu;
    SET_GPR_U32(ctx, 31, 0x3463F4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3463F4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3463F4u) { return; }
    ctx->pc = 0x3463F4u;
label_3463f4:
    // 0x3463f4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3463f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3463f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3463f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3463fc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x3463fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346400: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346404: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x346404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346408: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x346408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34640c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34640cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x346410: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x346410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346414: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x346414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x346418: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x346418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x34641c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x34641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346420: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x346420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x346424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346428: 0x0  nop
    ctx->pc = 0x346428u;
    // NOP
    // 0x34642c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34642cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x346430: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x346430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x346434: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x346434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x346438: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x346438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34643c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x34643cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x346440: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x346440u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346444: 0xc059e1c  jal         func_167870
    ctx->pc = 0x346444u;
    SET_GPR_U32(ctx, 31, 0x34644Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x346444u, 0x34644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34644Cu;
label_34644c:
    // 0x34644c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x34644cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x346450: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x346450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x346454: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x346454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x346458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34645c: 0x0  nop
    ctx->pc = 0x34645cu;
    // NOP
    // 0x346460: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x346460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x346464: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x346464u;
    {
        const bool branch_taken_0x346464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x346464) {
            ctx->pc = 0x34648Cu;
            goto label_34648c;
        }
    }
    ctx->pc = 0x34646Cu;
    // 0x34646c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x34646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346470: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x346470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x346474: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x346474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346478: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34647c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346480: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x346480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x346484: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x346484u;
    {
        const bool branch_taken_0x346484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346484) {
            ctx->pc = 0x3464A4u;
            goto label_3464a4;
        }
    }
    ctx->pc = 0x34648Cu;
label_34648c:
    // 0x34648c: 0x3c02c743  lui         $v0, 0xC743
    ctx->pc = 0x34648cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51011 << 16));
    // 0x346490: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x346490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x346494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346498: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34649c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3464a0: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x3464a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
label_3464a4:
    // 0x3464a4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3464a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3464a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3464a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3464ac: 0xc4410088  lwc1        $f1, 0x88($v0)
    ctx->pc = 0x3464acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3464b0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3464b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3464b4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x3464b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3464b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3464b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3464bc: 0x0  nop
    ctx->pc = 0x3464bcu;
    // NOP
    // 0x3464c0: 0x4501005a  bc1t        . + 4 + (0x5A << 2)
    ctx->pc = 0x3464C0u;
    {
        const bool branch_taken_0x3464c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3464c0) {
            ctx->pc = 0x34662Cu;
            goto label_34662c;
        }
    }
    ctx->pc = 0x3464C8u;
    // 0x3464c8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3464c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3464cc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3464ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3464d0: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x3464d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3464d4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3464d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3464d8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x3464d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x3464dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3464dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3464e0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3464e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3464e4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3464e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3464e8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3464e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3464ec: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3464ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3464f0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3464f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3464f4: 0x2406010c  addiu       $a2, $zero, 0x10C
    ctx->pc = 0x3464f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    // 0x3464f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3464f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3464fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3464fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x346500: 0xc0965d0  jal         func_259740
    ctx->pc = 0x346500u;
    SET_GPR_U32(ctx, 31, 0x346508u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x346500u, 0x346508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346508u;
label_346508:
    // 0x346508: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34650c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x346510: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x346510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x346514: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x346514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x346518: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x346518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34651c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34651cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x346520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346524: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346528: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x346528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34652c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x346530: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x346530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x346534: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x346534u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346538: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x346538u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34653c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x34653cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x346540: 0xc0561d4  jal         func_158750
    ctx->pc = 0x346540u;
    SET_GPR_U32(ctx, 31, 0x346548u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x346540u, 0x346548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346548u;
label_346548:
    // 0x346548: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x346548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34654c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x34654Cu;
    SET_GPR_U32(ctx, 31, 0x346554u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x34654Cu, 0x346554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346554u;
label_346554:
    // 0x346554: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x346554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x346558: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x346558u;
    SET_GPR_U32(ctx, 31, 0x346560u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x346558u, 0x346560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346560u;
label_346560:
    // 0x346560: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x346560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x346564: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x346564u;
    SET_GPR_U32(ctx, 31, 0x34656Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x346564u, 0x34656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34656Cu;
label_34656c:
    // 0x34656c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x34656cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x346570: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x346570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x346574: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x346574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x346578: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x346578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34657c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34657cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x346580: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346584: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x346584u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346588: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x346588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34658c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x34658cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x346590: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x346590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x346594: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x346594u;
    SET_GPR_U32(ctx, 31, 0x34659Cu);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x346594u, 0x34659Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34659Cu;
label_34659c:
    // 0x34659c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x34659cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x3465a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3465a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3465a4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x3465a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x3465a8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3465a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3465ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3465acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3465b0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3465b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3465b4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x3465b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3465b8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3465b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3465bc: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x3465bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3465c0: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x3465c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3465c4: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x3465C4u;
    SET_GPR_U32(ctx, 31, 0x3465CCu);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x3465C4u, 0x3465CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3465CCu;
label_3465cc:
    // 0x3465cc: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x3465ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x3465d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3465d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3465d4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x3465d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x3465d8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3465d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3465dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3465dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3465e0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3465e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3465e4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x3465e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x3465e8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3465e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3465ec: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x3465ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3465f0: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x3465f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3465f4: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x3465F4u;
    SET_GPR_U32(ctx, 31, 0x3465FCu);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x3465F4u, 0x3465FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3465FCu;
label_3465fc:
    // 0x3465fc: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x3465fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x346600: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x346600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x346604: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x346604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x346608: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x346608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34660c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34660cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x346610: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346614: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x346614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x346618: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x346618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34661c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x34661cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x346620: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x346620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x346624: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x346624u;
    SET_GPR_U32(ctx, 31, 0x34662Cu);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x346624u, 0x34662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34662Cu;
label_34662c:
    // 0x34662c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x34662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346630: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x346630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x346634: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x346634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x346638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34663c: 0x0  nop
    ctx->pc = 0x34663cu;
    // NOP
    // 0x346640: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x346640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x346644: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346648: 0x0  nop
    ctx->pc = 0x346648u;
    // NOP
    // 0x34664c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x34664cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x346650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346654: 0x0  nop
    ctx->pc = 0x346654u;
    // NOP
    // 0x346658: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x346658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x34665c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x346660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346664: 0x0  nop
    ctx->pc = 0x346664u;
    // NOP
    // 0x346668: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x346668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x34666c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x34666cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x346670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346674: 0x0  nop
    ctx->pc = 0x346674u;
    // NOP
    // 0x346678: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x346678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x34667c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x34667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346680: 0xa7a200b4  sh          $v0, 0xB4($sp)
    ctx->pc = 0x346680u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 180), (uint16_t)GPR_U32(ctx, 2));
    // 0x346684: 0xa3a000b6  sb          $zero, 0xB6($sp)
    ctx->pc = 0x346684u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 182), (uint8_t)GPR_U32(ctx, 0));
    // 0x346688: 0xa3a000b7  sb          $zero, 0xB7($sp)
    ctx->pc = 0x346688u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 183), (uint8_t)GPR_U32(ctx, 0));
    // 0x34668c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x34668cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346690: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x346690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x346694: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x346694u;
    SET_GPR_U32(ctx, 31, 0x34669Cu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x346694u, 0x34669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34669Cu;
label_34669c:
    // 0x34669c: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x34669Cu;
    {
        const bool branch_taken_0x34669c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34669c) {
            ctx->pc = 0x34699Cu;
            goto label_34699c;
        }
    }
    ctx->pc = 0x3466A4u;
    // 0x3466a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3466a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3466a8: 0x0  nop
    ctx->pc = 0x3466a8u;
    // NOP
    // 0x3466ac: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x3466acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3466b0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x3466b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x3466b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3466b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3466b8: 0x0  nop
    ctx->pc = 0x3466b8u;
    // NOP
    // 0x3466bc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3466bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x3466c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3466c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3466c4: 0x0  nop
    ctx->pc = 0x3466c4u;
    // NOP
    // 0x3466c8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x3466c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3466cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3466ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3466d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3466d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3466d4: 0x0  nop
    ctx->pc = 0x3466d4u;
    // NOP
    // 0x3466d8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x3466d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x3466dc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3466dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3466e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3466e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3466e4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3466e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3466e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3466e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3466ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3466ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3466f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3466f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3466f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3466f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3466f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3466f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3466fc: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x3466fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x346700: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346704: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x346704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x346708: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x346708u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34670c: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x34670cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x346710: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x346710u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346714: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x346714u;
    SET_GPR_U32(ctx, 31, 0x34671Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x346714u, 0x34671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34671Cu;
label_34671c:
    // 0x34671c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34671Cu;
    SET_GPR_U32(ctx, 31, 0x346724u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34671Cu, 0x346724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346724u;
label_346724:
    // 0x346724: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x346724u;
    {
        const bool branch_taken_0x346724 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x346724) {
            ctx->pc = 0x346740u;
            goto label_346740;
        }
    }
    ctx->pc = 0x34672Cu;
    // 0x34672c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34672cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346730: 0x0  nop
    ctx->pc = 0x346730u;
    // NOP
    // 0x346734: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x346734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x346738: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346738u;
    {
        const bool branch_taken_0x346738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346738) {
            ctx->pc = 0x34675Cu;
            goto label_34675c;
        }
    }
    ctx->pc = 0x346740u;
label_346740:
    // 0x346740: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x346740u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x346744: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x346744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x346748: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x346748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34674c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34674cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346750: 0x0  nop
    ctx->pc = 0x346750u;
    // NOP
    // 0x346754: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x346754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x346758: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x346758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_34675c:
    // 0x34675c: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x34675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346760: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x346760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x346764: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x346764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x346768: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34676c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x34676cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x346770: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x346770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x346774: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x346774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x346778: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x346778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x34677c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34677cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x346780: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x346780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x346784: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x346784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x346788: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x346788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x34678c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x34678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346790: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x346790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x346794: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x346794u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346798: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x346798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x34679c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34679cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3467a0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3467A0u;
    SET_GPR_U32(ctx, 31, 0x3467A8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3467A0u, 0x3467A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467A8u;
label_3467a8:
    // 0x3467a8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x3467a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x3467ac: 0x3c10000a  lui         $s0, 0xA
    ctx->pc = 0x3467acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)10 << 16));
    // 0x3467b0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3467b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3467b4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x3467B4u;
    SET_GPR_U32(ctx, 31, 0x3467BCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x3467B4u, 0x3467BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467BCu;
label_3467bc:
    // 0x3467bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3467bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3467c0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x3467c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x3467c4: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x3467c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x3467c8: 0x3465000f  ori         $a1, $v1, 0xF
    ctx->pc = 0x3467c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x3467cc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x3467CCu;
    SET_GPR_U32(ctx, 31, 0x3467D4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x3467CCu, 0x3467D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467D4u;
label_3467d4:
    // 0x3467d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3467d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3467d8: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x3467d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x3467dc: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x3467dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x3467e0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x3467E0u;
    SET_GPR_U32(ctx, 31, 0x3467E8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x3467E0u, 0x3467E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3467E8u;
label_3467e8:
    // 0x3467e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3467e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3467ec: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3467ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3467f0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3467f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3467f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3467f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3467f8: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x3467f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3467fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3467fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x346800: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x346800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x346804: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x346804u;
    {
        const bool branch_taken_0x346804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346804) {
            ctx->pc = 0x34699Cu;
            goto label_34699c;
        }
    }
    ctx->pc = 0x34680Cu;
label_34680c:
    // 0x34680c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x34680cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346810: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x346810u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346814: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x346814u;
    SET_GPR_U32(ctx, 31, 0x34681Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x346814u, 0x34681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34681Cu;
label_34681c:
    // 0x34681c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x34681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346820: 0x94440a00  lhu         $a0, 0xA00($v0)
    ctx->pc = 0x346820u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x346824: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x346824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x346828: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x346828u;
    {
        const bool branch_taken_0x346828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x346828) {
            ctx->pc = 0x346844u;
            goto label_346844;
        }
    }
    ctx->pc = 0x346830u;
    // 0x346830: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x346830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346834: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x346834u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x346838: 0xc05cd10  jal         func_173440
    ctx->pc = 0x346838u;
    SET_GPR_U32(ctx, 31, 0x346840u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x346838u, 0x346840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346840u;
label_346840:
    // 0x346840: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x346840u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_346844:
    // 0x346844: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x346844u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346848: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x346848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x34684c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34684cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346850: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x346850u;
    SET_GPR_U32(ctx, 31, 0x346858u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x346850u, 0x346858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346858u;
label_346858:
    // 0x346858: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34685c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34685Cu;
    SET_GPR_U32(ctx, 31, 0x346864u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34685Cu, 0x346864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346864u;
label_346864:
    // 0x346864: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346868: 0x907009e7  lbu         $s0, 0x9E7($v1)
    ctx->pc = 0x346868u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34686c: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
    ctx->pc = 0x34686Cu;
    {
        const bool branch_taken_0x34686c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34686c) {
            ctx->pc = 0x34699Cu;
            goto label_34699c;
        }
    }
    ctx->pc = 0x346874u;
    // 0x346874: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x346874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346878: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34687c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x34687cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x346880: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x346880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346884: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346888: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x346888u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34688c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x34688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346890: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x346890u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x346894: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346898: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x346898u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34689c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x34689cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3468a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3468a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3468a4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3468a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3468a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3468a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3468ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3468acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3468b0: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x3468b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x3468b4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3468b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3468b8: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x3468b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3468bc: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x3468bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x3468c0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3468c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3468c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3468c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3468c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3468c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3468cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3468ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3468d0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3468d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3468d4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x3468d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3468d8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3468d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3468dc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3468dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3468e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3468e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3468e4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3468e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3468e8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3468e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3468ec: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x3468ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3468f0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3468f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3468f4: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x3468f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x3468f8: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x3468f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3468fc: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x3468fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x346900: 0xc067694  jal         func_19DA50
    ctx->pc = 0x346900u;
    SET_GPR_U32(ctx, 31, 0x346908u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x346900u, 0x346908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346908u;
label_346908:
    // 0x346908: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x346908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34690c: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x34690cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x346910: 0x24830078  addiu       $v1, $a0, 0x78
    ctx->pc = 0x346910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x346914: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x346914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x346918: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x346918u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x34691c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x34691cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346920: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346924: 0xa4650034  sh          $a1, 0x34($v1)
    ctx->pc = 0x346924u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 5));
    // 0x346928: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34692c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34692cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x346930: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x346930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x346934: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x346934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x346938: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x346938u;
    {
        const bool branch_taken_0x346938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x346938) {
            ctx->pc = 0x346974u;
            goto label_346974;
        }
    }
    ctx->pc = 0x346940u;
    // 0x346940: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346944: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x346944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x346948: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x346948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34694c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34694cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346950: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346954: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x346954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346958: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x346958u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x34695c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34695cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346960: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346964: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x346964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x346968: 0xa0650072  sb          $a1, 0x72($v1)
    ctx->pc = 0x346968u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 5));
    // 0x34696c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34696Cu;
    {
        const bool branch_taken_0x34696c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34696c) {
            ctx->pc = 0x34699Cu;
            goto label_34699c;
        }
    }
    ctx->pc = 0x346974u;
label_346974:
    // 0x346974: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346978: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x346978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34697c: 0xa080006e  sb          $zero, 0x6E($a0)
    ctx->pc = 0x34697cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x346980: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x346980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346984: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x346984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x346988: 0xa0c0006f  sb          $zero, 0x6F($a2)
    ctx->pc = 0x346988u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x34698c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x34698cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346990: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x346990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346994: 0x25031330  addiu       $v1, $t0, 0x1330
    ctx->pc = 0x346994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x346998: 0xa0670072  sb          $a3, 0x72($v1)
    ctx->pc = 0x346998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 7));
label_34699c:
    // 0x34699c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x34699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3469a0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x3469a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x3469a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3469a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3469a8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3469a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3469ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3469ACu;
    {
        const bool branch_taken_0x3469ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3469ac) {
            ctx->pc = 0x3469E8u;
            goto label_3469e8;
        }
    }
    ctx->pc = 0x3469B4u;
    // 0x3469b4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3469b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3469b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3469b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3469bc: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x3469bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x3469c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3469c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3469c4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3469c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3469c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3469c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3469cc: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x3469ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x3469d0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x3469d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x3469d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3469d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3469d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3469d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3469dc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3469dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3469e0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x3469e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3469e4: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x3469e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_3469e8:
    // 0x3469e8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3469e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3469ec: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x3469ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x3469f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3469f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3469f4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3469f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3469f8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3469F8u;
    {
        const bool branch_taken_0x3469f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3469f8) {
            ctx->pc = 0x346A30u;
            goto label_346a30;
        }
    }
    ctx->pc = 0x346A00u;
    // 0x346a00: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346a04: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x346a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x346a08: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x346a08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x346a0c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346a10: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x346a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x346a14: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x346a14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x346a18: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x346a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x346a1c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x346a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x346a20: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x346a20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346a24: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346a28: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x346a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346a2c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x346a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_346a30:
    // 0x346a30: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x346a30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x346a34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x346a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346a38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346a3c: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x346a3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x346a40: 0x3e00008  jr          $ra
    ctx->pc = 0x346A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346A48u;
}
