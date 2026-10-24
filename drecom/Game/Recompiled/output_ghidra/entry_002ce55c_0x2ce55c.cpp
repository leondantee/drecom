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

// Function: entry_002ce55c
// Address: 0x2ce55c - 0x2ce608
void entry_002ce55c_0x2ce55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ce55c_0x2ce55c");
#endif

    ctx->pc = 0x2ce55cu;

    // 0x2ce55c: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x2ce55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2ce560: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce564: 0x24638200  addiu       $v1, $v1, -0x7E00
    ctx->pc = 0x2ce564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935040));
    // 0x2ce568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce56c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2ce56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce570: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ce570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ce574: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ce574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ce578: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ce578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce57c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ce57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ce580: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ce580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ce584: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2ce584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ce588: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2ce588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ce58c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2ce58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2ce590: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2ce590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce594: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x2ce594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2ce598: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce59c: 0x24638200  addiu       $v1, $v1, -0x7E00
    ctx->pc = 0x2ce59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935040));
    // 0x2ce5a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce5a4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2ce5a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce5a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ce5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ce5ac: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2ce5acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2ce5b0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2ce5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ce5b4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2ce5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2ce5b8: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x2ce5b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce5bc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce5c0: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2ce5c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2ce5c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ce5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ce5c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ce5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ce5cc: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x2CE5CCu;
    {
        const bool branch_taken_0x2ce5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce5cc) {
            ctx->pc = 0x2CE838u;
            return;
        }
    }
    ctx->pc = 0x2CE5D4u;
    // 0x2ce5d4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce5d8: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2ce5d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2ce5dc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ce5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ce5e0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2ce5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2ce5e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE5E4u;
    {
        const bool branch_taken_0x2ce5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce5e4) {
            ctx->pc = 0x2CE608u;
            return;
        }
    }
    ctx->pc = 0x2CE5ECu;
    // 0x2ce5ec: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2ce5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce5f0: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x2ce5f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2ce5f4: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2ce5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2ce5f8: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x2ce5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ce5fc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce600: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2ce600u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce604: 0x0  nop
    ctx->pc = 0x2ce604u;
    // NOP
    ctx->pc = 0x2ce608u;
}
