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

// Function: entry_0016ec58
// Address: 0x16ec58 - 0x16eca8
void entry_0016ec58_0x16ec58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ec58_0x16ec58");
#endif

    switch (ctx->pc) {
        case 0x16ec68u: goto label_16ec68;
        default: break;
    }

    ctx->pc = 0x16ec58u;

    // 0x16ec58: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x16ec58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16ec5c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x16ec5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16ec60: 0xc05ba8c  jal         func_16EA30
    ctx->pc = 0x16EC60u;
    SET_GPR_U32(ctx, 31, 0x16EC68u);
    ctx->pc = 0x16EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EA30u, 0x16EC60u, 0x16EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC68u;
label_16ec68:
    // 0x16ec68: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x16ec68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16ec6c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x16ec6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16ec70: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x16ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ec74: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16ec78: 0x2442bb40  addiu       $v0, $v0, -0x44C0
    ctx->pc = 0x16ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949696));
    // 0x16ec7c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x16ec7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16ec80: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x16ec80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x16ec84: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x16ec84u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x16ec88: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x16ec88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16ec8c: 0xa60210a4  sh          $v0, 0x10A4($s0)
    ctx->pc = 0x16ec8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4260), (uint16_t)GPR_U32(ctx, 2));
    // 0x16ec90: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16ec94: 0x2451bbc8  addiu       $s1, $v0, -0x4438
    ctx->pc = 0x16ec94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949832));
    // 0x16ec98: 0xa7a000de  sh          $zero, 0xDE($sp)
    ctx->pc = 0x16ec98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 222), (uint16_t)GPR_U32(ctx, 0));
    // 0x16ec9c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x16ec9cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16eca0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16ECA0u;
    {
        const bool branch_taken_0x16eca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eca0) {
            ctx->pc = 0x16ECD8u;
            return;
        }
    }
    ctx->pc = 0x16ECA8u;
}
