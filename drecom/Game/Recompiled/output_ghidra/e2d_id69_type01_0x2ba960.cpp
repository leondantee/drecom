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

// Function: e2d_id69_type01
// Address: 0x2ba960 - 0x2baa3c
void e2d_id69_type01_0x2ba960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id69_type01_0x2ba960");
#endif

    ctx->pc = 0x2ba960u;

    // 0x2ba960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ba960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ba964: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ba964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2ba968: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ba968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba96c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba96cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba970: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba974: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2ba974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2ba978: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ba978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba97c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba980: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba984: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2ba984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2ba988: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ba988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba98c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba98cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba990: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba994: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2ba994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2ba998: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ba998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ba99c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba99cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba9a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba9a4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2ba9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2ba9a8: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2ba9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2ba9ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ba9acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba9b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba9b4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ba9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ba9b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ba9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba9bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba9c0: 0xa064013f  sb          $a0, 0x13F($v1)
    ctx->pc = 0x2ba9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 319), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ba9c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2ba9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2ba9c8: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x2ba9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x2ba9cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ba9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ba9d0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2ba9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2ba9d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ba9d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ba9d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba9dc: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2ba9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ba9e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2ba9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2ba9e4: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x2ba9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x2ba9e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ba9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ba9ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA9ECu;
    {
        const bool branch_taken_0x2ba9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba9ec) {
            ctx->pc = 0x2BAA04u;
            goto label_2baa04;
        }
    }
    ctx->pc = 0x2BA9F4u;
    // 0x2ba9f4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ba9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba9f8: 0xa060011a  sb          $zero, 0x11A($v1)
    ctx->pc = 0x2ba9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ba9fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA9FCu;
    {
        const bool branch_taken_0x2ba9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba9fc) {
            ctx->pc = 0x2BAA10u;
            goto label_2baa10;
        }
    }
    ctx->pc = 0x2BAA04u;
label_2baa04:
    // 0x2baa04: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2baa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2baa08: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2baa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baa0c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2baa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
label_2baa10:
    // 0x2baa10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2baa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2baa14: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2baa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baa18: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2baa18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2baa1c: 0x3c033f93  lui         $v1, 0x3F93
    ctx->pc = 0x2baa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16275 << 16));
    // 0x2baa20: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2baa20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2baa24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2baa24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2baa28: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2baa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baa2c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2baa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2baa30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2baa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2baa34: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAA3Cu;
}
