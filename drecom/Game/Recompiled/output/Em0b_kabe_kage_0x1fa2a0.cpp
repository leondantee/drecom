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

// Function: Em0b_kabe_kage
// Address: 0x1fa2a0 - 0x1fa70c
void Em0b_kabe_kage_0x1fa2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_kabe_kage_0x1fa2a0");
#endif

    switch (ctx->pc) {
        case 0x1fa58cu: goto label_1fa58c;
        case 0x1fa5a0u: goto label_1fa5a0;
        case 0x1fa620u: goto label_1fa620;
        case 0x1fa670u: goto label_1fa670;
        case 0x1fa69cu: goto label_1fa69c;
        case 0x1fa6d4u: goto label_1fa6d4;
        default: break;
    }

    ctx->pc = 0x1fa2a0u;

    // 0x1fa2a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1fa2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1fa2a4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1fa2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fa2a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fa2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fa2ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fa2b0: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1fa2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x1fa2b4: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x1fa2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x1fa2b8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1fa2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1fa2bc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1fa2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fa2c0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa2c4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fa2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fa2c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1fa2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1fa2cc: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1fa2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1fa2d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fa2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa2d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fa2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fa2d8: 0x8c700244  lw          $s0, 0x244($v1)
    ctx->pc = 0x1fa2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
    // 0x1fa2dc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa2e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa2e4: 0x94630082  lhu         $v1, 0x82($v1)
    ctx->pc = 0x1fa2e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x1fa2e8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fa2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fa2ec: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1fa2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1fa2f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA2F0u;
    {
        const bool branch_taken_0x1fa2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa2f0) {
            ctx->pc = 0x1FA314u;
            goto label_1fa314;
        }
    }
    ctx->pc = 0x1FA2F8u;
    // 0x1fa2f8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa2fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa300: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x1fa300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1fa304: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1fa304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1fa308: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fa308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fa30c: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1FA30Cu;
    {
        const bool branch_taken_0x1fa30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa30c) {
            ctx->pc = 0x1FA478u;
            goto label_1fa478;
        }
    }
    ctx->pc = 0x1FA314u;
label_1fa314:
    // 0x1fa314: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1fa314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1fa318: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1fa318u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1fa31c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1fa31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1fa320: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fa320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fa324: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA324u;
    {
        const bool branch_taken_0x1fa324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa324) {
            ctx->pc = 0x1FA340u;
            goto label_1fa340;
        }
    }
    ctx->pc = 0x1FA32Cu;
    // 0x1fa32c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa330: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1fa330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1fa334: 0x28630320  slti        $v1, $v1, 0x320
    ctx->pc = 0x1fa334u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)800) ? 1 : 0);
    // 0x1fa338: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FA338u;
    {
        const bool branch_taken_0x1fa338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa338) {
            ctx->pc = 0x1FA3D4u;
            goto label_1fa3d4;
        }
    }
    ctx->pc = 0x1FA340u;
label_1fa340:
    // 0x1fa340: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1fa340u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1fa344: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1fa344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fa348: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fa348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa34c: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x1fa34cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1fa350: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1fa350u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    // 0x1fa354: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1fa354u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1fa358: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa35c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fa35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa360: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1fa360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fa364: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1fa364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa368: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fa368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa36c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fa36cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fa370: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA370u;
    {
        const bool branch_taken_0x1fa370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa370) {
            ctx->pc = 0x1FA38Cu;
            goto label_1fa38c;
        }
    }
    ctx->pc = 0x1FA378u;
    // 0x1fa378: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1fa378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa37c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1fa37cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa380: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa384: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fa384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fa388: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1fa388u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
