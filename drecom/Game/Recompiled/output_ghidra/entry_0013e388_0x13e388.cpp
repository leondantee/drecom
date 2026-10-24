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

// Function: entry_0013e388
// Address: 0x13e388 - 0x13e510
void entry_0013e388_0x13e388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e388_0x13e388");
#endif

    switch (ctx->pc) {
        case 0x13e508u: goto label_13e508;
        default: break;
    }

    ctx->pc = 0x13e388u;

    // 0x13e388: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x13e388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x13e38c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e390: 0x9423fd66  lhu         $v1, -0x29A($at)
    ctx->pc = 0x13e390u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5CFD66u));
    // 0x13e394: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x13e394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13e398: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x13e398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x13e39c: 0x1420005c  bnez        $at, . + 4 + (0x5C << 2)
    ctx->pc = 0x13E39Cu;
    {
        const bool branch_taken_0x13e39c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e39c) {
            ctx->pc = 0x13E510u;
            return;
        }
    }
    ctx->pc = 0x13E3A4u;
    // 0x13e3a4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x13e3a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13e3a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13e3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13e3ac: 0x3063000e  andi        $v1, $v1, 0xE
    ctx->pc = 0x13e3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)14);
    // 0x13e3b0: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x13E3B0u;
    {
        const bool branch_taken_0x13e3b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e3b0) {
            ctx->pc = 0x13E510u;
            return;
        }
    }
    ctx->pc = 0x13E3B8u;
    // 0x13e3b8: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x13e3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x13e3bc: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x13e3bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x13e3c0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x13e3c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e3c4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13e3c4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13e3c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e3cc: 0x8423fd68  lh          $v1, -0x298($at)
    ctx->pc = 0x13e3ccu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5CFD68u));
    // 0x13e3d0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13e3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e3d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13e3d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13e3d8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x13e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13e3dc: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x13e3dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x13e3e0: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x13E3E0u;
    {
        const bool branch_taken_0x13e3e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e3e0) {
            ctx->pc = 0x13E510u;
            return;
        }
    }
    ctx->pc = 0x13E3E8u;
    // 0x13e3e8: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x13e3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x13e3ec: 0x86030014  lh          $v1, 0x14($s0)
    ctx->pc = 0x13e3ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13e3f0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x13e3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e3f4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13e3f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13e3f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e3fc: 0x8423fd68  lh          $v1, -0x298($at)
    ctx->pc = 0x13e3fcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5CFD68u));
    // 0x13e400: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13e400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e404: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13e404u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13e408: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13e408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13e40c: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x13e40cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e410: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x13E410u;
    {
        const bool branch_taken_0x13e410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e410) {
            ctx->pc = 0x13E510u;
            return;
        }
    }
    ctx->pc = 0x13E418u;
    // 0x13e418: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x13e418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13e41c: 0x86030012  lh          $v1, 0x12($s0)
    ctx->pc = 0x13e41cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x13e420: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x13e420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e424: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13e424u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13e428: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e42c: 0x8423fd68  lh          $v1, -0x298($at)
    ctx->pc = 0x13e42cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5CFD68u));
    // 0x13e430: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13e430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e434: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13e434u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13e438: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x13e438u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x13e43c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x13e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13e440: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x13e440u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x13e444: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x13E444u;
    {
        const bool branch_taken_0x13e444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e444) {
            ctx->pc = 0x13E510u;
            return;
        }
    }
    ctx->pc = 0x13E44Cu;
    // 0x13e44c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x13e44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13e450: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x13e450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e454: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x13e454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e458: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13e458u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13e45c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e460: 0x8423fd68  lh          $v1, -0x298($at)
    ctx->pc = 0x13e460u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5CFD68u));
    // 0x13e464: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13e464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e468: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13e468u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13e46c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x13e46cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x13e470: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13e470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13e474: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x13e474u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e478: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x13E478u;
    {
        const bool branch_taken_0x13e478 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e478) {
            ctx->pc = 0x13E510u;
            return;
        }
    }
    ctx->pc = 0x13E480u;
    // 0x13e480: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x13e480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13e484: 0x8603001a  lh          $v1, 0x1A($s0)
    ctx->pc = 0x13e484u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x13e488: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x13e488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e48c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13e48cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13e490: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e494: 0x8423fd68  lh          $v1, -0x298($at)
    ctx->pc = 0x13e494u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5CFD68u));
    // 0x13e498: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13e498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e49c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13e49cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13e4a0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x13e4a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x13e4a4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x13e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13e4a8: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x13e4a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x13e4ac: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x13E4ACu;
    {
        const bool branch_taken_0x13e4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e4ac) {
            ctx->pc = 0x13E510u;
            return;
        }
    }
    ctx->pc = 0x13E4B4u;
    // 0x13e4b4: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x13e4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13e4b8: 0x86030018  lh          $v1, 0x18($s0)
    ctx->pc = 0x13e4b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13e4bc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x13e4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e4c0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13e4c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x13e4c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e4c8: 0x8423fd68  lh          $v1, -0x298($at)
    ctx->pc = 0x13e4c8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x5CFD68u));
    // 0x13e4cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x13e4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13e4d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13e4d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13e4d4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x13e4d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x13e4d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13e4dc: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x13e4dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e4e0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x13E4E0u;
    {
        const bool branch_taken_0x13e4e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e4e0) {
            ctx->pc = 0x13E510u;
            return;
        }
    }
    ctx->pc = 0x13E4E8u;
    // 0x13e4e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13e4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13e4ec: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x13e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x13e4f0: 0x30460001  andi        $a2, $v0, 0x1
    ctx->pc = 0x13e4f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13e4f4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x13e4f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13e4f8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x13e4f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13e4fc: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x13e4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13e500: 0xc04f9e4  jal         func_13E790
    ctx->pc = 0x13E500u;
    SET_GPR_U32(ctx, 31, 0x13E508u);
    ctx->pc = 0x13E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E790u, 0x13E500u, 0x13E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E508u;
label_13e508:
    // 0x13e508: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x13e508u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13e50c: 0x0  nop
    ctx->pc = 0x13e50cu;
    // NOP
    ctx->pc = 0x13e510u;
}
