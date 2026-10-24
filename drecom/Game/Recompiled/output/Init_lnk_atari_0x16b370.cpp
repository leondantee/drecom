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

// Function: Init_lnk_atari
// Address: 0x16b370 - 0x16b834
void Init_lnk_atari_0x16b370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init_lnk_atari_0x16b370");
#endif

    switch (ctx->pc) {
        case 0x16b3c8u: goto label_16b3c8;
        case 0x16b3d8u: goto label_16b3d8;
        case 0x16b3e8u: goto label_16b3e8;
        case 0x16b3f8u: goto label_16b3f8;
        case 0x16b7c0u: goto label_16b7c0;
        default: break;
    }

    ctx->pc = 0x16b370u;

    // 0x16b370: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x16b370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x16b374: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x16b374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x16b378: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16b378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16b37c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16b37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16b380: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16b380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16b384: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16b384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16b388: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16b388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16b38c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16b390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b394: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b398: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x16b398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x16b39c: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x16b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x16b3a0: 0xafa600f0  sw          $a2, 0xF0($sp)
    ctx->pc = 0x16b3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
    // 0x16b3a4: 0xafa700f8  sw          $a3, 0xF8($sp)
    ctx->pc = 0x16b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 7));
    // 0x16b3a8: 0xafa80100  sw          $t0, 0x100($sp)
    ctx->pc = 0x16b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 8));
    // 0x16b3ac: 0xafa90108  sw          $t1, 0x108($sp)
    ctx->pc = 0x16b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 9));
    // 0x16b3b0: 0xafaa0110  sw          $t2, 0x110($sp)
    ctx->pc = 0x16b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 10));
    // 0x16b3b4: 0xafab0118  sw          $t3, 0x118($sp)
    ctx->pc = 0x16b3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 11));
    // 0x16b3b8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16b3bc: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x16b3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16b3c0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16B3C0u;
    SET_GPR_U32(ctx, 31, 0x16B3C8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16B3C8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B3C8u) { return; }
    ctx->pc = 0x16B3C8u;
label_16b3c8:
    // 0x16b3c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16b3cc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x16b3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16b3d0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16B3D0u;
    SET_GPR_U32(ctx, 31, 0x16B3D8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16B3D8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B3D8u) { return; }
    ctx->pc = 0x16B3D8u;
label_16b3d8:
    // 0x16b3d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16b3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16b3dc: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x16b3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x16b3e0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16B3E0u;
    SET_GPR_U32(ctx, 31, 0x16B3E8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16B3E8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B3E8u) { return; }
    ctx->pc = 0x16B3E8u;
label_16b3e8:
    // 0x16b3e8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x16b3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16b3ec: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x16b3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16b3f0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16B3F0u;
    SET_GPR_U32(ctx, 31, 0x16B3F8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16B3F8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B3F8u) { return; }
    ctx->pc = 0x16B3F8u;
label_16b3f8:
    // 0x16b3f8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16b3fc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x16b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16b400: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16b400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16b404: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B404u;
    {
        const bool branch_taken_0x16b404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b404) {
            ctx->pc = 0x16B41Cu;
            goto label_16b41c;
        }
    }
    ctx->pc = 0x16B40Cu;
    // 0x16b40c: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x16b40cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16b410: 0x8fb500a0  lw          $s5, 0xA0($sp)
    ctx->pc = 0x16b410u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16b414: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B414u;
    {
        const bool branch_taken_0x16b414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b414) {
            ctx->pc = 0x16B428u;
            goto label_16b428;
        }
    }
    ctx->pc = 0x16B41Cu;
label_16b41c:
    // 0x16b41c: 0x8fb200a0  lw          $s2, 0xA0($sp)
    ctx->pc = 0x16b41cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16b420: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x16b420u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16b424: 0x0  nop
    ctx->pc = 0x16b424u;
    // NOP
label_16b428:
    // 0x16b428: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x16b428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16b42c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x16b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16b430: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16b430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16b434: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B434u;
    {
        const bool branch_taken_0x16b434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b434) {
            ctx->pc = 0x16B44Cu;
            goto label_16b44c;
        }
    }
    ctx->pc = 0x16B43Cu;
    // 0x16b43c: 0x8fb000b0  lw          $s0, 0xB0($sp)
    ctx->pc = 0x16b43cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16b440: 0x8fb100c0  lw          $s1, 0xC0($sp)
    ctx->pc = 0x16b440u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16b444: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B444u;
    {
        const bool branch_taken_0x16b444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b444) {
            ctx->pc = 0x16B458u;
            goto label_16b458;
        }
    }
    ctx->pc = 0x16B44Cu;
