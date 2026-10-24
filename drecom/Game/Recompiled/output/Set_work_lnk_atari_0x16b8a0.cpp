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

// Function: Set_work_lnk_atari
// Address: 0x16b8a0 - 0x16bd44
void Set_work_lnk_atari_0x16b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_work_lnk_atari_0x16b8a0");
#endif

    switch (ctx->pc) {
        case 0x16b8f8u: goto label_16b8f8;
        case 0x16b908u: goto label_16b908;
        case 0x16b918u: goto label_16b918;
        case 0x16b928u: goto label_16b928;
        case 0x16bcd0u: goto label_16bcd0;
        default: break;
    }

    ctx->pc = 0x16b8a0u;

    // 0x16b8a0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x16b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x16b8a4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x16b8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x16b8a8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16b8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16b8ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16b8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16b8b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16b8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16b8b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16b8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16b8b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16b8bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16b8c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b8c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b8c8: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x16b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x16b8cc: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x16b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x16b8d0: 0xafa600f0  sw          $a2, 0xF0($sp)
    ctx->pc = 0x16b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
    // 0x16b8d4: 0xafa700f8  sw          $a3, 0xF8($sp)
    ctx->pc = 0x16b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 7));
    // 0x16b8d8: 0xafa80100  sw          $t0, 0x100($sp)
    ctx->pc = 0x16b8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 8));
    // 0x16b8dc: 0xafa90108  sw          $t1, 0x108($sp)
    ctx->pc = 0x16b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 9));
    // 0x16b8e0: 0xafaa0110  sw          $t2, 0x110($sp)
    ctx->pc = 0x16b8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 10));
    // 0x16b8e4: 0xafab0118  sw          $t3, 0x118($sp)
    ctx->pc = 0x16b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 11));
    // 0x16b8e8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x16b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16b8ec: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x16b8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16b8f0: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16B8F0u;
    SET_GPR_U32(ctx, 31, 0x16B8F8u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16B8F8u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B8F8u) { return; }
    ctx->pc = 0x16B8F8u;
label_16b8f8:
    // 0x16b8f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16b8fc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x16b8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16b900: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16B900u;
    SET_GPR_U32(ctx, 31, 0x16B908u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16B908u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B908u) { return; }
    ctx->pc = 0x16B908u;
label_16b908:
    // 0x16b908: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16b908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16b90c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x16b90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x16b910: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16B910u;
    SET_GPR_U32(ctx, 31, 0x16B918u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16B918u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B918u) { return; }
    ctx->pc = 0x16B918u;
label_16b918:
    // 0x16b918: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x16b918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16b91c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x16b91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16b920: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x16B920u;
    SET_GPR_U32(ctx, 31, 0x16B928u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x16B928u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16B928u) { return; }
    ctx->pc = 0x16B928u;
label_16b928:
    // 0x16b928: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16b928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16b92c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x16b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16b930: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16b930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16b934: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B934u;
    {
        const bool branch_taken_0x16b934 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b934) {
            ctx->pc = 0x16B94Cu;
            goto label_16b94c;
        }
    }
    ctx->pc = 0x16B93Cu;
    // 0x16b93c: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x16b93cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16b940: 0x8fb500a0  lw          $s5, 0xA0($sp)
    ctx->pc = 0x16b940u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16b944: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B944u;
    {
        const bool branch_taken_0x16b944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b944) {
            ctx->pc = 0x16B958u;
            goto label_16b958;
        }
    }
    ctx->pc = 0x16B94Cu;
label_16b94c:
    // 0x16b94c: 0x8fb200a0  lw          $s2, 0xA0($sp)
    ctx->pc = 0x16b94cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16b950: 0x8fb50090  lw          $s5, 0x90($sp)
    ctx->pc = 0x16b950u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16b954: 0x0  nop
    ctx->pc = 0x16b954u;
    // NOP
label_16b958:
    // 0x16b958: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x16b958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16b95c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x16b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16b960: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16b960u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16b964: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B964u;
    {
        const bool branch_taken_0x16b964 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b964) {
            ctx->pc = 0x16B97Cu;
            goto label_16b97c;
        }
    }
    ctx->pc = 0x16B96Cu;
    // 0x16b96c: 0x8fb000b0  lw          $s0, 0xB0($sp)
    ctx->pc = 0x16b96cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16b970: 0x8fb100c0  lw          $s1, 0xC0($sp)
    ctx->pc = 0x16b970u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16b974: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B974u;
    {
        const bool branch_taken_0x16b974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b974) {
            ctx->pc = 0x16B988u;
            goto label_16b988;
        }
    }
    ctx->pc = 0x16B97Cu;
