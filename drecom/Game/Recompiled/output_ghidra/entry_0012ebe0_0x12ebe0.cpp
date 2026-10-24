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

// Function: entry_0012ebe0
// Address: 0x12ebe0 - 0x12ec2c
void entry_0012ebe0_0x12ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ebe0_0x12ebe0");
#endif

    switch (ctx->pc) {
        case 0x12ec18u: goto label_12ec18;
        case 0x12ec24u: goto label_12ec24;
        default: break;
    }

    ctx->pc = 0x12ebe0u;

    // 0x12ebe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ebe4: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x12ebe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x12ebe8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x12ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12ebec: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x12ebecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    // 0x12ebf0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x12ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12ebf4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12ebf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12ebf8: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x12ebf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x12ebfc: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x12ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12ec00: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x12ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x12ec04: 0xa20011f0  sb          $zero, 0x11F0($s0)
    ctx->pc = 0x12ec04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ec08: 0x26041200  addiu       $a0, $s0, 0x1200
    ctx->pc = 0x12ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x12ec0c: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x12ec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x12ec10: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12EC10u;
    SET_GPR_U32(ctx, 31, 0x12EC18u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12EC18u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12EC18u) { return; }
    ctx->pc = 0x12EC18u;
label_12ec18:
    // 0x12ec18: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x12ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12ec1c: 0xc0480e8  jal         func_1203A0
    ctx->pc = 0x12EC1Cu;
    SET_GPR_U32(ctx, 31, 0x12EC24u);
    ctx->pc = 0x1203A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203A0u, 0x12EC1Cu, 0x12EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC24u;
label_12ec24:
    // 0x12ec24: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x12EC24u;
    {
        const bool branch_taken_0x12ec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec24) {
            ctx->pc = 0x12EE08u;
            return;
        }
    }
    ctx->pc = 0x12EC2Cu;
}
