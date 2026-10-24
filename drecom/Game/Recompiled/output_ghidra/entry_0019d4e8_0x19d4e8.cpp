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

// Function: entry_0019d4e8
// Address: 0x19d4e8 - 0x19d570
void entry_0019d4e8_0x19d4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d4e8_0x19d4e8");
#endif

    ctx->pc = 0x19d4e8u;

    // 0x19d4e8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x19d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19d4ec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x19d4f0: 0x24427500  addiu       $v0, $v0, 0x7500
    ctx->pc = 0x19d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29952));
    // 0x19d4f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d4f8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x19d4f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d4fc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x19d4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19d500: 0x27a3002c  addiu       $v1, $sp, 0x2C
    ctx->pc = 0x19d500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x19d504: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d508: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x19d508u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19d50c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19d50cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19d510: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x19d510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19d514: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19d514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x19d518: 0x24427500  addiu       $v0, $v0, 0x7500
    ctx->pc = 0x19d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29952));
    // 0x19d51c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d520: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x19d520u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d524: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x19d524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19d528: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x19d528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x19d52c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19d530: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x19d530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
    // 0x19d534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d538: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x19d538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x19d53c: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x19d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x19d540: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x19d540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x19d544: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19d544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19d548: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x19d548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
    // 0x19d54c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d550: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x19d550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x19d554: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x19d554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x19d558: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19d558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19d55c: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x19d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
    // 0x19d560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d564: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x19d564u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x19d568: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19d568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19d56c: 0x0  nop
    ctx->pc = 0x19d56cu;
    // NOP
    ctx->pc = 0x19d570u;
}
