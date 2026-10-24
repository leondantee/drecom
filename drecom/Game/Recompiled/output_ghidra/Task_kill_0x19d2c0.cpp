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

// Function: Task_kill
// Address: 0x19d2c0 - 0x19d368
void Task_kill_0x19d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Task_kill_0x19d2c0");
#endif

    switch (ctx->pc) {
        case 0x19d334u: goto label_19d334;
        case 0x19d358u: goto label_19d358;
        default: break;
    }

    ctx->pc = 0x19d2c0u;

    // 0x19d2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d2c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19d2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x19d2c8: 0xa3a40018  sb          $a0, 0x18($sp)
    ctx->pc = 0x19d2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x19d2cc: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x19d2ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19d2d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19d2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19d2d4: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x19d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x19d2d8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x19d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x19d2dc: 0x2463fbe0  addiu       $v1, $v1, -0x420
    ctx->pc = 0x19d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966240));
    // 0x19d2e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d2e4: 0x94630008  lhu         $v1, 0x8($v1)
    ctx->pc = 0x19d2e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19d2e8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19d2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19d2ec: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x19D2ECu;
    {
        const bool branch_taken_0x19d2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d2ec) {
            ctx->pc = 0x19D358u;
            goto label_19d358;
        }
    }
    ctx->pc = 0x19D2F4u;
    // 0x19d2f4: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x19d2f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19d2f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19d2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d2fc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x19d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x19d300: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19d300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19d304: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x19d304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
    // 0x19d308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d30c: 0xa4400008  sh          $zero, 0x8($v0)
    ctx->pc = 0x19d30cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x19d310: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x19d310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19d314: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19d314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d318: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x19d318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x19d31c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19d320: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x19d320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
    // 0x19d324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d328: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19d328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d32c: 0xc084a1c  jal         func_212870
    ctx->pc = 0x19D32Cu;
    SET_GPR_U32(ctx, 31, 0x19D334u);
    ctx->pc = 0x212870u;
    {
        ctx->pc = 0x19D334u;
        ps2_syscalls::TerminateThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D334u) { return; }
    ctx->pc = 0x19D334u;
label_19d334:
    // 0x19d334: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x19d334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19d338: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19d338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19d33c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x19d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x19d340: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19d340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19d344: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x19d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
    // 0x19d348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19d348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d34c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19d34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19d350: 0xc084a0c  jal         func_212830
    ctx->pc = 0x19D350u;
    SET_GPR_U32(ctx, 31, 0x19D358u);
    ctx->pc = 0x212830u;
    {
        ctx->pc = 0x19D358u;
        ps2_syscalls::DeleteThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D358u) { return; }
    ctx->pc = 0x19D358u;
label_19d358:
    // 0x19d358: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19d358u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d35c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19d35cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19d360: 0x3e00008  jr          $ra
    ctx->pc = 0x19D360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D368u;
}
