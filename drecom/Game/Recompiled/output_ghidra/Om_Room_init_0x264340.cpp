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

// Function: Om_Room_init
// Address: 0x264340 - 0x2649cc
void Om_Room_init_0x264340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_Room_init_0x264340");
#endif

    switch (ctx->pc) {
        case 0x2643d0u: goto label_2643d0;
        case 0x264438u: goto label_264438;
        case 0x264488u: goto label_264488;
        case 0x2644a8u: goto label_2644a8;
        case 0x264658u: goto label_264658;
        case 0x26466cu: goto label_26466c;
        case 0x26475cu: goto label_26475c;
        case 0x264768u: goto label_264768;
        case 0x264784u: goto label_264784;
        case 0x264884u: goto label_264884;
        case 0x2648d4u: goto label_2648d4;
        case 0x2648e0u: goto label_2648e0;
        default: break;
    }

    ctx->pc = 0x264340u;

    // 0x264340: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x264340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x264344: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x264344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x264348: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x264348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x26434c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x264350: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x264350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x264354: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x264354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x264358: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x264358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26435c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x264360: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x264360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x264364: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x264364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x264368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26436c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x26436cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x264370: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x264370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x264374: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x264374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x264378: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x264378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x26437c: 0x2463fe10  addiu       $v1, $v1, -0x1F0
    ctx->pc = 0x26437cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
    // 0x264380: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x264380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x264384: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x264384u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x264388: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26438c: 0x8c34e680  lw          $s4, -0x1980($at)
    ctx->pc = 0x26438cu;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x61E680u));
    // 0x264390: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264394: 0x8c23e678  lw          $v1, -0x1988($at)
    ctx->pc = 0x264394u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E678u));
    // 0x264398: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x264398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x26439c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26439cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2643a0: 0x8c35e67c  lw          $s5, -0x1984($at)
    ctx->pc = 0x2643a0u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x61E67Cu));
    // 0x2643a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2643a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2643a8: 0x8c23e678  lw          $v1, -0x1988($at)
    ctx->pc = 0x2643a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E678u));
    // 0x2643ac: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x2643acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
    // 0x2643b0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2643b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2643b4: 0x8c23e67c  lw          $v1, -0x1984($at)
    ctx->pc = 0x2643b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E67Cu));
    // 0x2643b8: 0xafa30118  sw          $v1, 0x118($sp)
    ctx->pc = 0x2643b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
    // 0x2643bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2643bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2643c0: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x2643c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
    // 0x2643c4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2643c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2643c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2643C8u;
    {
        const bool branch_taken_0x2643c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2643c8) {
            ctx->pc = 0x2643E8u;
            goto label_2643e8;
        }
    }
    ctx->pc = 0x2643D0u;
label_2643d0:
    // 0x2643d0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2643d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2643d4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2643d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2643d8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2643d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2643dc: 0xac6400a0  sw          $a0, 0xA0($v1)
    ctx->pc = 0x2643dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 4));
    // 0x2643e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2643e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2643e4: 0x0  nop
    ctx->pc = 0x2643e4u;
    // NOP
label_2643e8:
    // 0x2643e8: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x2643e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2643ec: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2643ECu;
    {
        const bool branch_taken_0x2643ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2643ec) {
            ctx->pc = 0x2643D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2643d0;
        }
    }
    ctx->pc = 0x2643F4u;
    // 0x2643f4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2643f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2643f8: 0x8c631a14  lw          $v1, 0x1A14($v1)
    ctx->pc = 0x2643f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6676)));
    // 0x2643fc: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x2643fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x264400: 0x10600165  beqz        $v1, . + 4 + (0x165 << 2)
    ctx->pc = 0x264400u;
    {
        const bool branch_taken_0x264400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x264400) {
            ctx->pc = 0x264998u;
            goto label_264998;
        }
    }
    ctx->pc = 0x264408u;
    // 0x264408: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x264408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26440c: 0x8c631a14  lw          $v1, 0x1A14($v1)
    ctx->pc = 0x26440cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6676)));
    // 0x264410: 0x8c7e0048  lw          $fp, 0x48($v1)
    ctx->pc = 0x264410u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x264414: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x264414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x264418: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x264418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x26441c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x26441cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x264420: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264424: 0xa023e651  sb          $v1, -0x19AF($at)
    ctx->pc = 0x264424u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E651u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E651u, _value); } while (0);
    // 0x264428: 0x27d20004  addiu       $s2, $fp, 0x4
    ctx->pc = 0x264428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x26442c: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x26442cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x264430: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x264430u;
    {
        const bool branch_taken_0x264430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264430) {
            ctx->pc = 0x264948u;
            goto label_264948;
        }
    }
    ctx->pc = 0x264438u;
