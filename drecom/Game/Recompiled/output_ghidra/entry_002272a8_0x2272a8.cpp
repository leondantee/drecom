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

// Function: entry_002272a8
// Address: 0x2272a8 - 0x227558
void entry_002272a8_0x2272a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002272a8_0x2272a8");
#endif

    switch (ctx->pc) {
        case 0x2272d4u: goto label_2272d4;
        case 0x2272f0u: goto label_2272f0;
        case 0x227308u: goto label_227308;
        case 0x227318u: goto label_227318;
        case 0x227360u: goto label_227360;
        case 0x2273b4u: goto label_2273b4;
        case 0x2273ecu: goto label_2273ec;
        case 0x2273fcu: goto label_2273fc;
        case 0x227420u: goto label_227420;
        case 0x227518u: goto label_227518;
        default: break;
    }

    ctx->pc = 0x2272a8u;

    // 0x2272a8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2272a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2272ac: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2272acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2272b0: 0x3c033dc9  lui         $v1, 0x3DC9
    ctx->pc = 0x2272b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15817 << 16));
    // 0x2272b4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2272b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2272b8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2272b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2272bc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2272bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2272c0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2272c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2272c4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2272c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2272c8: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x2272c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2272cc: 0xc05c848  jal         func_172120
    ctx->pc = 0x2272CCu;
    SET_GPR_U32(ctx, 31, 0x2272D4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2272CCu, 0x2272D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272D4u;
label_2272d4:
    // 0x2272d4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2272d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2272d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2272d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2272dc: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2272dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2272e0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2272e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2272e4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2272e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2272e8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2272E8u;
    SET_GPR_U32(ctx, 31, 0x2272F0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2272E8u, 0x2272F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272F0u;
label_2272f0:
    // 0x2272f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2272f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2272f4: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2272f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2272f8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2272f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2272fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2272fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x227300: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x227300u;
    SET_GPR_U32(ctx, 31, 0x227308u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x227300u, 0x227308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227308u;
label_227308:
    // 0x227308: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227308u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22730c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x22730cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227310: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x227310u;
    SET_GPR_U32(ctx, 31, 0x227318u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x227310u, 0x227318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227318u;
label_227318:
    // 0x227318: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227318u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22731c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x22731cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227320: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x227320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x227324: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x227324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x227328: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x227328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x22732c: 0x10600104  beqz        $v1, . + 4 + (0x104 << 2)
    ctx->pc = 0x22732Cu;
    {
        const bool branch_taken_0x22732c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22732c) {
            ctx->pc = 0x227740u;
            return;
        }
    }
    ctx->pc = 0x227334u;
    // 0x227334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227338: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22733c: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x22733cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x227340: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227344: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x227344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x227348: 0x84420094  lh          $v0, 0x94($v0)
    ctx->pc = 0x227348u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x22734c: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x22734Cu;
    {
        const bool branch_taken_0x22734c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22734c) {
            ctx->pc = 0x227558u;
            return;
        }
    }
    ctx->pc = 0x227354u;
    // 0x227354: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x227354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227358: 0xc06ce3c  jal         func_1B38F0
    ctx->pc = 0x227358u;
    SET_GPR_U32(ctx, 31, 0x227360u);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x227358u, 0x227360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227360u;
label_227360:
    // 0x227360: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x227360u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x227364: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x227364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x227368: 0x146000f5  bnez        $v1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x227368u;
    {
        const bool branch_taken_0x227368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x227368) {
            ctx->pc = 0x227740u;
            return;
        }
    }
    ctx->pc = 0x227370u;
    // 0x227370: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x227370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x227374: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x227374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x227378: 0x146000f1  bnez        $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x227378u;
    {
        const bool branch_taken_0x227378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x227378) {
            ctx->pc = 0x227740u;
            return;
        }
    }
    ctx->pc = 0x227380u;
    // 0x227380: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x227380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x227384: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x227384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x227388: 0x146000ed  bnez        $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x227388u;
    {
        const bool branch_taken_0x227388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x227388) {
            ctx->pc = 0x227740u;
            return;
        }
    }
    ctx->pc = 0x227390u;
    // 0x227390: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x227390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x227394: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x227394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227398: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22739c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22739cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2273a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2273a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2273a4: 0x8c24dcf0  lw          $a0, -0x2310($at)
    ctx->pc = 0x2273a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2273a8: 0x24450880  addiu       $a1, $v0, 0x880
    ctx->pc = 0x2273a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x2273ac: 0xc05cad8  jal         func_172B60
    ctx->pc = 0x2273ACu;
    SET_GPR_U32(ctx, 31, 0x2273B4u);
    ctx->pc = 0x172B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172B60u, 0x2273ACu, 0x2273B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273B4u;
