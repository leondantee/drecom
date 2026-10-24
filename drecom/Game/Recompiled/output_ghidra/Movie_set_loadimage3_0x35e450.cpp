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

// Function: Movie_set_loadimage3
// Address: 0x35e450 - 0x35e728
void Movie_set_loadimage3_0x35e450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Movie_set_loadimage3_0x35e450");
#endif

    switch (ctx->pc) {
        case 0x35e4c8u: goto label_35e4c8;
        case 0x35e578u: goto label_35e578;
        case 0x35e5acu: goto label_35e5ac;
        case 0x35e6c4u: goto label_35e6c4;
        case 0x35e700u: goto label_35e700;
        default: break;
    }

    ctx->pc = 0x35e450u;

    // 0x35e450: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x35e450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x35e454: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x35e454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x35e458: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35e458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x35e45c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35e45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35e460: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35e460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35e464: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35e464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35e468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35e46c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35e46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35e470: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x35e470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x35e474: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x35e474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x35e478: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x35e478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x35e47c: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x35e47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x35e480: 0xafa800a0  sw          $t0, 0xA0($sp)
    ctx->pc = 0x35e480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 8));
    // 0x35e484: 0xafa900a8  sw          $t1, 0xA8($sp)
    ctx->pc = 0x35e484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 9));
    // 0x35e488: 0xafaa00b0  sw          $t2, 0xB0($sp)
    ctx->pc = 0x35e488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 10));
    // 0x35e48c: 0xafab00b8  sw          $t3, 0xB8($sp)
    ctx->pc = 0x35e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 11));
    // 0x35e490: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35e490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x35e494: 0x2455c100  addiu       $s5, $v0, -0x3F00
    ctx->pc = 0x35e494u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x35e498: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x35e498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35e49c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x35e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x35e4a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35e4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35e4a4: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x35e4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x35e4a8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x35e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x35e4ac: 0x29903  sra         $s3, $v0, 4
    ctx->pc = 0x35e4acu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 4));
    // 0x35e4b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x35e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x35e4b4: 0x28903  sra         $s1, $v0, 4
    ctx->pc = 0x35e4b4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 4));
    // 0x35e4b8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x35e4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x35e4bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35e4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35e4c0: 0xc040aa4  jal         func_102A90
    ctx->pc = 0x35E4C0u;
    SET_GPR_U32(ctx, 31, 0x35E4C8u);
    ctx->pc = 0x102A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A90u, 0x35E4C0u, 0x35E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E4C8u;
label_35e4c8:
    // 0x35e4c8: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x35e4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x35e4cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35e4d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35e4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e4d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35e4d8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x35e4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35e4dc: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e4e0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x35e4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x35e4e4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x35e4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x35e4e8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e4ec: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x35e4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x35e4f0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e4f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35e4f8: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x35e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x35e4fc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x35e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x35e500: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e504: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x35e504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x35e508: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35e508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e50c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x35e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x35e510: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e514: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35e514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35e518: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e51c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x35e51cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x35e520: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x35e520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x35e524: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e528: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x35e528u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x35e52c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e530: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35e530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35e534: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x35e534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x35e538: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x35e538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x35e53c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e540: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35e540u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35e544: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e548: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x35e548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x35e54c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e550: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x35e550u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x35e554: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x35e554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x35e558: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e55c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x35e55cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x35e560: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e564: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35e564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35e568: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x35e568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x35e56c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x35e56cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35e570: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x35E570u;
    {
        const bool branch_taken_0x35e570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e570) {
            ctx->pc = 0x35E6E0u;
            goto label_35e6e0;
        }
    }
    ctx->pc = 0x35E578u;
label_35e578:
    // 0x35e578: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x35e578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x35e57c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35E57Cu;
    {
        const bool branch_taken_0x35e57c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x35e57c) {
            ctx->pc = 0x35E590u;
            goto label_35e590;
        }
    }
    ctx->pc = 0x35E584u;
    // 0x35e584: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x35e584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e588: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35E588u;
    {
        const bool branch_taken_0x35e588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e588) {
            ctx->pc = 0x35E598u;
            goto label_35e598;
        }
    }
    ctx->pc = 0x35E590u;