label_264438:
    // 0x264438: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x264438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26443c: 0x8c420a68  lw          $v0, 0xA68($v0)
    ctx->pc = 0x26443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x264440: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x264440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x264444: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x264444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x264448: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x264448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26444c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x26444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x264450: 0xac430a68  sw          $v1, 0xA68($v0)
    ctx->pc = 0x264450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2664), GPR_U32(ctx, 3));
    // 0x264454: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x264454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x264458: 0x8c510a68  lw          $s1, 0xA68($v0)
    ctx->pc = 0x264458u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x26445c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x26445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x264460: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x264460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x264464: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x264464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x264468: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x264468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x26446c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26446cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264470: 0xac511390  sw          $s1, 0x1390($v0)
    ctx->pc = 0x264470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5008), GPR_U32(ctx, 17));
    // 0x264474: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x264474u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x264478: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x264478u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26447c: 0x24061350  addiu       $a2, $zero, 0x1350
    ctx->pc = 0x26447cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4944));
    // 0x264480: 0xc046314  jal         func_118C50
    ctx->pc = 0x264480u;
    SET_GPR_U32(ctx, 31, 0x264488u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x264488u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x264488u) { return; }
    ctx->pc = 0x264488u;
label_264488:
    // 0x264488: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x264488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26448c: 0x24430a68  addiu       $v1, $v0, 0xA68
    ctx->pc = 0x26448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2664));
    // 0x264490: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264494: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x264494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x264498: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x264498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x26449c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x26449cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2644a0: 0xc09909c  jal         func_264270
    ctx->pc = 0x2644A0u;
    SET_GPR_U32(ctx, 31, 0x2644A8u);
    ctx->pc = 0x264270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264270u, 0x2644A0u, 0x2644A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2644A8u;
label_2644a8:
    // 0x2644a8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2644a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2644ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2644acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2644b0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2644B0u;
    {
        const bool branch_taken_0x2644b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2644b0) {
            ctx->pc = 0x2644C4u;
            goto label_2644c4;
        }
    }
    ctx->pc = 0x2644B8u;
    // 0x2644b8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2644b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2644bc: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x2644BCu;
    {
        const bool branch_taken_0x2644bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2644bc) {
            ctx->pc = 0x264938u;
            goto label_264938;
        }
    }
    ctx->pc = 0x2644C4u;
label_2644c4:
    // 0x2644c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2644c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2644c8: 0x3c3b821  addu        $s7, $fp, $v1
    ctx->pc = 0x2644c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2644cc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2644ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2644d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2644d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2644d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2644d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2644d8: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2644D8u;
    {
        const bool branch_taken_0x2644d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2644d8) {
            ctx->pc = 0x2644F4u;
            goto label_2644f4;
        }
    }
    ctx->pc = 0x2644E0u;
    // 0x2644e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2644e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2644e4: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x2644e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2644e8: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x2644e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x2644ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2644ECu;
    {
        const bool branch_taken_0x2644ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2644ec) {
            ctx->pc = 0x264500u;
            goto label_264500;
        }
    }
    ctx->pc = 0x2644F4u;
label_2644f4:
    // 0x2644f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2644f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2644f8: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x2644f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x2644fc: 0x0  nop
    ctx->pc = 0x2644fcu;
    // NOP
label_264500:
    // 0x264500: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x264500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x264504: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x264504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264508: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26450c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26450Cu;
    {
        const bool branch_taken_0x26450c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26450c) {
            ctx->pc = 0x264528u;
            goto label_264528;
        }
    }
    ctx->pc = 0x264514u;
    // 0x264514: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x264514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264518: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x264518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x26451c: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x26451cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x264520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264520u;
    {
        const bool branch_taken_0x264520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264520) {
            ctx->pc = 0x264530u;
            goto label_264530;
        }
    }
    ctx->pc = 0x264528u;
label_264528:
    // 0x264528: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26452c: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x26452cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
