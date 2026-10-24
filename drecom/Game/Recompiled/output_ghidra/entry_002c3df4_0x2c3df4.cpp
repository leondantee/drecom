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

// Function: entry_002c3df4
// Address: 0x2c3df4 - 0x2c3ed4
void entry_002c3df4_0x2c3df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c3df4_0x2c3df4");
#endif

    switch (ctx->pc) {
        case 0x2c3e0cu: goto label_2c3e0c;
        case 0x2c3e50u: goto label_2c3e50;
        case 0x2c3e84u: goto label_2c3e84;
        case 0x2c3ea0u: goto label_2c3ea0;
        default: break;
    }

    ctx->pc = 0x2c3df4u;

    // 0x2c3df4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3df8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2c3df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3dfc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2c3dfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2c3e00: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x2c3e00u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x2c3e04: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x2C3E04u;
    SET_GPR_U32(ctx, 31, 0x2C3E0Cu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2C3E04u, 0x2C3E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E0Cu;
label_2c3e0c:
    // 0x2c3e0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3e10: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c3e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c3e14: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c3e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c3e18: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c3e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c3e1c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c3e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c3e20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c3e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c3e24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c3e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c3e28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c3e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c3e2c: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x2c3e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2c3e30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3e34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3e38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c3e38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c3e3c: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x2c3e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2c3e40: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2c3e40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c3e44: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2c3e44u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c3e48: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2C3E48u;
    SET_GPR_U32(ctx, 31, 0x2C3E50u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2C3E48u, 0x2C3E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E50u;
label_2c3e50:
    // 0x2c3e50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3e54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c3e58: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x2c3e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c3e5c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2c3e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2c3e60: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C3E60u;
    {
        const bool branch_taken_0x2c3e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e60) {
            ctx->pc = 0x2C3ED4u;
            return;
        }
    }
    ctx->pc = 0x2C3E68u;
    // 0x2c3e68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3e6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c3e70: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c3e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c3e74: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x2c3e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c3e78: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2c3e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c3e7c: 0xc0c4c10  jal         func_313040
    ctx->pc = 0x2C3E7Cu;
    SET_GPR_U32(ctx, 31, 0x2C3E84u);
    ctx->pc = 0x313040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313040u, 0x2C3E7Cu, 0x2C3E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E84u;
label_2c3e84:
    // 0x2c3e84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3e88: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c3e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c3e8c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c3e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c3e90: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x2c3e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2c3e94: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x2c3e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2c3e98: 0xc0c4bc8  jal         func_312F20
    ctx->pc = 0x2C3E98u;
    SET_GPR_U32(ctx, 31, 0x2C3EA0u);
    ctx->pc = 0x312F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312F20u, 0x2C3E98u, 0x2C3EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EA0u;
label_2c3ea0:
    // 0x2c3ea0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3ea4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2c3ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c3ea8: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x2c3ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2c3eac: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2c3eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2c3eb0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2c3eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c3eb4: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x2c3eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x2c3eb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c3eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c3ebc: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2c3ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2c3ec0: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x2c3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x2c3ec4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c3ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2c3ec8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2c3ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c3ecc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c3eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c3ed0: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x2c3ed0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    ctx->pc = 0x2c3ed4u;
}
