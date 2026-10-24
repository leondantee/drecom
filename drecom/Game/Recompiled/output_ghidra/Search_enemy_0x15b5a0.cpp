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

// Function: Search_enemy
// Address: 0x15b5a0 - 0x15bc84
void Search_enemy_0x15b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Search_enemy_0x15b5a0");
#endif

    switch (ctx->pc) {
        case 0x15b674u: goto label_15b674;
        case 0x15b740u: goto label_15b740;
        case 0x15b774u: goto label_15b774;
        case 0x15b784u: goto label_15b784;
        case 0x15b7b8u: goto label_15b7b8;
        case 0x15b7fcu: goto label_15b7fc;
        case 0x15b820u: goto label_15b820;
        case 0x15b874u: goto label_15b874;
        case 0x15b88cu: goto label_15b88c;
        case 0x15b8a0u: goto label_15b8a0;
        case 0x15b8dcu: goto label_15b8dc;
        case 0x15b910u: goto label_15b910;
        case 0x15b95cu: goto label_15b95c;
        case 0x15b968u: goto label_15b968;
        case 0x15b9a0u: goto label_15b9a0;
        case 0x15b9acu: goto label_15b9ac;
        case 0x15ba3cu: goto label_15ba3c;
        case 0x15ba50u: goto label_15ba50;
        case 0x15ba78u: goto label_15ba78;
        case 0x15baf4u: goto label_15baf4;
        case 0x15bb04u: goto label_15bb04;
        case 0x15bb88u: goto label_15bb88;
        default: break;
    }

    ctx->pc = 0x15b5a0u;

    // 0x15b5a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x15b5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x15b5a4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x15b5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x15b5a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15b5ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15b5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15b5b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15b5b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15b5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15b5b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b5bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b5c0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x15b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x15b5c4: 0x24750080  addiu       $s5, $v1, 0x80
    ctx->pc = 0x15b5c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x15b5c8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x15b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x15b5cc: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x15b5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x15b5d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b5d4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x15b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b5d8: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x15b5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x15b5dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15b5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15b5e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b5e4: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x15b5e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x15b5e8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x15b5e8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15b5ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b5f0: 0x8c240068  lw          $a0, 0x68($at)
    ctx->pc = 0x15b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0068u));
    // 0x15b5f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15b5f8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15B5F8u;
    {
        const bool branch_taken_0x15b5f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15b5f8) {
            ctx->pc = 0x15B618u;
            goto label_15b618;
        }
    }
    ctx->pc = 0x15B600u;
    // 0x15b600: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b604: 0x8c24006c  lw          $a0, 0x6C($at)
    ctx->pc = 0x15b604u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x15b608: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x15b608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x15b60c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B60Cu;
    {
        const bool branch_taken_0x15b60c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15b60c) {
            ctx->pc = 0x15B618u;
            goto label_15b618;
        }
    }
    ctx->pc = 0x15B614u;
    // 0x15b614: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x15b614u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b618:
    // 0x15b618: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b61c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b620: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x15b620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x15b624: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15B624u;
    {
        const bool branch_taken_0x15b624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b624) {
            ctx->pc = 0x15B65Cu;
            goto label_15b65c;
        }
    }
    ctx->pc = 0x15B62Cu;
    // 0x15b62c: 0x920313a7  lbu         $v1, 0x13A7($s0)
    ctx->pc = 0x15b62cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5031)));
    // 0x15b630: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15b630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15b634: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15b634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15b638: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B638u;
    {
        const bool branch_taken_0x15b638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15b638) {
            ctx->pc = 0x15B654u;
            goto label_15b654;
        }
    }
    ctx->pc = 0x15B640u;
    // 0x15b640: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15b640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b644: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B644u;
    {
        const bool branch_taken_0x15b644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15b644) {
            ctx->pc = 0x15B654u;
            goto label_15b654;
        }
    }
    ctx->pc = 0x15B64Cu;
    // 0x15b64c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15B64Cu;
    {
        const bool branch_taken_0x15b64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b64c) {
            ctx->pc = 0x15B65Cu;
            goto label_15b65c;
        }
    }
    ctx->pc = 0x15B654u;