label_1fa38c:
    // 0x1fa38c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa390: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1fa390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa394: 0x9083007f  lbu         $v1, 0x7F($a0)
    ctx->pc = 0x1fa394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 127)));
    // 0x1fa398: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fa398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fa39c: 0xa083007f  sb          $v1, 0x7F($a0)
    ctx->pc = 0x1fa39cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 127), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa3a0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa3a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa3a8: 0x9063007f  lbu         $v1, 0x7F($v1)
    ctx->pc = 0x1fa3a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 127)));
    // 0x1fa3ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fa3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa3b0: 0x28630080  slti        $v1, $v1, 0x80
    ctx->pc = 0x1fa3b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1fa3b4: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1FA3B4u;
    {
        const bool branch_taken_0x1fa3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa3b4) {
            ctx->pc = 0x1FA514u;
            goto label_1fa514;
        }
    }
    ctx->pc = 0x1FA3BCu;
    // 0x1fa3bc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1fa3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa3c0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa3c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa3c8: 0xa064007f  sb          $a0, 0x7F($v1)
    ctx->pc = 0x1fa3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 127), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fa3cc: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1FA3CCu;
    {
        const bool branch_taken_0x1fa3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa3cc) {
            ctx->pc = 0x1FA514u;
            goto label_1fa514;
        }
    }
    ctx->pc = 0x1FA3D4u;
label_1fa3d4:
    // 0x1fa3d4: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1fa3d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1fa3d8: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x1fa3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1fa3dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fa3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa3e0: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x1fa3e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1fa3e4: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1fa3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    // 0x1fa3e8: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1fa3e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1fa3ec: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa3f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fa3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa3f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fa3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fa3f8: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x1fa3f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x1fa3fc: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1fa3fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1fa400: 0x34210020  ori         $at, $at, 0x20
    ctx->pc = 0x1fa400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32);
    // 0x1fa404: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1fa404u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1fa408: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1fa408u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1fa40c: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x1fa40cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x1fa410: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x1fa410u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1fa414: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA414u;
    {
        const bool branch_taken_0x1fa414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa414) {
            ctx->pc = 0x1FA430u;
            goto label_1fa430;
        }
    }
    ctx->pc = 0x1FA41Cu;
    // 0x1fa41c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1fa41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1fa420: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1fa420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa424: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa428: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fa428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fa42c: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1fa42cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
label_1fa430:
    // 0x1fa430: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa434: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1fa434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa438: 0x9083007f  lbu         $v1, 0x7F($a0)
    ctx->pc = 0x1fa438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 127)));
    // 0x1fa43c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1fa43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1fa440: 0xa083007f  sb          $v1, 0x7F($a0)
    ctx->pc = 0x1fa440u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 127), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa444: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa448: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa44c: 0x9063007f  lbu         $v1, 0x7F($v1)
    ctx->pc = 0x1fa44cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 127)));
    // 0x1fa450: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fa450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa454: 0x28610031  slti        $at, $v1, 0x31
    ctx->pc = 0x1fa454u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1fa458: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1FA458u;
    {
        const bool branch_taken_0x1fa458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa458) {
            ctx->pc = 0x1FA514u;
            goto label_1fa514;
        }
    }
    ctx->pc = 0x1FA460u;
    // 0x1fa460: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1fa460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1fa464: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa468: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa46c: 0xa064007f  sb          $a0, 0x7F($v1)
    ctx->pc = 0x1fa46cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 127), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fa470: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1FA470u;
    {
        const bool branch_taken_0x1fa470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa470) {
            ctx->pc = 0x1FA514u;
            goto label_1fa514;
        }
    }
    ctx->pc = 0x1FA478u;
label_1fa478:
    // 0x1fa478: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1fa478u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1fa47c: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x1fa47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1fa480: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fa480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa484: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x1fa484u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1fa488: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1fa488u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
    // 0x1fa48c: 0xde0400e8  ld          $a0, 0xE8($s0)
    ctx->pc = 0x1fa48cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x1fa490: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa494: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fa494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa498: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fa498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fa49c: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x1fa49cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x1fa4a0: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1fa4a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1fa4a4: 0x34210020  ori         $at, $at, 0x20
    ctx->pc = 0x1fa4a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32);
    // 0x1fa4a8: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1fa4a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1fa4ac: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1fa4acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1fa4b0: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x1fa4b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x1fa4b4: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x1fa4b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1fa4b8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA4B8u;
    {
        const bool branch_taken_0x1fa4b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa4b8) {
            ctx->pc = 0x1FA4D4u;
            goto label_1fa4d4;
        }
    }
    ctx->pc = 0x1FA4C0u;
    // 0x1fa4c0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1fa4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1fa4c4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1fa4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fa4c8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fa4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fa4cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fa4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fa4d0: 0xfe0300e8  sd          $v1, 0xE8($s0)
    ctx->pc = 0x1fa4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 3));
