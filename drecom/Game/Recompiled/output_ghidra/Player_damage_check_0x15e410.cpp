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

// Function: Player_damage_check
// Address: 0x15e410 - 0x15e7f8
void Player_damage_check_0x15e410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Player_damage_check_0x15e410");
#endif

    switch (ctx->pc) {
        case 0x15e520u: goto label_15e520;
        case 0x15e5d8u: goto label_15e5d8;
        case 0x15e690u: goto label_15e690;
        case 0x15e6a4u: goto label_15e6a4;
        default: break;
    }

    ctx->pc = 0x15e410u;

    // 0x15e410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15e410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15e414: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x15e414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x15e418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15e41c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e420: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x15e420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x15e424: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e428: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x15e428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x15e42c: 0x106000ec  beqz        $v1, . + 4 + (0xEC << 2)
    ctx->pc = 0x15E42Cu;
    {
        const bool branch_taken_0x15e42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e42c) {
            ctx->pc = 0x15E7E0u;
            goto label_15e7e0;
        }
    }
    ctx->pc = 0x15E434u;
    // 0x15e434: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e438: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x15e438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x15e43c: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x15e43cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15e440: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e444: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x15e444u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x15e448: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15e448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15e44c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15e450: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x15e450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x15e454: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x15E454u;
    {
        const bool branch_taken_0x15e454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e454) {
            ctx->pc = 0x15E4B0u;
            goto label_15e4b0;
        }
    }
    ctx->pc = 0x15E45Cu;
    // 0x15e45c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e460: 0x846311f2  lh          $v1, 0x11F2($v1)
    ctx->pc = 0x15e460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x15e464: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x15e464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15e468: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x15e468u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x15e46c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x15e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15e470: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x15e470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x15e474: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x15e474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x15e478: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x15e478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15e47c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15e480: 0x0  nop
    ctx->pc = 0x15e480u;
    // NOP
    // 0x15e484: 0x1810  mfhi        $v1
    ctx->pc = 0x15e484u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15e488: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x15e488u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x15e48c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15e490: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e494: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x15e494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15e498: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x15e498u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x15e49c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15e49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15e4a0: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x15e4a0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x15e4a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15e4a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15e4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15e4ac: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x15e4acu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
label_15e4b0:
    // 0x15e4b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15e4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15e4b4: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x15e4b4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x15e4b8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x15e4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15e4bc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x15e4bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x15e4c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15e4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15e4c4: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x15e4c4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x15e4c8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15e4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15e4cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15e4ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15e4d0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x15e4d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15e4d4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E4D4u;
    {
        const bool branch_taken_0x15e4d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e4d4) {
            ctx->pc = 0x15E4ECu;
            goto label_15e4ec;
        }
    }
    ctx->pc = 0x15E4DCu;
    // 0x15e4dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15e4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15e4e0: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x15e4e0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x15e4e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15e4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15e4e8: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x15e4e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
label_15e4ec:
    // 0x15e4ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e4f0: 0xa4601416  sh          $zero, 0x1416($v1)
    ctx->pc = 0x15e4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5142), (uint16_t)GPR_U32(ctx, 0));
    // 0x15e4f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15e4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15e4f8: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x15e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x15e4fc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x15e4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x15e500: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x15E500u;
    {
        const bool branch_taken_0x15e500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e500) {
            ctx->pc = 0x15E558u;
            goto label_15e558;
        }
    }
    ctx->pc = 0x15E508u;
    // 0x15e508: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x15e508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e50c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e510: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x15e510u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x15e514: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x15e514u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15e518: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x15E518u;
    SET_GPR_U32(ctx, 31, 0x15E520u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x15E518u, 0x15E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E520u;
label_15e520:
    // 0x15e520: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e524: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x15e524u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x15e528: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15e528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15e52c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15e52cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15e530: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15E530u;
    {
        const bool branch_taken_0x15e530 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x15e530) {
            ctx->pc = 0x15E558u;
            goto label_15e558;
        }
    }
    ctx->pc = 0x15E538u;
    // 0x15e538: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e53c: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x15e53cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x15e540: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15e540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15e544: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x15e544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x15e548: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E548u;
    {
        const bool branch_taken_0x15e548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e548) {
            ctx->pc = 0x15E558u;
            goto label_15e558;
        }
    }
    ctx->pc = 0x15E550u;
    // 0x15e550: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e554: 0xa46010a6  sh          $zero, 0x10A6($v1)
    ctx->pc = 0x15e554u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 0));
