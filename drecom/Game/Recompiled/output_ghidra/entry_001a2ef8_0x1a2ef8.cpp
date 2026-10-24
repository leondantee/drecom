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

// Function: entry_001a2ef8
// Address: 0x1a2ef8 - 0x1a2f90
void entry_001a2ef8_0x1a2ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2ef8_0x1a2ef8");
#endif

    ctx->pc = 0x1a2ef8u;

    // 0x1a2ef8: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1a2ef8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a2efc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A2EFCu;
    {
        const bool branch_taken_0x1a2efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2efc) {
            ctx->pc = 0x1A2EE8u;
            return;
        }
    }
    ctx->pc = 0x1A2F04u;
    // 0x1a2f04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2f08: 0xa0600310  sb          $zero, 0x310($v1)
    ctx->pc = 0x1a2f08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 784), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2f0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2f10: 0xac6002fc  sw          $zero, 0x2FC($v1)
    ctx->pc = 0x1a2f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 764), GPR_U32(ctx, 0));
    // 0x1a2f14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2f18: 0xac600300  sw          $zero, 0x300($v1)
    ctx->pc = 0x1a2f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 768), GPR_U32(ctx, 0));
    // 0x1a2f1c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a2f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a2f20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2f24: 0xa0640311  sb          $a0, 0x311($v1)
    ctx->pc = 0x1a2f24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 785), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a2f28: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a2f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a2f2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2f30: 0xa0640312  sb          $a0, 0x312($v1)
    ctx->pc = 0x1a2f30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 786), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a2f34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2f38: 0xa0600318  sb          $zero, 0x318($v1)
    ctx->pc = 0x1a2f38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 792), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2f3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2f40: 0xa06002b0  sb          $zero, 0x2B0($v1)
    ctx->pc = 0x1a2f40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 688), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2f44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2f48: 0xa06002b1  sb          $zero, 0x2B1($v1)
    ctx->pc = 0x1a2f48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 689), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2f4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2f50: 0xa06002f8  sb          $zero, 0x2F8($v1)
    ctx->pc = 0x1a2f50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 760), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2f54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2f58: 0xa0600304  sb          $zero, 0x304($v1)
    ctx->pc = 0x1a2f58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 772), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2f5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2f60: 0xa0600305  sb          $zero, 0x305($v1)
    ctx->pc = 0x1a2f60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 773), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2f64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2f68: 0xa0600306  sb          $zero, 0x306($v1)
    ctx->pc = 0x1a2f68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 774), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2f6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2f70: 0xa4600308  sh          $zero, 0x308($v1)
    ctx->pc = 0x1a2f70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 776), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a2f74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a2f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2f78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2f7c: 0xa0640319  sb          $a0, 0x319($v1)
    ctx->pc = 0x1a2f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 793), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a2f80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2f84: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a2f84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a2f88: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2F90u;
}
