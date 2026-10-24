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

// Function: Om_alpha_ctrl
// Address: 0x3613a0 - 0x36154c
void Om_alpha_ctrl_0x3613a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_alpha_ctrl_0x3613a0");
#endif

    switch (ctx->pc) {
        case 0x361444u: goto label_361444;
        case 0x361470u: goto label_361470;
        case 0x361490u: goto label_361490;
        case 0x3614e8u: goto label_3614e8;
        case 0x361514u: goto label_361514;
        case 0x361534u: goto label_361534;
        default: break;
    }

    ctx->pc = 0x3613a0u;

    // 0x3613a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3613a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3613a4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x3613a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x3613a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3613a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3613ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3613acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3613b0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x3613b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x3613b4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3613b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3613b8: 0x8c31dbd4  lw          $s1, -0x242C($at)
    ctx->pc = 0x3613b8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3EDBD4u));
    // 0x3613bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3613bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3613c0: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x3613c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x3613c4: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x3613c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3613c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3613c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3613cc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3613ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3613d0: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x3613d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3613d4: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x3613D4u;
    {
        const bool branch_taken_0x3613d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3613d4) {
            ctx->pc = 0x361498u;
            goto label_361498;
        }
    }
    ctx->pc = 0x3613DCu;
    // 0x3613dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3613dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3613e0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x3613e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x3613e4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3613e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3613e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3613e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3613ec: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3613ECu;
    {
        const bool branch_taken_0x3613ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3613ec) {
            ctx->pc = 0x361498u;
            goto label_361498;
        }
    }
    ctx->pc = 0x3613F4u;
    // 0x3613f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3613f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3613f8: 0x906211ec  lbu         $v0, 0x11EC($v1)
    ctx->pc = 0x3613f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x3613fc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3613fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x361400: 0xa06211ec  sb          $v0, 0x11EC($v1)
    ctx->pc = 0x361400u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 2));
    // 0x361404: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x361404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x361408: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x361408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x36140c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36140cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361410: 0x28410030  slti        $at, $v0, 0x30
    ctx->pc = 0x361410u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x361414: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x361414u;
    {
        const bool branch_taken_0x361414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361414) {
            ctx->pc = 0x361428u;
            goto label_361428;
        }
    }
    ctx->pc = 0x36141Cu;
    // 0x36141c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x36141cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x361420: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x361420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x361424: 0xa04311ec  sb          $v1, 0x11EC($v0)
    ctx->pc = 0x361424u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4588), (uint8_t)GPR_U32(ctx, 3));
label_361428:
    // 0x361428: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x361428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36142c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36142cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x361430: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x361430u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x361434: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x361434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361438: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x361438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36143c: 0xc0779f4  jal         func_1DE7D0
    ctx->pc = 0x36143Cu;
    SET_GPR_U32(ctx, 31, 0x361444u);
    ctx->pc = 0x1DE7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE7D0u, 0x36143Cu, 0x361444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361444u;
label_361444:
    // 0x361444: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x361444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x361448: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x361448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x36144c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x36144Cu;
    {
        const bool branch_taken_0x36144c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36144c) {
            ctx->pc = 0x361478u;
            goto label_361478;
        }
    }
    ctx->pc = 0x361454u;
    // 0x361454: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x361454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x361458: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x361458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x36145c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361460: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x361460u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x361464: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x361464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x361468: 0xc096348  jal         func_258D20
    ctx->pc = 0x361468u;
    SET_GPR_U32(ctx, 31, 0x361470u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x361468u, 0x361470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361470u;
label_361470:
    // 0x361470: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x361470u;
    {
        const bool branch_taken_0x361470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361470) {
            ctx->pc = 0x361534u;
            goto label_361534;
        }
    }
    ctx->pc = 0x361478u;
label_361478:
    // 0x361478: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x361478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36147c: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x36147cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x361480: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x361480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361484: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x361484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x361488: 0xc096348  jal         func_258D20
    ctx->pc = 0x361488u;
    SET_GPR_U32(ctx, 31, 0x361490u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x361488u, 0x361490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361490u;
label_361490:
    // 0x361490: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x361490u;
    {
        const bool branch_taken_0x361490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361490) {
            ctx->pc = 0x361534u;
            goto label_361534;
        }
    }
    ctx->pc = 0x361498u;
label_361498:
    // 0x361498: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x361498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36149c: 0x906211ec  lbu         $v0, 0x11EC($v1)
    ctx->pc = 0x36149cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x3614a0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3614a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3614a4: 0xa06211ec  sb          $v0, 0x11EC($v1)
    ctx->pc = 0x3614a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4588), (uint8_t)GPR_U32(ctx, 2));
    // 0x3614a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3614a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3614ac: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x3614acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x3614b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3614b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3614b4: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x3614b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x3614b8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3614B8u;
    {
        const bool branch_taken_0x3614b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3614b8) {
            ctx->pc = 0x3614CCu;
            goto label_3614cc;
        }
    }
    ctx->pc = 0x3614C0u;
    // 0x3614c0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3614c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3614c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3614c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3614c8: 0xa04311ec  sb          $v1, 0x11EC($v0)
    ctx->pc = 0x3614c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4588), (uint8_t)GPR_U32(ctx, 3));
label_3614cc:
    // 0x3614cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3614ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3614d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3614d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3614d4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x3614d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x3614d8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x3614d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3614dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3614dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3614e0: 0xc0779f4  jal         func_1DE7D0
    ctx->pc = 0x3614E0u;
    SET_GPR_U32(ctx, 31, 0x3614E8u);
    ctx->pc = 0x1DE7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE7D0u, 0x3614E0u, 0x3614E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3614E8u;
label_3614e8:
    // 0x3614e8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3614e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3614ec: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3614ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3614f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3614F0u;
    {
        const bool branch_taken_0x3614f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3614f0) {
            ctx->pc = 0x36151Cu;
            goto label_36151c;
        }
    }
    ctx->pc = 0x3614F8u;
    // 0x3614f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3614f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3614fc: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x3614fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x361500: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361504: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x361504u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x361508: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x361508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36150c: 0xc096348  jal         func_258D20
    ctx->pc = 0x36150Cu;
    SET_GPR_U32(ctx, 31, 0x361514u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x36150Cu, 0x361514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361514u;
label_361514:
    // 0x361514: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x361514u;
    {
        const bool branch_taken_0x361514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361514) {
            ctx->pc = 0x361534u;
            goto label_361534;
        }
    }
    ctx->pc = 0x36151Cu;
label_36151c:
    // 0x36151c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x361520: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x361520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x361524: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x361524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361528: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x361528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36152c: 0xc096348  jal         func_258D20
    ctx->pc = 0x36152Cu;
    SET_GPR_U32(ctx, 31, 0x361534u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x36152Cu, 0x361534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361534u;
label_361534:
    // 0x361534: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x361534u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x361538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36153c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36153cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361540: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x361540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x361544: 0x3e00008  jr          $ra
    ctx->pc = 0x361544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36154Cu;
}