label_16b44c:
    // 0x16b44c: 0x8fb000c0  lw          $s0, 0xC0($sp)
    ctx->pc = 0x16b44cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16b450: 0x8fb100b0  lw          $s1, 0xB0($sp)
    ctx->pc = 0x16b450u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16b454: 0x0  nop
    ctx->pc = 0x16b454u;
    // NOP
label_16b458:
    // 0x16b458: 0x250082a  slt         $at, $s2, $s0
    ctx->pc = 0x16b458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16b45c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B45Cu;
    {
        const bool branch_taken_0x16b45c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b45c) {
            ctx->pc = 0x16B468u;
            goto label_16b468;
        }
    }
    ctx->pc = 0x16B464u;
    // 0x16b464: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x16b464u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_16b468:
    // 0x16b468: 0x235082a  slt         $at, $s1, $s5
    ctx->pc = 0x16b468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x16b46c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B46Cu;
    {
        const bool branch_taken_0x16b46c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b46c) {
            ctx->pc = 0x16B478u;
            goto label_16b478;
        }
    }
    ctx->pc = 0x16B474u;
    // 0x16b474: 0x7220ae28  paddub      $s5, $s1, $zero
    ctx->pc = 0x16b474u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_16b478:
    // 0x16b478: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x16b478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x16b47c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16b47cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16b480: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b484: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16b484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16b488: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b48c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b490: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x16b490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16b494: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16b494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16b498: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b49c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x16b49cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b4a0: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x16b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16b4a4: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x16b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16b4a8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16b4a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16b4ac: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B4ACu;
    {
        const bool branch_taken_0x16b4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b4ac) {
            ctx->pc = 0x16B4C4u;
            goto label_16b4c4;
        }
    }
    ctx->pc = 0x16B4B4u;
    // 0x16b4b4: 0x8fb30094  lw          $s3, 0x94($sp)
    ctx->pc = 0x16b4b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16b4b8: 0x8fb600a4  lw          $s6, 0xA4($sp)
    ctx->pc = 0x16b4b8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16b4bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B4BCu;
    {
        const bool branch_taken_0x16b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b4bc) {
            ctx->pc = 0x16B4D0u;
            goto label_16b4d0;
        }
    }
    ctx->pc = 0x16B4C4u;
label_16b4c4:
    // 0x16b4c4: 0x8fb300a4  lw          $s3, 0xA4($sp)
    ctx->pc = 0x16b4c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16b4c8: 0x8fb60094  lw          $s6, 0x94($sp)
    ctx->pc = 0x16b4c8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16b4cc: 0x0  nop
    ctx->pc = 0x16b4ccu;
    // NOP
label_16b4d0:
    // 0x16b4d0: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x16b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16b4d4: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x16b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16b4d8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16b4d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16b4dc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B4DCu;
    {
        const bool branch_taken_0x16b4dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b4dc) {
            ctx->pc = 0x16B4F4u;
            goto label_16b4f4;
        }
    }
    ctx->pc = 0x16B4E4u;
    // 0x16b4e4: 0x8fb000b4  lw          $s0, 0xB4($sp)
    ctx->pc = 0x16b4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16b4e8: 0x8fb100c4  lw          $s1, 0xC4($sp)
    ctx->pc = 0x16b4e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16b4ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B4ECu;
    {
        const bool branch_taken_0x16b4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b4ec) {
            ctx->pc = 0x16B500u;
            goto label_16b500;
        }
    }
    ctx->pc = 0x16B4F4u;
label_16b4f4:
    // 0x16b4f4: 0x8fb000c4  lw          $s0, 0xC4($sp)
    ctx->pc = 0x16b4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16b4f8: 0x8fb100b4  lw          $s1, 0xB4($sp)
    ctx->pc = 0x16b4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16b4fc: 0x0  nop
    ctx->pc = 0x16b4fcu;
    // NOP
