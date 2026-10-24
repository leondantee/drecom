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

// Function: entry_00204f88
// Address: 0x204f88 - 0x205010
void entry_00204f88_0x204f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204f88_0x204f88");
#endif

    switch (ctx->pc) {
        case 0x204f98u: goto label_204f98;
        case 0x204fb4u: goto label_204fb4;
        default: break;
    }

    ctx->pc = 0x204f88u;

    // 0x204f88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204f8c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x204f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204f90: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204F90u;
    SET_GPR_U32(ctx, 31, 0x204F98u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204F90u, 0x204F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F98u;
label_204f98:
    // 0x204f98: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204f98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204f9c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204fa0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x204fa0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x204fa4: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x204fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204fa8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204fa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204fac: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204FACu;
    SET_GPR_U32(ctx, 31, 0x204FB4u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204FACu, 0x204FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204FB4u;
label_204fb4:
    // 0x204fb4: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x204FB4u;
    {
        const bool branch_taken_0x204fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204fb4) {
            ctx->pc = 0x205154u;
            return;
        }
    }
    ctx->pc = 0x204FBCu;
    // 0x204fbc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204fc0: 0x94a30094  lhu         $v1, 0x94($a1)
    ctx->pc = 0x204fc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x204fc4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x204fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204fc8: 0xa4a40094  sh          $a0, 0x94($a1)
    ctx->pc = 0x204fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 148), (uint16_t)GPR_U32(ctx, 4));
    // 0x204fcc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204fd0: 0x94a60094  lhu         $a2, 0x94($a1)
    ctx->pc = 0x204fd0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x204fd4: 0x30c7ffff  andi        $a3, $a2, 0xFFFF
    ctx->pc = 0x204fd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x204fd8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x204fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x204fdc: 0x10e4005d  beq         $a3, $a0, . + 4 + (0x5D << 2)
    ctx->pc = 0x204FDCu;
    {
        const bool branch_taken_0x204fdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x204fdc) {
            ctx->pc = 0x205154u;
            return;
        }
    }
    ctx->pc = 0x204FE4u;
    // 0x204fe4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x204fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x204fe8: 0x10e30040  beq         $a3, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x204FE8u;
    {
        const bool branch_taken_0x204fe8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x204fe8) {
            ctx->pc = 0x2050ECu;
            return;
        }
    }
    ctx->pc = 0x204FF0u;
    // 0x204ff0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x204ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204ff4: 0x10e30026  beq         $a3, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x204FF4u;
    {
        const bool branch_taken_0x204ff4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x204ff4) {
            ctx->pc = 0x205090u;
            return;
        }
    }
    ctx->pc = 0x204FFCu;
    // 0x204ffc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x204ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x205000: 0x10e40003  beq         $a3, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205000u;
    {
        const bool branch_taken_0x205000 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x205000) {
            ctx->pc = 0x205010u;
            return;
        }
    }
    ctx->pc = 0x205008u;
    // 0x205008: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x205008u;
    {
        const bool branch_taken_0x205008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205008) {
            ctx->pc = 0x205154u;
            return;
        }
    }
    ctx->pc = 0x205010u;
}
