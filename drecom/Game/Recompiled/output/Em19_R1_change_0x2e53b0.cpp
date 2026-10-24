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

// Function: Em19_R1_change
// Address: 0x2e53b0 - 0x2e55bc
void Em19_R1_change_0x2e53b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R1_change_0x2e53b0");
#endif

    switch (ctx->pc) {
        case 0x2e5414u: goto label_2e5414;
        case 0x2e5424u: goto label_2e5424;
        case 0x2e54a0u: goto label_2e54a0;
        case 0x2e54acu: goto label_2e54ac;
        case 0x2e54dcu: goto label_2e54dc;
        case 0x2e54f4u: goto label_2e54f4;
        case 0x2e5500u: goto label_2e5500;
        case 0x2e5518u: goto label_2e5518;
        case 0x2e55a4u: goto label_2e55a4;
        default: break;
    }

    ctx->pc = 0x2e53b0u;

    // 0x2e53b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e53b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e53b4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2e53b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2e53b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e53b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e53bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e53bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e53c0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2e53c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2e53c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e53c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e53c8: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x2e53c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e53cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e53ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e53d0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e53d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e53d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e53d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e53d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e53d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e53dc: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E53DCu;
    {
        const bool branch_taken_0x2e53dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e53dc) {
            ctx->pc = 0x2E5490u;
            goto label_2e5490;
        }
    }
    ctx->pc = 0x2E53E4u;
    // 0x2e53e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E53E4u;
    {
        const bool branch_taken_0x2e53e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e53e4) {
            ctx->pc = 0x2E53F4u;
            goto label_2e53f4;
        }
    }
    ctx->pc = 0x2E53ECu;
    // 0x2e53ec: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2E53ECu;
    {
        const bool branch_taken_0x2e53ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e53ec) {
            ctx->pc = 0x2E55A4u;
            goto label_2e55a4;
        }
    }
    ctx->pc = 0x2E53F4u;
label_2e53f4:
    // 0x2e53f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e53f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e53f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e53f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e53fc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e53fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e5400: 0x24060a0a  addiu       $a2, $zero, 0xA0A
    ctx->pc = 0x2e5400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2570));
    // 0x2e5404: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e5404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5408: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e5408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e540c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E540Cu;
    SET_GPR_U32(ctx, 31, 0x2E5414u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E540Cu, 0x2E5414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5414u;
label_2e5414:
    // 0x2e5414: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5418: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x2e5418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2e541c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E541Cu;
    SET_GPR_U32(ctx, 31, 0x2E5424u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E541Cu, 0x2E5424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5424u;
label_2e5424:
    // 0x2e5424: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5428: 0x245010b0  addiu       $s0, $v0, 0x10B0
    ctx->pc = 0x2e5428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2e542c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x2e542cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2e5430: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2e5430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2e5434: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e5434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e5438: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e5438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e543c: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2e543cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2e5440: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5444: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e5444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e5448: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2e5448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2e544c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2e544cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2e5450: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e5450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5454: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e5454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e5458: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2e5458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2e545c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x2e545cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x2e5460: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e5460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e5464: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e5464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e5468: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e5468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e546c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5470: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2e5470u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e5474: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e5474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e5478: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e547c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2e547cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e5480: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5484: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e5484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e5488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e5488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e548c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e548cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e5490:
    // 0x2e5490: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e5490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5494: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e5494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5498: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E5498u;
    SET_GPR_U32(ctx, 31, 0x2E54A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E5498u, 0x2E54A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54A0u;
label_2e54a0:
    // 0x2e54a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e54a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e54a4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2E54A4u;
    SET_GPR_U32(ctx, 31, 0x2E54ACu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E54A4u, 0x2E54ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54ACu;
label_2e54ac:
    // 0x2e54ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e54acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e54b0: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2e54b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2e54b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E54B4u;
    {
        const bool branch_taken_0x2e54b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e54b4) {
            ctx->pc = 0x2E54E4u;
            goto label_2e54e4;
        }
    }
    ctx->pc = 0x2E54BCu;
    // 0x2e54bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e54bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e54c0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2e54c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e54c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e54c8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2e54c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e54cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e54ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e54d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e54d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e54d4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E54D4u;
    SET_GPR_U32(ctx, 31, 0x2E54DCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E54D4u, 0x2E54DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54DCu;
label_2e54dc:
    // 0x2e54dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E54DCu;
    {
        const bool branch_taken_0x2e54dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e54dc) {
            ctx->pc = 0x2E54F4u;
            goto label_2e54f4;
        }
    }
    ctx->pc = 0x2E54E4u;
label_2e54e4:
    // 0x2e54e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e54e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e54e8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e54e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e54ec: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E54ECu;
    SET_GPR_U32(ctx, 31, 0x2E54F4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E54ECu, 0x2E54F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54F4u;
label_2e54f4:
    // 0x2e54f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e54f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e54f8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E54F8u;
    SET_GPR_U32(ctx, 31, 0x2E5500u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E54F8u, 0x2E5500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5500u;
label_2e5500:
    // 0x2e5500: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5504: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x2e5504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x2e5508: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E5508u;
    {
        const bool branch_taken_0x2e5508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5508) {
            ctx->pc = 0x2E5594u;
            goto label_2e5594;
        }
    }
    ctx->pc = 0x2E5510u;
    // 0x2e5510: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E5510u;
    SET_GPR_U32(ctx, 31, 0x2E5518u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E5510u, 0x2E5518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5518u;
label_2e5518:
    // 0x2e5518: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e5518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e551c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e551cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e5520: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E5520u;
    {
        const bool branch_taken_0x2e5520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5520) {
            ctx->pc = 0x2E5560u;
            goto label_2e5560;
        }
    }
    ctx->pc = 0x2E5528u;
    // 0x2e5528: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e5528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e552c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5530: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e5530u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e5534: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e5534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e5538: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e553c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e553cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e5540: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5544: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e5544u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5548: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e554c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e554cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5550: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5554: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e5554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e5558: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E5558u;
    {
        const bool branch_taken_0x2e5558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5558) {
            ctx->pc = 0x2E558Cu;
            goto label_2e558c;
        }
    }
    ctx->pc = 0x2E5560u;
label_2e5560:
    // 0x2e5560: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e5560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5564: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5568: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e5568u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e556c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5570: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2e5570u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5574: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5578: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e5578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e557c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5580: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e5580u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5584: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2e5584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5588: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e5588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2e558c:
    // 0x2e558c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E558Cu;
    {
        const bool branch_taken_0x2e558c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e558c) {
            ctx->pc = 0x2E55A4u;
            goto label_2e55a4;
        }
    }
    ctx->pc = 0x2E5594u;
label_2e5594:
    // 0x2e5594: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2e5594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e5598: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2e5598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e559c: 0xc0c92ec  jal         func_324BB0
    ctx->pc = 0x2E559Cu;
    SET_GPR_U32(ctx, 31, 0x2E55A4u);
    ctx->pc = 0x324BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324BB0u, 0x2E559Cu, 0x2E55A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E55A4u;
label_2e55a4:
    // 0x2e55a4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2e55a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e55a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e55a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e55ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e55acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e55b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e55b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e55b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E55B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E55B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E55BCu;
}
