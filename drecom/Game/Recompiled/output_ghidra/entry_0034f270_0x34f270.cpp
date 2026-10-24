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

// Function: entry_0034f270
// Address: 0x34f270 - 0x34f380
void entry_0034f270_0x34f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034f270_0x34f270");
#endif

    switch (ctx->pc) {
        case 0x34f2ecu: goto label_34f2ec;
        default: break;
    }

    ctx->pc = 0x34f270u;

    // 0x34f270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34f270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f274: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f278: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34f278u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f280: 0x8fb000c8  lw          $s0, 0xC8($sp)
    ctx->pc = 0x34f280u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f284: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x34f284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x34f288: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34f288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f28c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x34f28cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f290: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f294: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34f294u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f298: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f29c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34f2a0: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x34f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34f2a4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f2a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f2ac: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x34f2acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x34f2b0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f2b4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34f2b8: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34f2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34f2bc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34f2c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34f2c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34f2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34f2c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34f2cc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f2d0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f2d4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34f2d8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34f2dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34f2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34f2e0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34f2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34f2e4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34F2E4u;
    SET_GPR_U32(ctx, 31, 0x34F2ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34F2E4u, 0x34F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F2ECu;
label_34f2ec:
    // 0x34f2ec: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x34f2ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34f2f0: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x34f2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x34f2f4: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x34f2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x34f2f8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x34f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x34f2fc: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x34f2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x34f300: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x34f300u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x34f304: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f308: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f30c: 0xa4640034  sh          $a0, 0x34($v1)
    ctx->pc = 0x34f30cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x34f310: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f314: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34f314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f318: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34f318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34f31c: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x34f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x34f320: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34f320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34f324: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34f324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34f328: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x34f328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34f32c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f330: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x34f330u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f334: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f338: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f33c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x34f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34f340: 0x30430008  andi        $v1, $v0, 0x8
    ctx->pc = 0x34f340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x34f344: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34F344u;
    {
        const bool branch_taken_0x34f344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f344) {
            ctx->pc = 0x34F380u;
            return;
        }
    }
    ctx->pc = 0x34F34Cu;
    // 0x34f34c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f350: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f354: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x34f354u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34f358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f35c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f360: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f364: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x34f364u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f368: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34f368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34f36c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f370: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f374: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x34f374u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f378: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34F378u;
    {
        const bool branch_taken_0x34f378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f378) {
            ctx->pc = 0x34F3A8u;
            return;
        }
    }
    ctx->pc = 0x34F380u;
}