label_15e558:
    // 0x15e558: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e55c: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x15e55cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e560: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e564: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x15e564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15e568: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x15e568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x15e56c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15e56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15e570: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x15E570u;
    {
        const bool branch_taken_0x15e570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e570) {
            ctx->pc = 0x15E5D8u;
            goto label_15e5d8;
        }
    }
    ctx->pc = 0x15E578u;
    // 0x15e578: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x15e578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e57c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x15e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x15e580: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x15e580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x15e584: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x15e584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15e588: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15e588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15e58c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x15e58cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x15e590: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e594: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x15e594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x15e598: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15e598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15e59c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e5a0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15E5A0u;
    {
        const bool branch_taken_0x15e5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e5a0) {
            ctx->pc = 0x15E5D8u;
            goto label_15e5d8;
        }
    }
    ctx->pc = 0x15E5A8u;
    // 0x15e5a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e5ac: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15E5ACu;
    {
        const bool branch_taken_0x15e5ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e5ac) {
            ctx->pc = 0x15E5D8u;
            goto label_15e5d8;
        }
    }
    ctx->pc = 0x15E5B4u;
    // 0x15e5b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e5b8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E5B8u;
    {
        const bool branch_taken_0x15e5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e5b8) {
            ctx->pc = 0x15E5D0u;
            goto label_15e5d0;
        }
    }
    ctx->pc = 0x15E5C0u;
    // 0x15e5c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E5C0u;
    {
        const bool branch_taken_0x15e5c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e5c0) {
            ctx->pc = 0x15E5D8u;
            goto label_15e5d8;
        }
    }
    ctx->pc = 0x15E5C8u;
    // 0x15e5c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15E5C8u;
    {
        const bool branch_taken_0x15e5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e5c8) {
            ctx->pc = 0x15E5D8u;
            goto label_15e5d8;
        }
    }
    ctx->pc = 0x15E5D0u;
label_15e5d0:
    // 0x15e5d0: 0xc0c5238  jal         func_3148E0
    ctx->pc = 0x15E5D0u;
    SET_GPR_U32(ctx, 31, 0x15E5D8u);
    ctx->pc = 0x3148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3148E0u, 0x15E5D0u, 0x15E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E5D8u;
label_15e5d8:
    // 0x15e5d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15e5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15e5dc: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x15e5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15e5e0: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x15e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x15e5e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15e5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15e5e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15e5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15e5ec: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x15e5ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x15e5f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e5f4: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x15e5f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x15e5f8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15e5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15e5fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15e5fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15e600: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x15E600u;
    {
        const bool branch_taken_0x15e600 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x15e600) {
            ctx->pc = 0x15E63Cu;
            goto label_15e63c;
        }
    }
    ctx->pc = 0x15E608u;
    // 0x15e608: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15e608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e60c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e610: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x15e610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e614: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e618: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x15e618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e61c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e620: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x15e620u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e624: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e628: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x15e628u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e62c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e630: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15e630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15e634: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x15E634u;
    {
        const bool branch_taken_0x15e634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e634) {
            ctx->pc = 0x15E7E0u;
            goto label_15e7e0;
        }
    }
    ctx->pc = 0x15E63Cu;
