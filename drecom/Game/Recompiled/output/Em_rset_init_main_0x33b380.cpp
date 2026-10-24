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

// Function: Em_rset_init_main
// Address: 0x33b380 - 0x33b828
void Em_rset_init_main_0x33b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_rset_init_main_0x33b380");
#endif

    switch (ctx->pc) {
        case 0x33b444u: goto label_33b444;
        case 0x33b4a0u: goto label_33b4a0;
        case 0x33b66cu: goto label_33b66c;
        case 0x33b67cu: goto label_33b67c;
        case 0x33b6c0u: goto label_33b6c0;
        case 0x33b6e4u: goto label_33b6e4;
        default: break;
    }

    ctx->pc = 0x33b380u;

    // 0x33b380: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x33b380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x33b384: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x33b384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x33b388: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x33b388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x33b38c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x33b38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x33b390: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x33b390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x33b394: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33b394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x33b398: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33b398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33b39c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33b39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33b3a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33b3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33b3a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33b3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33b3a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33b3ac: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x33b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x33b3b0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33b3b4: 0x24505450  addiu       $s0, $v0, 0x5450
    ctx->pc = 0x33b3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21584));
    // 0x33b3b8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33b3bc: 0x2456bb48  addiu       $s6, $v0, -0x44B8
    ctx->pc = 0x33b3bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x33b3c0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x33b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x33b3c4: 0x245e0080  addiu       $fp, $v0, 0x80
    ctx->pc = 0x33b3c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x33b3c8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33b3cc: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x33b3ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895588u, _value); } while (0);
    // 0x33b3d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33b3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33b3d4: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x33b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0068u));
    // 0x33b3d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33b3dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33b3e0: 0x24429a20  addiu       $v0, $v0, -0x65E0
    ctx->pc = 0x33b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941216));
    // 0x33b3e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b3e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b3ec: 0xae02013c  sw          $v0, 0x13C($s0)
    ctx->pc = 0x33b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 2));
    // 0x33b3f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33b3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33b3f4: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x33b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x33b3f8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x33b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33b3fc: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x33b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33b400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33b400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b404: 0xae02013c  sw          $v0, 0x13C($s0)
    ctx->pc = 0x33b404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 2));
    // 0x33b408: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x33b408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b40c: 0x300200ff  andi        $v0, $zero, 0xFF
    ctx->pc = 0x33b40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x33b410: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x33b410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x33b414: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33b414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33b418: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x33b418u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x33b41c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33b41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33b420: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x33b420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33b424: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x33b424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x33b428: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x33b428u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b42c: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x33b42cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b430: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x33b430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x33b434: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x33b434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33b438: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x33b438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33b43c: 0xc099794  jal         func_265E50
    ctx->pc = 0x33B43Cu;
    SET_GPR_U32(ctx, 31, 0x33B444u);
    ctx->pc = 0x265E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E50u, 0x33B43Cu, 0x33B444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B444u;
label_33b444:
    // 0x33b444: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33b444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33b448: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33b448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33b44c: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x33b44cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x33b450: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x33b450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33b454: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33b454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33b458: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33b458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33b45c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x33b460: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x33b460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x33b464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33b464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b468: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x33b468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x33b46c: 0xae020130  sw          $v0, 0x130($s0)
    ctx->pc = 0x33b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
    // 0x33b470: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33b470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33b474: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x33b474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x33b478: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x33b478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x33b47c: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x33b47cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x33b480: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33b480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33b484: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33b484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33b488: 0x24550360  addiu       $s5, $v0, 0x360
    ctx->pc = 0x33b488u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x33b48c: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x33b48cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b490: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x33b490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33b494: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x33b494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33b498: 0xc099794  jal         func_265E50
    ctx->pc = 0x33B498u;
    SET_GPR_U32(ctx, 31, 0x33B4A0u);
    ctx->pc = 0x265E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E50u, 0x33B498u, 0x33B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B4A0u;