label_15b654:
    // 0x15b654: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x15B654u;
    {
        const bool branch_taken_0x15b654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b654) {
            ctx->pc = 0x15BC5Cu;
            goto label_15bc5c;
        }
    }
    ctx->pc = 0x15B65Cu;
label_15b65c:
    // 0x15b65c: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b660: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15B660u;
    {
        const bool branch_taken_0x15b660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b660) {
            ctx->pc = 0x15B688u;
            goto label_15b688;
        }
    }
    ctx->pc = 0x15B668u;
    // 0x15b668: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b668u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b66c: 0xc0570c0  jal         func_15C300
    ctx->pc = 0x15B66Cu;
    SET_GPR_U32(ctx, 31, 0x15B674u);
    ctx->pc = 0x15C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C300u, 0x15B66Cu, 0x15B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B674u;
label_15b674:
    // 0x15b674: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B674u;
    {
        const bool branch_taken_0x15b674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b674) {
            ctx->pc = 0x15B688u;
            goto label_15b688;
        }
    }
    ctx->pc = 0x15B67Cu;
    // 0x15b67c: 0xae0013e8  sw          $zero, 0x13E8($s0)
    ctx->pc = 0x15b67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 0));
    // 0x15b680: 0xa2001920  sb          $zero, 0x1920($s0)
    ctx->pc = 0x15b680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6432), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b684: 0xa2001921  sb          $zero, 0x1921($s0)
    ctx->pc = 0x15b684u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6433), (uint8_t)GPR_U32(ctx, 0));
label_15b688:
    // 0x15b688: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x15b688u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15b68c: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b690: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x15B690u;
    {
        const bool branch_taken_0x15b690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b690) {
            ctx->pc = 0x15BA58u;
            goto label_15ba58;
        }
    }
    ctx->pc = 0x15B698u;
    // 0x15b698: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15b698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15b69c: 0x24520080  addiu       $s2, $v0, 0x80
    ctx->pc = 0x15b69cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15b6a0: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b6a4: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x15b6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x15b6a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b6ac: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x15b6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x15b6b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15B6B0u;
    {
        const bool branch_taken_0x15b6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b6b0) {
            ctx->pc = 0x15B6D0u;
            goto label_15b6d0;
        }
    }
    ctx->pc = 0x15B6B8u;
    // 0x15b6b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b6bc: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b6c0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x15b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x15b6c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x15b6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15b6c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b6cc: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x15b6ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_15b6d0:
    // 0x15b6d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b6d4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b6d8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x15b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x15b6dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15b6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15b6e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B6E0u;
    {
        const bool branch_taken_0x15b6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b6e0) {
            ctx->pc = 0x15B6F0u;
            goto label_15b6f0;
        }
    }
    ctx->pc = 0x15B6E8u;
    // 0x15b6e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b6ec: 0xa2021921  sb          $v0, 0x1921($s0)
    ctx->pc = 0x15b6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6433), (uint8_t)GPR_U32(ctx, 2));
