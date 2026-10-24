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

// Function: R119_init
// Address: 0x278e80 - 0x278f2c
void R119_init_0x278e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R119_init_0x278e80");
#endif

    switch (ctx->pc) {
        case 0x278e98u: goto label_278e98;
        case 0x278eb0u: goto label_278eb0;
        case 0x278f14u: goto label_278f14;
        case 0x278f1cu: goto label_278f1c;
        default: break;
    }

    ctx->pc = 0x278e80u;

    // 0x278e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x278e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x278e84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x278e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x278e88: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278e8c: 0x2444e850  addiu       $a0, $v0, -0x17B0
    ctx->pc = 0x278e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961232));
    // 0x278e90: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x278E90u;
    SET_GPR_U32(ctx, 31, 0x278E98u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x278E90u, 0x278E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E98u;
label_278e98:
    // 0x278e98: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x278e9c: 0x8c24f9e0  lw          $a0, -0x620($at)
    ctx->pc = 0x278e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x278ea0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x278ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x278ea4: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x278ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x278ea8: 0xc0a11c4  jal         func_284710
    ctx->pc = 0x278EA8u;
    SET_GPR_U32(ctx, 31, 0x278EB0u);
    ctx->pc = 0x284710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284710u, 0x278EA8u, 0x278EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278EB0u;
label_278eb0:
    // 0x278eb0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x278eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x278eb4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x278eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x278eb8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x278eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x278ebc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x278ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x278ec0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278ec4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x278ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x278ec8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x278ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x278ecc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x278eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x278ed0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x278ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x278ed4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x278ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x278ed8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x278ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x278edc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278ee0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x278ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x278ee4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x278ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x278ee8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x278ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x278eec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x278eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x278ef0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x278ef0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x278ef4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x278ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x278ef8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x278ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x278efc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x278efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x278f00: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278f04: 0x2442e800  addiu       $v0, $v0, -0x1800
    ctx->pc = 0x278f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961152));
    // 0x278f08: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x278f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278f0c: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x278F0Cu;
    SET_GPR_U32(ctx, 31, 0x278F14u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x278F0Cu, 0x278F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F14u;
label_278f14:
    // 0x278f14: 0xc09e3d0  jal         func_278F40
    ctx->pc = 0x278F14u;
    SET_GPR_U32(ctx, 31, 0x278F1Cu);
    ctx->pc = 0x278F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278F40u, 0x278F14u, 0x278F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F1Cu;
label_278f1c:
    // 0x278f1c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x278f1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278f20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x278f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x278f24: 0x3e00008  jr          $ra
    ctx->pc = 0x278F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278F2Cu;
}
