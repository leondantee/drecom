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

// Function: Om_def_set
// Address: 0x265850 - 0x265e50
void Om_def_set_0x265850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_def_set_0x265850");
#endif

    switch (ctx->pc) {
        case 0x2658f0u: goto label_2658f0;
        case 0x265924u: goto label_265924;
        case 0x265974u: goto label_265974;
        case 0x265994u: goto label_265994;
        case 0x2659c8u: goto label_2659c8;
        case 0x265b60u: goto label_265b60;
        case 0x265b74u: goto label_265b74;
        case 0x265c60u: goto label_265c60;
        case 0x265c6cu: goto label_265c6c;
        case 0x265cb4u: goto label_265cb4;
        case 0x265db8u: goto label_265db8;
        default: break;
    }

    ctx->pc = 0x265850u;

    // 0x265850: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x265850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x265854: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x265854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x265858: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x265858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x26585c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26585cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x265860: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x265860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x265864: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x265864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x265868: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x265868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26586c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26586cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x265870: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x265870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x265874: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x265878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x265878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26587c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x26587cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x265880: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x265880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x265884: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x265884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x265888: 0x24140090  addiu       $s4, $zero, 0x90
    ctx->pc = 0x265888u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x26588c: 0x24021800  addiu       $v0, $zero, 0x1800
    ctx->pc = 0x26588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x265890: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x265890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x265894: 0x24150058  addiu       $s5, $zero, 0x58
    ctx->pc = 0x265894u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x265898: 0x24021800  addiu       $v0, $zero, 0x1800
    ctx->pc = 0x265898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x26589c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x26589cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2658a0: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x2658a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2658a4: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x2658a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x2658a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2658a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2658ac: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x2658acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x2658b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2658b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2658b4: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x2658b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x2658b8: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x2658b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2658bc: 0x8c420a68  lw          $v0, 0xA68($v0)
    ctx->pc = 0x2658bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x2658c0: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x2658c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2658c4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2658c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2658c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2658c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2658cc: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x2658ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2658d0: 0xac430a68  sw          $v1, 0xA68($v0)
    ctx->pc = 0x2658d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2664), GPR_U32(ctx, 3));
    // 0x2658d4: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x2658d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2658d8: 0x8c570a68  lw          $s7, 0xA68($v0)
    ctx->pc = 0x2658d8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x2658dc: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x2658dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2658e0: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x2658e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x2658e4: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x2658e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x2658e8: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x2658E8u;
    SET_GPR_U32(ctx, 31, 0x2658F0u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x2658E8u, 0x2658F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2658F0u;
label_2658f0:
    // 0x2658f0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2658f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2658f4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2658f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2658f8: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x2658f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x2658fc: 0x26f10004  addiu       $s1, $s7, 0x4
    ctx->pc = 0x2658fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x265900: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x265900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x265904: 0x24650a68  addiu       $a1, $v1, 0xA68
    ctx->pc = 0x265904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2664));
    // 0x265908: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x265908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26590c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x26590cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x265910: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x265910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x265914: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x265914u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x265918: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x265918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x26591c: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x26591Cu;
    {
        const bool branch_taken_0x26591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26591c) {
            ctx->pc = 0x265DE0u;
            goto label_265de0;
        }
    }
    ctx->pc = 0x265924u;
label_265924:
    // 0x265924: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x265924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x265928: 0x8c420a68  lw          $v0, 0xA68($v0)
    ctx->pc = 0x265928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x26592c: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x26592cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x265930: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x265930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x265934: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x265934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x265938: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x265938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x26593c: 0xac430a68  sw          $v1, 0xA68($v0)
    ctx->pc = 0x26593cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2664), GPR_U32(ctx, 3));
    // 0x265940: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x265940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x265944: 0x8c500a68  lw          $s0, 0xA68($v0)
    ctx->pc = 0x265944u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x265948: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x265948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x26594c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26594cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265950: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x265950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x265954: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x265954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x265958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26595c: 0xac501590  sw          $s0, 0x1590($v0)
    ctx->pc = 0x26595cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5520), GPR_U32(ctx, 16));
    // 0x265960: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265960u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x265964: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x265964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x265968: 0x24061350  addiu       $a2, $zero, 0x1350
    ctx->pc = 0x265968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4944));
    // 0x26596c: 0xc046314  jal         func_118C50
    ctx->pc = 0x26596Cu;
    SET_GPR_U32(ctx, 31, 0x265974u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x265974u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x265974u) { return; }
    ctx->pc = 0x265974u;
