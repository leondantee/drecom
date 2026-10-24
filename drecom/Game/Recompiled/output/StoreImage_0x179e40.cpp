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

// Function: StoreImage
// Address: 0x179e40 - 0x179f5c
void StoreImage_0x179e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StoreImage_0x179e40");
#endif

    switch (ctx->pc) {
        case 0x179ea4u: goto label_179ea4;
        case 0x179f04u: goto label_179f04;
        case 0x179f14u: goto label_179f14;
        case 0x179f24u: goto label_179f24;
        case 0x179f48u: goto label_179f48;
        default: break;
    }

    ctx->pc = 0x179e40u;

    // 0x179e40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x179e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x179e44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x179e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x179e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x179e4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x179e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x179e50: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x179e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x179e54: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x179e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x179e58: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x179e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x179e5c: 0xafa80040  sw          $t0, 0x40($sp)
    ctx->pc = 0x179e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 8));
    // 0x179e60: 0xafa90048  sw          $t1, 0x48($sp)
    ctx->pc = 0x179e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 9));
    // 0x179e64: 0xafaa0050  sw          $t2, 0x50($sp)
    ctx->pc = 0x179e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 10));
    // 0x179e68: 0xafab0058  sw          $t3, 0x58($sp)
    ctx->pc = 0x179e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 11));
    // 0x179e6c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x179e6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x179e70: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x179e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x179e74: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x179e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x179e78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x179e78u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u)); // MMIO: 0x1000e010
    // 0x179e7c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x179e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x179e80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x179e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x179e84: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x179E84u;
    {
        const bool branch_taken_0x179e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179e84) {
            ctx->pc = 0x179E90u;
            goto label_179e90;
        }
    }
    ctx->pc = 0x179E8Cu;
    // 0x179e8c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x179e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_179e90:
    // 0x179e90: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179E90u;
    {
        const bool branch_taken_0x179e90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x179e90) {
            ctx->pc = 0x179EA4u;
            goto label_179ea4;
        }
    }
    ctx->pc = 0x179E98u;
    // 0x179e98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x179e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179e9c: 0xc084d5c  jal         func_213570
    ctx->pc = 0x179E9Cu;
    SET_GPR_U32(ctx, 31, 0x179EA4u);
    ctx->pc = 0x213570u;
    {
        ctx->pc = 0x179EA4u;
        ps2_syscalls::DisableDmac(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179EA4u) { return; }
    ctx->pc = 0x179EA4u;
label_179ea4:
    // 0x179ea4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x179ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x179ea8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x179ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x179eac: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x179eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179eb0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x179eb0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x179eb4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x179eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179eb8: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x179eb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179ebc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x179ebcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x179ec0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x179ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x179ec4: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x179ec4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179ec8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x179ec8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x179ecc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x179eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179ed0: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x179ed0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179ed4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x179ed4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x179ed8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x179ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x179edc: 0x24c3c  dsll32      $t1, $v0, 16
    ctx->pc = 0x179edcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179ee0: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x179ee0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x179ee4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x179ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179ee8: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x179ee8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179eec: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x179eecu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x179ef0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x179ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x179ef4: 0x25c3c  dsll32      $t3, $v0, 16
    ctx->pc = 0x179ef4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 16));
    // 0x179ef8: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x179ef8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x179efc: 0xc0403aa  jal         func_100EA8
    ctx->pc = 0x179EFCu;
    SET_GPR_U32(ctx, 31, 0x179F04u);
    ctx->pc = 0x100EA8u;
    {
        ctx->pc = 0x179F04u;
        ps2_stubs::sceGsSetDefStoreImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179F04u) { return; }
    ctx->pc = 0x179F04u;
label_179f04:
    // 0x179f04: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x179f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x179f08: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x179f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179f0c: 0xc04045a  jal         func_101168
    ctx->pc = 0x179F0Cu;
    SET_GPR_U32(ctx, 31, 0x179F14u);
    ctx->pc = 0x101168u;
    {
        ctx->pc = 0x179F14u;
        ps2_stubs::sceGsExecStoreImage(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179F14u) { return; }
    ctx->pc = 0x179F14u;
label_179f14:
    // 0x179f14: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x179f14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x179f18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x179f18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x179f1c: 0xc04026a  jal         func_1009A8
    ctx->pc = 0x179F1Cu;
    SET_GPR_U32(ctx, 31, 0x179F24u);
    ctx->pc = 0x1009A8u;
    {
        ctx->pc = 0x179F24u;
        ps2_stubs::sceGsSyncPath(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179F24u) { return; }
    ctx->pc = 0x179F24u;
label_179f24:
    // 0x179f24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x179f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179f28: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x179f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x179f2c: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x179f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x179f30: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x179f30u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x179f34: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179F34u;
    {
        const bool branch_taken_0x179f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x179f34) {
            ctx->pc = 0x179F48u;
            goto label_179f48;
        }
    }
    ctx->pc = 0x179F3Cu;
    // 0x179f3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x179f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179f40: 0xc084d76  jal         func_2135D8
    ctx->pc = 0x179F40u;
    SET_GPR_U32(ctx, 31, 0x179F48u);
    ctx->pc = 0x2135D8u;
    {
        ctx->pc = 0x179F48u;
        ps2_syscalls::EnableDmac(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179F48u) { return; }
    ctx->pc = 0x179F48u;
label_179f48:
    // 0x179f48: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x179f48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179f50: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x179f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x179f54: 0x3e00008  jr          $ra
    ctx->pc = 0x179F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179F5Cu;
}
