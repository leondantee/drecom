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

// Function: Em09_die_bom_ck
// Address: 0x355820 - 0x355aa8
void Em09_die_bom_ck_0x355820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_die_bom_ck_0x355820");
#endif

    ctx->pc = 0x355820u;

    // 0x355820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x355824: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x355828: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x355828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x35582c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35582cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355830: 0x8c700058  lw          $s0, 0x58($v1)
    ctx->pc = 0x355830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x355834: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355838: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35583c: 0x906300b8  lbu         $v1, 0xB8($v1)
    ctx->pc = 0x35583cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x355840: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x355840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x355844: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x355844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x355848: 0x10830093  beq         $a0, $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x355848u;
    {
        const bool branch_taken_0x355848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x355848) {
            ctx->pc = 0x355A98u;
            goto label_355a98;
        }
    }
    ctx->pc = 0x355850u;
    // 0x355850: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355854: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x355854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355858: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x355858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x35585c: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x35585cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x355860: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x355860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x355864: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355868: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x355868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35586c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x35586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x355870: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x355870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x355874: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x355874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x355878: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35587c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35587cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355880: 0x906300b8  lbu         $v1, 0xB8($v1)
    ctx->pc = 0x355880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x355884: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x355884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x355888: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x355888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35588c: 0x10830056  beq         $a0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x35588Cu;
    {
        const bool branch_taken_0x35588c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35588c) {
            ctx->pc = 0x3559E8u;
            goto label_3559e8;
        }
    }
    ctx->pc = 0x355894u;
    // 0x355894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x355894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355898: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x355898u;
    {
        const bool branch_taken_0x355898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x355898) {
            ctx->pc = 0x355930u;
            goto label_355930;
        }
    }
    ctx->pc = 0x3558A0u;
    // 0x3558a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3558A0u;
    {
        const bool branch_taken_0x3558a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3558a0) {
            ctx->pc = 0x3558B0u;
            goto label_3558b0;
        }
    }
    ctx->pc = 0x3558A8u;
    // 0x3558a8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x3558A8u;
    {
        const bool branch_taken_0x3558a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3558a8) {
            ctx->pc = 0x355A98u;
            goto label_355a98;
        }
    }
    ctx->pc = 0x3558B0u;
label_3558b0:
    // 0x3558b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3558b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3558b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3558b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3558b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3558b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3558bc: 0xa06400b8  sb          $a0, 0xB8($v1)
    ctx->pc = 0x3558bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 184), (uint8_t)GPR_U32(ctx, 4));
    // 0x3558c0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3558c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3558c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3558c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3558c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3558c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3558cc: 0xa46400bc  sh          $a0, 0xBC($v1)
    ctx->pc = 0x3558ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 4));
    // 0x3558d0: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x3558d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3558d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3558d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3558d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3558d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3558dc: 0xa46400be  sh          $a0, 0xBE($v1)
    ctx->pc = 0x3558dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 190), (uint16_t)GPR_U32(ctx, 4));
    // 0x3558e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3558e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3558e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3558e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3558e8: 0x846400be  lh          $a0, 0xBE($v1)
    ctx->pc = 0x3558e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 190)));
    // 0x3558ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3558ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3558f0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3558f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3558f4: 0xa4640036  sh          $a0, 0x36($v1)
    ctx->pc = 0x3558f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x3558f8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x3558f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3558fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3558fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355900: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355904: 0xa4640038  sh          $a0, 0x38($v1)
    ctx->pc = 0x355904u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 4));
    // 0x355908: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x355908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x35590c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35590cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355910: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355914: 0xa464003a  sh          $a0, 0x3A($v1)
    ctx->pc = 0x355914u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 58), (uint16_t)GPR_U32(ctx, 4));
    // 0x355918: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35591c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35591cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355920: 0x846400bc  lh          $a0, 0xBC($v1)
    ctx->pc = 0x355920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x355924: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355928: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35592c: 0xa464003c  sh          $a0, 0x3C($v1)
    ctx->pc = 0x35592cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 4));
