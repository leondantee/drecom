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

// Function: Om_vram_info_set
// Address: 0x2664d0 - 0x266948
void Om_vram_info_set_0x2664d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_vram_info_set_0x2664d0");
#endif

    switch (ctx->pc) {
        case 0x266538u: goto label_266538;
        default: break;
    }

    ctx->pc = 0x2664d0u;

    // 0x2664d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2664d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2664d4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2664d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2664d8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2664d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2664dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2664dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2664e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2664e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2664e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2664e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2664e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2664e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2664ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2664ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2664f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2664f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2664f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2664f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2664f8: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2664f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2664fc: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x2664fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x266500: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x266500u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x266504: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x266504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x266508: 0x247e0080  addiu       $fp, $v1, 0x80
    ctx->pc = 0x266508u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x26650c: 0x8fc30a68  lw          $v1, 0xA68($fp)
    ctx->pc = 0x26650cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x266510: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x266510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x266514: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x266514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x266518: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x266518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26651c: 0xafc30a68  sw          $v1, 0xA68($fp)
    ctx->pc = 0x26651cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 2664), GPR_U32(ctx, 3));
    // 0x266520: 0x8fc40a68  lw          $a0, 0xA68($fp)
    ctx->pc = 0x266520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2664)));
    // 0x266524: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x266524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x266528: 0xac640088  sw          $a0, 0x88($v1)
    ctx->pc = 0x266528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 4));
    // 0x26652c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x26652cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x266530: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x266530u;
    {
        const bool branch_taken_0x266530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266530) {
            ctx->pc = 0x2668D8u;
            goto label_2668d8;
        }
    }
    ctx->pc = 0x266538u;
label_266538:
    // 0x266538: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x266538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x26653c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x26653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x266540: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266544: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x266544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266548: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x266548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26654c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26654cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266550: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x266550u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x266554: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x266554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x266558: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x266558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x26655c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26655cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266560: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x266560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x266564: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x266564u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266568: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x266568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26656c: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x26656cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x266570: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x266570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x266574: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266578: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x266578u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x26657c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x26657cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x266580: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x266580u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x266584: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x266584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x266588: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x266588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26658c: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x26658cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x266590: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x266590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x266594: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x266594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x266598: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x266598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26659c: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x26659cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x2665a0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2665a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2665a4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2665a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2665a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2665a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2665ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2665acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2665b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2665b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2665b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2665b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2665b8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2665b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2665bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2665bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2665c0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x2665c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x2665c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2665c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2665c8: 0x90630020  lbu         $v1, 0x20($v1)
    ctx->pc = 0x2665c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2665cc: 0x31efc  dsll32      $v1, $v1, 27
    ctx->pc = 0x2665ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 27));
    // 0x2665d0: 0x3bf7e  dsrl32      $s7, $v1, 29
    ctx->pc = 0x2665d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) >> (32 + 29));
    // 0x2665d4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2665d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2665d8: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x2665d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2665dc: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x2665dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2665e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2665e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2665e4: 0xac770018  sw          $s7, 0x18($v1)
    ctx->pc = 0x2665e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 23));
    // 0x2665e8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2665e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2665ec: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2665ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2665f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2665f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2665f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2665f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2665f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2665f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2665fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2665fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266600: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x266600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x266604: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x266604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x266608: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x266608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x26660c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26660cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266610: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x266610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x266614: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x266614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x266618: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x266618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26661c: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x26661cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x266620: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x266620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x266624: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266628: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x266628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x26662c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x26662cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x266630: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x266630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x266634: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266638: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x266638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26663c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26663cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x266640: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266644: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x266644u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x266648: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x266648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x26664c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x26664cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x266650: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266654: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x266654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x266658: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x266658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26665c: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x26665cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x266660: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x266660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x266664: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266668: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x266668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x26666c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x26666cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x266670: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x266670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x266674: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266678: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x266678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26667c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26667cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x266680: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266684: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x266684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x266688: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x266688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x26668c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x26668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x266690: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266694: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x266694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x266698: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x266698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26669c: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x26669cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2666a0: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x2666a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2666a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2666a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2666a8: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2666a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2666ac: 0x12e00083  beqz        $s7, . + 4 + (0x83 << 2)
    ctx->pc = 0x2666ACu;
    {
        const bool branch_taken_0x2666ac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2666ac) {
            ctx->pc = 0x2668BCu;
            goto label_2668bc;
        }
    }
    ctx->pc = 0x2666B4u;
    // 0x2666b4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2666b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2666b8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2666b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2666bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2666bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2666c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2666c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2666c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2666c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2666c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2666c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2666cc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2666ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2666d0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2666d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2666d4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x2666d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x2666d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2666d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2666dc: 0x9463001a  lhu         $v1, 0x1A($v1)
    ctx->pc = 0x2666dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x2666e0: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x2666e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x2666e4: 0x326be  dsrl32      $a0, $v1, 26
    ctx->pc = 0x2666e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x2666e8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2666e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2666ec: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2666ECu;
    {
        const bool branch_taken_0x2666ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2666ec) {
            ctx->pc = 0x266700u;
            goto label_266700;
        }
    }
    ctx->pc = 0x2666F4u;
    // 0x2666f4: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x2666f4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2666f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2666F8u;
    {
        const bool branch_taken_0x2666f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2666f8) {
            ctx->pc = 0x266708u;
            goto label_266708;
        }
    }
    ctx->pc = 0x266700u;
