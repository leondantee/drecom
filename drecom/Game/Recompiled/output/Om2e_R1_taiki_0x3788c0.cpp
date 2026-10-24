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

// Function: Om2e_R1_taiki
// Address: 0x3788c0 - 0x378924
void Om2e_R1_taiki_0x3788c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om2e_R1_taiki_0x3788c0");
#endif

    ctx->pc = 0x3788c0u;

    // 0x3788c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3788c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3788c4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3788c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x3788c8: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x3788c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x3788cc: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x3788ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x3788d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3788d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3788d4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3788d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3788d8: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x3788d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x3788dc: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x3788dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x3788e0: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x3788e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x3788e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3788e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3788e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3788e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3788ec: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x3788ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x3788f0: 0x3c03c7c3  lui         $v1, 0xC7C3
    ctx->pc = 0x3788f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51139 << 16));
    // 0x3788f4: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x3788f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x3788f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3788f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3788fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3788fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x378900: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x378900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x378904: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x378904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x378908: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x378908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37890c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x37890cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x378910: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x378910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x378914: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x378914u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x378918: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x378918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37891c: 0x3e00008  jr          $ra
    ctx->pc = 0x37891Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37891Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378924u;
}