label_264530:
    // 0x264530: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x264530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x264534: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x264534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264538: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26453c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26453Cu;
    {
        const bool branch_taken_0x26453c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26453c) {
            ctx->pc = 0x264558u;
            goto label_264558;
        }
    }
    ctx->pc = 0x264544u;
    // 0x264544: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x264544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264548: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x264548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x26454c: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x26454cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x264550: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264550u;
    {
        const bool branch_taken_0x264550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264550) {
            ctx->pc = 0x264560u;
            goto label_264560;
        }
    }
    ctx->pc = 0x264558u;
label_264558:
    // 0x264558: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26455c: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x26455cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
label_264560:
    // 0x264560: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x264560u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x264564: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x264564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264568: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26456c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26456Cu;
    {
        const bool branch_taken_0x26456c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26456c) {
            ctx->pc = 0x264588u;
            goto label_264588;
        }
    }
    ctx->pc = 0x264574u;
    // 0x264574: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x264574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264578: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x264578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x26457c: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x26457cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x264580: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264580u;
    {
        const bool branch_taken_0x264580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264580) {
            ctx->pc = 0x264590u;
            goto label_264590;
        }
    }
    ctx->pc = 0x264588u;
label_264588:
    // 0x264588: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26458c: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x26458cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
label_264590:
    // 0x264590: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x264590u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x264594: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x264594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264598: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26459c: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x26459Cu;
    {
        const bool branch_taken_0x26459c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26459c) {
            ctx->pc = 0x2645F8u;
            goto label_2645f8;
        }
    }
    ctx->pc = 0x2645A4u;
    // 0x2645a4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2645a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2645a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2645a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2645ac: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2645acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2645b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2645b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2645b4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2645B4u;
    {
        const bool branch_taken_0x2645b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2645b4) {
            ctx->pc = 0x2645C4u;
            goto label_2645c4;
        }
    }
    ctx->pc = 0x2645BCu;
    // 0x2645bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2645BCu;
    {
        const bool branch_taken_0x2645bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2645bc) {
            ctx->pc = 0x2645E4u;
            goto label_2645e4;
        }
    }
    ctx->pc = 0x2645C4u;
label_2645c4:
    // 0x2645c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2645c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2645c8: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x2645c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x2645cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2645ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2645d0: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x2645d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x2645d4: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x2645d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2645d8: 0xae231244  sw          $v1, 0x1244($s1)
    ctx->pc = 0x2645d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4676), GPR_U32(ctx, 3));
    // 0x2645dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2645DCu;
    {
        const bool branch_taken_0x2645dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2645dc) {
            ctx->pc = 0x264600u;
            goto label_264600;
        }
    }
    ctx->pc = 0x2645E4u;
label_2645e4:
    // 0x2645e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2645e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2645e8: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x2645e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2645ec: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x2645ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x2645f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2645F0u;
    {
        const bool branch_taken_0x2645f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2645f0) {
            ctx->pc = 0x264600u;
            goto label_264600;
        }
    }
    ctx->pc = 0x2645F8u;
label_2645f8:
    // 0x2645f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2645f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2645fc: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x2645fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_264600:
    // 0x264600: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x264600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x264604: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x264604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264608: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26460c: 0x10830089  beq         $a0, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x26460Cu;
    {
        const bool branch_taken_0x26460c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26460c) {
            ctx->pc = 0x264834u;
            goto label_264834;
        }
    }
    ctx->pc = 0x264614u;
    // 0x264614: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x264614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264618: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x264618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x26461c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x26461cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x264620: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x264620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x264624: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x264624u;
    {
        const bool branch_taken_0x264624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264624) {
            ctx->pc = 0x2646C4u;
            goto label_2646c4;
        }
    }
    ctx->pc = 0x26462Cu;
    // 0x26462c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x26462cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x264630: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264630u;
    {
        const bool branch_taken_0x264630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264630) {
            ctx->pc = 0x264640u;
            goto label_264640;
        }
    }
    ctx->pc = 0x264638u;
    // 0x264638: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x264638u;
    {
        const bool branch_taken_0x264638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264638) {
            ctx->pc = 0x264718u;
            goto label_264718;
        }
    }
    ctx->pc = 0x264640u;
label_264640:
    // 0x264640: 0x8e23133c  lw          $v1, 0x133C($s1)
    ctx->pc = 0x264640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x264644: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x264644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x264648: 0xae23133c  sw          $v1, 0x133C($s1)
    ctx->pc = 0x264648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4924), GPR_U32(ctx, 3));
    // 0x26464c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x26464cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x264650: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x264650u;
    {
        const bool branch_taken_0x264650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264650) {
            ctx->pc = 0x264688u;
            goto label_264688;
        }
    }
    ctx->pc = 0x264658u;
