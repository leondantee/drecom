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

// Function: Om87_R0_init
// Address: 0x3624d0 - 0x362584
void Om87_R0_init_0x3624d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om87_R0_init_0x3624d0");
#endif

    switch (ctx->pc) {
        case 0x3624ecu: goto label_3624ec;
        default: break;
    }

    ctx->pc = 0x3624d0u;

    // 0x3624d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3624d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3624d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3624d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3624d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3624d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x3624dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3624dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3624e0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3624e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3624e4: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x3624E4u;
    SET_GPR_U32(ctx, 31, 0x3624ECu);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x3624E4u, 0x3624ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3624ECu;
label_3624ec:
    // 0x3624ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3624ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3624f0: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x3624f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3624f4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3624f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3624f8: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x3624f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x3624fc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3624fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x362500: 0x2464aca0  addiu       $a0, $v1, -0x5360
    ctx->pc = 0x362500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945952));
    // 0x362504: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x362504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362508: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x362508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x36250c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36250cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362510: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x362510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362514: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x362514u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x362518: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x362518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x36251c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36251cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362520: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x362520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x362524: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x362524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362528: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x362528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36252c: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x36252cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x362530: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x362530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362534: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x362534u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x362538: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x362538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x36253c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36253cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x362540: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x362540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362544: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x362544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x362548: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x362548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36254c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36254cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362550: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x362550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x362554: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x362554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362558: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x362558u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36255c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362560: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x362560u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x362564: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x362564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362568: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x362568u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36256c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36256cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x362570: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x362570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x362574: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x362574u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362578: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x362578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36257c: 0x3e00008  jr          $ra
    ctx->pc = 0x36257Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36257Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362584u;
}
