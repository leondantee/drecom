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

// Function: entry_001e6ff8
// Address: 0x1e6ff8 - 0x1e70c8
void entry_001e6ff8_0x1e6ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6ff8_0x1e6ff8");
#endif

    switch (ctx->pc) {
        case 0x1e701cu: goto label_1e701c;
        case 0x1e7040u: goto label_1e7040;
        case 0x1e7060u: goto label_1e7060;
        case 0x1e7084u: goto label_1e7084;
        default: break;
    }

    ctx->pc = 0x1e6ff8u;

    // 0x1e6ff8: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e6ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e6ffc: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x1e6ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x1e7000: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e7000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7004: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e7004u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7008: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7008u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e700c: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x1e700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e7010: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e7010u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7014: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7014u;
    SET_GPR_U32(ctx, 31, 0x1E701Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E701Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E701Cu) { return; }
    ctx->pc = 0x1E701Cu;
label_1e701c:
    // 0x1e701c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1e701cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7020: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1e7020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1e7024: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e7024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7028: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e7028u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e702c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e702cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7030: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x1e7030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e7034: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e7034u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7038: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7038u;
    SET_GPR_U32(ctx, 31, 0x1E7040u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7040u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7040u) { return; }
    ctx->pc = 0x1E7040u;
label_1e7040:
    // 0x1e7040: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1e7040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7044: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1e7044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1e7048: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e7048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e704c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1e704cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7050: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7050u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7054: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e7054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e7058: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7058u;
    SET_GPR_U32(ctx, 31, 0x1E7060u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7060u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7060u) { return; }
    ctx->pc = 0x1E7060u;
label_1e7060:
    // 0x1e7060: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e7060u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7064: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7068: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1e7068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e706c: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x1e706cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e7070: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7070u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7074: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x1e7074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e7078: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e7078u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e707c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E707Cu;
    SET_GPR_U32(ctx, 31, 0x1E7084u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7084u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7084u) { return; }
    ctx->pc = 0x1E7084u;
label_1e7084:
    // 0x1e7084: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e7084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7088: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e708c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e708cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7090: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e7090u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7094: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x1e7094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e7098: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x1e7098u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e709c: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1e709cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e70a0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e70a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e70a4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e70a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e70a8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E70A8u;
    {
        const bool branch_taken_0x1e70a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e70a8) {
            ctx->pc = 0x1E70C8u;
            return;
        }
    }
    ctx->pc = 0x1E70B0u;
    // 0x1e70b0: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1e70b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e70b4: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1e70b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e70b8: 0xdd2021  addu        $a0, $a2, $sp
    ctx->pc = 0x1e70b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x1e70bc: 0x90850220  lbu         $a1, 0x220($a0)
    ctx->pc = 0x1e70bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x1e70c0: 0x14a00043  bnez        $a1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1E70C0u;
    {
        const bool branch_taken_0x1e70c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e70c0) {
            ctx->pc = 0x1E71D0u;
            return;
        }
    }
    ctx->pc = 0x1E70C8u;
}
