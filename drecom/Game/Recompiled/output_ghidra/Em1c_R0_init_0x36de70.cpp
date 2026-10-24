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

// Function: Em1c_R0_init
// Address: 0x36de70 - 0x36df88
void Em1c_R0_init_0x36de70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R0_init_0x36de70");
#endif

    switch (ctx->pc) {
        case 0x36df0cu: goto label_36df0c;
        default: break;
    }

    ctx->pc = 0x36de70u;

    // 0x36de70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36de70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36de74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36de74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36de78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36de78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x36de7c: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x36de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x36de80: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x36de80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x36de84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36de84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36de88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36de88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36de8c: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x36de8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x36de90: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x36de90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x36de94: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x36de94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x36de98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36de98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36de9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36de9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36dea0: 0xe46011e4  swc1        $f0, 0x11E4($v1)
    ctx->pc = 0x36dea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4580), bits); }
    // 0x36dea4: 0x3c0346bb  lui         $v1, 0x46BB
    ctx->pc = 0x36dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18107 << 16));
    // 0x36dea8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x36dea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x36deac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36deacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36deb0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36deb4: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x36deb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x36deb8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x36deb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36debc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x36debcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x36dec0: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x36dec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x36dec4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x36dec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x36dec8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x36dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x36decc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36deccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x36ded0: 0x2464b2f0  addiu       $a0, $v1, -0x4D10
    ctx->pc = 0x36ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947568));
    // 0x36ded4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36ded4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36ded8: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x36ded8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x36dedc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x36dedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x36dee0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36dee4: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x36dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x36dee8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36dee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36deec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36deecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36def0: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x36def0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x36def4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x36def4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36def8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36def8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36defc: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x36defcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x36df00: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x36df00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36df04: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x36DF04u;
    {
        const bool branch_taken_0x36df04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36df04) {
            ctx->pc = 0x36DF60u;
            goto label_36df60;
        }
    }
    ctx->pc = 0x36DF0Cu;
label_36df0c:
    // 0x36df0c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x36df0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36df10: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x36df10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x36df14: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x36df14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x36df18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36df18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36df1c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x36df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36df20: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x36df20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x36df24: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x36df24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36df28: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x36df28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x36df2c: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x36DF2Cu;
    {
        const bool branch_taken_0x36df2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x36df2c) {
            ctx->pc = 0x36DF5Cu;
            goto label_36df5c;
        }
    }
    ctx->pc = 0x36DF34u;
    // 0x36df34: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x36df34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36df38: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x36df38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x36df3c: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x36df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x36df40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36df40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36df44: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x36df44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36df48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36df48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36df4c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x36df4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x36df50: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x36df50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x36df54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36DF54u;
    {
        const bool branch_taken_0x36df54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36df54) {
            ctx->pc = 0x36DF78u;
            goto label_36df78;
        }
    }
    ctx->pc = 0x36DF5Cu;
label_36df5c:
    // 0x36df5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36df5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_36df60:
    // 0x36df60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36df60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36df64: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x36df64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x36df68: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x36df68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x36df6c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x36df6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x36df70: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x36DF70u;
    {
        const bool branch_taken_0x36df70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36df70) {
            ctx->pc = 0x36DF0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36df0c;
        }
    }
    ctx->pc = 0x36DF78u;
label_36df78:
    // 0x36df78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36df78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36df7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36df7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36df80: 0x3e00008  jr          $ra
    ctx->pc = 0x36DF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DF88u;
}
