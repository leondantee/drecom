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

// Function: Pl_damage_em1d_00
// Address: 0x3713e0 - 0x371884
void Pl_damage_em1d_00_0x3713e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_damage_em1d_00_0x3713e0");
#endif

    switch (ctx->pc) {
        case 0x371474u: goto label_371474;
        case 0x3714a4u: goto label_3714a4;
        case 0x3714c4u: goto label_3714c4;
        case 0x3714dcu: goto label_3714dc;
        case 0x371504u: goto label_371504;
        case 0x371518u: goto label_371518;
        case 0x371524u: goto label_371524;
        case 0x371550u: goto label_371550;
        case 0x371580u: goto label_371580;
        case 0x3715c4u: goto label_3715c4;
        case 0x3715d0u: goto label_3715d0;
        case 0x3715f8u: goto label_3715f8;
        case 0x371620u: goto label_371620;
        case 0x371634u: goto label_371634;
        case 0x371640u: goto label_371640;
        case 0x371648u: goto label_371648;
        case 0x371660u: goto label_371660;
        case 0x3716a4u: goto label_3716a4;
        case 0x3716b0u: goto label_3716b0;
        case 0x3716b8u: goto label_3716b8;
        case 0x3716fcu: goto label_3716fc;
        case 0x371708u: goto label_371708;
        case 0x37173cu: goto label_37173c;
        case 0x371760u: goto label_371760;
        case 0x3717a4u: goto label_3717a4;
        case 0x3717b0u: goto label_3717b0;
        case 0x3717d8u: goto label_3717d8;
        case 0x371800u: goto label_371800;
        case 0x371814u: goto label_371814;
        case 0x371820u: goto label_371820;
        default: break;
    }

    ctx->pc = 0x3713e0u;

    // 0x3713e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3713e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3713e4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x3713e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x3713e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3713e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3713ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3713ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3713f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3713f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3713f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3713f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3713f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3713f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3713fc: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x3713fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x371400: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x371400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x371404: 0x24730080  addiu       $s3, $v1, 0x80
    ctx->pc = 0x371404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x371408: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37140c: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x37140cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x371410: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x371410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x371414: 0x24740fa0  addiu       $s4, $v1, 0xFA0
    ctx->pc = 0x371414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x371418: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37141c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x37141cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x371420: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x371420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x371424: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x371424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371428: 0x108300e7  beq         $a0, $v1, . + 4 + (0xE7 << 2)
    ctx->pc = 0x371428u;
    {
        const bool branch_taken_0x371428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x371428) {
            ctx->pc = 0x3717C8u;
            goto label_3717c8;
        }
    }
    ctx->pc = 0x371430u;
    // 0x371430: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x371430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371434: 0x1083006c  beq         $a0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x371434u;
    {
        const bool branch_taken_0x371434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x371434) {
            ctx->pc = 0x3715E8u;
            goto label_3715e8;
        }
    }
    ctx->pc = 0x37143Cu;
    // 0x37143c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37143cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371440: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x371440u;
    {
        const bool branch_taken_0x371440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x371440) {
            ctx->pc = 0x3714CCu;
            goto label_3714cc;
        }
    }
    ctx->pc = 0x371448u;
    // 0x371448: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x371448u;
    {
        const bool branch_taken_0x371448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x371448) {
            ctx->pc = 0x371458u;
            goto label_371458;
        }
    }
    ctx->pc = 0x371450u;
    // 0x371450: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x371450u;
    {
        const bool branch_taken_0x371450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371450) {
            ctx->pc = 0x371860u;
            goto label_371860;
        }
    }
    ctx->pc = 0x371458u;