label_33b4a0:
    // 0x33b4a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33b4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33b4a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33b4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33b4a8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x33b4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x33b4ac: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x33b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x33b4b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33b4b4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x33b4b8: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x33b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x33b4bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b4c0: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x33b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x33b4c4: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x33b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    // 0x33b4c8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33b4cc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33b4d0: 0x24550360  addiu       $s5, $v0, 0x360
    ctx->pc = 0x33b4d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x33b4d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b4d8: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x33b4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33b4dc: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x33b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33b4e0: 0x8c550058  lw          $s5, 0x58($v0)
    ctx->pc = 0x33b4e0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33b4e4: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x33b4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b4e8: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x33b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33b4ec: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33b4f0: 0x24550090  addiu       $s5, $v0, 0x90
    ctx->pc = 0x33b4f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33b4f4: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x33b4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b4f8: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x33b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33b4fc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33b500: 0x24550120  addiu       $s5, $v0, 0x120
    ctx->pc = 0x33b500u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x33b504: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x33b504u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b508: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x33b508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33b50c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33b510: 0x245501b0  addiu       $s5, $v0, 0x1B0
    ctx->pc = 0x33b510u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x33b514: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x33b514u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b518: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x33b518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33b51c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33b51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33b520: 0x24550240  addiu       $s5, $v0, 0x240
    ctx->pc = 0x33b520u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x33b524: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x33b524u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b528: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x33b528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33b52c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33b530: 0x245502d0  addiu       $s5, $v0, 0x2D0
    ctx->pc = 0x33b530u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x33b534: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x33b534u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b538: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x33b538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x33b53c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x33b53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x33b540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33b540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b544: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33b544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33b548: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x33b548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x33b54c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x33b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x33b550: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x33b550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x33b554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33b554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b558: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33b558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33b55c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x33b55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x33b560: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x33b560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x33b564: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x33b564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x33b568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33b568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b56c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33b570: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x33b570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x33b574: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33b574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b578: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33b57c: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x33b57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x33b580: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33b580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b584: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33b584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33b588: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x33b588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x33b58c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33b58cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b590: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33b594: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x33b594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x33b598: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x33b598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x33b59c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x33b59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x33b5a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33b5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b5a4: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x33b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33b5a8: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x33b5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x33b5ac: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x33b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x33b5b0: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x33b5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x33b5b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33b5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b5b8: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x33b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33b5bc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x33b5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x33b5c0: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x33b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x33b5c4: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x33b5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x33b5c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33b5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b5cc: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x33b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33b5d0: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x33b5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x33b5d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33b5d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b5d8: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x33b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33b5dc: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x33b5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x33b5e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33b5e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b5e4: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x33b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33b5e8: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x33b5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x33b5ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33b5ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b5f0: 0x8e020134  lw          $v0, 0x134($s0)
    ctx->pc = 0x33b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33b5f4: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x33b5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x33b5f8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33b5fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x33b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x33b600: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x33b600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x33b604: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x33b604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x33b608: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33b608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33b60c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x33b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x33b610: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x33b610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x33b614: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x33b614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x33b618: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x33b618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33b61c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x33b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33b620: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x33b620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x33b624: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33b624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33b628: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x33b628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x33b62c: 0x8e040134  lw          $a0, 0x134($s0)
    ctx->pc = 0x33b62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33b630: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x33b630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33b634: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x33b634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x33b638: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33b638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33b63c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x33b63cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x33b640: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33b640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x33b644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33b644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b648: 0x0  nop
    ctx->pc = 0x33b648u;
    // NOP
    // 0x33b64c: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x33b64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x33b650: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33b650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x33b654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33b654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b658: 0x0  nop
    ctx->pc = 0x33b658u;
    // NOP
    // 0x33b65c: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x33b65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    // 0x33b660: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x33b660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x33b664: 0xc05da88  jal         func_176A20
    ctx->pc = 0x33B664u;
    SET_GPR_U32(ctx, 31, 0x33B66Cu);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x33B664u, 0x33B66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B66Cu;
label_33b66c:
    // 0x33b66c: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x33b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x33b670: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x33b670u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b674: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33B674u;
    {
        const bool branch_taken_0x33b674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b674) {
            ctx->pc = 0x33B690u;
            goto label_33b690;
        }
    }
    ctx->pc = 0x33B67Cu;
label_33b67c:
    // 0x33b67c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33b67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b680: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x33b680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x33b684: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33b684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33b688: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x33b688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x33b68c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x33b68cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_33b690:
    // 0x33b690: 0x2e83001f  sltiu       $v1, $s4, 0x1F
    ctx->pc = 0x33b690u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x33b694: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x33B694u;
    {
        const bool branch_taken_0x33b694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b694) {
            ctx->pc = 0x33B67Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b67c;
        }
    }
    ctx->pc = 0x33B69Cu;
    // 0x33b69c: 0x8e030138  lw          $v1, 0x138($s0)
    ctx->pc = 0x33b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33b6a0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x33b6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33b6a4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x33b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x33b6a8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33b6a8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b6ac: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x33b6acu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b6b0: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x33b6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b6b4: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x33b6b4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b6b8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x33B6B8u;
    {
        const bool branch_taken_0x33b6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b6b8) {
            ctx->pc = 0x33B788u;
            goto label_33b788;
        }
    }
    ctx->pc = 0x33B6C0u;
label_33b6c0:
    // 0x33b6c0: 0x8ed20000  lw          $s2, 0x0($s6)
    ctx->pc = 0x33b6c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33b6c4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x33b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x33b6c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33b6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x33b6cc: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x33B6CCu;
    {
        const bool branch_taken_0x33b6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b6cc) {
            ctx->pc = 0x33B780u;
            goto label_33b780;
        }
    }
    ctx->pc = 0x33B6D4u;
    // 0x33b6d4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x33b6d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b6d8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33b6d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b6dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33B6DCu;
    {
        const bool branch_taken_0x33b6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b6dc) {
            ctx->pc = 0x33B710u;
            goto label_33b710;
        }
    }
    ctx->pc = 0x33B6E4u;
