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

// Function: e2d_id69_type02
// Address: 0x2baa40 - 0x2bab1c
void e2d_id69_type02_0x2baa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id69_type02_0x2baa40");
#endif

    ctx->pc = 0x2baa40u;

    // 0x2baa40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2baa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2baa44: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2baa44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2baa48: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2baa48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2baa4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2baa4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2baa50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2baa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baa54: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2baa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2baa58: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2baa58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2baa5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2baa5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2baa60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2baa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baa64: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2baa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2baa68: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2baa68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2baa6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2baa6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2baa70: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2baa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baa74: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2baa74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2baa78: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2baa78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2baa7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2baa7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2baa80: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2baa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baa84: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2baa84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2baa88: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2baa88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2baa8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2baa8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2baa90: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2baa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baa94: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2baa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2baa98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2baa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2baa9c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2baa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baaa0: 0xa064013f  sb          $a0, 0x13F($v1)
    ctx->pc = 0x2baaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 319), (uint8_t)GPR_U32(ctx, 4));
    // 0x2baaa4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2baaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2baaa8: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x2baaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x2baaac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2baaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2baab0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2baab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2baab4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2baab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2baab8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2baab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baabc: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2baabcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2baac0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2baac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2baac4: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x2baac4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x2baac8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2baac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2baacc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAACCu;
    {
        const bool branch_taken_0x2baacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baacc) {
            ctx->pc = 0x2BAAE4u;
            goto label_2baae4;
        }
    }
    ctx->pc = 0x2BAAD4u;
    // 0x2baad4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2baad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baad8: 0xa060011a  sb          $zero, 0x11A($v1)
    ctx->pc = 0x2baad8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2baadc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BAADCu;
    {
        const bool branch_taken_0x2baadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baadc) {
            ctx->pc = 0x2BAAF0u;
            goto label_2baaf0;
        }
    }
    ctx->pc = 0x2BAAE4u;
label_2baae4:
    // 0x2baae4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2baae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2baae8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2baae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baaec: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2baaecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
label_2baaf0:
    // 0x2baaf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2baaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2baaf4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2baaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baaf8: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2baaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2baafc: 0x3c033f93  lui         $v1, 0x3F93
    ctx->pc = 0x2baafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16275 << 16));
    // 0x2bab00: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2bab00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2bab04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bab04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bab08: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2bab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bab0c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2bab0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2bab10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bab14: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAB1Cu;
}