label_2273b4:
    // 0x2273b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2273b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2273b8: 0x0  nop
    ctx->pc = 0x2273b8u;
    // NOP
    // 0x2273bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2273bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2273c0: 0x0  nop
    ctx->pc = 0x2273c0u;
    // NOP
    // 0x2273c4: 0x450000de  bc1f        . + 4 + (0xDE << 2)
    ctx->pc = 0x2273C4u;
    {
        const bool branch_taken_0x2273c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2273c4) {
            ctx->pc = 0x227740u;
            return;
        }
    }
    ctx->pc = 0x2273CCu;
    // 0x2273cc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2273ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2273d0: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x2273d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x2273d4: 0x146000da  bnez        $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x2273D4u;
    {
        const bool branch_taken_0x2273d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2273d4) {
            ctx->pc = 0x227740u;
            return;
        }
    }
    ctx->pc = 0x2273DCu;
    // 0x2273dc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2273dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2273e0: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2273e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2273e4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2273E4u;
    SET_GPR_U32(ctx, 31, 0x2273ECu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2273E4u, 0x2273ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273ECu;
label_2273ec:
    // 0x2273ec: 0x3c040280  lui         $a0, 0x280
    ctx->pc = 0x2273ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)640 << 16));
    // 0x2273f0: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x2273f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x2273f4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2273F4u;
    SET_GPR_U32(ctx, 31, 0x2273FCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2273F4u, 0x2273FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273FCu;
label_2273fc:
    // 0x2273fc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x2273fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x227400: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x227400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x227404: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x227404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227408: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22740c: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x22740cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x227410: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x227410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x227414: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x227414u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x227418: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x227418u;
    SET_GPR_U32(ctx, 31, 0x227420u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x227418u, 0x227420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227420u;
label_227420:
    // 0x227420: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227424: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x227424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x227428: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x227428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22742c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x22742cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x227430: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x227430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x227434: 0x24428fc0  addiu       $v0, $v0, -0x7040
    ctx->pc = 0x227434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
    // 0x227438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22743c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x22743cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227440: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x227440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x227444: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x227448: 0xa022edae  sb          $v0, -0x1252($at)
    ctx->pc = 0x227448u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAEu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAEu, _value); } while (0);
    // 0x22744c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227450: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x227454: 0xa022edaf  sb          $v0, -0x1251($at)
    ctx->pc = 0x227454u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDAFu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDAFu, _value); } while (0);
    // 0x227458: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22745c: 0xa420edb4  sh          $zero, -0x124C($at)
    ctx->pc = 0x22745cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB4u, _value); } while (0);
    // 0x227460: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x227464: 0xa420edb2  sh          $zero, -0x124E($at)
    ctx->pc = 0x227464u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB2u, _value); } while (0);
    // 0x227468: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x227468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22746c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22746cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x227470: 0xa422edb6  sh          $v0, -0x124A($at)
    ctx->pc = 0x227470u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDB6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEDB6u, _value); } while (0);
    // 0x227474: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x227478: 0xa020edb0  sb          $zero, -0x1250($at)
    ctx->pc = 0x227478u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEDB0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEDB0u, _value); } while (0);
    // 0x22747c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x22747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227480: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x227484: 0xac22edd0  sw          $v0, -0x1230($at)
    ctx->pc = 0x227484u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEDD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEDD0u, _value); } while (0);
    // 0x227488: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x227488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22748c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x22748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227490: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x227490u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x227494: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x227494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x227498: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x227498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22749c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22749cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2274a0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2274a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2274a4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2274a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2274a8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2274a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2274ac: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2274acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2274b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2274b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2274b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2274b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2274b8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2274b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2274bc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2274bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2274c0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2274c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2274c4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2274c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2274c8: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x2274c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x2274cc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2274ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2274d0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2274d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2274d4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2274d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2274d8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2274d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2274dc: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x2274dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x2274e0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2274e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2274e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2274e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2274e8: 0xa022ec68  sb          $v0, -0x1398($at)
    ctx->pc = 0x2274e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEC68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EEC68u, _value); } while (0);
    // 0x2274ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2274ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2274f0: 0x8c221a50  lw          $v0, 0x1A50($at)
    ctx->pc = 0x2274f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x2274f4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2274f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2274f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2274f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2274fc: 0xac221a50  sw          $v0, 0x1A50($at)
    ctx->pc = 0x2274fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    // 0x227500: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x227500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x227504: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x227504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x227508: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x227508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x22750c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x22750cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x227510: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x227510u;
    SET_GPR_U32(ctx, 31, 0x227518u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x227510u, 0x227518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227518u;
label_227518:
    // 0x227518: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x227518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22751c: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x22751cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x227520: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x227520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x227524: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x227524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x227528: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x227528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22752c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22752cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x227530: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x227530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x227534: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227538: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x227538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22753c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22753cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x227540: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x227540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x227544: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x227544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x227548: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x227548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22754c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22754cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x227550: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x227550u;
    {
        const bool branch_taken_0x227550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227550) {
            ctx->pc = 0x227740u;
            return;
        }
    }
    ctx->pc = 0x227558u;
}
