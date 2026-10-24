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

// Function: entry_002973d8
// Address: 0x2973d8 - 0x297534
void entry_002973d8_0x2973d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002973d8_0x2973d8");
#endif

    ctx->pc = 0x2973d8u;

    // 0x2973d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2973d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2973dc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2973dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2973e0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2973e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2973e4: 0x34421007  ori         $v0, $v0, 0x1007
    ctx->pc = 0x2973e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4103);
    // 0x2973e8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2973e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x2973ec: 0x26c20018  addiu       $v0, $s6, 0x18
    ctx->pc = 0x2973ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x2973f0: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x2973f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2973f4: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x2973f4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x2973f8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2973f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2973fc: 0x26820008  addiu       $v0, $s4, 0x8
    ctx->pc = 0x2973fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x297400: 0x94470002  lhu         $a3, 0x2($v0)
    ctx->pc = 0x297400u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x297404: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x297404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x297408: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x297408u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29740c: 0x2403fc0f  addiu       $v1, $zero, -0x3F1
    ctx->pc = 0x29740cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x297410: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x297410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x297414: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x297414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x297418: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x297418u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x29741c: 0x26820008  addiu       $v0, $s4, 0x8
    ctx->pc = 0x29741cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x297420: 0x90470007  lbu         $a3, 0x7($v0)
    ctx->pc = 0x297420u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x297424: 0x3006001f  andi        $a2, $zero, 0x1F
    ctx->pc = 0x297424u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x297428: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x297428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x29742c: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x29742cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x297430: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x297430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x297434: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x297434u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x297438: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x297438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29743c: 0x26820008  addiu       $v0, $s4, 0x8
    ctx->pc = 0x29743cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x297440: 0x90470007  lbu         $a3, 0x7($v0)
    ctx->pc = 0x297440u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x297444: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x297444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x297448: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x297448u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x29744c: 0x2403ff1f  addiu       $v1, $zero, -0xE1
    ctx->pc = 0x29744cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x297450: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x297450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x297454: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x297454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x297458: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x297458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x29745c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x29745cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x297460: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x297460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297464: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x297464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x297468: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x297468u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29746c: 0x0  nop
    ctx->pc = 0x29746cu;
    // NOP
    // 0x297470: 0x0  nop
    ctx->pc = 0x297470u;
    // NOP
    // 0x297474: 0x1810  mfhi        $v1
    ctx->pc = 0x297474u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x297478: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x297478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x29747c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297480: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x297480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x297484: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x297484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x297488: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x297488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29748c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29748cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297490: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x297490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x297494: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x297494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x297498: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x297498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x29749c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x29749cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2974a0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2974a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2974a4: 0x0  nop
    ctx->pc = 0x2974a4u;
    // NOP
    // 0x2974a8: 0x1010  mfhi        $v0
    ctx->pc = 0x2974a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2974ac: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2974acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2974b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2974b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2974b4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2974b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2974b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2974b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2974bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2974bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2974c0: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x2974c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x2974c4: 0x860269a4  lh          $v0, 0x69A4($s0)
    ctx->pc = 0x2974c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27044)));
    // 0x2974c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2974c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2974cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2974ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2974d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2974d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2974d4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2974d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2974d8: 0x860269a6  lh          $v0, 0x69A6($s0)
    ctx->pc = 0x2974d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27046)));
    // 0x2974dc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2974dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2974e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2974e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2974e4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2974e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2974e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2974e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2974ec: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2974ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2974f0: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x2974f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x2974f4: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x2974f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x2974f8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2974f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2974fc: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x2974fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x297500: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x297500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x297504: 0x12a2001d  beq         $s5, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x297504u;
    {
        const bool branch_taken_0x297504 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x297504) {
            ctx->pc = 0x29757Cu;
            return;
        }
    }
    ctx->pc = 0x29750Cu;
    // 0x29750c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x297510: 0x12a20014  beq         $s5, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x297510u;
    {
        const bool branch_taken_0x297510 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x297510) {
            ctx->pc = 0x297564u;
            return;
        }
    }
    ctx->pc = 0x297518u;
    // 0x297518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29751c: 0x12a2000b  beq         $s5, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29751Cu;
    {
        const bool branch_taken_0x29751c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x29751c) {
            ctx->pc = 0x29754Cu;
            return;
        }
    }
    ctx->pc = 0x297524u;
    // 0x297524: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x297524u;
    {
        const bool branch_taken_0x297524 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x297524) {
            ctx->pc = 0x297534u;
            return;
        }
    }
    ctx->pc = 0x29752Cu;
    // 0x29752c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29752Cu;
    {
        const bool branch_taken_0x29752c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29752c) {
            ctx->pc = 0x297594u;
            return;
        }
    }
    ctx->pc = 0x297534u;
}