label_33b6e4:
    // 0x33b6e4: 0x92430012  lbu         $v1, 0x12($s2)
    ctx->pc = 0x33b6e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x33b6e8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33b6e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33b6ec: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33b6f0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33b6f4: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x33b6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x33b6f8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B6F8u;
    {
        const bool branch_taken_0x33b6f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33b6f8) {
            ctx->pc = 0x33B70Cu;
            goto label_33b70c;
        }
    }
    ctx->pc = 0x33B700u;
    // 0x33b700: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x33b700u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b704: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33B704u;
    {
        const bool branch_taken_0x33b704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b704) {
            ctx->pc = 0x33B720u;
            goto label_33b720;
        }
    }
    ctx->pc = 0x33B70Cu;
label_33b70c:
    // 0x33b70c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33b70cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33b710:
    // 0x33b710: 0x2e23001f  sltiu       $v1, $s1, 0x1F
    ctx->pc = 0x33b710u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x33b714: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x33B714u;
    {
        const bool branch_taken_0x33b714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b714) {
            ctx->pc = 0x33B6E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b6e4;
        }
    }
    ctx->pc = 0x33B71Cu;
    // 0x33b71c: 0x0  nop
    ctx->pc = 0x33b71cu;
    // NOP
label_33b720:
    // 0x33b720: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x33B720u;
    {
        const bool branch_taken_0x33b720 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b720) {
            ctx->pc = 0x33B780u;
            goto label_33b780;
        }
    }
    ctx->pc = 0x33B728u;
    // 0x33b728: 0x92430012  lbu         $v1, 0x12($s2)
    ctx->pc = 0x33b728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x33b72c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33b72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33b730: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x33b730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x33b734: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x33b734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33b738: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x33b738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x33b73c: 0x92430012  lbu         $v1, 0x12($s2)
    ctx->pc = 0x33b73cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x33b740: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x33b740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33b744: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x33b744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33b748: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b74c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33b750: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33b750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x33b754: 0x24639a40  addiu       $v1, $v1, -0x65C0
    ctx->pc = 0x33b754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941248));
    // 0x33b758: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x33b758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b75c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x33b75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x33b760: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33b760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33b764: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b768: 0x96040012  lhu         $a0, 0x12($s0)
    ctx->pc = 0x33b768u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x33b76c: 0x9463001e  lhu         $v1, 0x1E($v1)
    ctx->pc = 0x33b76cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x33b770: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33b770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33b774: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x33b774u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x33b778: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x33b778u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x33b77c: 0x0  nop
    ctx->pc = 0x33b77cu;
    // NOP
label_33b780:
    // 0x33b780: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x33b780u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x33b784: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x33b784u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_33b788:
    // 0x33b788: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x33b788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x33b78c: 0x8c23bb40  lw          $v1, -0x44C0($at)
    ctx->pc = 0x33b78cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB40u));
    // 0x33b790: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x33b790u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33b794: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x33B794u;
    {
        const bool branch_taken_0x33b794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b794) {
            ctx->pc = 0x33B6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b6c0;
        }
    }
    ctx->pc = 0x33B79Cu;
    // 0x33b79c: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x33b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33b7a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x33b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b7a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b7a8: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x33B7A8u;
    {
        const bool branch_taken_0x33b7a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33b7a8) {
            ctx->pc = 0x33B7F4u;
            goto label_33b7f4;
        }
    }
    ctx->pc = 0x33B7B0u;
    // 0x33b7b0: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x33b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33b7b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b7b8: 0x24641c20  addiu       $a0, $v1, 0x1C20
    ctx->pc = 0x33b7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7200));
    // 0x33b7bc: 0x8fc300bc  lw          $v1, 0xBC($fp)
    ctx->pc = 0x33b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
    // 0x33b7c0: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x33b7c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33b7c4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x33B7C4u;
    {
        const bool branch_taken_0x33b7c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b7c4) {
            ctx->pc = 0x33B7E8u;
            goto label_33b7e8;
        }
    }
    ctx->pc = 0x33B7CCu;
    // 0x33b7cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b7d0: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x33b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33b7d4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33b7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x33b7d8: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x33b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33b7dc: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33b7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b7e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33B7E0u;
    {
        const bool branch_taken_0x33b7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b7e0) {
            ctx->pc = 0x33B7F4u;
            goto label_33b7f4;
        }
    }
    ctx->pc = 0x33B7E8u;
label_33b7e8:
    // 0x33b7e8: 0x24042710  addiu       $a0, $zero, 0x2710
    ctx->pc = 0x33b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x33b7ec: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x33b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33b7f0: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x33b7f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
label_33b7f4:
    // 0x33b7f4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x33b7f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33b7f8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x33b7f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33b7fc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x33b7fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33b800: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33b800u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33b804: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33b804u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33b808: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33b808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33b80c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33b80cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33b810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33b810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33b814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33b818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b81c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x33b81cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x33b820: 0x3e00008  jr          $ra
    ctx->pc = 0x33B820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B828u;
}
