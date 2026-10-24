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

// Function: entry_001ff494
// Address: 0x1ff494 - 0x1ff540
void entry_001ff494_0x1ff494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff494_0x1ff494");
#endif

    ctx->pc = 0x1ff494u;

    // 0x1ff494: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff498: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x1ff498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1ff49c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ff49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ff4a0: 0xa0830346  sb          $v1, 0x346($a0)
    ctx->pc = 0x1ff4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff4a4: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff4a8: 0x90a40348  lbu         $a0, 0x348($a1)
    ctx->pc = 0x1ff4a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1ff4ac: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1ff4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ff4b0: 0xa0a30348  sb          $v1, 0x348($a1)
    ctx->pc = 0x1ff4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff4b4: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff4b8: 0x90c50348  lbu         $a1, 0x348($a2)
    ctx->pc = 0x1ff4b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 840)));
    // 0x1ff4bc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1ff4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff4c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1ff4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ff4c4: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x1ff4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ff4c8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ff4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff4cc: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff4d0: 0xa083034b  sb          $v1, 0x34B($a0)
    ctx->pc = 0x1ff4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff4d4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff4d8: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x1ff4d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1ff4dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ff4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff4e0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1ff4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff4e4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff4e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ff4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff4ec: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x1ff4ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ff4f0: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff4f4: 0x90a40346  lbu         $a0, 0x346($a1)
    ctx->pc = 0x1ff4f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 838)));
    // 0x1ff4f8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ff4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff4fc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1ff4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ff500: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff504: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1ff504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ff508: 0x24a40480  addiu       $a0, $a1, 0x480
    ctx->pc = 0x1ff508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
    // 0x1ff50c: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x1ff50cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x1ff510: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff514: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1ff514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff518: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1ff518u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff51c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff520: 0x90640346  lbu         $a0, 0x346($v1)
    ctx->pc = 0x1ff520u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1ff524: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1ff524u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff528: 0xf0082a  slt         $at, $a3, $s0
    ctx->pc = 0x1ff528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1ff52c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF52Cu;
    {
        const bool branch_taken_0x1ff52c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff52c) {
            ctx->pc = 0x1FF540u;
            return;
        }
    }
    ctx->pc = 0x1FF534u;
    // 0x1ff534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ff534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff538: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff53c: 0xa0c30abc  sb          $v1, 0xABC($a2)
    ctx->pc = 0x1ff53cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2748), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1ff540u;
}
