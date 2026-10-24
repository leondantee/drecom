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

// Function: entry_00266b1c
// Address: 0x266b1c - 0x266ba0
void entry_00266b1c_0x266b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266b1c_0x266b1c");
#endif

    switch (ctx->pc) {
        case 0x266b94u: goto label_266b94;
        default: break;
    }

    ctx->pc = 0x266b1cu;

    // 0x266b1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x266b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266b20: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x266b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x266b24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x266b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266b28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x266b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x266b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266b30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x266b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266b34: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x266b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x266b38: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x266b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x266b3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266b40: 0x8c501390  lw          $s0, 0x1390($v0)
    ctx->pc = 0x266b40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x266b44: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x266b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x266b48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x266b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266b4c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x266b4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x266b50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x266b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x266b54: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x266b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x266b58: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x266b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x266b5c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x266b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266b60: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x266b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x266b64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x266b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266b68: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x266b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x266b6c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x266b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x266b70: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x266b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x266b74: 0x8c821a84  lw          $v0, 0x1A84($a0)
    ctx->pc = 0x266b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6788)));
    // 0x266b78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x266b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x266b7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x266B7Cu;
    {
        const bool branch_taken_0x266b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b7c) {
            ctx->pc = 0x266BA0u;
            return;
        }
    }
    ctx->pc = 0x266B84u;
    // 0x266b84: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266b84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266b88: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x266b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x266b8c: 0xc0d85c4  jal         func_361710
    ctx->pc = 0x266B8Cu;
    SET_GPR_U32(ctx, 31, 0x266B94u);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x266B8Cu, 0x266B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266B94u;
label_266b94:
    // 0x266b94: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x266b94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x266b98: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x266B98u;
    {
        const bool branch_taken_0x266b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266b98) {
            ctx->pc = 0x267058u;
            return;
        }
    }
    ctx->pc = 0x266BA0u;
}
