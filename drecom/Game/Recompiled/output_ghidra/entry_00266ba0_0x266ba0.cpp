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

// Function: entry_00266ba0
// Address: 0x266ba0 - 0x266c20
void entry_00266ba0_0x266ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266ba0_0x266ba0");
#endif

    switch (ctx->pc) {
        case 0x266bdcu: goto label_266bdc;
        case 0x266becu: goto label_266bec;
        default: break;
    }

    ctx->pc = 0x266ba0u;

    // 0x266ba0: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x266ba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x266ba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x266ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266ba8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x266ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266bac: 0xae021338  sw          $v0, 0x1338($s0)
    ctx->pc = 0x266bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4920), GPR_U32(ctx, 2));
    // 0x266bb0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x266bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x266bb4: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x266bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x266bb8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x266bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266bbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x266bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x266bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x266bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x266bc4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x266bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x266bc8: 0xa60210a4  sh          $v0, 0x10A4($s0)
    ctx->pc = 0x266bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4260), (uint16_t)GPR_U32(ctx, 2));
    // 0x266bcc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266bccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266bd0: 0x8e450a68  lw          $a1, 0xA68($s2)
    ctx->pc = 0x266bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x266bd4: 0xc095228  jal         func_2548A0
    ctx->pc = 0x266BD4u;
    SET_GPR_U32(ctx, 31, 0x266BDCu);
    ctx->pc = 0x2548A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548A0u, 0x266BD4u, 0x266BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266BDCu;
label_266bdc:
    // 0x266bdc: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x266bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x266be0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266be0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266be4: 0xc096558  jal         func_259560
    ctx->pc = 0x266BE4u;
    SET_GPR_U32(ctx, 31, 0x266BECu);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x266BE4u, 0x266BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266BECu;
label_266bec:
    // 0x266bec: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x266becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x266bf0: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x266bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x266bf4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x266bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x266bf8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x266BF8u;
    {
        const bool branch_taken_0x266bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266bf8) {
            ctx->pc = 0x266C50u;
            return;
        }
    }
    ctx->pc = 0x266C00u;
    // 0x266c00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x266c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x266c04: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x266C04u;
    {
        const bool branch_taken_0x266c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266c04) {
            ctx->pc = 0x266C38u;
            return;
        }
    }
    ctx->pc = 0x266C0Cu;
    // 0x266c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266c10: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266C10u;
    {
        const bool branch_taken_0x266c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x266c10) {
            ctx->pc = 0x266C20u;
            return;
        }
    }
    ctx->pc = 0x266C18u;
    // 0x266c18: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x266C18u;
    {
        const bool branch_taken_0x266c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266c18) {
            ctx->pc = 0x266C78u;
            return;
        }
    }
    ctx->pc = 0x266C20u;
}