label_265974:
    // 0x265974: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x265974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x265978: 0x24430a68  addiu       $v1, $v0, 0xA68
    ctx->pc = 0x265978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2664));
    // 0x26597c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265980: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x265980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x265984: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x265984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x265988: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265988u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x26598c: 0xc09909c  jal         func_264270
    ctx->pc = 0x26598Cu;
    SET_GPR_U32(ctx, 31, 0x265994u);
    ctx->pc = 0x264270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264270u, 0x26598Cu, 0x265994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265994u;
label_265994:
    // 0x265994: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x265994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x265998: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x265998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26599c: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x26599cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x2659a0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x2659a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2659a4: 0x300200ff  andi        $v0, $zero, 0xFF
    ctx->pc = 0x2659a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x2659a8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x2659a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2659ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2659acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2659b0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2659b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2659b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2659b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2659b8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2659b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2659bc: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x2659bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2659c0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2659C0u;
    SET_GPR_U32(ctx, 31, 0x2659C8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2659C0u, 0x2659C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2659C8u;
label_2659c8:
    // 0x2659c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2659c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2659cc: 0xa60310a6  sh          $v1, 0x10A6($s0)
    ctx->pc = 0x2659ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x2659d0: 0xa2001219  sb          $zero, 0x1219($s0)
    ctx->pc = 0x2659d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4633), (uint8_t)GPR_U32(ctx, 0));
    // 0x2659d4: 0xae00121c  sw          $zero, 0x121C($s0)
    ctx->pc = 0x2659d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4636), GPR_U32(ctx, 0));
    // 0x2659d8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x2659d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2659dc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2659dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2659e0: 0x2463b898  addiu       $v1, $v1, -0x4768
    ctx->pc = 0x2659e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949016));
    // 0x2659e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2659e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2659e8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2659e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2659ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2659ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2659f0: 0xae031338  sw          $v1, 0x1338($s0)
    ctx->pc = 0x2659f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4920), GPR_U32(ctx, 3));
    // 0x2659f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2659f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2659f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2659f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2659fc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2659FCu;
    {
        const bool branch_taken_0x2659fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2659fc) {
            ctx->pc = 0x265A10u;
            goto label_265a10;
        }
    }
    ctx->pc = 0x265A04u;
    // 0x265a04: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265a08: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x265A08u;
    {
        const bool branch_taken_0x265a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265a08) {
            ctx->pc = 0x265DD0u;
            goto label_265dd0;
        }
    }
    ctx->pc = 0x265A10u;
label_265a10:
    // 0x265a10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x265a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265a14: 0x2e3b021  addu        $s6, $s7, $v1
    ctx->pc = 0x265a14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265a18: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265a1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265a20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265a24: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x265A24u;
    {
        const bool branch_taken_0x265a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265a24) {
            ctx->pc = 0x265A40u;
            goto label_265a40;
        }
    }
    ctx->pc = 0x265A2Cu;
    // 0x265a2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x265a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265a30: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x265a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265a34: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x265a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x265a38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265A38u;
    {
        const bool branch_taken_0x265a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265a38) {
            ctx->pc = 0x265A48u;
            goto label_265a48;
        }
    }
    ctx->pc = 0x265A40u;
label_265a40:
    // 0x265a40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265a44: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x265a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
label_265a48:
    // 0x265a48: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265a48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265a4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265a50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265a54: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x265A54u;
    {
        const bool branch_taken_0x265a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265a54) {
            ctx->pc = 0x265A70u;
            goto label_265a70;
        }
    }
    ctx->pc = 0x265A5Cu;
    // 0x265a5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x265a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265a60: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x265a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265a64: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x265a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x265a68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265A68u;
    {
        const bool branch_taken_0x265a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265a68) {
            ctx->pc = 0x265A78u;
            goto label_265a78;
        }
    }
    ctx->pc = 0x265A70u;
label_265a70:
    // 0x265a70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265a74: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x265a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_265a78:
    // 0x265a78: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265a7c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265a80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265a84: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x265A84u;
    {
        const bool branch_taken_0x265a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265a84) {
            ctx->pc = 0x265AA0u;
            goto label_265aa0;
        }
    }
    ctx->pc = 0x265A8Cu;
    // 0x265a8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x265a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265a90: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x265a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265a94: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x265a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x265a98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265A98u;
    {
        const bool branch_taken_0x265a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265a98) {
            ctx->pc = 0x265AA8u;
            goto label_265aa8;
        }
    }
    ctx->pc = 0x265AA0u;