label_16b500:
    // 0x16b500: 0x270082a  slt         $at, $s3, $s0
    ctx->pc = 0x16b500u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16b504: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B504u;
    {
        const bool branch_taken_0x16b504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b504) {
            ctx->pc = 0x16B510u;
            goto label_16b510;
        }
    }
    ctx->pc = 0x16B50Cu;
    // 0x16b50c: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x16b50cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_16b510:
    // 0x16b510: 0x236082a  slt         $at, $s1, $s6
    ctx->pc = 0x16b510u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x16b514: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B514u;
    {
        const bool branch_taken_0x16b514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b514) {
            ctx->pc = 0x16B520u;
            goto label_16b520;
        }
    }
    ctx->pc = 0x16B51Cu;
    // 0x16b51c: 0x7220b628  paddub      $s6, $s1, $zero
    ctx->pc = 0x16b51cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_16b520:
    // 0x16b520: 0x2761021  addu        $v0, $s3, $s6
    ctx->pc = 0x16b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x16b524: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16b524u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16b528: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b52c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x16b52cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x16b530: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b534: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16b534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16b538: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x16b538u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16b53c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16b53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16b540: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b544: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x16b544u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b548: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16b548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16b54c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16b550: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16b550u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16b554: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B554u;
    {
        const bool branch_taken_0x16b554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b554) {
            ctx->pc = 0x16B56Cu;
            goto label_16b56c;
        }
    }
    ctx->pc = 0x16B55Cu;
    // 0x16b55c: 0x8fb40098  lw          $s4, 0x98($sp)
    ctx->pc = 0x16b55cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16b560: 0x8fb700a8  lw          $s7, 0xA8($sp)
    ctx->pc = 0x16b560u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16b564: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B564u;
    {
        const bool branch_taken_0x16b564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b564) {
            ctx->pc = 0x16B578u;
            goto label_16b578;
        }
    }
    ctx->pc = 0x16B56Cu;
label_16b56c:
    // 0x16b56c: 0x8fb400a8  lw          $s4, 0xA8($sp)
    ctx->pc = 0x16b56cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16b570: 0x8fb70098  lw          $s7, 0x98($sp)
    ctx->pc = 0x16b570u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16b574: 0x0  nop
    ctx->pc = 0x16b574u;
    // NOP
label_16b578:
    // 0x16b578: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x16b578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16b57c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x16b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16b580: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16b580u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16b584: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B584u;
    {
        const bool branch_taken_0x16b584 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b584) {
            ctx->pc = 0x16B59Cu;
            goto label_16b59c;
        }
    }
    ctx->pc = 0x16B58Cu;
    // 0x16b58c: 0x8fb000b8  lw          $s0, 0xB8($sp)
    ctx->pc = 0x16b58cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16b590: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x16b590u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16b594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B594u;
    {
        const bool branch_taken_0x16b594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b594) {
            ctx->pc = 0x16B5A8u;
            goto label_16b5a8;
        }
    }
    ctx->pc = 0x16B59Cu;
label_16b59c:
    // 0x16b59c: 0x8fb000c8  lw          $s0, 0xC8($sp)
    ctx->pc = 0x16b59cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16b5a0: 0x8fb100b8  lw          $s1, 0xB8($sp)
    ctx->pc = 0x16b5a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16b5a4: 0x0  nop
    ctx->pc = 0x16b5a4u;
    // NOP
