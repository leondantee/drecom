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

// Function: entry_0031b9f4
// Address: 0x31b9f4 - 0x31bacc
void entry_0031b9f4_0x31b9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b9f4_0x31b9f4");
#endif

    switch (ctx->pc) {
        case 0x31ba20u: goto label_31ba20;
        default: break;
    }

    ctx->pc = 0x31b9f4u;

    // 0x31b9f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31b9f8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x31b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x31b9fc: 0x24429cc0  addiu       $v0, $v0, -0x6340
    ctx->pc = 0x31b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941888));
    // 0x31ba00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ba04: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31ba04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ba08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x31ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31ba0c: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x31ba0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x31ba10: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x31ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31ba14: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x31ba14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x31ba18: 0xc077a6c  jal         func_1DE9B0
    ctx->pc = 0x31BA18u;
    SET_GPR_U32(ctx, 31, 0x31BA20u);
    ctx->pc = 0x1DE9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE9B0u, 0x31BA18u, 0x31BA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA20u;
label_31ba20:
    // 0x31ba20: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x31ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x31ba24: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x31ba24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x31ba28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31ba28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ba2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x31ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31ba30: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x31ba30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x31ba34: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x31ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x31ba38: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x31ba38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x31ba3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31ba3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ba40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x31ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31ba44: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x31ba44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x31ba48: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x31ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x31ba4c: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x31ba4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x31ba50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31ba50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ba54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x31ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31ba58: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x31ba58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x31ba5c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x31ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31ba60: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x31ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31ba64: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x31ba64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x31ba68: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x31ba68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x31ba6c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x31ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31ba70: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x31ba70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x31ba74: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x31ba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x31ba78: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x31ba78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31ba7c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x31ba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x31ba80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x31ba80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31ba84: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x31ba84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x31ba88: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x31ba88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x31ba8c: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x31ba8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x31ba90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31ba90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ba94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x31ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31ba98: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31ba98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31ba9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x31ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31baa0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x31baa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31baa4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x31baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31baa8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31baa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31baac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x31baacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31bab0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x31bab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bab4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x31bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31bab8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31babc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x31babcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31bac0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x31bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31bac4: 0x3e00008  jr          $ra
    ctx->pc = 0x31BAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BACCu;
}
