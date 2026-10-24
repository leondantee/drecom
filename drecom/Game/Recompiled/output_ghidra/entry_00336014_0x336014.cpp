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

// Function: entry_00336014
// Address: 0x336014 - 0x33613c
void entry_00336014_0x336014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336014_0x336014");
#endif

    switch (ctx->pc) {
        case 0x336038u: goto label_336038;
        case 0x3360c4u: goto label_3360c4;
        case 0x3360fcu: goto label_3360fc;
        case 0x336130u: goto label_336130;
        default: break;
    }

    ctx->pc = 0x336014u;

    // 0x336014: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x336014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x336018: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x336018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33601c: 0x244449b0  addiu       $a0, $v0, 0x49B0
    ctx->pc = 0x33601cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18864));
    // 0x336020: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x336020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x336024: 0x2445bf58  addiu       $a1, $v0, -0x40A8
    ctx->pc = 0x336024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950744));
    // 0x336028: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x336028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33602c: 0x244649d0  addiu       $a2, $v0, 0x49D0
    ctx->pc = 0x33602cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 18896));
    // 0x336030: 0xc0a4474  jal         func_2911D0
    ctx->pc = 0x336030u;
    SET_GPR_U32(ctx, 31, 0x336038u);
    ctx->pc = 0x2911D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D0u, 0x336030u, 0x336038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336038u;
label_336038:
    // 0x336038: 0x104001a7  beqz        $v0, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x336038u;
    {
        const bool branch_taken_0x336038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336038) {
            ctx->pc = 0x3366D8u;
            return;
        }
    }
    ctx->pc = 0x336040u;
    // 0x336040: 0x8e025dd0  lw          $v0, 0x5DD0($s0)
    ctx->pc = 0x336040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x336044: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x336048: 0xae025dd0  sw          $v0, 0x5DD0($s0)
    ctx->pc = 0x336048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 2));
    // 0x33604c: 0x9212683f  lbu         $s2, 0x683F($s0)
    ctx->pc = 0x33604cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x336050: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x336050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x336054: 0x82055deb  lb          $a1, 0x5DEB($s0)
    ctx->pc = 0x336054u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x336058: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x336058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x33605c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x33605cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x336060: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x336060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x336064: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x336064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336068: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x336068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x33606c: 0x9042663e  lbu         $v0, 0x663E($v0)
    ctx->pc = 0x33606cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26174)));
    // 0x336070: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x336070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x336074: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x336074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x336078: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x336078u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33607c: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x33607cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x336080: 0x9204683f  lbu         $a0, 0x683F($s0)
    ctx->pc = 0x336080u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x336084: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x336084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x336088: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x336088u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x33608c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x33608cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x336090: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x336090u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x336094: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x336094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x336098: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x336098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33609c: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x33609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3360a0: 0x9042663f  lbu         $v0, 0x663F($v0)
    ctx->pc = 0x3360a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26175)));
    // 0x3360a4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3360a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3360a8: 0xafa4011c  sw          $a0, 0x11C($sp)
    ctx->pc = 0x3360a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 4));
    // 0x3360ac: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x3360acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3360b0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3360b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3360b4: 0x8fa5011c  lw          $a1, 0x11C($sp)
    ctx->pc = 0x3360b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x3360b8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3360b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3360bc: 0xc0ce20c  jal         func_338830
    ctx->pc = 0x3360BCu;
    SET_GPR_U32(ctx, 31, 0x3360C4u);
    ctx->pc = 0x338830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338830u, 0x3360BCu, 0x3360C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3360C4u;
label_3360c4:
    // 0x3360c4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x3360c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x3360c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3360c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3360cc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3360ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x3360d0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3360d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3360d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3360d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3360d8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3360d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x3360dc: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3360dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3360e0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x3360e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3360e4: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x3360e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x3360e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3360e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3360ec: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x3360ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x3360f0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3360f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3360f4: 0xc0ce20c  jal         func_338830
    ctx->pc = 0x3360F4u;
    SET_GPR_U32(ctx, 31, 0x3360FCu);
    ctx->pc = 0x338830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338830u, 0x3360F4u, 0x3360FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3360FCu;
label_3360fc:
    // 0x3360fc: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x3360fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x336100: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x336100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x336104: 0x652006  srlv        $a0, $a1, $v1
    ctx->pc = 0x336104u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x336108: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x336108u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33610c: 0x8c4319ec  lw          $v1, 0x19EC($v0)
    ctx->pc = 0x33610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6636)));
    // 0x336110: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x336110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x336114: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x336114u;
    {
        const bool branch_taken_0x336114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x336114) {
            ctx->pc = 0x33613Cu;
            return;
        }
    }
    ctx->pc = 0x33611Cu;
    // 0x33611c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x33611cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336120: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x336120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x336124: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x336124u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336128: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x336128u;
    SET_GPR_U32(ctx, 31, 0x336130u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x336128u, 0x336130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336130u;
label_336130:
    // 0x336130: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x336130u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x336134: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x336134u;
    {
        const bool branch_taken_0x336134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336134) {
            ctx->pc = 0x3366D8u;
            return;
        }
    }
    ctx->pc = 0x33613Cu;
}
