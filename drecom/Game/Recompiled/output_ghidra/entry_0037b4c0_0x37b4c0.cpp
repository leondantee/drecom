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

// Function: entry_0037b4c0
// Address: 0x37b4c0 - 0x37b618
void entry_0037b4c0_0x37b4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b4c0_0x37b4c0");
#endif

    ctx->pc = 0x37b4c0u;

    // 0x37b4c0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b4c4: 0x8c220590  lw          $v0, 0x590($at)
    ctx->pc = 0x37b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0590u));
    // 0x37b4c8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x37b4c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37b4cc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x37B4CCu;
    {
        const bool branch_taken_0x37b4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37b4cc) {
            ctx->pc = 0x37B4A0u;
            return;
        }
    }
    ctx->pc = 0x37B4D4u;
    // 0x37b4d4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37b4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37b4d8: 0x8c220598  lw          $v0, 0x598($at)
    ctx->pc = 0x37b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0598u));
    // 0x37b4dc: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x37b4dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37b4e0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x37b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x37b4e4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x37b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x37b4e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37b4ec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37b4f0: 0x2442b930  addiu       $v0, $v0, -0x46D0
    ctx->pc = 0x37b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949168));
    // 0x37b4f4: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x37b4f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37b4f8: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x37b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x37b4fc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x37b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x37b500: 0x62b823  subu        $s7, $v1, $v0
    ctx->pc = 0x37b500u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37b504: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x37b504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37b508: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x37b508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x37b50c: 0x62f023  subu        $fp, $v1, $v0
    ctx->pc = 0x37b50cu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37b510: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x37b510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x37b514: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x37b514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x37b518: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x37b518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x37b51c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x37b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x37b520: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x37b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x37b524: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x37b524u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x37b528: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x37b528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x37b52c: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x37b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x37b530: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x37b530u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x37b534: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x37b534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x37b538: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b53c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x37b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x37b540: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x37b540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x37b544: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x37b544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x37b548: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37b548u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37b54c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x37b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x37b550: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x37b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x37b554: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37b554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37b558: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37b558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37b55c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x37b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37b560: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37b560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b564: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x37b564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37b568: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x37b568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37b56c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x37b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37b570: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37b570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37b574: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37b578: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b57c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37b57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37b580: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x37b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x37b584: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b588: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x37b588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x37b58c: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x37b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x37b590: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b594: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x37b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37b598: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37b598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b59c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x37b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37b5a0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x37b5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37b5a4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x37b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37b5a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37b5ac: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37b5b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b5b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37b5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37b5b8: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x37b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x37b5bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b5c0: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x37b5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x37b5c4: 0x26420028  addiu       $v0, $s2, 0x28
    ctx->pc = 0x37b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x37b5c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b5cc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x37b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x37b5d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b5d4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x37b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x37b5d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b5dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b5e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37b5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37b5e4: 0x26420014  addiu       $v0, $s2, 0x14
    ctx->pc = 0x37b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x37b5e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b5ec: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x37b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x37b5f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b5f4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x37b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37b5f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b5fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b600: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37b600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37b604: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x37b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x37b608: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b60c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37b610: 0x2442e7a8  addiu       $v0, $v0, -0x1858
    ctx->pc = 0x37b610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961064));
    // 0x37b614: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x37b614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x37b618u;
}