label_1fa4d4:
    // 0x1fa4d4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa4d8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1fa4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa4dc: 0x9083007f  lbu         $v1, 0x7F($a0)
    ctx->pc = 0x1fa4dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 127)));
    // 0x1fa4e0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1fa4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1fa4e4: 0xa083007f  sb          $v1, 0x7F($a0)
    ctx->pc = 0x1fa4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 127), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa4e8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa4ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa4f0: 0x9063007f  lbu         $v1, 0x7F($v1)
    ctx->pc = 0x1fa4f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 127)));
    // 0x1fa4f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fa4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa4f8: 0x28610031  slti        $at, $v1, 0x31
    ctx->pc = 0x1fa4f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x1fa4fc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA4FCu;
    {
        const bool branch_taken_0x1fa4fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa4fc) {
            ctx->pc = 0x1FA514u;
            goto label_1fa514;
        }
    }
    ctx->pc = 0x1FA504u;
    // 0x1fa504: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1fa504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1fa508: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa50c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa510: 0xa064007f  sb          $a0, 0x7F($v1)
    ctx->pc = 0x1fa510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 127), (uint8_t)GPR_U32(ctx, 4));
label_1fa514:
    // 0x1fa514: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1fa514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1fa518: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x1fa518u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1fa51c: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1fa51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1fa520: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa524: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x1fa524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x1fa528: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fa528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fa52c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1fa52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1fa530: 0x14830070  bne         $a0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x1FA530u;
    {
        const bool branch_taken_0x1fa530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fa530) {
            ctx->pc = 0x1FA6F4u;
            goto label_1fa6f4;
        }
    }
    ctx->pc = 0x1FA538u;
    // 0x1fa538: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa53c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1fa53cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1fa540: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1fa540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1fa544: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1fa544u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1fa548: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA548u;
    {
        const bool branch_taken_0x1fa548 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1fa548) {
            ctx->pc = 0x1FA56Cu;
            goto label_1fa56c;
        }
    }
    ctx->pc = 0x1FA550u;
    // 0x1fa550: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa554: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1fa554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa558: 0x94830082  lhu         $v1, 0x82($a0)
    ctx->pc = 0x1fa558u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 130)));
    // 0x1fa55c: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1fa55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1fa560: 0xa4830082  sh          $v1, 0x82($a0)
    ctx->pc = 0x1fa560u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa564: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1FA564u;
    {
        const bool branch_taken_0x1fa564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa564) {
            ctx->pc = 0x1FA6F4u;
            goto label_1fa6f4;
        }
    }
    ctx->pc = 0x1FA56Cu;
label_1fa56c:
    // 0x1fa56c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1fa56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa570: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1fa570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1fa574: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1fa574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa578: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1fa578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa57c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1fa57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa580: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1fa580u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fa584: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1FA584u;
    SET_GPR_U32(ctx, 31, 0x1FA58Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1FA584u, 0x1FA58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA58Cu;
label_1fa58c:
    // 0x1fa58c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1fa58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1fa590: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fa590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fa594: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1fa594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fa598: 0xc067844  jal         func_19E110
    ctx->pc = 0x1FA598u;
    SET_GPR_U32(ctx, 31, 0x1FA5A0u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x1FA598u, 0x1FA5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA5A0u;
label_1fa5a0:
    // 0x1fa5a0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1fa5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa5a4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1fa5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1fa5a8: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1fa5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa5ac: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1fa5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1fa5b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1fa5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa5b4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1fa5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1fa5b8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1fa5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa5bc: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1fa5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1fa5c0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1fa5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa5c4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1fa5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1fa5c8: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1fa5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa5cc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1fa5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1fa5d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa5d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa5d4: 0x0  nop
    ctx->pc = 0x1fa5d4u;
    // NOP
    // 0x1fa5d8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1fa5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1fa5dc: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1fa5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1fa5e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa5e4: 0x0  nop
    ctx->pc = 0x1fa5e4u;
    // NOP
    // 0x1fa5e8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1fa5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1fa5ec: 0x3c02c416  lui         $v0, 0xC416
    ctx->pc = 0x1fa5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50198 << 16));
    // 0x1fa5f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa5f4: 0x0  nop
    ctx->pc = 0x1fa5f4u;
    // NOP
    // 0x1fa5f8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1fa5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1fa5fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fa5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fa600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa604: 0x0  nop
    ctx->pc = 0x1fa604u;
    // NOP
    // 0x1fa608: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1fa608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1fa60c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fa60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fa610: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fa610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fa614: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1fa614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fa618: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FA618u;
    SET_GPR_U32(ctx, 31, 0x1FA620u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FA620u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FA620u) { return; }
    ctx->pc = 0x1FA620u;