label_16b97c:
    // 0x16b97c: 0x8fb000c0  lw          $s0, 0xC0($sp)
    ctx->pc = 0x16b97cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16b980: 0x8fb100b0  lw          $s1, 0xB0($sp)
    ctx->pc = 0x16b980u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16b984: 0x0  nop
    ctx->pc = 0x16b984u;
    // NOP
label_16b988:
    // 0x16b988: 0x250082a  slt         $at, $s2, $s0
    ctx->pc = 0x16b988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16b98c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B98Cu;
    {
        const bool branch_taken_0x16b98c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b98c) {
            ctx->pc = 0x16B998u;
            goto label_16b998;
        }
    }
    ctx->pc = 0x16B994u;
    // 0x16b994: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x16b994u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_16b998:
    // 0x16b998: 0x235082a  slt         $at, $s1, $s5
    ctx->pc = 0x16b998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x16b99c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B99Cu;
    {
        const bool branch_taken_0x16b99c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b99c) {
            ctx->pc = 0x16B9A8u;
            goto label_16b9a8;
        }
    }
    ctx->pc = 0x16B9A4u;
    // 0x16b9a4: 0x7220ae28  paddub      $s5, $s1, $zero
    ctx->pc = 0x16b9a4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_16b9a8:
    // 0x16b9a8: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x16b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x16b9ac: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16b9acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16b9b0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b9b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16b9b8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b9bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b9c0: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x16b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16b9c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16b9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16b9c8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16b9cc: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x16b9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b9d0: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x16b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16b9d4: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x16b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16b9d8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16b9d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16b9dc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B9DCu;
    {
        const bool branch_taken_0x16b9dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b9dc) {
            ctx->pc = 0x16B9F4u;
            goto label_16b9f4;
        }
    }
    ctx->pc = 0x16B9E4u;
    // 0x16b9e4: 0x8fb30094  lw          $s3, 0x94($sp)
    ctx->pc = 0x16b9e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16b9e8: 0x8fb600a4  lw          $s6, 0xA4($sp)
    ctx->pc = 0x16b9e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16b9ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B9ECu;
    {
        const bool branch_taken_0x16b9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b9ec) {
            ctx->pc = 0x16BA00u;
            goto label_16ba00;
        }
    }
    ctx->pc = 0x16B9F4u;
label_16b9f4:
    // 0x16b9f4: 0x8fb300a4  lw          $s3, 0xA4($sp)
    ctx->pc = 0x16b9f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16b9f8: 0x8fb60094  lw          $s6, 0x94($sp)
    ctx->pc = 0x16b9f8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16b9fc: 0x0  nop
    ctx->pc = 0x16b9fcu;
    // NOP
label_16ba00:
    // 0x16ba00: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x16ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16ba04: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x16ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16ba08: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16ba08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16ba0c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BA0Cu;
    {
        const bool branch_taken_0x16ba0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba0c) {
            ctx->pc = 0x16BA24u;
            goto label_16ba24;
        }
    }
    ctx->pc = 0x16BA14u;
    // 0x16ba14: 0x8fb000b4  lw          $s0, 0xB4($sp)
    ctx->pc = 0x16ba14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16ba18: 0x8fb100c4  lw          $s1, 0xC4($sp)
    ctx->pc = 0x16ba18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16ba1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16BA1Cu;
    {
        const bool branch_taken_0x16ba1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba1c) {
            ctx->pc = 0x16BA30u;
            goto label_16ba30;
        }
    }
    ctx->pc = 0x16BA24u;
label_16ba24:
    // 0x16ba24: 0x8fb000c4  lw          $s0, 0xC4($sp)
    ctx->pc = 0x16ba24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16ba28: 0x8fb100b4  lw          $s1, 0xB4($sp)
    ctx->pc = 0x16ba28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16ba2c: 0x0  nop
    ctx->pc = 0x16ba2cu;
    // NOP