label_15b6f0:
    // 0x15b6f0: 0x92021921  lbu         $v0, 0x1921($s0)
    ctx->pc = 0x15b6f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6433)));
    // 0x15b6f4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x15B6F4u;
    {
        const bool branch_taken_0x15b6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b6f4) {
            ctx->pc = 0x15B7C4u;
            goto label_15b7c4;
        }
    }
    ctx->pc = 0x15B6FCu;
    // 0x15b6fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b700: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15b700u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b704: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x15b704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x15b708: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15b708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15b70c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x15B70Cu;
    {
        const bool branch_taken_0x15b70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b70c) {
            ctx->pc = 0x15B7C4u;
            goto label_15b7c4;
        }
    }
    ctx->pc = 0x15B714u;
    // 0x15b714: 0xa2001921  sb          $zero, 0x1921($s0)
    ctx->pc = 0x15b714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6433), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b718: 0x8e1413e8  lw          $s4, 0x13E8($s0)
    ctx->pc = 0x15b718u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b71c: 0xae0013e8  sw          $zero, 0x13E8($s0)
    ctx->pc = 0x15b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 0));
    // 0x15b720: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x15b720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15b724: 0xa2021920  sb          $v0, 0x1920($s0)
    ctx->pc = 0x15b724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6432), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b728: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x15B728u;
    {
        const bool branch_taken_0x15b728 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b728) {
            ctx->pc = 0x15B77Cu;
            goto label_15b77c;
        }
    }
    ctx->pc = 0x15B730u;
    // 0x15b730: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x15b730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b734: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x15b734u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15b738: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x15B738u;
    SET_GPR_U32(ctx, 31, 0x15B740u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x15B738u, 0x15B740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B740u;
label_15b740:
    // 0x15b740: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x15B740u;
    {
        const bool branch_taken_0x15b740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b740) {
            ctx->pc = 0x15B7C0u;
            goto label_15b7c0;
        }
    }
    ctx->pc = 0x15B748u;
    // 0x15b748: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b74c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b750: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15b750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15b754: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b758: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x15b758u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x15b75c: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15b760: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x15b764: 0xa6001574  sh          $zero, 0x1574($s0)
    ctx->pc = 0x15b764u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b768: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b76c: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x15B76Cu;
    SET_GPR_U32(ctx, 31, 0x15B774u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x15B76Cu, 0x15B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B774u;
label_15b774:
    // 0x15b774: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x15B774u;
    {
        const bool branch_taken_0x15b774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b774) {
            ctx->pc = 0x15BC5Cu;
            goto label_15bc5c;
        }
    }
    ctx->pc = 0x15B77Cu;
label_15b77c:
    // 0x15b77c: 0xc056fe0  jal         func_15BF80
    ctx->pc = 0x15B77Cu;
    SET_GPR_U32(ctx, 31, 0x15B784u);
    ctx->pc = 0x15BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF80u, 0x15B77Cu, 0x15B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B784u;
label_15b784:
    // 0x15b784: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15B784u;
    {
        const bool branch_taken_0x15b784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b784) {
            ctx->pc = 0x15B7C0u;
            goto label_15b7c0;
        }
    }
    ctx->pc = 0x15B78Cu;
    // 0x15b78c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b790: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15b790u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b794: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15b794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15b798: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b79c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x15b79cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x15b7a0: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15b7a4: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x15b7a8: 0xa6001574  sh          $zero, 0x1574($s0)
    ctx->pc = 0x15b7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b7ac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b7acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b7b0: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x15B7B0u;
    SET_GPR_U32(ctx, 31, 0x15B7B8u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x15B7B0u, 0x15B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B7B8u;
label_15b7b8:
    // 0x15b7b8: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x15B7B8u;
    {
        const bool branch_taken_0x15b7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b7b8) {
            ctx->pc = 0x15BC5Cu;
            goto label_15bc5c;
        }
    }
    ctx->pc = 0x15B7C0u;
label_15b7c0:
    // 0x15b7c0: 0xae1413e8  sw          $s4, 0x13E8($s0)
    ctx->pc = 0x15b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 20));
label_15b7c4:
    // 0x15b7c4: 0x1220004a  beqz        $s1, . + 4 + (0x4A << 2)
    ctx->pc = 0x15B7C4u;
    {
        const bool branch_taken_0x15b7c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b7c4) {
            ctx->pc = 0x15B8F0u;
            goto label_15b8f0;
        }
    }
    ctx->pc = 0x15B7CCu;
    // 0x15b7cc: 0x924200ac  lbu         $v0, 0xAC($s2)
    ctx->pc = 0x15b7ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x15b7d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b7d4: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x15b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x15b7d8: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x15b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x15b7dc: 0x924200ad  lbu         $v0, 0xAD($s2)
    ctx->pc = 0x15b7dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 173)));
    // 0x15b7e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b7e4: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x15b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x15b7e8: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x15b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x15b7ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15b7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15b7f0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15b7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15b7f4: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x15B7F4u;
    SET_GPR_U32(ctx, 31, 0x15B7FCu);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x15B7FCu;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15B7FCu) { return; }
    ctx->pc = 0x15B7FCu;
