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

// Function: entry_001e7c88
// Address: 0x1e7c88 - 0x1e7d50
void entry_001e7c88_0x1e7c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7c88_0x1e7c88");
#endif

    switch (ctx->pc) {
        case 0x1e7cacu: goto label_1e7cac;
        case 0x1e7cc8u: goto label_1e7cc8;
        case 0x1e7cecu: goto label_1e7cec;
        case 0x1e7d0cu: goto label_1e7d0c;
        default: break;
    }

    ctx->pc = 0x1e7c88u;

    // 0x1e7c88: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x1e7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e7c8c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1e7c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1e7c90: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e7c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7c94: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e7c94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7c98: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7c98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7c9c: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x1e7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e7ca0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e7ca0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7ca4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7CA4u;
    SET_GPR_U32(ctx, 31, 0x1E7CACu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7CACu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7CACu) { return; }
    ctx->pc = 0x1E7CACu;
label_1e7cac:
    // 0x1e7cac: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e7cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7cb0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e7cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e7cb4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7cb8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7cb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7cbc: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1e7cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e7cc0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7CC0u;
    SET_GPR_U32(ctx, 31, 0x1E7CC8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7CC8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7CC8u) { return; }
    ctx->pc = 0x1E7CC8u;
label_1e7cc8:
    // 0x1e7cc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e7cc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7ccc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e7cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7cd0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e7cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e7cd4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e7cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7cd8: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e7cd8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7cdc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7cdcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7ce0: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e7ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e7ce4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7CE4u;
    SET_GPR_U32(ctx, 31, 0x1E7CECu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7CECu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7CECu) { return; }
    ctx->pc = 0x1E7CECu;
label_1e7cec:
    // 0x1e7cec: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e7cecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7cf0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7cf4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7cf8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1e7cf8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7cfc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7cfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7d00: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e7d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e7d04: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7D04u;
    SET_GPR_U32(ctx, 31, 0x1E7D0Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7D0Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7D0Cu) { return; }
    ctx->pc = 0x1E7D0Cu;
label_1e7d0c:
    // 0x1e7d0c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e7d0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7d10: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7d14: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1e7d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7d18: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x1e7d18u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e7d1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e7d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e7d20: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1e7d20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7d24: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e7d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7d28: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e7d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e7d2c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7D2Cu;
    {
        const bool branch_taken_0x1e7d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e7d2c) {
            ctx->pc = 0x1E7D50u;
            return;
        }
    }
    ctx->pc = 0x1E7D34u;
    // 0x1e7d34: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1e7d34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7d38: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e7d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7d3c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1e7d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1e7d40: 0x90630220  lbu         $v1, 0x220($v1)
    ctx->pc = 0x1e7d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x1e7d44: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1E7D44u;
    {
        const bool branch_taken_0x1e7d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7d44) {
            ctx->pc = 0x1E7E60u;
            return;
        }
    }
    ctx->pc = 0x1E7D4Cu;
    // 0x1e7d4c: 0x0  nop
    ctx->pc = 0x1e7d4cu;
    // NOP
    ctx->pc = 0x1e7d50u;
}
