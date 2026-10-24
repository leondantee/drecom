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

// Function: entry_00266538
// Address: 0x266538 - 0x266700
void entry_00266538_0x266538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266538_0x266538");
#endif

    ctx->pc = 0x266538u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x266700u;
}
