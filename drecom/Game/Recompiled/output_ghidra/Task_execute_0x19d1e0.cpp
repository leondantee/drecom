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

// Function: Task_execute
// Address: 0x19d1e0 - 0x19d254
void Task_execute_0x19d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Task_execute_0x19d1e0");
#endif

    ctx->pc = 0x19d1e0u;

    // 0x19d1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d1e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d1e8: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x19d1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x19d1ec: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x19d1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x19d1f0: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x19d1f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d1f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19d1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19d1f8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x19d1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x19d1fc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x19d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x19d200: 0x2463fbe0  addiu       $v1, $v1, -0x420
    ctx->pc = 0x19d200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966240));
    // 0x19d204: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x19d204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19d208: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19d208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19d20c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x19d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x19d210: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x19d210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19d214: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x19d214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x19d218: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x19d218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19d21c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x19d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x19d220: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x19d220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d224: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19d224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19d228: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x19d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x19d22c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x19d22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x19d230: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x19d230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x19d234: 0x2463ac70  addiu       $v1, $v1, -0x5390
    ctx->pc = 0x19d234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945904));
    // 0x19d238: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x19d238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x19d23c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d240: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x19d240u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x19d244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d248: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19d248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19d24c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D254u;
}
