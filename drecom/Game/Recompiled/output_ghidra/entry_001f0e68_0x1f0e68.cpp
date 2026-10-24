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

// Function: entry_001f0e68
// Address: 0x1f0e68 - 0x1f0ec8
void entry_001f0e68_0x1f0e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0e68_0x1f0e68");
#endif

    switch (ctx->pc) {
        case 0x1f0eacu: goto label_1f0eac;
        default: break;
    }

    ctx->pc = 0x1f0e68u;

    // 0x1f0e68: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0e6c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f0e70: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x1f0e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1f0e74: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F0E74u;
    {
        const bool branch_taken_0x1f0e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e74) {
            ctx->pc = 0x1F0EC8u;
            return;
        }
    }
    ctx->pc = 0x1F0E7Cu;
    // 0x1f0e7c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f0e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0e80: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f0e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f0e84: 0x8c710064  lw          $s1, 0x64($v1)
    ctx->pc = 0x1f0e84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1f0e88: 0x26231330  addiu       $v1, $s1, 0x1330
    ctx->pc = 0x1f0e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4912));
    // 0x1f0e8c: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x1f0e8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1f0e90: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f0e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f0e94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f0e94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f0e98: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x1f0e98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1f0e9c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1F0E9Cu;
    {
        const bool branch_taken_0x1f0e9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e9c) {
            ctx->pc = 0x1F0EC8u;
            return;
        }
    }
    ctx->pc = 0x1F0EA4u;
    // 0x1f0ea4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0EA4u;
    SET_GPR_U32(ctx, 31, 0x1F0EACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0EA4u, 0x1F0EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0EACu;
label_1f0eac:
    // 0x1f0eac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f0eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f0eb0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1f0eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f0eb4: 0x24650014  addiu       $a1, $v1, 0x14
    ctx->pc = 0x1f0eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1f0eb8: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x1f0eb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1f0ebc: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1f0ebcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1f0ec0: 0x26231330  addiu       $v1, $s1, 0x1330
    ctx->pc = 0x1f0ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4912));
    // 0x1f0ec4: 0xa467005c  sh          $a3, 0x5C($v1)
    ctx->pc = 0x1f0ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 7));
    ctx->pc = 0x1f0ec8u;
}