label_355930:
    // 0x355930: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x355930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x355934: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355938: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35593c: 0x84630036  lh          $v1, 0x36($v1)
    ctx->pc = 0x35593cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x355940: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x355940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x355944: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x355944u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x355948: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x355948u;
    {
        const bool branch_taken_0x355948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x355948) {
            ctx->pc = 0x35599Cu;
            goto label_35599c;
        }
    }
    ctx->pc = 0x355950u;
    // 0x355950: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x355950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x355954: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355958: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35595c: 0xa46400be  sh          $a0, 0xBE($v1)
    ctx->pc = 0x35595cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 190), (uint16_t)GPR_U32(ctx, 4));
    // 0x355960: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355964: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x355964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355968: 0x848300bc  lh          $v1, 0xBC($a0)
    ctx->pc = 0x355968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x35596c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x35596cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x355970: 0xa48300bc  sh          $v1, 0xBC($a0)
    ctx->pc = 0x355970u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 188), (uint16_t)GPR_U32(ctx, 3));
    // 0x355974: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355978: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35597c: 0x846400be  lh          $a0, 0xBE($v1)
    ctx->pc = 0x35597cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 190)));
    // 0x355980: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355984: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355988: 0xa4640036  sh          $a0, 0x36($v1)
    ctx->pc = 0x355988u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x35598c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35598cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355990: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355994: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355998: 0xa06400b8  sb          $a0, 0xB8($v1)
    ctx->pc = 0x355998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 184), (uint8_t)GPR_U32(ctx, 4));
label_35599c:
    // 0x35599c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3559a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3559a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3559a4: 0x846300bc  lh          $v1, 0xBC($v1)
    ctx->pc = 0x3559a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3559a8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3559a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3559ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3559acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3559b0: 0x28630200  slti        $v1, $v1, 0x200
    ctx->pc = 0x3559b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x3559b4: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x3559B4u;
    {
        const bool branch_taken_0x3559b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3559b4) {
            ctx->pc = 0x355A98u;
            goto label_355a98;
        }
    }
    ctx->pc = 0x3559BCu;
    // 0x3559bc: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x3559bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3559c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3559c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3559c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3559c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3559c8: 0xa46400bc  sh          $a0, 0xBC($v1)
    ctx->pc = 0x3559c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 4));
    // 0x3559cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3559ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3559d0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3559d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3559d4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3559d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3559d8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3559d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3559dc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3559dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x3559e0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3559E0u;
    {
        const bool branch_taken_0x3559e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3559e0) {
            ctx->pc = 0x355A98u;
            goto label_355a98;
        }
    }
    ctx->pc = 0x3559E8u;
label_3559e8:
    // 0x3559e8: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x3559e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3559ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3559ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3559f0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3559f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3559f4: 0x84630036  lh          $v1, 0x36($v1)
    ctx->pc = 0x3559f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x3559f8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3559f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3559fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3559fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x355a00: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x355A00u;
    {
        const bool branch_taken_0x355a00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x355a00) {
            ctx->pc = 0x355A54u;
            goto label_355a54;
        }
    }
    ctx->pc = 0x355A08u;
    // 0x355a08: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x355a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x355a0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a14: 0xa46400be  sh          $a0, 0xBE($v1)
    ctx->pc = 0x355a14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 190), (uint16_t)GPR_U32(ctx, 4));
    // 0x355a18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a1c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x355a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a20: 0x848300bc  lh          $v1, 0xBC($a0)
    ctx->pc = 0x355a20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x355a24: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x355a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x355a28: 0xa48300bc  sh          $v1, 0xBC($a0)
    ctx->pc = 0x355a28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 188), (uint16_t)GPR_U32(ctx, 3));
    // 0x355a2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a34: 0x846400be  lh          $a0, 0xBE($v1)
    ctx->pc = 0x355a34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 190)));
    // 0x355a38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a40: 0xa4640036  sh          $a0, 0x36($v1)
    ctx->pc = 0x355a40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x355a44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x355a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355a48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a4c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a50: 0xa06400b8  sb          $a0, 0xB8($v1)
    ctx->pc = 0x355a50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 184), (uint8_t)GPR_U32(ctx, 4));
label_355a54:
    // 0x355a54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a5c: 0x846300bc  lh          $v1, 0xBC($v1)
    ctx->pc = 0x355a5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x355a60: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x355a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x355a64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x355a64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x355a68: 0x28630200  slti        $v1, $v1, 0x200
    ctx->pc = 0x355a68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x355a6c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x355A6Cu;
    {
        const bool branch_taken_0x355a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x355a6c) {
            ctx->pc = 0x355A98u;
            goto label_355a98;
        }
    }
    ctx->pc = 0x355A74u;
    // 0x355a74: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x355a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x355a78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a80: 0xa46400bc  sh          $a0, 0xBC($v1)
    ctx->pc = 0x355a80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 4));
    // 0x355a84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355a88: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x355a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355a8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x355a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x355a90: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x355a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x355a94: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x355a94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_355a98:
    // 0x355a98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355a9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x355a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x355aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x355AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355AA8u;
}