label_15b7fc:
    // 0x15b7fc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x15b7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b800: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x15b800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b804: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15b804u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15b808: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x15b808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b80c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x15b80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b810: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15b810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15b814: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x15b814u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15b818: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x15B818u;
    SET_GPR_U32(ctx, 31, 0x15B820u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x15B818u, 0x15B820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B820u;
label_15b820:
    // 0x15b820: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x15b820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x15b824: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x15b824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b828: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x15b828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x15b82c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15b82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b830: 0x0  nop
    ctx->pc = 0x15b830u;
    // NOP
    // 0x15b834: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15b834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b838: 0x0  nop
    ctx->pc = 0x15b838u;
    // NOP
    // 0x15b83c: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x15B83Cu;
    {
        const bool branch_taken_0x15b83c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b83c) {
            ctx->pc = 0x15B8E4u;
            goto label_15b8e4;
        }
    }
    ctx->pc = 0x15B844u;
    // 0x15b844: 0x92021920  lbu         $v0, 0x1920($s0)
    ctx->pc = 0x15b844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6432)));
    // 0x15b848: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B848u;
    {
        const bool branch_taken_0x15b848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b848) {
            ctx->pc = 0x15B864u;
            goto label_15b864;
        }
    }
    ctx->pc = 0x15B850u;
    // 0x15b850: 0x92021920  lbu         $v0, 0x1920($s0)
    ctx->pc = 0x15b850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6432)));
    // 0x15b854: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15b854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15b858: 0xa2021920  sb          $v0, 0x1920($s0)
    ctx->pc = 0x15b858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6432), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b85c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x15B85Cu;
    {
        const bool branch_taken_0x15b85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b85c) {
            ctx->pc = 0x15BA44u;
            goto label_15ba44;
        }
    }
    ctx->pc = 0x15B864u;
label_15b864:
    // 0x15b864: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x15b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b868: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x15b868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15b86c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15B86Cu;
    SET_GPR_U32(ctx, 31, 0x15B874u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15B86Cu, 0x15B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B874u;
label_15b874:
    // 0x15b874: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x15b874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x15b878: 0xc60113e0  lwc1        $f1, 0x13E0($s0)
    ctx->pc = 0x15b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b87c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x15b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b880: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x15b880u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15b884: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x15B884u;
    SET_GPR_U32(ctx, 31, 0x15B88Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x15B884u, 0x15B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B88Cu;
label_15b88c:
    // 0x15b88c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x15b88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x15b890: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x15b890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b894: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x15b894u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15b898: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x15B898u;
    SET_GPR_U32(ctx, 31, 0x15B8A0u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x15B898u, 0x15B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B8A0u;
label_15b8a0:
    // 0x15b8a0: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x15B8A0u;
    {
        const bool branch_taken_0x15b8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b8a0) {
            ctx->pc = 0x15BA44u;
            goto label_15ba44;
        }
    }
    ctx->pc = 0x15B8A8u;
    // 0x15b8a8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x15b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15b8ac: 0xa2021920  sb          $v0, 0x1920($s0)
    ctx->pc = 0x15b8acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6432), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b8b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b8b4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b8b8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15b8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15b8bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b8c0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x15b8c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x15b8c4: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15b8c8: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x15b8cc: 0xa6001574  sh          $zero, 0x1574($s0)
    ctx->pc = 0x15b8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x15b8d0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15b8d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15b8d4: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x15B8D4u;
    SET_GPR_U32(ctx, 31, 0x15B8DCu);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x15B8D4u, 0x15B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B8DCu;
label_15b8dc:
    // 0x15b8dc: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x15B8DCu;
    {
        const bool branch_taken_0x15b8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b8dc) {
            ctx->pc = 0x15BC5Cu;
            goto label_15bc5c;
        }
    }
    ctx->pc = 0x15B8E4u;
label_15b8e4:
    // 0x15b8e4: 0xa2001920  sb          $zero, 0x1920($s0)
    ctx->pc = 0x15b8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6432), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b8e8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x15B8E8u;
    {
        const bool branch_taken_0x15b8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b8e8) {
            ctx->pc = 0x15BA44u;
            goto label_15ba44;
        }
    }
    ctx->pc = 0x15B8F0u;
