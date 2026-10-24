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

// Function: entry_0018ce60
// Address: 0x18ce60 - 0x18cf70
void entry_0018ce60_0x18ce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ce60_0x18ce60");
#endif

    switch (ctx->pc) {
        case 0x18ce74u: goto label_18ce74;
        case 0x18cee0u: goto label_18cee0;
        default: break;
    }

    ctx->pc = 0x18ce60u;

    // 0x18ce60: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18ce60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18ce64: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x18ce64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18ce68: 0x24060370  addiu       $a2, $zero, 0x370
    ctx->pc = 0x18ce68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
    // 0x18ce6c: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x18CE6Cu;
    SET_GPR_U32(ctx, 31, 0x18CE74u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x18CE74u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18CE74u) { return; }
    ctx->pc = 0x18CE74u;
label_18ce74:
    // 0x18ce74: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18ce78: 0xae020b18  sw          $v0, 0xB18($s0)
    ctx->pc = 0x18ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 2));
    // 0x18ce7c: 0xae110ac0  sw          $s1, 0xAC0($s0)
    ctx->pc = 0x18ce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2752), GPR_U32(ctx, 17));
    // 0x18ce80: 0x92020347  lbu         $v0, 0x347($s0)
    ctx->pc = 0x18ce80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 839)));
    // 0x18ce84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18ce84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ce88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18ce8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18ce8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ce90: 0xa2020349  sb          $v0, 0x349($s0)
    ctx->pc = 0x18ce90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 841), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ce94: 0x92020347  lbu         $v0, 0x347($s0)
    ctx->pc = 0x18ce94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 839)));
    // 0x18ce98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18ce98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ce9c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18cea0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x18cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x18cea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cea8: 0xa202034a  sb          $v0, 0x34A($s0)
    ctx->pc = 0x18cea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 842), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ceac: 0x260202b0  addiu       $v0, $s0, 0x2B0
    ctx->pc = 0x18ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x18ceb0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18ceb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ceb4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x18ceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x18ceb8: 0x260202c0  addiu       $v0, $s0, 0x2C0
    ctx->pc = 0x18ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x18cebc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18cebcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18cec0: 0x92020344  lbu         $v0, 0x344($s0)
    ctx->pc = 0x18cec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x18cec4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cec8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18cecc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18ced0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18ced0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18ced4: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x18ced4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x18ced8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x18CED8u;
    SET_GPR_U32(ctx, 31, 0x18CEE0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x18CED8u, 0x18CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CEE0u;
label_18cee0:
    // 0x18cee0: 0xa2000abc  sb          $zero, 0xABC($s0)
    ctx->pc = 0x18cee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2748), (uint8_t)GPR_U32(ctx, 0));
    // 0x18cee4: 0xae000ab8  sw          $zero, 0xAB8($s0)
    ctx->pc = 0x18cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 0));
    // 0x18cee8: 0xa2000b1e  sb          $zero, 0xB1E($s0)
    ctx->pc = 0x18cee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2846), (uint8_t)GPR_U32(ctx, 0));
    // 0x18ceec: 0x92020369  lbu         $v0, 0x369($s0)
    ctx->pc = 0x18ceecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 873)));
    // 0x18cef0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cef4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18CEF4u;
    {
        const bool branch_taken_0x18cef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cef4) {
            ctx->pc = 0x18CF70u;
            return;
        }
    }
    ctx->pc = 0x18CEFCu;
    // 0x18cefc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x18cefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18cf00: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x18cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x18cf04: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x18cf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18cf08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18cf0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cf10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cf14: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x18cf14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x18cf18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x18cf18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18cf1c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x18cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x18cf20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x18cf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18cf24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18cf28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cf2c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x18cf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x18cf30: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x18cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x18cf34: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18cf38: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x18cf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18cf3c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x18cf3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x18cf40: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18cf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cf44: 0x92020369  lbu         $v0, 0x369($s0)
    ctx->pc = 0x18cf44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 873)));
    // 0x18cf48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cf4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18cf50: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x18cf50u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x18cf54: 0x0  nop
    ctx->pc = 0x18cf54u;
    // NOP
    // 0x18cf58: 0x0  nop
    ctx->pc = 0x18cf58u;
    // NOP
    // 0x18cf5c: 0x1010  mfhi        $v0
    ctx->pc = 0x18cf5cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18cf60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18cf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cf64: 0x92020368  lbu         $v0, 0x368($s0)
    ctx->pc = 0x18cf64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x18cf68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cf6c: 0xa2020368  sb          $v0, 0x368($s0)
    ctx->pc = 0x18cf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 872), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18cf70u;
}