label_265aa0:
    // 0x265aa0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265aa4: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x265aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
label_265aa8:
    // 0x265aa8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265aac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265ab0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265ab4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x265AB4u;
    {
        const bool branch_taken_0x265ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265ab4) {
            ctx->pc = 0x265AD0u;
            goto label_265ad0;
        }
    }
    ctx->pc = 0x265ABCu;
    // 0x265abc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x265abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265ac0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x265ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265ac4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x265ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x265ac8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265AC8u;
    {
        const bool branch_taken_0x265ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265ac8) {
            ctx->pc = 0x265AD8u;
            goto label_265ad8;
        }
    }
    ctx->pc = 0x265AD0u;
label_265ad0:
    // 0x265ad0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265ad4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x265ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_265ad8:
    // 0x265ad8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265adc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265ae0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265ae4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x265AE4u;
    {
        const bool branch_taken_0x265ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265ae4) {
            ctx->pc = 0x265B00u;
            goto label_265b00;
        }
    }
    ctx->pc = 0x265AECu;
    // 0x265aec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x265aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265af0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x265af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265af4: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x265af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x265af8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265AF8u;
    {
        const bool branch_taken_0x265af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265af8) {
            ctx->pc = 0x265B08u;
            goto label_265b08;
        }
    }
    ctx->pc = 0x265B00u;
label_265b00:
    // 0x265b00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265b04: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x265b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_265b08:
    // 0x265b08: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265b0c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265b10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265b14: 0x10830091  beq         $a0, $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x265B14u;
    {
        const bool branch_taken_0x265b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265b14) {
            ctx->pc = 0x265D5Cu;
            goto label_265d5c;
        }
    }
    ctx->pc = 0x265B1Cu;
    // 0x265b1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x265b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265b20: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x265b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x265b24: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x265b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x265b28: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x265b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x265b2c: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x265B2Cu;
    {
        const bool branch_taken_0x265b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265b2c) {
            ctx->pc = 0x265BCCu;
            goto label_265bcc;
        }
    }
    ctx->pc = 0x265B34u;
    // 0x265b34: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x265b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x265b38: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x265B38u;
    {
        const bool branch_taken_0x265b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265b38) {
            ctx->pc = 0x265B48u;
            goto label_265b48;
        }
    }
    ctx->pc = 0x265B40u;
    // 0x265b40: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x265B40u;
    {
        const bool branch_taken_0x265b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265b40) {
            ctx->pc = 0x265C18u;
            goto label_265c18;
        }
    }
    ctx->pc = 0x265B48u;
label_265b48:
    // 0x265b48: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x265b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x265b4c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x265b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x265b50: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x265b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x265b54: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x265b54u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x265b58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x265B58u;
    {
        const bool branch_taken_0x265b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265b58) {
            ctx->pc = 0x265B90u;
            goto label_265b90;
        }
    }
    ctx->pc = 0x265B60u;
label_265b60:
    // 0x265b60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x265b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265b64: 0x2207c  dsll32      $a0, $v0, 1
    ctx->pc = 0x265b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 1));
    // 0x265b68: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x265b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x265b6c: 0xc076744  jal         func_1D9D10
    ctx->pc = 0x265B6Cu;
    SET_GPR_U32(ctx, 31, 0x265B74u);
    ctx->pc = 0x1D9D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D10u, 0x265B6Cu, 0x265B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265B74u;
label_265b74:
    // 0x265b74: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x265b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x265b78: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x265b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x265b7c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x265b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x265b80: 0xac64124c  sw          $a0, 0x124C($v1)
    ctx->pc = 0x265b80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4684), GPR_U32(ctx, 4));
    // 0x265b84: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265b84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265b88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x265b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x265b8c: 0x0  nop
    ctx->pc = 0x265b8cu;
    // NOP