label_15b8f0:
    // 0x15b8f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b8f4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b8f8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x15b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x15b8fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15b8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15b900: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x15B900u;
    {
        const bool branch_taken_0x15b900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b900) {
            ctx->pc = 0x15BA44u;
            goto label_15ba44;
        }
    }
    ctx->pc = 0x15B908u;
    // 0x15b908: 0xc056fe0  jal         func_15BF80
    ctx->pc = 0x15B908u;
    SET_GPR_U32(ctx, 31, 0x15B910u);
    ctx->pc = 0x15BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF80u, 0x15B908u, 0x15B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B910u;
label_15b910:
    // 0x15b910: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x15B910u;
    {
        const bool branch_taken_0x15b910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b910) {
            ctx->pc = 0x15BA44u;
            goto label_15ba44;
        }
    }
    ctx->pc = 0x15B918u;
    // 0x15b918: 0x8e0313e8  lw          $v1, 0x13E8($s0)
    ctx->pc = 0x15b918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b91c: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15b920: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x15B920u;
    {
        const bool branch_taken_0x15b920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15b920) {
            ctx->pc = 0x15BA44u;
            goto label_15ba44;
        }
    }
    ctx->pc = 0x15B928u;
    // 0x15b928: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x15b928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x15b92c: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b930: 0x904210a9  lbu         $v0, 0x10A9($v0)
    ctx->pc = 0x15b930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4265)));
    // 0x15b934: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b938: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15b938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15b93c: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b940: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x15b944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b948: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15b948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15b94c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x15b94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x15b950: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x15b950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15b954: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15B954u;
    SET_GPR_U32(ctx, 31, 0x15B95Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15B954u, 0x15B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B95Cu;
label_15b95c:
    // 0x15b95c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15b960: 0xc067588  jal         func_19D620
    ctx->pc = 0x15B960u;
    SET_GPR_U32(ctx, 31, 0x15B968u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x15B960u, 0x15B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B968u;
label_15b968:
    // 0x15b968: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x15b968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x15b96c: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x15b96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x15b970: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15b974: 0x904210a9  lbu         $v0, 0x10A9($v0)
    ctx->pc = 0x15b974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4265)));
    // 0x15b978: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15b978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b97c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x15b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15b980: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15b980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15b984: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15b984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x15b988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b98c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15b990: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x15b990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x15b994: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x15b994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15b998: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x15B998u;
    SET_GPR_U32(ctx, 31, 0x15B9A0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x15B998u, 0x15B9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B9A0u;
label_15b9a0:
    // 0x15b9a0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15b9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15b9a4: 0xc067588  jal         func_19D620
    ctx->pc = 0x15B9A4u;
    SET_GPR_U32(ctx, 31, 0x15B9ACu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x15B9A4u, 0x15B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B9ACu;
label_15b9ac:
    // 0x15b9ac: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x15b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x15b9b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15b9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b9b4: 0x0  nop
    ctx->pc = 0x15b9b4u;
    // NOP
    // 0x15b9b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15b9b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15b9bc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x15b9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x15b9c0: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x15b9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b9c4: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x15b9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b9c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15b9c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b9cc: 0x0  nop
    ctx->pc = 0x15b9ccu;
    // NOP
    // 0x15b9d0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x15B9D0u;
    {
        const bool branch_taken_0x15b9d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b9d0) {
            ctx->pc = 0x15BA08u;
            goto label_15ba08;
        }
    }
    ctx->pc = 0x15B9D8u;
    // 0x15b9d8: 0x8e0213e8  lw          $v0, 0x13E8($s0)
    ctx->pc = 0x15b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5096)));
    // 0x15b9dc: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x15b9dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x15b9e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15b9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15b9e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15b9e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15b9e8: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15B9E8u;
    {
        const bool branch_taken_0x15b9e8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15b9e8) {
            ctx->pc = 0x15BA44u;
            goto label_15ba44;
        }
    }
    ctx->pc = 0x15B9F0u;
    // 0x15b9f0: 0x86021574  lh          $v0, 0x1574($s0)
    ctx->pc = 0x15b9f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5492)));
    // 0x15b9f4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15b9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15b9f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15b9f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15b9fc: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x15b9fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x15ba00: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x15BA00u;
    {
        const bool branch_taken_0x15ba00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ba00) {
            ctx->pc = 0x15BA44u;
            goto label_15ba44;
        }
    }
    ctx->pc = 0x15BA08u;