label_266700:
    // 0x266700: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x266700u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266704: 0x0  nop
    ctx->pc = 0x266704u;
    // NOP
label_266708:
    // 0x266708: 0x72c0ae28  paddub      $s5, $s6, $zero
    ctx->pc = 0x266708u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x26670c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x26670cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x266710: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x266710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x266714: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266718: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x266718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26671c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26671cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x266720: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266724: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x266724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x266728: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x266728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x26672c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x26672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x266730: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266734: 0x94630018  lhu         $v1, 0x18($v1)
    ctx->pc = 0x266734u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x266738: 0x30723fff  andi        $s2, $v1, 0x3FFF
    ctx->pc = 0x266738u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x26673c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x26673cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x266740: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x266740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x266744: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266748: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x266748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26674c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26674cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x266750: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266754: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x266754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x266758: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x266758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x26675c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x26675cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x266760: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266764: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x266764u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x266768: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x266768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26676c: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x26676cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x266770: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x266770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x266774: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x266774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x266778: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x266778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26677c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x26677cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x266780: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x266780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x266784: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x266784u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x266788: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x266788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x26678c: 0x2484cca0  addiu       $a0, $a0, -0x3360
    ctx->pc = 0x26678cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x266790: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x266790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x266794: 0x94840006  lhu         $a0, 0x6($a0)
    ctx->pc = 0x266794u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x266798: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x266798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x26679c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x26679cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2667a0: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2667a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2667a4: 0x2a31807  srav        $v1, $v1, $s5
    ctx->pc = 0x2667a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
    // 0x2667a8: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2667a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2667ac: 0x7240a628  paddub      $s4, $s2, $zero
    ctx->pc = 0x2667acu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2667b0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2667b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2667b4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x2667b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2667b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2667b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2667bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2667bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2667c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2667c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2667c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2667c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2667c8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2667c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2667cc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2667ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2667d0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x2667d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x2667d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2667d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2667d8: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x2667d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2667dc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2667dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2667e0: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2667e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2667e4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2667e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2667e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2667e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2667ec: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2667ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2667f0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2667f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2667f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2667f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2667f8: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2667f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2667fc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2667fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x266800: 0x2484cca0  addiu       $a0, $a0, -0x3360
    ctx->pc = 0x266800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x266804: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x266804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x266808: 0x94840006  lhu         $a0, 0x6($a0)
    ctx->pc = 0x266808u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x26680c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x26680cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x266810: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x266810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x266814: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x266814u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x266818: 0x2a31807  srav        $v1, $v1, $s5
    ctx->pc = 0x266818u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
    // 0x26681c: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x26681cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x266820: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x266820u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x266824: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x266824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x266828: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26682c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26682cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266830: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x266830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x266834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266838: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x266838u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x26683c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x26683cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x266840: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x266840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x266844: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x266844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x266848: 0xdc630018  ld          $v1, 0x18($v1)
    ctx->pc = 0x266848u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x26684c: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x26684cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x266850: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x266850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x266854: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x266854u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x266858: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x266858u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x26685c: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x26685cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x266860: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x266860u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x266864: 0x139843  sra         $s3, $s3, 1
    ctx->pc = 0x266864u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 1));
    // 0x266868: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x266868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x26686c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x26686cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x266870: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x266870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x266874: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x266874u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x266878: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x266878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x26687c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26687cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x266880: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x266880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x266884: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x266884u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x266888: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x266888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x26688c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x26688cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x266890: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x266890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x266894: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x266894u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x266898: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x266898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x26689c: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x26689cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2668a0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2668a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2668a4: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x2668a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2668a8: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x2668a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2668ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2668acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2668b0: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x2668b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x2668b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2668B4u;
    {
        const bool branch_taken_0x2668b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2668b4) {
            ctx->pc = 0x2668D0u;
            goto label_2668d0;
        }
    }
    ctx->pc = 0x2668BCu;
label_2668bc:
    // 0x2668bc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2668bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2668c0: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x2668c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2668c4: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x2668c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2668c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2668c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2668cc: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x2668ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
label_2668d0:
    // 0x2668d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2668d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2668d4: 0x0  nop
    ctx->pc = 0x2668d4u;
    // NOP
label_2668d8:
    // 0x2668d8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2668d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2668dc: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x2668dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2668e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2668e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2668e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2668e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2668e8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2668e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2668ec: 0x1460ff12  bnez        $v1, . + 4 + (-0xEE << 2)
    ctx->pc = 0x2668ECu;
    {
        const bool branch_taken_0x2668ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2668ec) {
            ctx->pc = 0x266538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266538;
        }
    }
    ctx->pc = 0x2668F4u;
    // 0x2668f4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2668f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2668f8: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x2668f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2668fc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2668fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x266900: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x266900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x266904: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x266904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x266908: 0x27c40a68  addiu       $a0, $fp, 0xA68
    ctx->pc = 0x266908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 2664));
    // 0x26690c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x266910: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x266910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x266914: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x266914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x266918: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x266918u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26691c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26691cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x266920: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x266920u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x266924: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x266924u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266928: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x266928u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26692c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26692cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266930: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x266930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26693c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x26693cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x266940: 0x3e00008  jr          $ra
    ctx->pc = 0x266940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266948u;
}