label_265b90:
    // 0x265b90: 0x92c30002  lbu         $v1, 0x2($s6)
    ctx->pc = 0x265b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x265b94: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x265b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x265b98: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x265b98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x265b9c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x265B9Cu;
    {
        const bool branch_taken_0x265b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265b9c) {
            ctx->pc = 0x265B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265b60;
        }
    }
    ctx->pc = 0x265BA4u;
    // 0x265ba4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265ba8: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x265ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x265bac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265bb0: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x265bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x265bb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265bb8: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x265bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x265bbc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265bc0: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x265bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x265bc4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x265BC4u;
    {
        const bool branch_taken_0x265bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265bc4) {
            ctx->pc = 0x265D98u;
            goto label_265d98;
        }
    }
    ctx->pc = 0x265BCCu;
label_265bcc:
    // 0x265bcc: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x265bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x265bd0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x265bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x265bd4: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x265bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x265bd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x265bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265bdc: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x265bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x265be0: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x265be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x265be4: 0x2e3f021  addu        $fp, $s7, $v1
    ctx->pc = 0x265be4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265be8: 0xae1e009c  sw          $fp, 0x9C($s0)
    ctx->pc = 0x265be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 30));
    // 0x265bec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265bf0: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x265bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x265bf4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265bf8: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x265bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x265bfc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265c00: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x265c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x265c04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265c08: 0xae03124c  sw          $v1, 0x124C($s0)
    ctx->pc = 0x265c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4684), GPR_U32(ctx, 3));
    // 0x265c0c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265c10: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x265C10u;
    {
        const bool branch_taken_0x265c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265c10) {
            ctx->pc = 0x265D98u;
            goto label_265d98;
        }
    }
    ctx->pc = 0x265C18u;
label_265c18:
    // 0x265c18: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x265c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x265c1c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x265c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x265c20: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x265c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x265c24: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x265c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x265c28: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x265c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x265c2c: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x265c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x265c30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x265c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265c34: 0x2e3f021  addu        $fp, $s7, $v1
    ctx->pc = 0x265c34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265c38: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x265c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x265c3c: 0x107e003c  beq         $v1, $fp, . + 4 + (0x3C << 2)
    ctx->pc = 0x265C3Cu;
    {
        const bool branch_taken_0x265c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x265c3c) {
            ctx->pc = 0x265D30u;
            goto label_265d30;
        }
    }
    ctx->pc = 0x265C44u;
    // 0x265c44: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x265c44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x265c48: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x265c48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x265c4c: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x265c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x265c50: 0x72a03e28  paddub      $a3, $s5, $zero
    ctx->pc = 0x265c50u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x265c54: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x265c54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x265c58: 0xc05e858  jal         func_17A160
    ctx->pc = 0x265C58u;
    SET_GPR_U32(ctx, 31, 0x265C60u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x265C58u, 0x265C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C60u;
label_265c60:
    // 0x265c60: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x265c60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x265c64: 0xc05e964  jal         func_17A590
    ctx->pc = 0x265C64u;
    SET_GPR_U32(ctx, 31, 0x265C6Cu);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x265C64u, 0x265C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265C6Cu;
label_265c6c:
    // 0x265c6c: 0xafb400d4  sw          $s4, 0xD4($sp)
    ctx->pc = 0x265c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 20));
    // 0x265c70: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x265c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x265c74: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x265c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x265c78: 0xafb500c4  sw          $s5, 0xC4($sp)
    ctx->pc = 0x265c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 21));
    // 0x265c7c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x265c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x265c80: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x265c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x265c84: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x265c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x265c88: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x265c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x265c8c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x265c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x265c90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265c94: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x265c94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x265c98: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x265c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x265c9c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x265c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x265ca0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265ca4: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x265ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x265ca8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x265ca8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x265cac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x265CACu;
    {
        const bool branch_taken_0x265cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265cac) {
            ctx->pc = 0x265CE0u;
            goto label_265ce0;
        }
    }
    ctx->pc = 0x265CB4u;