label_15ba08:
    // 0x15ba08: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x15ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x15ba0c: 0xa2021920  sb          $v0, 0x1920($s0)
    ctx->pc = 0x15ba0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6432), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ba10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15ba10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15ba14: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15ba18: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15ba18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15ba1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15ba1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15ba20: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x15ba20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x15ba24: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15ba28: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x15ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x15ba2c: 0xa6001574  sh          $zero, 0x1574($s0)
    ctx->pc = 0x15ba2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x15ba30: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15ba30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15ba34: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x15BA34u;
    SET_GPR_U32(ctx, 31, 0x15BA3Cu);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x15BA34u, 0x15BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA3Cu;
label_15ba3c:
    // 0x15ba3c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x15BA3Cu;
    {
        const bool branch_taken_0x15ba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba3c) {
            ctx->pc = 0x15BC5Cu;
            goto label_15bc5c;
        }
    }
    ctx->pc = 0x15BA44u;
label_15ba44:
    // 0x15ba44: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15ba44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15ba48: 0xc057124  jal         func_15C490
    ctx->pc = 0x15BA48u;
    SET_GPR_U32(ctx, 31, 0x15BA50u);
    ctx->pc = 0x15C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C490u, 0x15BA48u, 0x15BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA50u;
label_15ba50:
    // 0x15ba50: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x15BA50u;
    {
        const bool branch_taken_0x15ba50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba50) {
            ctx->pc = 0x15BC5Cu;
            goto label_15bc5c;
        }
    }
    ctx->pc = 0x15BA58u;
label_15ba58:
    // 0x15ba58: 0xa2001920  sb          $zero, 0x1920($s0)
    ctx->pc = 0x15ba58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6432), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ba5c: 0xa2001921  sb          $zero, 0x1921($s0)
    ctx->pc = 0x15ba5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6433), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ba60: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x15BA60u;
    {
        const bool branch_taken_0x15ba60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba60) {
            ctx->pc = 0x15BAFCu;
            goto label_15bafc;
        }
    }
    ctx->pc = 0x15BA68u;
    // 0x15ba68: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x15ba68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ba6c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x15ba6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15ba70: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x15BA70u;
    SET_GPR_U32(ctx, 31, 0x15BA78u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x15BA70u, 0x15BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BA78u;
label_15ba78:
    // 0x15ba78: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x15BA78u;
    {
        const bool branch_taken_0x15ba78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba78) {
            ctx->pc = 0x15BB90u;
            goto label_15bb90;
        }
    }
    ctx->pc = 0x15BA80u;
    // 0x15ba80: 0x8e0313ec  lw          $v1, 0x13EC($s0)
    ctx->pc = 0x15ba80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15ba84: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x15ba84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x15ba88: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15ba88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ba8c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x15ba8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x15ba90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15BA90u;
    {
        const bool branch_taken_0x15ba90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba90) {
            ctx->pc = 0x15BAB0u;
            goto label_15bab0;
        }
    }
    ctx->pc = 0x15BA98u;
    // 0x15ba98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15ba98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15ba9c: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x15ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15baa0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x15baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x15baa4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x15baa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15baa8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15baa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15baac: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x15baacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_15bab0:
    // 0x15bab0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bab4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x15bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15bab8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x15bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x15babc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15babcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15bac0: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x15BAC0u;
    {
        const bool branch_taken_0x15bac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bac0) {
            ctx->pc = 0x15BB90u;
            goto label_15bb90;
        }
    }
    ctx->pc = 0x15BAC8u;
    // 0x15bac8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bacc: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15baccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15bad0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15bad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15bad4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bad8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x15bad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x15badc: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15bae0: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x15bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x15bae4: 0xa6001574  sh          $zero, 0x1574($s0)
    ctx->pc = 0x15bae4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x15bae8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15bae8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15baec: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x15BAECu;
    SET_GPR_U32(ctx, 31, 0x15BAF4u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x15BAECu, 0x15BAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BAF4u;
label_15baf4:
    // 0x15baf4: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x15BAF4u;
    {
        const bool branch_taken_0x15baf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15baf4) {
            ctx->pc = 0x15BC5Cu;
            goto label_15bc5c;
        }
    }
    ctx->pc = 0x15BAFCu;