label_371458:
    // 0x371458: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37145c: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x37145cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x371460: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x371460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x371464: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x371464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x371468: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x371468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x37146c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x37146Cu;
    SET_GPR_U32(ctx, 31, 0x371474u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x37146Cu, 0x371474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371474u;
label_371474:
    // 0x371474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x371474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371478: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x371478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37147c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x37147cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x371480: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371484: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x371484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x371488: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x371488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x37148c: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x37148cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x371490: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x371490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371494: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x371494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x371498: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x371498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x37149c: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x37149Cu;
    SET_GPR_U32(ctx, 31, 0x3714A4u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x37149Cu, 0x3714A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3714A4u;
label_3714a4:
    // 0x3714a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3714a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3714a8: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x3714a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x3714ac: 0x24120140  addiu       $s2, $zero, 0x140
    ctx->pc = 0x3714acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x3714b0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x3714b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x3714b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3714b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3714b8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3714b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3714bc: 0xc0576a4  jal         func_15DA90
    ctx->pc = 0x3714BCu;
    SET_GPR_U32(ctx, 31, 0x3714C4u);
    ctx->pc = 0x15DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DA90u, 0x3714BCu, 0x3714C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3714C4u;
label_3714c4:
    // 0x3714c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3714c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3714c8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3714c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_3714cc:
    // 0x3714cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3714ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3714d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3714d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3714d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3714D4u;
    SET_GPR_U32(ctx, 31, 0x3714DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3714D4u, 0x3714DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3714DCu;
label_3714dc:
    // 0x3714dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3714dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3714e0: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x3714e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x3714e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3714e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3714e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3714E8u;
    {
        const bool branch_taken_0x3714e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3714e8) {
            ctx->pc = 0x371504u;
            goto label_371504;
        }
    }
    ctx->pc = 0x3714F0u;
    // 0x3714f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3714f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3714f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3714f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3714f8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x3714f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3714fc: 0xc05cd58  jal         func_173560
    ctx->pc = 0x3714FCu;
    SET_GPR_U32(ctx, 31, 0x371504u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x3714FCu, 0x371504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371504u;
label_371504:
    // 0x371504: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x371504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x371508: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37150c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x37150cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x371510: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x371510u;
    SET_GPR_U32(ctx, 31, 0x371518u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x371510u, 0x371518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371518u;
label_371518:
    // 0x371518: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37151c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x37151Cu;
    SET_GPR_U32(ctx, 31, 0x371524u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x37151Cu, 0x371524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371524u;
label_371524:
    // 0x371524: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371528: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x371528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x37152c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x37152Cu;
    {
        const bool branch_taken_0x37152c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37152c) {
            ctx->pc = 0x37155Cu;
            goto label_37155c;
        }
    }
    ctx->pc = 0x371534u;
    // 0x371534: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371538: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x371538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x37153c: 0x24060a01  addiu       $a2, $zero, 0xA01
    ctx->pc = 0x37153cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
    // 0x371540: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x371540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x371544: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x371544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x371548: 0xc0965d0  jal         func_259740
    ctx->pc = 0x371548u;
    SET_GPR_U32(ctx, 31, 0x371550u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x371548u, 0x371550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371550u;
label_371550:
    // 0x371550: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x371550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371554: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371558: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x371558u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
label_37155c:
    // 0x37155c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371560: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x371560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x371564: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x371564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x371568: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x371568u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37156c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x37156cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x371570: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x371570u;
    {
        const bool branch_taken_0x371570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x371570) {
            ctx->pc = 0x3715D0u;
            goto label_3715d0;
        }
    }
    ctx->pc = 0x371578u;
    // 0x371578: 0xc067694  jal         func_19DA50
    ctx->pc = 0x371578u;
    SET_GPR_U32(ctx, 31, 0x371580u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x371578u, 0x371580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371580u;
label_371580:
    // 0x371580: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x371580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x371584: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x371584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x371588: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x371588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x37158c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371590: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x371590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x371594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x371598: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x371598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37159c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x37159cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3715a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3715a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3715a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3715a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3715a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3715a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3715ac: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3715acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3715b0: 0x3404a506  ori         $a0, $zero, 0xA506
    ctx->pc = 0x3715b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42246);
    // 0x3715b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3715b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3715b8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3715b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3715bc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3715BCu;
    SET_GPR_U32(ctx, 31, 0x3715C4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3715BCu, 0x3715C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3715C4u;
label_3715c4:
    // 0x3715c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3715c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3715c8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3715C8u;
    SET_GPR_U32(ctx, 31, 0x3715D0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3715C8u, 0x3715D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3715D0u;
label_3715d0:
    // 0x3715d0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3715d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3715d4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x3715d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x3715d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3715d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3715dc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x3715dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3715e0: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x3715E0u;
    {
        const bool branch_taken_0x3715e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3715e0) {
            ctx->pc = 0x371860u;
            goto label_371860;
        }
    }
    ctx->pc = 0x3715E8u;
label_3715e8:
    // 0x3715e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3715e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3715ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3715ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3715f0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3715F0u;
    SET_GPR_U32(ctx, 31, 0x3715F8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3715F0u, 0x3715F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3715F8u;
label_3715f8:
    // 0x3715f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3715f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3715fc: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x3715fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x371600: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x371600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x371604: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x371604u;
    {
        const bool branch_taken_0x371604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371604) {
            ctx->pc = 0x371620u;
            goto label_371620;
        }
    }
    ctx->pc = 0x37160Cu;
    // 0x37160c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x37160cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371610: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x371610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371614: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x371614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x371618: 0xc05cd58  jal         func_173560
    ctx->pc = 0x371618u;
    SET_GPR_U32(ctx, 31, 0x371620u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x371618u, 0x371620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371620u;
label_371620:
    // 0x371620: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x371620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x371624: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371628: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x371628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37162c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x37162Cu;
    SET_GPR_U32(ctx, 31, 0x371634u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x37162Cu, 0x371634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371634u;
label_371634:
    // 0x371634: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371638: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x371638u;
    SET_GPR_U32(ctx, 31, 0x371640u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x371638u, 0x371640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371640u;
label_371640:
    // 0x371640: 0xc0576b8  jal         func_15DAE0
    ctx->pc = 0x371640u;
    SET_GPR_U32(ctx, 31, 0x371648u);
    ctx->pc = 0x15DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DAE0u, 0x371640u, 0x371648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371648u;
label_371648:
    // 0x371648: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x371648u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37164c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371650: 0x1623002d  bne         $s1, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x371650u;
    {
        const bool branch_taken_0x371650 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x371650) {
            ctx->pc = 0x371708u;
            goto label_371708;
        }
    }
    ctx->pc = 0x371658u;
    // 0x371658: 0xc067694  jal         func_19DA50
    ctx->pc = 0x371658u;
    SET_GPR_U32(ctx, 31, 0x371660u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x371658u, 0x371660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371660u;
label_371660:
    // 0x371660: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x371660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x371664: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x371664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x371668: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x371668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x37166c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371670: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x371670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x371674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x371678: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x371678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37167c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x37167cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x371680: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x371680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x371684: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x371684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x371688: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x371688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x37168c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x37168cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x371690: 0x3404a506  ori         $a0, $zero, 0xA506
    ctx->pc = 0x371690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42246);
    // 0x371694: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x371694u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x371698: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x371698u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37169c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x37169Cu;
    SET_GPR_U32(ctx, 31, 0x3716A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x37169Cu, 0x3716A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3716A4u;
label_3716a4:
    // 0x3716a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3716a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3716a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3716A8u;
    SET_GPR_U32(ctx, 31, 0x3716B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3716A8u, 0x3716B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3716B0u;
label_3716b0:
    // 0x3716b0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3716B0u;
    SET_GPR_U32(ctx, 31, 0x3716B8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3716B0u, 0x3716B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3716B8u;
label_3716b8:
    // 0x3716b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3716b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3716bc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3716bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3716c0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3716c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3716c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3716c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3716c8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3716c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3716cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3716ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3716d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3716d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3716d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3716d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3716d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3716d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3716dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3716dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3716e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3716e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3716e4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3716e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3716e8: 0x3404a506  ori         $a0, $zero, 0xA506
    ctx->pc = 0x3716e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42246);
    // 0x3716ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3716ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3716f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3716f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3716f4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3716F4u;
    SET_GPR_U32(ctx, 31, 0x3716FCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3716F4u, 0x3716FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3716FCu;
label_3716fc:
    // 0x3716fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3716fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x371700: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x371700u;
    SET_GPR_U32(ctx, 31, 0x371708u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x371700u, 0x371708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371708u;
label_371708:
    // 0x371708: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x371708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37170c: 0x1623000b  bne         $s1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x37170Cu;
    {
        const bool branch_taken_0x37170c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x37170c) {
            ctx->pc = 0x37173Cu;
            goto label_37173c;
        }
    }
    ctx->pc = 0x371714u;
    // 0x371714: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x371714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371718: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x371718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37171c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x37171cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x371720: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371724: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x371724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x371728: 0x24060a02  addiu       $a2, $zero, 0xA02
    ctx->pc = 0x371728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2562));
    // 0x37172c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x37172cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x371730: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x371730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x371734: 0xc0965d0  jal         func_259740
    ctx->pc = 0x371734u;
    SET_GPR_U32(ctx, 31, 0x37173Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x371734u, 0x37173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37173Cu;
label_37173c:
    // 0x37173c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37173cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371740: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x371740u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x371744: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x371744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x371748: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x371748u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37174c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x37174cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x371750: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x371750u;
    {
        const bool branch_taken_0x371750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x371750) {
            ctx->pc = 0x3717B0u;
            goto label_3717b0;
        }
    }
    ctx->pc = 0x371758u;
    // 0x371758: 0xc067694  jal         func_19DA50
    ctx->pc = 0x371758u;
    SET_GPR_U32(ctx, 31, 0x371760u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x371758u, 0x371760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371760u;
label_371760:
    // 0x371760: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x371760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x371764: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x371764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x371768: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x371768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x37176c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371770: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x371770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x371774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x371774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x371778: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x371778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37177c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x37177cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x371780: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x371780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x371784: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x371784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x371788: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x371788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x37178c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x37178cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x371790: 0x3404a506  ori         $a0, $zero, 0xA506
    ctx->pc = 0x371790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)42246);
    // 0x371794: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x371794u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x371798: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x371798u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37179c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x37179Cu;
    SET_GPR_U32(ctx, 31, 0x3717A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x37179Cu, 0x3717A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3717A4u;
label_3717a4:
    // 0x3717a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3717a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3717a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3717A8u;
    SET_GPR_U32(ctx, 31, 0x3717B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3717A8u, 0x3717B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3717B0u;
label_3717b0:
    // 0x3717b0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3717b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3717b4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x3717b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x3717b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3717b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3717bc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x3717bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3717c0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3717C0u;
    {
        const bool branch_taken_0x3717c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3717c0) {
            ctx->pc = 0x371860u;
            goto label_371860;
        }
    }
    ctx->pc = 0x3717C8u;
label_3717c8:
    // 0x3717c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3717c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3717cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3717ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3717d0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3717D0u;
    SET_GPR_U32(ctx, 31, 0x3717D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3717D0u, 0x3717D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3717D8u;
label_3717d8:
    // 0x3717d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3717d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3717dc: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x3717dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x3717e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3717e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3717e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3717E4u;
    {
        const bool branch_taken_0x3717e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3717e4) {
            ctx->pc = 0x371800u;
            goto label_371800;
        }
    }
    ctx->pc = 0x3717ECu;
    // 0x3717ec: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3717ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3717f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3717f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3717f4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x3717f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3717f8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x3717F8u;
    SET_GPR_U32(ctx, 31, 0x371800u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x3717F8u, 0x371800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371800u;
label_371800:
    // 0x371800: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x371800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x371804: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371808: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x371808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37180c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x37180Cu;
    SET_GPR_U32(ctx, 31, 0x371814u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x37180Cu, 0x371814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371814u;
label_371814:
    // 0x371814: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371818: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x371818u;
    SET_GPR_U32(ctx, 31, 0x371820u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x371818u, 0x371820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371820u;
label_371820:
    // 0x371820: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371824: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x371824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x371828: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x371828u;
    {
        const bool branch_taken_0x371828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x371828) {
            ctx->pc = 0x371860u;
            goto label_371860;
        }
    }
    ctx->pc = 0x371830u;
    // 0x371830: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x371830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371834: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371838: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x371838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x37183c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371840: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x371840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x371844: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371848: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x371848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x37184c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371850: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x371850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x371854: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x371854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x371858: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37185c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x37185cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_371860:
    // 0x371860: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x371860u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x371864: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x371864u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371868: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x371868u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37186c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37186cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371878: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x371878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37187c: 0x3e00008  jr          $ra
    ctx->pc = 0x37187Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37187Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371884u;
}