label_35e590:
    // 0x35e590: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x35e590u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35e594: 0x0  nop
    ctx->pc = 0x35e594u;
    // NOP
label_35e598:
    // 0x35e598: 0x7240a628  paddub      $s4, $s2, $zero
    ctx->pc = 0x35e598u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x35e59c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x35e59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x35e5a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35e5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35e5a4: 0xc040aa4  jal         func_102A90
    ctx->pc = 0x35E5A4u;
    SET_GPR_U32(ctx, 31, 0x35E5ACu);
    ctx->pc = 0x102A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A90u, 0x35E5A4u, 0x35E5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E5ACu;
label_35e5ac:
    // 0x35e5ac: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x35e5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x35e5b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35e5b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35e5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e5b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35e5bc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x35e5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35e5c0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e5c4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x35e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x35e5c8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x35e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x35e5cc: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e5d0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x35e5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x35e5d4: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e5d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35e5dc: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x35e5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x35e5e0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x35e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x35e5e4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x35e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35e5e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35e5ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e5f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35e5f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35e5f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35e5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e5f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x35e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x35e5fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e600: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35e600u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35e604: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35e604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35e608: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x35e608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35e60c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e610: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x35e610u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x35e614: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x35e614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x35e618: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e61c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x35e61cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x35e620: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e624: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35e624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35e628: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x35e628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x35e62c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e630: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x35e630u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x35e634: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x35e634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x35e638: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e63c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x35e63cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x35e640: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e644: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35e644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35e648: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x35e648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x35e64c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x35e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35e650: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x35e650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35e654: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x35e654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35e658: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x35e658u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x35e65c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35e65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e660: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35e660u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35e664: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x35e664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x35e668: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35e668u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35e66c: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x35e66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x35e670: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x35e670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35e674: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x35e674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x35e678: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e67c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35e67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35e680: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e684: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x35e684u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x35e688: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e68c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x35e68cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x35e690: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x35e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x35e694: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35e694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35e698: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x35e698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x35e69c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x35e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x35e6a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x35e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35e6a4: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x35e6a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35e6a8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x35e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35e6ac: 0x32903  sra         $a1, $v1, 4
    ctx->pc = 0x35e6acu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 4));
    // 0x35e6b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35e6b4: 0x2313c  dsll32      $a2, $v0, 4
    ctx->pc = 0x35e6b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 4));
    // 0x35e6b8: 0x6313e  dsrl32      $a2, $a2, 4
    ctx->pc = 0x35e6b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 4));
    // 0x35e6bc: 0xc040a86  jal         func_102A18
    ctx->pc = 0x35E6BCu;
    SET_GPR_U32(ctx, 31, 0x35E6C4u);
    ctx->pc = 0x102A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A18u, 0x35E6BCu, 0x35E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E6C4u;
label_35e6c4:
    // 0x35e6c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35e6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35e6c8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x35e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35e6cc: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x35e6ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35e6d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35e6d4: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x35e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x35e6d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35e6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35e6dc: 0x0  nop
    ctx->pc = 0x35e6dcu;
    // NOP
label_35e6e0:
    // 0x35e6e0: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x35e6e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x35e6e4: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x35E6E4u;
    {
        const bool branch_taken_0x35e6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e6e4) {
            ctx->pc = 0x35E578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e578;
        }
    }
    ctx->pc = 0x35E6ECu;
    // 0x35e6ec: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x35e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x35e6f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35e6f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35e6f4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35e6f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35e6f8: 0xc040ad2  jal         func_102B48
    ctx->pc = 0x35E6F8u;
    SET_GPR_U32(ctx, 31, 0x35E700u);
    ctx->pc = 0x102B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102B48u, 0x35E6F8u, 0x35E700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E700u;
label_35e700:
    // 0x35e700: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x35e700u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35e704: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35e704u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35e708: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35e708u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35e70c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35e70cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35e710: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35e710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35e718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e71c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x35e71cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x35e720: 0x3e00008  jr          $ra
    ctx->pc = 0x35E720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E728u;
}