label_16ba30:
    // 0x16ba30: 0x270082a  slt         $at, $s3, $s0
    ctx->pc = 0x16ba30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16ba34: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BA34u;
    {
        const bool branch_taken_0x16ba34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba34) {
            ctx->pc = 0x16BA40u;
            goto label_16ba40;
        }
    }
    ctx->pc = 0x16BA3Cu;
    // 0x16ba3c: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x16ba3cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_16ba40:
    // 0x16ba40: 0x236082a  slt         $at, $s1, $s6
    ctx->pc = 0x16ba40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x16ba44: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BA44u;
    {
        const bool branch_taken_0x16ba44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba44) {
            ctx->pc = 0x16BA50u;
            goto label_16ba50;
        }
    }
    ctx->pc = 0x16BA4Cu;
    // 0x16ba4c: 0x7220b628  paddub      $s6, $s1, $zero
    ctx->pc = 0x16ba4cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_16ba50:
    // 0x16ba50: 0x2761021  addu        $v0, $s3, $s6
    ctx->pc = 0x16ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x16ba54: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16ba54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16ba58: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16ba5c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x16ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x16ba60: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16ba64: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16ba68: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x16ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16ba6c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16ba6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16ba70: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16ba74: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x16ba74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x16ba78: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x16ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16ba7c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16ba80: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16ba80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16ba84: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BA84u;
    {
        const bool branch_taken_0x16ba84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba84) {
            ctx->pc = 0x16BA9Cu;
            goto label_16ba9c;
        }
    }
    ctx->pc = 0x16BA8Cu;
    // 0x16ba8c: 0x8fb40098  lw          $s4, 0x98($sp)
    ctx->pc = 0x16ba8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16ba90: 0x8fb700a8  lw          $s7, 0xA8($sp)
    ctx->pc = 0x16ba90u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16ba94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16BA94u;
    {
        const bool branch_taken_0x16ba94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ba94) {
            ctx->pc = 0x16BAA8u;
            goto label_16baa8;
        }
    }
    ctx->pc = 0x16BA9Cu;
label_16ba9c:
    // 0x16ba9c: 0x8fb400a8  lw          $s4, 0xA8($sp)
    ctx->pc = 0x16ba9cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16baa0: 0x8fb70098  lw          $s7, 0x98($sp)
    ctx->pc = 0x16baa0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16baa4: 0x0  nop
    ctx->pc = 0x16baa4u;
    // NOP
label_16baa8:
    // 0x16baa8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x16baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16baac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x16baacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16bab0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16bab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16bab4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BAB4u;
    {
        const bool branch_taken_0x16bab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bab4) {
            ctx->pc = 0x16BACCu;
            goto label_16bacc;
        }
    }
    ctx->pc = 0x16BABCu;
    // 0x16babc: 0x8fb000b8  lw          $s0, 0xB8($sp)
    ctx->pc = 0x16babcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16bac0: 0x8fb100c8  lw          $s1, 0xC8($sp)
    ctx->pc = 0x16bac0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16bac4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16BAC4u;
    {
        const bool branch_taken_0x16bac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bac4) {
            ctx->pc = 0x16BAD8u;
            goto label_16bad8;
        }
    }
    ctx->pc = 0x16BACCu;
label_16bacc:
    // 0x16bacc: 0x8fb000c8  lw          $s0, 0xC8($sp)
    ctx->pc = 0x16baccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16bad0: 0x8fb100b8  lw          $s1, 0xB8($sp)
    ctx->pc = 0x16bad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16bad4: 0x0  nop
    ctx->pc = 0x16bad4u;
    // NOP
