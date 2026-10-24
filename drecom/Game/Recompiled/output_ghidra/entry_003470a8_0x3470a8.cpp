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

// Function: entry_003470a8
// Address: 0x3470a8 - 0x3471c0
void entry_003470a8_0x3470a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003470a8_0x3470a8");
#endif

    switch (ctx->pc) {
        case 0x34713cu: goto label_34713c;
        default: break;
    }

    ctx->pc = 0x3470a8u;

    // 0x3470a8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x3470a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3470ac: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x3470acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x3470b0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3470b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3470b4: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x3470b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3470b8: 0x14800097  bnez        $a0, . + 4 + (0x97 << 2)
    ctx->pc = 0x3470B8u;
    {
        const bool branch_taken_0x3470b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3470b8) {
            ctx->pc = 0x347318u;
            return;
        }
    }
    ctx->pc = 0x3470C0u;
    // 0x3470c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3470c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3470c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3470c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3470c8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3470c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3470cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3470ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3470d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3470d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3470d4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3470d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3470d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3470d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3470dc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x3470dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3470e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3470e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3470e4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x3470e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3470e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3470e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3470ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3470ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3470f0: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3470f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3470f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3470f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3470f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3470f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3470fc: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x3470fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x347100: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x347100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347104: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x347104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x347108: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x347108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34710c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x347110: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x347110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347114: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x347114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x347118: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x347118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34711c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x34711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347120: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x347120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x347124: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x347124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x347128: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x347128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34712c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34712cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x347130: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x347130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x347134: 0xc067694  jal         func_19DA50
    ctx->pc = 0x347134u;
    SET_GPR_U32(ctx, 31, 0x34713Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x347134u, 0x34713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34713Cu;
label_34713c:
    // 0x34713c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34713cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347140: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x347140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x347144: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x347144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x347148: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x347148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x34714c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x34714cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x347150: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x347150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347154: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347158: 0xa4640034  sh          $a0, 0x34($v1)
    ctx->pc = 0x347158u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x34715c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x34715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347160: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x347160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347164: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x347164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x347168: 0x2411ffef  addiu       $s1, $zero, -0x11
    ctx->pc = 0x347168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x34716c: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x34716cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x347170: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x347170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x347174: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x347174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347178: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x347178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34717c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x34717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x347180: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x347180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x347184: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x347184u;
    {
        const bool branch_taken_0x347184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x347184) {
            ctx->pc = 0x3471C0u;
            return;
        }
    }
    ctx->pc = 0x34718Cu;
    // 0x34718c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x34718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347190: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347194: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x347194u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x347198: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x347198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34719c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x34719cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3471a0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x3471a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3471a4: 0xa065006f  sb          $a1, 0x6F($v1)
    ctx->pc = 0x3471a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 5));
    // 0x3471a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3471a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3471ac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3471acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3471b0: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x3471b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3471b4: 0xa0a30072  sb          $v1, 0x72($a1)
    ctx->pc = 0x3471b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x3471b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3471B8u;
    {
        const bool branch_taken_0x3471b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3471b8) {
            ctx->pc = 0x3471E8u;
            return;
        }
    }
    ctx->pc = 0x3471C0u;
}