label_15bafc:
    // 0x15bafc: 0xc056fe0  jal         func_15BF80
    ctx->pc = 0x15BAFCu;
    SET_GPR_U32(ctx, 31, 0x15BB04u);
    ctx->pc = 0x15BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF80u, 0x15BAFCu, 0x15BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BB04u;
label_15bb04:
    // 0x15bb04: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15BB04u;
    {
        const bool branch_taken_0x15bb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bb04) {
            ctx->pc = 0x15BB90u;
            goto label_15bb90;
        }
    }
    ctx->pc = 0x15BB0Cu;
    // 0x15bb0c: 0x8e0313ec  lw          $v1, 0x13EC($s0)
    ctx->pc = 0x15bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15bb10: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x15bb10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x15bb14: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15bb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15bb18: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x15bb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x15bb1c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15BB1Cu;
    {
        const bool branch_taken_0x15bb1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bb1c) {
            ctx->pc = 0x15BB3Cu;
            goto label_15bb3c;
        }
    }
    ctx->pc = 0x15BB24u;
    // 0x15bb24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bb28: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x15bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15bb2c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x15bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x15bb30: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x15bb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15bb34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bb38: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x15bb38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_15bb3c:
    // 0x15bb3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bb40: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x15bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15bb44: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x15bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x15bb48: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15bb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15bb4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BB4Cu;
    {
        const bool branch_taken_0x15bb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bb4c) {
            ctx->pc = 0x15BB5Cu;
            goto label_15bb5c;
        }
    }
    ctx->pc = 0x15BB54u;
    // 0x15bb54: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x15BB54u;
    {
        const bool branch_taken_0x15bb54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bb54) {
            ctx->pc = 0x15BB90u;
            goto label_15bb90;
        }
    }
    ctx->pc = 0x15BB5Cu;
label_15bb5c:
    // 0x15bb5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bb60: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15bb64: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15bb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15bb68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bb6c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x15bb6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x15bb70: 0x8e0213ec  lw          $v0, 0x13EC($s0)
    ctx->pc = 0x15bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15bb74: 0xae0213e8  sw          $v0, 0x13E8($s0)
    ctx->pc = 0x15bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5096), GPR_U32(ctx, 2));
    // 0x15bb78: 0xa6001574  sh          $zero, 0x1574($s0)
    ctx->pc = 0x15bb78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x15bb7c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15bb7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15bb80: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x15BB80u;
    SET_GPR_U32(ctx, 31, 0x15BB88u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x15BB80u, 0x15BB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BB88u;
label_15bb88:
    // 0x15bb88: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x15BB88u;
    {
        const bool branch_taken_0x15bb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bb88) {
            ctx->pc = 0x15BC5Cu;
            goto label_15bc5c;
        }
    }
    ctx->pc = 0x15BB90u;