label_15e63c:
    // 0x15e63c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15e63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15e640: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15e640u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15e644: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x15e644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x15e648: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x15E648u;
    {
        const bool branch_taken_0x15e648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e648) {
            ctx->pc = 0x15E7E0u;
            goto label_15e7e0;
        }
    }
    ctx->pc = 0x15E650u;
    // 0x15e650: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x15e650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x15e654: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x15e654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x15e658: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x15E658u;
    {
        const bool branch_taken_0x15e658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e658) {
            ctx->pc = 0x15E748u;
            goto label_15e748;
        }
    }
    ctx->pc = 0x15E660u;
    // 0x15e660: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15e660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15e664: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15e664u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15e668: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x15e668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x15e66c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x15E66Cu;
    {
        const bool branch_taken_0x15e66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e66c) {
            ctx->pc = 0x15E6ACu;
            goto label_15e6ac;
        }
    }
    ctx->pc = 0x15E674u;
    // 0x15e674: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x15e674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15e678: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e67c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x15e67cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x15e680: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x15e680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x15e684: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x15e684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x15e688: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x15E688u;
    SET_GPR_U32(ctx, 31, 0x15E690u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x15E688u, 0x15E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E690u;
label_15e690:
    // 0x15e690: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x15e690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x15e694: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x15e694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x15e698: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x15e698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x15e69c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x15E69Cu;
    SET_GPR_U32(ctx, 31, 0x15E6A4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x15E69Cu, 0x15E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E6A4u;
label_15e6a4:
    // 0x15e6a4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x15E6A4u;
    {
        const bool branch_taken_0x15e6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e6a4) {
            ctx->pc = 0x15E7E0u;
            goto label_15e7e0;
        }
    }
    ctx->pc = 0x15E6ACu;
label_15e6ac:
    // 0x15e6ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e6b0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x15e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15e6b4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x15e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x15e6b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15e6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15e6bc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x15E6BCu;
    {
        const bool branch_taken_0x15e6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e6bc) {
            ctx->pc = 0x15E6FCu;
            goto label_15e6fc;
        }
    }
    ctx->pc = 0x15E6C4u;
    // 0x15e6c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e6c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e6cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x15e6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e6d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e6d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e6d8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x15e6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e6dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e6e0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x15e6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e6e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e6e8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x15e6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e6ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e6f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15e6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15e6f4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x15E6F4u;
    {
        const bool branch_taken_0x15e6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e6f4) {
            ctx->pc = 0x15E7E0u;
            goto label_15e7e0;
        }
    }
    ctx->pc = 0x15E6FCu;
label_15e6fc:
    // 0x15e6fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15e6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15e700: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x15e700u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x15e704: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x15e704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x15e708: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x15E708u;
    {
        const bool branch_taken_0x15e708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e708) {
            ctx->pc = 0x15E748u;
            goto label_15e748;
        }
    }
    ctx->pc = 0x15E710u;
    // 0x15e710: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15e710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e714: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e718: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x15e718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e71c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15e71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e720: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e724: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x15e724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e728: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e72c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x15e72cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e730: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e734: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x15e734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e738: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e73c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15e740: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x15E740u;
    {
        const bool branch_taken_0x15e740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e740) {
            ctx->pc = 0x15E7E0u;
            goto label_15e7e0;
        }
    }
    ctx->pc = 0x15E748u;
label_15e748:
    // 0x15e748: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e74c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x15e74cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x15e750: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15e750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15e754: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x15e754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15e758: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15E758u;
    {
        const bool branch_taken_0x15e758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e758) {
            ctx->pc = 0x15E7A8u;
            goto label_15e7a8;
        }
    }
    ctx->pc = 0x15E760u;
    // 0x15e760: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x15e760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15e764: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e768: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x15e768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e76c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e770: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x15e770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x15e774: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15e774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15e778: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x15e778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x15e77c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15e77cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15e780: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e784: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x15e784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e788: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e78c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x15e78cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e790: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e794: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x15e794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e798: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e79c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15e7a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x15E7A0u;
    {
        const bool branch_taken_0x15e7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e7a0) {
            ctx->pc = 0x15E7E0u;
            goto label_15e7e0;
        }
    }
    ctx->pc = 0x15E7A8u;
label_15e7a8:
    // 0x15e7a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15e7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e7ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e7b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x15e7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e7b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e7b8: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x15e7b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x15e7bc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15e7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15e7c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e7c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x15e7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e7c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e7cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x15e7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e7d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e7d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x15e7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e7d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e7dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15e7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_15e7e0:
    // 0x15e7e0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x15e7e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e7e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e7e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e7e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e7e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e7ec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15e7ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15e7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x15E7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E7F8u;
}
