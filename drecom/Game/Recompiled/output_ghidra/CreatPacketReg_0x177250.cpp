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

// Function: CreatPacketReg
// Address: 0x177250 - 0x1772d8
void CreatPacketReg_0x177250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPacketReg_0x177250");
#endif

    ctx->pc = 0x177250u;

    // 0x177250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177258: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x177258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17725c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x17725cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x177260: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x177260u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177264: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x177264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x177268: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x177268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17726c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x17726cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x177270: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x177270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x177274: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177278: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x177278u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17727c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x17727cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x177280: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177284: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x177284u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x177288: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17728c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x177290: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x177290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x177294: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x177294u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x177298: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x177298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17729c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x17729cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1772a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1772a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1772a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1772a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1772a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1772a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1772ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1772acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1772b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1772b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1772b4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1772b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1772b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1772b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1772bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1772bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1772c0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1772c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1772c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1772c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1772c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1772c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1772cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1772ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1772d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1772D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1772D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1772D8u;
}