label_16b5a8:
    // 0x16b5a8: 0x290082a  slt         $at, $s4, $s0
    ctx->pc = 0x16b5a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16b5ac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B5ACu;
    {
        const bool branch_taken_0x16b5ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b5ac) {
            ctx->pc = 0x16B5B8u;
            goto label_16b5b8;
        }
    }
    ctx->pc = 0x16B5B4u;
    // 0x16b5b4: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x16b5b4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_16b5b8:
    // 0x16b5b8: 0x237082a  slt         $at, $s1, $s7
    ctx->pc = 0x16b5b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x16b5bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B5BCu;
    {
        const bool branch_taken_0x16b5bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b5bc) {
            ctx->pc = 0x16B5C8u;
            goto label_16b5c8;
        }
    }
    ctx->pc = 0x16B5C4u;
    // 0x16b5c4: 0x7220be28  paddub      $s7, $s1, $zero
    ctx->pc = 0x16b5c4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_16b5c8:
    // 0x16b5c8: 0x2971021  addu        $v0, $s4, $s7
    ctx->pc = 0x16b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x16b5cc: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16b5ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16b5d0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b5d4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x16b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x16b5d8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b5dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b5e0: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x16b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16b5e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16b5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16b5e8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b5ec: 0xa4430010  sh          $v1, 0x10($v0)
    ctx->pc = 0x16b5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b5f0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b5f4: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x16b5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x16b5f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b5fc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b600: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x16b600u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b604: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16b604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b608: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b60c: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x16b60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x16b610: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x16b610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x16b614: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b618: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x16b618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x16b61c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x16b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x16b620: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b624: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x16b624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x16b628: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16b628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16b62c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b630: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b634: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16b634u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b638: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b63c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b63cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b640: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b644: 0xa4430024  sh          $v1, 0x24($v0)
    ctx->pc = 0x16b644u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b648: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b64c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16b650: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x16b650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16b654: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b654u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b658: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b65c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b65cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b660: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b664: 0xa4430026  sh          $v1, 0x26($v0)
    ctx->pc = 0x16b664u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b668: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b66c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b670: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16b670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16b674: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b674u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b678: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b67c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b67cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b680: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b684: 0xa4430028  sh          $v1, 0x28($v0)
    ctx->pc = 0x16b684u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b688: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16b688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16b68c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b690: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b694: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16b694u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b698: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b69c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b69cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b6a0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b6a4: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x16b6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b6a8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b6ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16b6b0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x16b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16b6b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b6b8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b6bc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b6bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b6c0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b6c4: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x16b6c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b6c8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b6cc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b6d0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16b6d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b6d8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b6dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b6dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b6e0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b6e4: 0xa443002e  sh          $v1, 0x2E($v0)
    ctx->pc = 0x16b6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b6e8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x16b6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16b6ec: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b6f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b6f4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b6f8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b6fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b6fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b700: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b704: 0xa4430030  sh          $v1, 0x30($v0)
    ctx->pc = 0x16b704u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b708: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b70c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16b70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16b710: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16b714: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b714u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b718: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b71c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b71cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b720: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b724: 0xa4430032  sh          $v1, 0x32($v0)
    ctx->pc = 0x16b724u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b728: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b72c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16b72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b730: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16b734: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b734u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b738: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b73c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b73cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b740: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b744: 0xa4430034  sh          $v1, 0x34($v0)
    ctx->pc = 0x16b744u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b748: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x16b748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16b74c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b750: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b754: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16b754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b758: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b75c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b75cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b760: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b764: 0xa4430036  sh          $v1, 0x36($v0)
    ctx->pc = 0x16b764u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b768: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b76c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16b770: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x16b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16b774: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b774u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b778: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b77c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b77cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b780: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b784: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x16b784u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b788: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b78c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16b790: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x16b790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16b794: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16b794u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b798: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16b798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16b79c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16b79cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16b7a0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b7a4: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x16b7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b7a8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16b7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16b7ac: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x16b7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16b7b0: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x16b7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16b7b4: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x16b7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x16b7b8: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x16B7B8u;
    SET_GPR_U32(ctx, 31, 0x16B7C0u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x16B7B8u, 0x16B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B7C0u;
label_16b7c0:
    // 0x16b7c0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x16b7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b7c4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b7c8: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x16b7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x16b7cc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x16b7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b7d0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b7d4: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x16b7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x16b7d8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x16b7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b7dc: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b7e0: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x16b7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x16b7e4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b7e8: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x16b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x16b7ec: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x16b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x16b7f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B7F0u;
    {
        const bool branch_taken_0x16b7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b7f0) {
            ctx->pc = 0x16B804u;
            goto label_16b804;
        }
    }
    ctx->pc = 0x16B7F8u;
    // 0x16b7f8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x16b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x16b7fc: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b800: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x16b800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_16b804:
    // 0x16b804: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x16b804u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b808: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16b808u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16b80c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16b80cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16b810: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16b810u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16b814: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16b814u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b818: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16b818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b81c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b828: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x16b828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x16b82c: 0x3e00008  jr          $ra
    ctx->pc = 0x16B82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B834u;
}
