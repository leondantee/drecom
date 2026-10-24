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

// Function: entry_001a159c
// Address: 0x1a159c - 0x1a162c
void entry_001a159c_0x1a159c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a159c_0x1a159c");
#endif

    ctx->pc = 0x1a159cu;

    // 0x1a159c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a159cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a15a0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a15a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a15a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a15a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a15a8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1a15a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1a15ac: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A15ACu;
    {
        const bool branch_taken_0x1a15ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a15ac) {
            ctx->pc = 0x1A162Cu;
            return;
        }
    }
    ctx->pc = 0x1A15B4u;
    // 0x1a15b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a15b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a15b8: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x1a15b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a15bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a15bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a15c0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1a15c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a15c4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a15c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a15c8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1a15c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a15cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a15ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a15d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a15d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a15d4: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1a15d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1a15d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a15d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a15dc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1a15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a15e0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1a15e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a15e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a15e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a15e8: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x1a15e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1a15ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a15ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a15f0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1a15f0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a15f4: 0x0  nop
    ctx->pc = 0x1a15f4u;
    // NOP
    // 0x1a15f8: 0x0  nop
    ctx->pc = 0x1a15f8u;
    // NOP
    // 0x1a15fc: 0x1812  mflo        $v1
    ctx->pc = 0x1a15fcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1a1600: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1a1600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1a1604: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1a1604u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1a1608: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a160c: 0xa464000a  sh          $a0, 0xA($v1)
    ctx->pc = 0x1a160cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a1610: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1614: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x1a1614u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a1618: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a161c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a161cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1620: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1a1620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1a1624: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a1624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a1628: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a1628u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a162cu;
}