label_264658:
    // 0x264658: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x264658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26465c: 0x2207c  dsll32      $a0, $v0, 1
    ctx->pc = 0x26465cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 1));
    // 0x264660: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x264660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x264664: 0xc076744  jal         func_1D9D10
    ctx->pc = 0x264664u;
    SET_GPR_U32(ctx, 31, 0x26466Cu);
    ctx->pc = 0x1D9D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D10u, 0x264664u, 0x26466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26466Cu;
label_26466c:
    // 0x26466c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x26466cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x264670: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x264670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x264674: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x264674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x264678: 0xac64124c  sw          $a0, 0x124C($v1)
    ctx->pc = 0x264678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4684), GPR_U32(ctx, 4));
    // 0x26467c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x26467cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x264680: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x264680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x264684: 0x0  nop
    ctx->pc = 0x264684u;
    // NOP
label_264688:
    // 0x264688: 0x92e30002  lbu         $v1, 0x2($s7)
    ctx->pc = 0x264688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x26468c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x26468cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x264690: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x264690u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x264694: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x264694u;
    {
        const bool branch_taken_0x264694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264694) {
            ctx->pc = 0x264658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264658;
        }
    }
    ctx->pc = 0x26469Cu;
    // 0x26469c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2646a0: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x2646a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x2646a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2646a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2646a8: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x2646a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x2646ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2646acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2646b0: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x2646b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
    // 0x2646b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2646b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2646b8: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x2646b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x2646bc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2646BCu;
    {
        const bool branch_taken_0x2646bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2646bc) {
            ctx->pc = 0x264870u;
            goto label_264870;
        }
    }
    ctx->pc = 0x2646C4u;
label_2646c4:
    // 0x2646c4: 0x8e23133c  lw          $v1, 0x133C($s1)
    ctx->pc = 0x2646c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x2646c8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2646c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2646cc: 0xae23133c  sw          $v1, 0x133C($s1)
    ctx->pc = 0x2646ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4924), GPR_U32(ctx, 3));
    // 0x2646d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2646d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2646d4: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x2646d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x2646d8: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x2646d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x2646dc: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x2646dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2646e0: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x2646e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x2646e4: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x2646e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2646e8: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x2646e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x2646ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2646ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2646f0: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x2646f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x2646f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2646f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2646f8: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x2646f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
    // 0x2646fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2646fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264700: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x264700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x264704: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264708: 0xae23124c  sw          $v1, 0x124C($s1)
    ctx->pc = 0x264708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4684), GPR_U32(ctx, 3));
    // 0x26470c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x26470cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x264710: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x264710u;
    {
        const bool branch_taken_0x264710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264710) {
            ctx->pc = 0x264870u;
            goto label_264870;
        }
    }
    ctx->pc = 0x264718u;
label_264718:
    // 0x264718: 0x8e23133c  lw          $v1, 0x133C($s1)
    ctx->pc = 0x264718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x26471c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x26471cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x264720: 0xae23133c  sw          $v1, 0x133C($s1)
    ctx->pc = 0x264720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4924), GPR_U32(ctx, 3));
    // 0x264724: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x264724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264728: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x264728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x26472c: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x26472cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x264730: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x264730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x264734: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x264734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x264738: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x264738u;
    {
        const bool branch_taken_0x264738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264738) {
            ctx->pc = 0x264800u;
            goto label_264800;
        }
    }
    ctx->pc = 0x264740u;
    // 0x264740: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x264740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x264744: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x264744u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x264748: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x264748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x26474c: 0x72a03e28  paddub      $a3, $s5, $zero
    ctx->pc = 0x26474cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x264750: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x264750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x264754: 0xc05e858  jal         func_17A160
    ctx->pc = 0x264754u;
    SET_GPR_U32(ctx, 31, 0x26475Cu);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x264754u, 0x26475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26475Cu;
