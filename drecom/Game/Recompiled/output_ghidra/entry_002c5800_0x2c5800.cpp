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

// Function: entry_002c5800
// Address: 0x2c5800 - 0x2c5860
void entry_002c5800_0x2c5800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c5800_0x2c5800");
#endif

    switch (ctx->pc) {
        case 0x2c583cu: goto label_2c583c;
        default: break;
    }

    ctx->pc = 0x2c5800u;

    // 0x2c5800: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c5800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5804: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c5804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5808: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2c5808u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2c580c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2c580cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2c5810: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c5810u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c5814: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2c5814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c5818: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C5818u;
    {
        const bool branch_taken_0x2c5818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5818) {
            ctx->pc = 0x2C58B8u;
            return;
        }
    }
    ctx->pc = 0x2C5820u;
    // 0x2c5820: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c5820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5824: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5828: 0x24450060  addiu       $a1, $v0, 0x60
    ctx->pc = 0x2c5828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2c582c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2c582cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c5830: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x2c5830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2c5834: 0xc0b3a18  jal         func_2CE860
    ctx->pc = 0x2C5834u;
    SET_GPR_U32(ctx, 31, 0x2C583Cu);
    ctx->pc = 0x2CE860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE860u, 0x2C5834u, 0x2C583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C583Cu;
label_2c583c:
    // 0x2c583c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2c583cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2c5840: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5840u;
    {
        const bool branch_taken_0x2c5840 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5840) {
            ctx->pc = 0x2C5860u;
            return;
        }
    }
    ctx->pc = 0x2C5848u;
    // 0x2c5848: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c5848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c584c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c5850: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x2c5850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2c5854: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2c5854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2c5858: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2C5858u;
    {
        const bool branch_taken_0x2c5858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5858) {
            ctx->pc = 0x2C58B8u;
            return;
        }
    }
    ctx->pc = 0x2C5860u;
}