label_15bb90:
    // 0x15bb90: 0xc6011564  lwc1        $f1, 0x1564($s0)
    ctx->pc = 0x15bb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bb94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15bb94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bb98: 0x0  nop
    ctx->pc = 0x15bb98u;
    // NOP
    // 0x15bb9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15bb9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bba0: 0x0  nop
    ctx->pc = 0x15bba0u;
    // NOP
    // 0x15bba4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x15BBA4u;
    {
        const bool branch_taken_0x15bba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15bba4) {
            ctx->pc = 0x15BC08u;
            goto label_15bc08;
        }
    }
    ctx->pc = 0x15BBACu;
    // 0x15bbac: 0xc6011564  lwc1        $f1, 0x1564($s0)
    ctx->pc = 0x15bbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bbb0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x15bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x15bbb4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x15bbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x15bbb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15bbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bbbc: 0x0  nop
    ctx->pc = 0x15bbbcu;
    // NOP
    // 0x15bbc0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15bbc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bbc4: 0x0  nop
    ctx->pc = 0x15bbc4u;
    // NOP
    // 0x15bbc8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x15BBC8u;
    {
        const bool branch_taken_0x15bbc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15bbc8) {
            ctx->pc = 0x15BBF4u;
            goto label_15bbf4;
        }
    }
    ctx->pc = 0x15BBD0u;
    // 0x15bbd0: 0xc6011564  lwc1        $f1, 0x1564($s0)
    ctx->pc = 0x15bbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bbd4: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x15bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x15bbd8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x15bbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x15bbdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15bbdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bbe0: 0x0  nop
    ctx->pc = 0x15bbe0u;
    // NOP
    // 0x15bbe4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15bbe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15bbe8: 0xe6001564  swc1        $f0, 0x1564($s0)
    ctx->pc = 0x15bbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5476), bits); }
    // 0x15bbec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x15BBECu;
    {
        const bool branch_taken_0x15bbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bbec) {
            ctx->pc = 0x15BC5Cu;
            goto label_15bc5c;
        }
    }
    ctx->pc = 0x15BBF4u;
label_15bbf4:
    // 0x15bbf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15bbf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bbf8: 0x0  nop
    ctx->pc = 0x15bbf8u;
    // NOP
    // 0x15bbfc: 0xe6001564  swc1        $f0, 0x1564($s0)
    ctx->pc = 0x15bbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5476), bits); }
    // 0x15bc00: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15BC00u;
    {
        const bool branch_taken_0x15bc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc00) {
            ctx->pc = 0x15BC5Cu;
            goto label_15bc5c;
        }
    }
    ctx->pc = 0x15BC08u;
label_15bc08:
    // 0x15bc08: 0xc6011564  lwc1        $f1, 0x1564($s0)
    ctx->pc = 0x15bc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bc0c: 0x3c03bc23  lui         $v1, 0xBC23
    ctx->pc = 0x15bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48163 << 16));
    // 0x15bc10: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x15bc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x15bc14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15bc14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bc18: 0x0  nop
    ctx->pc = 0x15bc18u;
    // NOP
    // 0x15bc1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15bc1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bc20: 0x0  nop
    ctx->pc = 0x15bc20u;
    // NOP
    // 0x15bc24: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x15BC24u;
    {
        const bool branch_taken_0x15bc24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15bc24) {
            ctx->pc = 0x15BC50u;
            goto label_15bc50;
        }
    }
    ctx->pc = 0x15BC2Cu;
    // 0x15bc2c: 0xc6011564  lwc1        $f1, 0x1564($s0)
    ctx->pc = 0x15bc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bc30: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x15bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x15bc34: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x15bc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x15bc38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15bc38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bc3c: 0x0  nop
    ctx->pc = 0x15bc3cu;
    // NOP
    // 0x15bc40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15bc40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15bc44: 0xe6001564  swc1        $f0, 0x1564($s0)
    ctx->pc = 0x15bc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5476), bits); }
    // 0x15bc48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15BC48u;
    {
        const bool branch_taken_0x15bc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc48) {
            ctx->pc = 0x15BC5Cu;
            goto label_15bc5c;
        }
    }
    ctx->pc = 0x15BC50u;
label_15bc50:
    // 0x15bc50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15bc50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bc54: 0x0  nop
    ctx->pc = 0x15bc54u;
    // NOP
    // 0x15bc58: 0xe6001564  swc1        $f0, 0x1564($s0)
    ctx->pc = 0x15bc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5476), bits); }
label_15bc5c:
    // 0x15bc5c: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x15bc5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15bc60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15bc60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15bc64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15bc64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15bc68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15bc68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bc6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15bc6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bc70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bc70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bc74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bc74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bc78: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x15bc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15bc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x15BC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BC84u;
}
