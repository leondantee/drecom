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

// Function: Em09_R1_mv02
// Address: 0x3453f0 - 0x3455fc
void Em09_R1_mv02_0x3453f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv02_0x3453f0");
#endif

    switch (ctx->pc) {
        case 0x345470u: goto label_345470;
        case 0x345560u: goto label_345560;
        case 0x34557cu: goto label_34557c;
        case 0x345594u: goto label_345594;
        case 0x3455a0u: goto label_3455a0;
        case 0x3455b0u: goto label_3455b0;
        case 0x3455bcu: goto label_3455bc;
        case 0x3455e8u: goto label_3455e8;
        default: break;
    }

    ctx->pc = 0x3453f0u;

    // 0x3453f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3453f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3453f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3453f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3453f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3453f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3453fc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x3453fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x345400: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x345400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345404: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x345404u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x345408: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x345408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34540c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345410: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x345410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x345414: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x345414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x345418: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x345418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x34541c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34541cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345420: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x345420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x345424: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x345424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x345428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34542c: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x34542Cu;
    {
        const bool branch_taken_0x34542c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34542c) {
            ctx->pc = 0x345524u;
            goto label_345524;
        }
    }
    ctx->pc = 0x345434u;
    // 0x345434: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x345434u;
    {
        const bool branch_taken_0x345434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x345434) {
            ctx->pc = 0x345444u;
            goto label_345444;
        }
    }
    ctx->pc = 0x34543Cu;
    // 0x34543c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x34543Cu;
    {
        const bool branch_taken_0x34543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34543c) {
            ctx->pc = 0x3455BCu;
            goto label_3455bc;
        }
    }
    ctx->pc = 0x345444u;
label_345444:
    // 0x345444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345448: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34544c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34544cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x345450: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345454: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x345454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345458: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x345458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34545c: 0x24061e0d  addiu       $a2, $zero, 0x1E0D
    ctx->pc = 0x34545cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7693));
    // 0x345460: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x345460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345464: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x345464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x345468: 0xc0965d0  jal         func_259740
    ctx->pc = 0x345468u;
    SET_GPR_U32(ctx, 31, 0x345470u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x345468u, 0x345470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345470u;
label_345470:
    // 0x345470: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345474: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x345474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x345478: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x345478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34547c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34547cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x345480: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x345480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x345484: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x345484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x345488: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x345488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34548c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345490: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x345490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345494: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x345494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x345498: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x345498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x34549c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x34549Cu;
    {
        const bool branch_taken_0x34549c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34549c) {
            ctx->pc = 0x3454D8u;
            goto label_3454d8;
        }
    }
    ctx->pc = 0x3454A4u;
    // 0x3454a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3454a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3454a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3454a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3454ac: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x3454acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3454b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3454b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3454b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3454b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3454b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3454b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3454bc: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x3454bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x3454c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3454c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3454c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3454c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3454c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3454c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3454cc: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x3454ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x3454d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3454D0u;
    {
        const bool branch_taken_0x3454d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3454d0) {
            ctx->pc = 0x345500u;
            goto label_345500;
        }
    }
    ctx->pc = 0x3454D8u;
label_3454d8:
    // 0x3454d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3454d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3454dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3454dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3454e0: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x3454e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3454e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3454e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3454e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3454e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3454ec: 0xa040006f  sb          $zero, 0x6F($v0)
    ctx->pc = 0x3454ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x3454f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3454f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3454f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3454f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3454f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3454f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3454fc: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x3454fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
label_345500:
    // 0x345500: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345504: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x345504u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x345508: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34550c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345510: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x345510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x345514: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x345514u;
    {
        const bool branch_taken_0x345514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345514) {
            ctx->pc = 0x345524u;
            goto label_345524;
        }
    }
    ctx->pc = 0x34551Cu;
    // 0x34551c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345520: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x345520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_345524:
    // 0x345524: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345528: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x345528u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x34552c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x34552Cu;
    {
        const bool branch_taken_0x34552c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34552c) {
            ctx->pc = 0x345584u;
            goto label_345584;
        }
    }
    ctx->pc = 0x345534u;
    // 0x345534: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x345534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x345538: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x345538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x34553c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34553cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x345540: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x345540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345544: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345548: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x345548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x34554c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x34554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x345550: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x345550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x345554: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x345554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x345558: 0xc05c848  jal         func_172120
    ctx->pc = 0x345558u;
    SET_GPR_U32(ctx, 31, 0x345560u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x345558u, 0x345560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345560u;
label_345560:
    // 0x345560: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x345560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x345564: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345568: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x345568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34556c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x34556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345570: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x345570u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345574: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x345574u;
    SET_GPR_U32(ctx, 31, 0x34557Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x345574u, 0x34557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34557Cu;
label_34557c:
    // 0x34557c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34557cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345580: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x345580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_345584:
    // 0x345584: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x345584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345588: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x345588u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34558c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34558Cu;
    SET_GPR_U32(ctx, 31, 0x345594u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34558Cu, 0x345594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345594u;
label_345594:
    // 0x345594: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x345594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345598: 0xc05cd10  jal         func_173440
    ctx->pc = 0x345598u;
    SET_GPR_U32(ctx, 31, 0x3455A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x345598u, 0x3455A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3455A0u;
label_3455a0:
    // 0x3455a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3455a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3455a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3455a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3455a8: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3455A8u;
    SET_GPR_U32(ctx, 31, 0x3455B0u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3455A8u, 0x3455B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3455B0u;
label_3455b0:
    // 0x3455b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3455b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3455b4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3455B4u;
    SET_GPR_U32(ctx, 31, 0x3455BCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3455B4u, 0x3455BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3455BCu;
label_3455bc:
    // 0x3455bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3455bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3455c0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x3455c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x3455c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3455c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3455c8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x3455c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3455cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3455CCu;
    {
        const bool branch_taken_0x3455cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3455cc) {
            ctx->pc = 0x3455E8u;
            goto label_3455e8;
        }
    }
    ctx->pc = 0x3455D4u;
    // 0x3455d4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3455d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3455d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3455d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3455dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3455dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3455e0: 0xc0d56ac  jal         func_355AB0
    ctx->pc = 0x3455E0u;
    SET_GPR_U32(ctx, 31, 0x3455E8u);
    ctx->pc = 0x355AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355AB0u, 0x3455E0u, 0x3455E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3455E8u;
label_3455e8:
    // 0x3455e8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3455e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3455ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3455ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3455f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3455f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3455f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3455F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3455F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3455FCu;
}
