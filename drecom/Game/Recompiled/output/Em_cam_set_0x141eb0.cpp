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

// Function: Em_cam_set
// Address: 0x141eb0 - 0x141fb4
void Em_cam_set_0x141eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_cam_set_0x141eb0");
#endif

    switch (ctx->pc) {
        case 0x141f98u: goto label_141f98;
        default: break;
    }

    ctx->pc = 0x141eb0u;

    // 0x141eb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x141eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x141eb4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x141eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x141eb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x141eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x141ebc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x141ec0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141ec4: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x141ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x141ec8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x141ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x141ecc: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x141eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x141ed0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x141ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x141ed4: 0x2472fe10  addiu       $s2, $v1, -0x1F0
    ctx->pc = 0x141ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
    // 0x141ed8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x141ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x141edc: 0x8c711320  lw          $s1, 0x1320($v1)
    ctx->pc = 0x141edcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4896)));
    // 0x141ee0: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x141EE0u;
    {
        const bool branch_taken_0x141ee0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x141ee0) {
            ctx->pc = 0x141F98u;
            goto label_141f98;
        }
    }
    ctx->pc = 0x141EE8u;
    // 0x141ee8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x141ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x141eec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x141eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x141ef0: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x141ef0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x141ef4: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x141EF4u;
    {
        const bool branch_taken_0x141ef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x141ef4) {
            ctx->pc = 0x141F98u;
            goto label_141f98;
        }
    }
    ctx->pc = 0x141EFCu;
    // 0x141efc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141f00: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x141f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x141f04: 0xac2395ac  sw          $v1, -0x6A54($at)
    ctx->pc = 0x141f04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6195ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195ACu, _value); } while (0);
    // 0x141f08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x141f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x141f0c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x141f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x141f10: 0xac2395b0  sw          $v1, -0x6A50($at)
    ctx->pc = 0x141f10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6195B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6195B0u, _value); } while (0);
    // 0x141f14: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x141f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x141f18: 0x247095a0  addiu       $s0, $v1, -0x6A60
    ctx->pc = 0x141f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940064));
    // 0x141f1c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x141f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x141f20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x141f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141f24: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x141f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x141f28: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x141f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x141f2c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x141f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x141f30: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x141f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x141f34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141f38: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x141f38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x141f3c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x141f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x141f40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x141f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x141f44: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x141f44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x141f48: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x141f48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x141f4c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x141f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x141f50: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x141f50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141f54: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x141f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x141f58: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x141f58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x141f5c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x141f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x141f60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x141f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x141f64: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x141F64u;
    {
        const bool branch_taken_0x141f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141f64) {
            ctx->pc = 0x141F98u;
            goto label_141f98;
        }
    }
    ctx->pc = 0x141F6Cu;
    // 0x141f6c: 0xa2400007  sb          $zero, 0x7($s2)
    ctx->pc = 0x141f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x141f70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141f74: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x141f74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x141f78: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x141f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x141f7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141f80: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x141f80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x141f84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x141f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141f88: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x141f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x141f8c: 0x24451fc0  addiu       $a1, $v0, 0x1FC0
    ctx->pc = 0x141f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8128));
    // 0x141f90: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x141F90u;
    SET_GPR_U32(ctx, 31, 0x141F98u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x141F90u, 0x141F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F98u;
label_141f98:
    // 0x141f98: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x141f98u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141f9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x141f9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141fa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141fa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141fa8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x141fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x141fac: 0x3e00008  jr          $ra
    ctx->pc = 0x141FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141FB4u;
}