label_26475c:
    // 0x26475c: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x26475cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x264760: 0xc05e964  jal         func_17A590
    ctx->pc = 0x264760u;
    SET_GPR_U32(ctx, 31, 0x264768u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x264760u, 0x264768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264768u;
label_264768:
    // 0x264768: 0xafb400e8  sw          $s4, 0xE8($sp)
    ctx->pc = 0x264768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 20));
    // 0x26476c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x26476cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x264770: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x264770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
    // 0x264774: 0xafb50118  sw          $s5, 0x118($sp)
    ctx->pc = 0x264774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 21));
    // 0x264778: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x264778u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26477c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26477Cu;
    {
        const bool branch_taken_0x26477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26477c) {
            ctx->pc = 0x2647B0u;
            goto label_2647b0;
        }
    }
    ctx->pc = 0x264784u;
label_264784:
    // 0x264784: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x264784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x264788: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x264788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26478c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264790: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x264790u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x264794: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x264794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x264798: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x264798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x26479c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26479cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2647a0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2647a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2647a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2647a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2647a8: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x2647a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2647ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2647acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2647b0:
    // 0x2647b0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2647b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2647b4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2647b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2647b8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2647b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2647bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2647bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2647c0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x2647c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x2647c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2647c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2647c8: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x2647c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2647cc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2647ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2647d0: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x2647d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2647d4: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2647D4u;
    {
        const bool branch_taken_0x2647d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2647d4) {
            ctx->pc = 0x264784u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264784;
        }
    }
    ctx->pc = 0x2647DCu;
    // 0x2647dc: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x2647dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2647e0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2647e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2647e4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2647e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2647e8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2647e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2647ec: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x2647ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x2647f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2647f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2647f4: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x2647f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2647f8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2647f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2647fc: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x2647fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_264800:
    // 0x264800: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x264800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x264804: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x264804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
    // 0x264808: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x264808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x26480c: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x26480cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x264810: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264814: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x264814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x264818: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x264818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x26481c: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x26481cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
    // 0x264820: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x264820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x264824: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x264824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x264828: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x264828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x26482c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26482Cu;
    {
        const bool branch_taken_0x26482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26482c) {
            ctx->pc = 0x264870u;
            goto label_264870;
        }
    }
    ctx->pc = 0x264834u;
label_264834:
    // 0x264834: 0x8e23133c  lw          $v1, 0x133C($s1)
    ctx->pc = 0x264834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4924)));
    // 0x264838: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x264838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x26483c: 0xae23133c  sw          $v1, 0x133C($s1)
    ctx->pc = 0x26483cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4924), GPR_U32(ctx, 3));
    // 0x264840: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264844: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x264844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x264848: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26484c: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x26484cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x264850: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264854: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x264854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
    // 0x264858: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26485c: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x26485cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x264860: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264864: 0xae23124c  sw          $v1, 0x124C($s1)
    ctx->pc = 0x264864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4684), GPR_U32(ctx, 3));
    // 0x264868: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x264868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x26486c: 0x0  nop
    ctx->pc = 0x26486cu;
    // NOP
label_264870:
    // 0x264870: 0xae37005c  sw          $s7, 0x5C($s1)
    ctx->pc = 0x264870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 23));
    // 0x264874: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x264874u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264878: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x264878u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26487c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26487Cu;
    {
        const bool branch_taken_0x26487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26487c) {
            ctx->pc = 0x2648B0u;
            goto label_2648b0;
        }
    }
    ctx->pc = 0x264884u;
label_264884:
    // 0x264884: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x264884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x264888: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x264888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x26488c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x26488cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x264890: 0x8c6300a0  lw          $v1, 0xA0($v1)
    ctx->pc = 0x264890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x264894: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264894u;
    {
        const bool branch_taken_0x264894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x264894) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x26489Cu;
    // 0x26489c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x26489cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2648a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2648A0u;
    {
        const bool branch_taken_0x2648a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648a0) {
            ctx->pc = 0x2648C0u;
            goto label_2648c0;
        }
    }
    ctx->pc = 0x2648A8u;
label_2648a8:
    // 0x2648a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2648a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2648ac: 0x0  nop
    ctx->pc = 0x2648acu;
    // NOP
label_2648b0:
    // 0x2648b0: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x2648b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2648b4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2648B4u;
    {
        const bool branch_taken_0x2648b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2648b4) {
            ctx->pc = 0x264884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264884;
        }
    }
    ctx->pc = 0x2648BCu;
    // 0x2648bc: 0x0  nop
    ctx->pc = 0x2648bcu;
    // NOP
