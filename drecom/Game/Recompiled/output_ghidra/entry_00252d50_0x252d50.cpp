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

// Function: entry_00252d50
// Address: 0x252d50 - 0x252df8
void entry_00252d50_0x252d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252d50_0x252d50");
#endif

    switch (ctx->pc) {
        case 0x252dd0u: goto label_252dd0;
        default: break;
    }

    ctx->pc = 0x252d50u;

    // 0x252d50: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x252d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252d54: 0x8c510104  lw          $s1, 0x104($v0)
    ctx->pc = 0x252d54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x252d58: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x252d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252d5c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x252d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x252d60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252d60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252d64: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x252d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x252d68: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252d68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252d6c: 0x26420190  addiu       $v0, $s2, 0x190
    ctx->pc = 0x252d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
    // 0x252d70: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252d70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252d74: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x252d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x252d78: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252d78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252d7c: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x252d7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x252d80: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x252d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x252d84: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252d84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252d88: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x252d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x252d8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252d8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252d90: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x252d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x252d94: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252d94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252d98: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x252d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x252d9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252d9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252da0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x252da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x252da4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252da4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252da8: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x252da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x252dac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x252dacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252db0: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x252db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x252db4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x252db4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x252db8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x252db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x252dbc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x252dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x252dc0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x252dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x252dc4: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x252dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x252dc8: 0xc059e1c  jal         func_167870
    ctx->pc = 0x252DC8u;
    SET_GPR_U32(ctx, 31, 0x252DD0u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x252DC8u, 0x252DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252DD0u;
label_252dd0:
    // 0x252dd0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x252dd0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x252dd4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x252DD4u;
    {
        const bool branch_taken_0x252dd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x252dd4) {
            ctx->pc = 0x252DF8u;
            return;
        }
    }
    ctx->pc = 0x252DDCu;
    // 0x252ddc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252de0: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x252de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x252de4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252de8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x252de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252dec: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x252decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x252df0: 0x10000176  b           . + 4 + (0x176 << 2)
    ctx->pc = 0x252DF0u;
    {
        const bool branch_taken_0x252df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252df0) {
            ctx->pc = 0x2533CCu;
            return;
        }
    }
    ctx->pc = 0x252DF8u;
}