label_1fa620:
    // 0x1fa620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa624: 0x0  nop
    ctx->pc = 0x1fa624u;
    // NOP
    // 0x1fa628: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1fa628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1fa62c: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1fa62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1fa630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa634: 0x0  nop
    ctx->pc = 0x1fa634u;
    // NOP
    // 0x1fa638: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1fa638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1fa63c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1fa63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1fa640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa644: 0x0  nop
    ctx->pc = 0x1fa644u;
    // NOP
    // 0x1fa648: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1fa648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1fa64c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fa64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fa650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa654: 0x0  nop
    ctx->pc = 0x1fa654u;
    // NOP
    // 0x1fa658: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1fa658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1fa65c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fa65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fa660: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1fa660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fa664: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1fa664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fa668: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FA668u;
    SET_GPR_U32(ctx, 31, 0x1FA670u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FA670u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FA670u) { return; }
    ctx->pc = 0x1FA670u;
label_1fa670:
    // 0x1fa670: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1fa670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa674: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1fa674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1fa678: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x1fa678u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x1fa67c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1fa67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1fa680: 0xa4620082  sh          $v0, 0x82($v1)
    ctx->pc = 0x1fa680u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fa684: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fa684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fa688: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1fa688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fa68c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1fa68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fa690: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1fa690u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fa694: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1FA694u;
    SET_GPR_U32(ctx, 31, 0x1FA69Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1FA694u, 0x1FA69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA69Cu;
label_1fa69c:
    // 0x1fa69c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1fa69cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fa6a0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA6A0u;
    {
        const bool branch_taken_0x1fa6a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa6a0) {
            ctx->pc = 0x1FA6BCu;
            goto label_1fa6bc;
        }
    }
    ctx->pc = 0x1FA6A8u;
    // 0x1fa6a8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1fa6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa6ac: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1fa6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1fa6b0: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x1fa6b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x1fa6b4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1fa6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1fa6b8: 0xa4620082  sh          $v0, 0x82($v1)
    ctx->pc = 0x1fa6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 130), (uint16_t)GPR_U32(ctx, 2));
label_1fa6bc:
    // 0x1fa6bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fa6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fa6c0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fa6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fa6c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1fa6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fa6c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1fa6c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fa6cc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1FA6CCu;
    SET_GPR_U32(ctx, 31, 0x1FA6D4u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1FA6CCu, 0x1FA6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA6D4u;
label_1fa6d4:
    // 0x1fa6d4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1fa6d4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fa6d8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA6D8u;
    {
        const bool branch_taken_0x1fa6d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa6d8) {
            ctx->pc = 0x1FA6F4u;
            goto label_1fa6f4;
        }
    }
    ctx->pc = 0x1FA6E0u;
    // 0x1fa6e0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa6e4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1fa6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa6e8: 0x94830082  lhu         $v1, 0x82($a0)
    ctx->pc = 0x1fa6e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 130)));
    // 0x1fa6ec: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1fa6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1fa6f0: 0xa4830082  sh          $v1, 0x82($a0)
    ctx->pc = 0x1fa6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 3));
label_1fa6f4:
    // 0x1fa6f4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1fa6f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa6f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fa6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa6fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa700: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1fa700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1fa704: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA70Cu;
}