label_2648c0:
    // 0x2648c0: 0x12c00019  beqz        $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x2648C0u;
    {
        const bool branch_taken_0x2648c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648c0) {
            ctx->pc = 0x264928u;
            goto label_264928;
        }
    }
    ctx->pc = 0x2648C8u;
    // 0x2648c8: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2648c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2648cc: 0xc07675c  jal         func_1D9D70
    ctx->pc = 0x2648CCu;
    SET_GPR_U32(ctx, 31, 0x2648D4u);
    ctx->pc = 0x1D9D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D70u, 0x2648CCu, 0x2648D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2648D4u;
label_2648d4:
    // 0x2648d4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2648d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2648d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2648D8u;
    {
        const bool branch_taken_0x2648d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648d8) {
            ctx->pc = 0x264918u;
            goto label_264918;
        }
    }
    ctx->pc = 0x2648E0u;
label_2648e0:
    // 0x2648e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2648e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2648e4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2648e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2648e8: 0x8c6400a0  lw          $a0, 0xA0($v1)
    ctx->pc = 0x2648e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x2648ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2648ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2648f0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2648F0u;
    {
        const bool branch_taken_0x2648f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2648f0) {
            ctx->pc = 0x264910u;
            goto label_264910;
        }
    }
    ctx->pc = 0x2648F8u;
    // 0x2648f8: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2648f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2648fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2648fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x264900: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x264900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x264904: 0xac6400a0  sw          $a0, 0xA0($v1)
    ctx->pc = 0x264904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 4));
    // 0x264908: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264908u;
    {
        const bool branch_taken_0x264908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264908) {
            ctx->pc = 0x264928u;
            goto label_264928;
        }
    }
    ctx->pc = 0x264910u;
label_264910:
    // 0x264910: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x264910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x264914: 0x0  nop
    ctx->pc = 0x264914u;
    // NOP
label_264918:
    // 0x264918: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x264918u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x26491c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x26491Cu;
    {
        const bool branch_taken_0x26491c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26491c) {
            ctx->pc = 0x2648E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2648e0;
        }
    }
    ctx->pc = 0x264924u;
    // 0x264924: 0x0  nop
    ctx->pc = 0x264924u;
    // NOP
label_264928:
    // 0x264928: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x264928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26492c: 0xae230368  sw          $v1, 0x368($s1)
    ctx->pc = 0x26492cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 3));
    // 0x264930: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x264930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x264934: 0xae231240  sw          $v1, 0x1240($s1)
    ctx->pc = 0x264934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4672), GPR_U32(ctx, 3));
label_264938:
    // 0x264938: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x264938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x26493c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26493cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x264940: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x264940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x264944: 0x0  nop
    ctx->pc = 0x264944u;
    // NOP
label_264948:
    // 0x264948: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x264948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x26494c: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x26494cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x264950: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x264950u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x264954: 0x1460feb8  bnez        $v1, . + 4 + (-0x148 << 2)
    ctx->pc = 0x264954u;
    {
        const bool branch_taken_0x264954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264954) {
            ctx->pc = 0x264438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264438;
        }
    }
    ctx->pc = 0x26495Cu;
    // 0x26495c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26495cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264960: 0xac34e680  sw          $s4, -0x1980($at)
    ctx->pc = 0x264960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x61E680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E680u, _value); } while (0);
    // 0x264964: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264968: 0xac35e67c  sw          $s5, -0x1984($at)
    ctx->pc = 0x264968u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x61E67Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E67Cu, _value); } while (0);
    // 0x26496c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26496cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264970: 0x9023e650  lbu         $v1, -0x19B0($at)
    ctx->pc = 0x264970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E650u));
    // 0x264974: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264978: 0xa023e652  sb          $v1, -0x19AE($at)
    ctx->pc = 0x264978u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E652u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E652u, _value); } while (0);
    // 0x26497c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26497cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264980: 0x9024e650  lbu         $a0, -0x19B0($at)
    ctx->pc = 0x264980u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x61E650u));
    // 0x264984: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264988: 0x9023e651  lbu         $v1, -0x19AF($at)
    ctx->pc = 0x264988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61E651u));
    // 0x26498c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26498cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x264990: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x264990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x264994: 0xa023e650  sb          $v1, -0x19B0($at)
    ctx->pc = 0x264994u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E650u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x61E650u, _value); } while (0);
label_264998:
    // 0x264998: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x264998u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26499c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26499cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2649a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2649a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2649a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2649a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2649a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2649a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2649ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2649acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2649b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2649b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2649b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2649b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2649b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2649b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2649bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2649bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2649c0: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x2649c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2649c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2649C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2649C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2649CCu;
}
