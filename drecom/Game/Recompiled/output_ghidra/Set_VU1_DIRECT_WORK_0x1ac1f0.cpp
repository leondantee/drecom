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

// Function: Set_VU1_DIRECT_WORK
// Address: 0x1ac1f0 - 0x1ac2a0
void Set_VU1_DIRECT_WORK_0x1ac1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_VU1_DIRECT_WORK_0x1ac1f0");
#endif

    ctx->pc = 0x1ac1f0u;

    // 0x1ac1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ac1f4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1ac1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1ac1f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1ac1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1ac1fc: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x1ac1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x1ac200: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ac200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ac204: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1ac204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ac208: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1ac208u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1ac20c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ac20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac210: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ac210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ac214: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1ac214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1ac218: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ac218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac21c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ac21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac220: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1ac220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1ac224: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1ac224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1ac228: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac22c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ac22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ac230: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ac230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ac234: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ac234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac238: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ac238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac23c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ac23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ac240: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1ac240u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1ac244: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x1ac244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x1ac248: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ac248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac24c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ac24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ac250: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1ac250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1ac254: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ac254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ac258: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ac258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ac25c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1ac25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ac260: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1ac260u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1ac264: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1ac264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1ac268: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ac268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ac26c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ac26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac270: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ac270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ac274: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1ac274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1ac278: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ac278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ac27c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1ac27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac280: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ac280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ac284: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ac284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1ac288: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ac288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1ac28c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ac28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ac290: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ac290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ac294: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ac294u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ac298: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC2A0u;
}