label_265cb4:
    // 0x265cb4: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x265cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x265cb8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x265cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x265cbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265cc0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x265cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x265cc4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x265cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x265cc8: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x265cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x265ccc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265cd0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x265cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x265cd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x265cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x265cd8: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x265cd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x265cdc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x265cdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_265ce0:
    // 0x265ce0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x265ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x265ce4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x265ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x265ce8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x265ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x265cec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x265cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x265cf0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x265cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x265cf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265cf8: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x265cf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x265cfc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x265cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x265d00: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x265d00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x265d04: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x265D04u;
    {
        const bool branch_taken_0x265d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265d04) {
            ctx->pc = 0x265CB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265cb4;
        }
    }
    ctx->pc = 0x265D0Cu;
    // 0x265d0c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x265d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x265d10: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x265d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x265d14: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x265d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x265d18: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x265d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x265d1c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x265d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x265d20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x265d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265d24: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x265d24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x265d28: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x265d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x265d2c: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x265d2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_265d30:
    // 0x265d30: 0xafbe00c8  sw          $fp, 0xC8($sp)
    ctx->pc = 0x265d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 30));
    // 0x265d34: 0xae1e009c  sw          $fp, 0x9C($s0)
    ctx->pc = 0x265d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 30));
    // 0x265d38: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x265d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x265d3c: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x265d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x265d40: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x265d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x265d44: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x265d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x265d48: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x265d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x265d4c: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x265d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x265d50: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265d54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x265D54u;
    {
        const bool branch_taken_0x265d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265d54) {
            ctx->pc = 0x265D98u;
            goto label_265d98;
        }
    }
    ctx->pc = 0x265D5Cu;
label_265d5c:
    // 0x265d5c: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x265d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x265d60: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x265d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x265d64: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x265d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x265d68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265d6c: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x265d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x265d70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265d74: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x265d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x265d78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265d7c: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x265d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x265d80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265d84: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x265d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x265d88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265d8c: 0xae03124c  sw          $v1, 0x124C($s0)
    ctx->pc = 0x265d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4684), GPR_U32(ctx, 3));
    // 0x265d90: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265d90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265d94: 0x0  nop
    ctx->pc = 0x265d94u;
    // NOP
label_265d98:
    // 0x265d98: 0xae16005c  sw          $s6, 0x5C($s0)
    ctx->pc = 0x265d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 22));
    // 0x265d9c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x265d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x265da0: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x265da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x265da4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x265DA4u;
    {
        const bool branch_taken_0x265da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265da4) {
            ctx->pc = 0x265DC0u;
            goto label_265dc0;
        }
    }
    ctx->pc = 0x265DACu;
    // 0x265dac: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x265dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x265db0: 0xc07675c  jal         func_1D9D70
    ctx->pc = 0x265DB0u;
    SET_GPR_U32(ctx, 31, 0x265DB8u);
    ctx->pc = 0x1D9D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D70u, 0x265DB0u, 0x265DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265DB8u;
label_265db8:
    // 0x265db8: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x265db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x265dbc: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x265dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_265dc0:
    // 0x265dc0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x265dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x265dc4: 0xae030368  sw          $v1, 0x368($s0)
    ctx->pc = 0x265dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 3));
    // 0x265dc8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x265dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x265dcc: 0xae031240  sw          $v1, 0x1240($s0)
    ctx->pc = 0x265dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 3));
label_265dd0:
    // 0x265dd0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x265dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x265dd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x265dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x265dd8: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x265dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x265ddc: 0x0  nop
    ctx->pc = 0x265ddcu;
    // NOP
label_265de0:
    // 0x265de0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x265de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x265de4: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x265de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x265de8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x265de8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x265dec: 0x1460fecd  bnez        $v1, . + 4 + (-0x133 << 2)
    ctx->pc = 0x265DECu;
    {
        const bool branch_taken_0x265dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265dec) {
            ctx->pc = 0x265924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_265924;
        }
    }
    ctx->pc = 0x265DF4u;
    // 0x265df4: 0x24031400  addiu       $v1, $zero, 0x1400
    ctx->pc = 0x265df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x265df8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265dfc: 0xac23e678  sw          $v1, -0x1988($at)
    ctx->pc = 0x265dfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E678u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E678u, _value); } while (0);
    // 0x265e00: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x265e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x265e04: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265e08: 0xac23e67c  sw          $v1, -0x1984($at)
    ctx->pc = 0x265e08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E67Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E67Cu, _value); } while (0);
    // 0x265e0c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265e10: 0xac34e680  sw          $s4, -0x1980($at)
    ctx->pc = 0x265e10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x61E680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E680u, _value); } while (0);
    // 0x265e14: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265e18: 0xac34e684  sw          $s4, -0x197C($at)
    ctx->pc = 0x265e18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x61E684u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E684u, _value); } while (0);
    // 0x265e1c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x265e1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x265e20: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x265e20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x265e24: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x265e24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x265e28: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x265e28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x265e2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x265e2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x265e30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x265e30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x265e34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x265e34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265e38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x265e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265e44: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x265e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x265e48: 0x3e00008  jr          $ra
    ctx->pc = 0x265E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265E50u;
}
