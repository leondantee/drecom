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

// Function: entry_001d8e30
// Address: 0x1d8e30 - 0x1d8ebc
void entry_001d8e30_0x1d8e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8e30_0x1d8e30");
#endif

    switch (ctx->pc) {
        case 0x1d8e68u: goto label_1d8e68;
        case 0x1d8eb0u: goto label_1d8eb0;
        default: break;
    }

    ctx->pc = 0x1d8e30u;

    // 0x1d8e30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8e34: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1d8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1d8e38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d8e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d8e3c: 0xa2020019  sb          $v0, 0x19($s0)
    ctx->pc = 0x1d8e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8e40: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1d8e40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1d8e44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8e48: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d8e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8e4c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d8e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d8e50: 0x244292a0  addiu       $v0, $v0, -0x6D60
    ctx->pc = 0x1d8e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939296));
    // 0x1d8e54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8e58: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x1d8e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1d8e5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d8e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8e60: 0xc046a48  jal         func_11A920
    ctx->pc = 0x1D8E60u;
    SET_GPR_U32(ctx, 31, 0x1D8E68u);
    ctx->pc = 0x11A920u;
    {
        ctx->pc = 0x1D8E68u;
        ps2_stubs::sprintf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8E68u) { return; }
    ctx->pc = 0x1D8E68u;
label_1d8e68:
    // 0x1d8e68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d8e6c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1d8e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1d8e70: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D8E70u;
    {
        const bool branch_taken_0x1d8e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e70) {
            ctx->pc = 0x1D8EBCu;
            return;
        }
    }
    ctx->pc = 0x1D8E78u;
    // 0x1d8e78: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d8e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d8e7c: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8e7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8e80: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d8e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8e84: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8e88: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d8e88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d8e8c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8e90: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d8e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d8e94: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d8e94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8e98: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1d8e98u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d8e9c: 0x2408006c  addiu       $t0, $zero, 0x6C
    ctx->pc = 0x1d8e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d8ea0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d8ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8ea4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d8ea4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8ea8: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D8EA8u;
    SET_GPR_U32(ctx, 31, 0x1D8EB0u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D8EB0u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8EB0u) { return; }
    ctx->pc = 0x1D8EB0u;
label_1d8eb0:
    // 0x1d8eb0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d8eb0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d8eb4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D8EB4u;
    {
        const bool branch_taken_0x1d8eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8eb4) {
            ctx->pc = 0x1D8F04u;
            return;
        }
    }
    ctx->pc = 0x1D8EBCu;
}