label_16bad8:
    // 0x16bad8: 0x290082a  slt         $at, $s4, $s0
    ctx->pc = 0x16bad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16badc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BADCu;
    {
        const bool branch_taken_0x16badc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16badc) {
            ctx->pc = 0x16BAE8u;
            goto label_16bae8;
        }
    }
    ctx->pc = 0x16BAE4u;
    // 0x16bae4: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x16bae4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_16bae8:
    // 0x16bae8: 0x237082a  slt         $at, $s1, $s7
    ctx->pc = 0x16bae8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x16baec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BAECu;
    {
        const bool branch_taken_0x16baec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16baec) {
            ctx->pc = 0x16BAF8u;
            goto label_16baf8;
        }
    }
    ctx->pc = 0x16BAF4u;
    // 0x16baf4: 0x7220be28  paddub      $s7, $s1, $zero
    ctx->pc = 0x16baf4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_16baf8:
    // 0x16baf8: 0x2971021  addu        $v0, $s4, $s7
    ctx->pc = 0x16baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x16bafc: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16bafcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16bb00: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb04: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x16bb04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x16bb08: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb0c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16bb10: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x16bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16bb14: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16bb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16bb18: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb1c: 0xa4430010  sh          $v1, 0x10($v0)
    ctx->pc = 0x16bb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bb20: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x16bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x16bb24: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb28: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x16bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x16bb2c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x16bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x16bb30: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb34: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x16bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    // 0x16bb38: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x16bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16bb3c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bb44: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bb48: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bb4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bb4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bb50: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb54: 0xa4430024  sh          $v1, 0x24($v0)
    ctx->pc = 0x16bb54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bb58: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16bb60: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x16bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x16bb64: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bb68: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bb6c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bb6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bb70: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb74: 0xa4430026  sh          $v1, 0x26($v0)
    ctx->pc = 0x16bb74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bb78: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb7c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16bb80: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x16bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16bb84: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bb88: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bb88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bb8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bb8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bb90: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bb94: 0xa4430028  sh          $v1, 0x28($v0)
    ctx->pc = 0x16bb94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bb98: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16bb9c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bba0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bba4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bba8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bbac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bbacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bbb0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bbb4: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x16bbb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bbb8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bbbc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16bbc0: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x16bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16bbc4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bbc8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bbcc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bbccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bbd0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bbd4: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x16bbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bbd8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bbdc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16bbe0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16bbe4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bbe8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bbec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bbecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bbf0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bbf4: 0xa443002e  sh          $v1, 0x2E($v0)
    ctx->pc = 0x16bbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bbf8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x16bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16bbfc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bc04: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bc08: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bc0c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bc0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bc10: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc14: 0xa4430030  sh          $v1, 0x30($v0)
    ctx->pc = 0x16bc14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bc18: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16bc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16bc20: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16bc24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bc28: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bc2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bc2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bc30: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc34: 0xa4430032  sh          $v1, 0x32($v0)
    ctx->pc = 0x16bc34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bc38: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc3c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16bc40: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16bc44: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bc48: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bc4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bc4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bc50: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc54: 0xa4430034  sh          $v1, 0x34($v0)
    ctx->pc = 0x16bc54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bc58: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x16bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16bc5c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bc64: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bc68: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bc6c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bc6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bc70: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc74: 0xa4430036  sh          $v1, 0x36($v0)
    ctx->pc = 0x16bc74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bc78: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16bc80: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x16bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16bc84: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bc88: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bc8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bc8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bc90: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc94: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x16bc94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bc98: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bc9c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16bca0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x16bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16bca4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bca8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16bca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16bcac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16bcacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16bcb0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bcb4: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x16bcb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x16bcb8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16bcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x16bcbc: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x16bcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16bcc0: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x16bcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16bcc4: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x16bcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x16bcc8: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x16BCC8u;
    SET_GPR_U32(ctx, 31, 0x16BCD0u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x16BCC8u, 0x16BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BCD0u;
label_16bcd0:
    // 0x16bcd0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x16bcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bcd4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bcd8: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x16bcd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x16bcdc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x16bcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bce0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bce4: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x16bce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x16bce8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x16bce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bcec: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bcf0: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x16bcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x16bcf4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bcf8: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x16bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x16bcfc: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x16bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x16bd00: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BD00u;
    {
        const bool branch_taken_0x16bd00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd00) {
            ctx->pc = 0x16BD14u;
            goto label_16bd14;
        }
    }
    ctx->pc = 0x16BD08u;
    // 0x16bd08: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x16bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x16bd0c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x16bd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16bd10: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x16bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_16bd14:
    // 0x16bd14: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x16bd14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16bd18: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16bd18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16bd1c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16bd1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16bd20: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16bd20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16bd24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16bd24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16bd28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16bd28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bd2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16bd2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bd30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16bd30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bd34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bd38: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x16bd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x16bd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x16BD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BD44u;
}
