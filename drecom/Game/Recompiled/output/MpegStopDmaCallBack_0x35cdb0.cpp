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

// Function: MpegStopDmaCallBack
// Address: 0x35cdb0 - 0x35cebc
void MpegStopDmaCallBack_0x35cdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MpegStopDmaCallBack_0x35cdb0");
#endif

    switch (ctx->pc) {
        case 0x35cdd0u: goto label_35cdd0;
        case 0x35cde4u: goto label_35cde4;
        case 0x35ce24u: goto label_35ce24;
        case 0x35ce48u: goto label_35ce48;
        case 0x35cea4u: goto label_35cea4;
        default: break;
    }

    ctx->pc = 0x35cdb0u;

    // 0x35cdb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35cdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35cdb4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x35cdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x35cdb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35cdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35cdbc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x35cdc0: 0x2450c100  addiu       $s0, $v0, -0x3F00
    ctx->pc = 0x35cdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x35cdc4: 0x8e0402a4  lw          $a0, 0x2A4($s0)
    ctx->pc = 0x35cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FC3A4u));
    // 0x35cdc8: 0xc084a98  jal         func_212A60
    ctx->pc = 0x35CDC8u;
    SET_GPR_U32(ctx, 31, 0x35CDD0u);
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x35CDD0u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35CDD0u) { return; }
    ctx->pc = 0x35CDD0u;
label_35cdd0:
    // 0x35cdd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cdd4: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x35cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
    // 0x35cdd8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x35cdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35cddc: 0xc0d7320  jal         func_35CC80
    ctx->pc = 0x35CDDCu;
    SET_GPR_U32(ctx, 31, 0x35CDE4u);
    ctx->pc = 0x35CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CC80u, 0x35CDDCu, 0x35CDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CDE4u;
label_35cde4:
    // 0x35cde4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cde8: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x35cde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x35cdec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u)); // MMIO: 0x1000b410
    // 0x35cdf0: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x35cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
    // 0x35cdf4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cdf8: 0x3442b430  ori         $v0, $v0, 0xB430
    ctx->pc = 0x35cdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46128);
    // 0x35cdfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B430u)); // MMIO: 0x1000b430
    // 0x35ce00: 0xae020284  sw          $v0, 0x284($s0)
    ctx->pc = 0x35ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
    // 0x35ce04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ce08: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x35ce08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x35ce0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B420u)); // MMIO: 0x1000b420
    // 0x35ce10: 0xae020288  sw          $v0, 0x288($s0)
    ctx->pc = 0x35ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 2));
    // 0x35ce14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ce18: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x35ce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x35ce1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B400u)); // MMIO: 0x1000b400
    // 0x35ce20: 0xae02028c  sw          $v0, 0x28C($s0)
    ctx->pc = 0x35ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
label_35ce24:
    // 0x35ce24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ce28: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x35ce28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x35ce2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x35ce30: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x35ce30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x35ce34: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35CE34u;
    {
        const bool branch_taken_0x35ce34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ce34) {
            ctx->pc = 0x35CE24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ce24;
        }
    }
    ctx->pc = 0x35CE3Cu;
    // 0x35ce3c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x35ce3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ce40: 0xc0d7300  jal         func_35CC00
    ctx->pc = 0x35CE40u;
    SET_GPR_U32(ctx, 31, 0x35CE48u);
    ctx->pc = 0x35CC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CC00u, 0x35CE40u, 0x35CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CE48u;
label_35ce48:
    // 0x35ce48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ce4c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x35ce4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x35ce50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B010u)); // MMIO: 0x1000b010
    // 0x35ce54: 0xae020290  sw          $v0, 0x290($s0)
    ctx->pc = 0x35ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 2));
    // 0x35ce58: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ce5c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x35ce5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x35ce60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x35ce64: 0xae020294  sw          $v0, 0x294($s0)
    ctx->pc = 0x35ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 2));
    // 0x35ce68: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ce6c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x35ce6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x35ce70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u)); // MMIO: 0x1000b000
    // 0x35ce74: 0xae020298  sw          $v0, 0x298($s0)
    ctx->pc = 0x35ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
    // 0x35ce78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ce7c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x35ce7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x35ce80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x35ce84: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x35ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
    // 0x35ce88: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ce8c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x35ce8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x35ce90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x35ce94: 0xae0202a0  sw          $v0, 0x2A0($s0)
    ctx->pc = 0x35ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 2));
    // 0x35ce98: 0x8e0402a4  lw          $a0, 0x2A4($s0)
    ctx->pc = 0x35ce98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x35ce9c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x35CE9Cu;
    SET_GPR_U32(ctx, 31, 0x35CEA4u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x35CEA4u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35CEA4u) { return; }
    ctx->pc = 0x35CEA4u;
label_35cea4:
    // 0x35cea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cea8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35cea8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ceac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ceacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ceb0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x35ceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35ceb4: 0x3e00008  jr          $ra
    ctx->pc = 0x35CEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CEBCu;
}
